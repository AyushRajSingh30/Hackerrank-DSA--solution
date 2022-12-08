int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    vector<int>result;
    int sum;
    int n=keyboards.size();
    int m=drives.size();
    int maxno=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        if(keyboards[i]+drives[j]<=b){
            sum=keyboards[i]+drives[j];
            result.push_back(sum);
        }
       
        else if(keyboards[i]+drives[j]>b){
            sum=-1;
            result.push_back(sum);
        }
        }
    }
    for(int i=0; i<result.size(); i++){
     if(result[i]>maxno)
     maxno=result[i];
    }
    return maxno;
}
