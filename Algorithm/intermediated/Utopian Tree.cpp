int utopianTree(int n) {
   int result=0;
    
for(int i=0; i<n+1; i++){
    if(i==0 || i%2==0){
        result=result+1;
    }
    if(i%2==1){
        result=result*2;
    }
}

return result;

}
