void plusMinus(vector<int> arr) {
    int n;
    float psum=0;
    float nsum=0;
    float zsum=0;
    n=arr.size();
    for(int i=0; i<n; i++){
        if (arr[i]>0) {
        psum+=1;
       
        }
        else if (arr[i]<0) {
        nsum+=1;
        }
        else if(arr[i]==0) {
         zsum+=1;
        }
    }
    cout<<psum/n<<endl;
    cout<<nsum/n<<endl;
cout<<zsum/n<<endl;


}
