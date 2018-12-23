int main()
{
char n;
scanf("%c",&n);
if(n>='a'&&n<='z' || n>='A'&&n<='Z')
{
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
    {
printf("vowel");
    }
else 
    {
printf("consonant");
    }
}
else
{
printf("invalid");
}
return 0;
}
