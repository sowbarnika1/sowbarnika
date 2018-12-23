int main()
{
    int a[100],n,i,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
    sum=sum+i;
    }
    printf("%d",sum);
    }
    return 0;
}
