int simpleArraySum(vector<int> ar) {
    int sum=0;
    for(int i=0; i<ar.size(); i++){
        cin>>ar[i];
    }
    for(int i=0; i<ar.size(); i++){
        sum+=ar[i];
    }
return sum;
}
