int main()
{

char a[30];
int i,j,at=0,dot=0,con=0,l=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='@')
at++;
if(a[i]=='.')
dot++;
l++;
}
if(at==1&&dot==1)
con++;
at=0;
dot=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.'){
dot++;
break;
}
if(a[i]=='@')  {
at++;
break;
}
}
if(at==1&&dot==0)
con++;
at=0;
dot=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='@')
break;
at++;
}
for(j=i+1;a[j]!='\0';j++)
{
if(a[j]=='.')
break;
dot++;
}
if(at>=3&&dot>=5)
con++;
if(a[l-1]=='m'&&a[l-2]=='o'&&a[l-3]=='c'&&a[l-4]=='.')
con++;
if(con==4)
printf("Valid");
else
printf("INVALID");

    return 0;
}
