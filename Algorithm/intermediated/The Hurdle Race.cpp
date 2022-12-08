
int hurdleRace(int k, vector<int> height) {
int n=height.size();
int result=0;
int maxno=INT_MIN;
for(int i=0; i<n; i++){
    if(height[i]>maxno)
    {
        maxno=height[i];
    }
    
}
if(maxno>k){
    result=maxno-k;
}
if (maxno<k) {
result=0;
}
return result;
}
