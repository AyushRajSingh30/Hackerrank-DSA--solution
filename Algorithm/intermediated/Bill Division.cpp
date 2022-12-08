void bonAppetit(vector<int> bill, int k, int b) {
int n=bill.size();
int sum=0;

for(int i=0;i<n; i++)
{if(i!=k)
    sum+=bill[i];}
if(sum/2==b)
cout<<"Bon Appetit";
else {
cout<<b-(sum/2);
}
}
