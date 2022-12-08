int sockMerchant(int n, vector<int> ar) {
    int sum=0;
    vector<int>ans;
    int maxno=-1222222;
map<int, int>m;
for(int i=0; i<ar.size(); i++){
   m[ar[i]]++;
}
for(auto it: m){
sum+=(it.second/2);
ans.push_back(sum);
}
for(int i=0; i<ans.size(); i++){
maxno=max(maxno, ans[i]);
}
return maxno;

    
}
