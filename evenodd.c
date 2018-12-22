

int main()
{
int number;
scanf("%d",&number);
if(number>=0)
{
if(number%2==0)
{
printf("even");
}
else if(number%2!=0)
{
printf("odd");
}
}
else
{
    printf("invalid");
}
return 0;
}
