int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
int sum1=0, sum2=0, sum3=0;
 for(int i=0; i<h1.size(); i++){
     sum1+=h1[i];
 }

for(int i=0; i<h2.size(); i++){
    sum2+=h2[i];
}

for(int i=0; i<h3.size(); i++){
    sum3+=h3[i];
}



while(!(sum1==sum2&&sum1==sum3)){
    if(sum1>=sum2 && sum1>=sum3){
        sum1-=h1.front();
        //cout<<s1.back();
        h1.erase(h1.begin());
    }
    else if(sum2>=sum3 && sum2>=sum1){
        sum2-=h2.front();
        //cout<<s2.back();
        h2.erase(h2.begin()); 

    }
    else{
        sum3-=h3.front();
        //cout<<s3.back();
        h3.erase(h3.begin());

    }

}

return sum1;
}
