int countingValleys(int steps, string path) {
int sum=0;
int ans=0;
for(int i=0; i<steps; i++){
    if(path[i]=='U'){
        sum++;
        if(sum==0){
            ans++;
        }
    }
    else {
    sum--;
    }
}
return ans;
}
