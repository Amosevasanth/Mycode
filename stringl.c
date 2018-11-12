#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
int a,i,b;
scanf("%s",s);
scanf("%d",&a);
b=strlen(s);
for(i=1;i<(b-a);i++)
{
printf("%s",s[i]);
}
return s;
}
