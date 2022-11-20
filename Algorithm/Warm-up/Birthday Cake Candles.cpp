int birthdayCakeCandles(vector<int> candles) {
int max=INT_MIN;
int n=candles.size();
int p=0;
for(int i=0; i<n; i++){
    if(candles[i]>max){
        max=candles[i];
    }
}
for(int i=0; i<n; i++){
    if (candles[i] == max) {
    p++;
    }
}

return p;




}
