int viralAdvertising(int n) {
int m=5;
int ans=0, like=0;
for(int i=0; i<n; i++){
 ans=m/2;
 like+=ans;
 m=ans*3;
}
return like;
}

