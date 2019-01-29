int main()
{
int n,i=800,rem,t,sum=0,a=2;
scanf("%d",&n);
while(i<=n)
{
    sum=0;
    t=i;
    while(t>0)
    {
        rem=t%10;
        sum=sum+rem;
        t=t/10;
        
    }
    printf("%d %d\n",i,sum);
    i=i+a;
    a=a+2;
}

    return 0;
}
