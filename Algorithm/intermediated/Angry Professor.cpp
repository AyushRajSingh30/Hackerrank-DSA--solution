string angryProfessor(int k, vector<int> a) {
int n=a.size();
int result=0;
int ans;
for(int i=0; i<n; i++){
    if(a[i]<=0){
        result++;
    }
}
if(k<=result){
return "NO";}
else{
    return "YES";
    
}
