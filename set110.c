int main()
{
   int number,c=0;
    scanf("%d",&number);
while(number>0)
{
   number=number/10;
    c++;
}
printf("%d",c);
    
    return 0;
}
