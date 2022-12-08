void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
   long int count1=0;
  long  int count2=0;
   
    for(int i=0; i<apples.size();i++){
        if (a+apples[i]>=s && a+apples[i]<=t) {
       count1++;
     }
    
     
    }
    for(int j=0; j<oranges.size(); j++){
        if(b+oranges[j]>=s && b+oranges[j]<=t){
            count2++;
        }
        
    }
    
 printf("%ld\n", count1);
 printf("%ld\n", count2);
    

}
