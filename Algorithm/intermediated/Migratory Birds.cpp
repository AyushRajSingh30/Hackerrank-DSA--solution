int migratoryBirds(vector<int> arr) {
    map<int, int>m;
    int max=INT_MIN;
    int res=0;
    for(int i=0; i<arr.size(); i++)
{
    m[arr[i]]++;
    
}    
for(auto i: m)
    if(max<i.second){
        res=i.first;
        max=i.second;
   

    }
    return res;
}
