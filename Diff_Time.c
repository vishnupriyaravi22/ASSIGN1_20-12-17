#include<stdio.h>
int main(void)
{
int h1,m1,h2,m2,diff;
printf("Enter time1 with hour and minutes\n");
scanf("%d%d",&h1,&m1);
printf("Enter time2 with hour and minutes\n");
scanf("%d%d",&h2,&m2);
h1=h1*60+m1;
h2=h2*60+m2;
diff=h2-h1;
if(diff>60)
{
h1=diff/60;
h2=diff%60;
printf("difference %d hour %d minutes",h1,h2);
}
else
{
printf("difference %d minutes",diff);
}
return 0;
}