string balancedSums(vector<int> arr) {
int sum=0;
string str;
int tsum=0;
for(auto i: arr){
    tsum+=i;
}



if(tsum==sum){
    str="YES";
}

else{
    str="NO";
}
for(int i=0; i<arr.size(); i++){
    sum=sum+arr[i-1];
    tsum=tsum-arr[i];
    
    if(tsum==sum){
       str="YES";
    }
   
}


return str;
}
