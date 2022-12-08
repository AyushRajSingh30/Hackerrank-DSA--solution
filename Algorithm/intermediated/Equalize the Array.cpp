int equalizeArray(vector<int> arr) {
int ans = 1,repeat = 1;
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size()-1; i++)
    {
        if(arr[i] == arr[i+1]){
            repeat++;
            if(ans < repeat)
            ans = repeat;
        }
        else 
            repeat = 1;
    }
    return arr.size()-ans;
}
