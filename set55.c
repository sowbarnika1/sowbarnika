int main()
{
    long int n;
    int c=0;
    scanf("%ld",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("%d",c);
    return 0;
}
