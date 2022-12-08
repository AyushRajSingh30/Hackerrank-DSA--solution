int beautifulDays(int i, int j, int k) {
int c,sum,rem,num,x,count=0;
    for(c=i; c<=j; c++)
    {
        sum = 0;
        x=c;
        while(x!=0)
        {
            rem = x%10;
            sum = sum*10+rem;
            x/=10;
        }
        num = abs(c-sum);
        if(num%k==0)
        {
            count++;
        }
    }
    return count;
}
