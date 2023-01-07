vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
sort(arr.begin(),arr.end());
   sort(brr.begin(),brr.end());
   vector<int> ans;
   set<int>s;
   int i=0,j=0;
   while(i<arr.size() || j<brr.size())
   {
       if(arr[i]==brr[j])
       {
           i++;
           j++;
       }
       else
       {
           ans.push_back(brr[j]);
           j++;
       }
   }
   
   for(auto i:ans ){
       s.insert(i);
   }
   ans.clear();
   for(auto i:s){
       ans.push_back(i);
   }
   
   
   
   return ans;
}
