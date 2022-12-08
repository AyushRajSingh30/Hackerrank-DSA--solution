int birthday(vector<int> s, int d, int m) {

int result=0;
    for(int i=0; i<s.size(); i++){
    int sum = 0;
   
    for(int j=i; j<m+i; j++){
        sum += s[j];
    }
    if(d==sum)
    result++;
}
    
return result;
}
