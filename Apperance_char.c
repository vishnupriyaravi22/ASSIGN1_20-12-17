#include<stdio.h>
#include<string.h>
int main(void)
{
char str[10];
int i,j,count;
printf("Enter the String\n");
gets(str);
int len = strlen(str);
for(i=0;i<len;i++)
{
count=1;
if(str[i]=='+')
continue;

for(j=i+1;j<len;j++)
{
if(str[i]==str[j])
{
count++;
str[j]='+';
}
}
printf("%c occured %d times\n",str[i],count);
}
for(i=0;i<len;i++)
printf("%c ",str[i]);
}