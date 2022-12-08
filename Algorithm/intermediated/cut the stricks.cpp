vector<int> cutTheSticks(vector<int> arr) {
vector<int> result; int l=arr.size();
    while(arr.size() > 1)
    {
        int s=arr[0];
        result.push_back(l);
        for(int i=1;i<l;i++)
        {
            if(arr[i]<s){s=arr[i];}
        }
        vector<int> newArr;
        for(int i=0;i<l;i++)
        {
            if(arr[i]!=s){newArr.push_back(arr[i]-s);}
        }
        arr=newArr;
        l=arr.size();
    }
    if(l==1){result.push_back(1);}
    return result;
}
