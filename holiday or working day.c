#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int a;
printf("1.monday 2.tuesday 3.wednesday 4.thursday 5.friday 6.saturday 7.sunday");
printf("choose the day");
scanf("%d",&a);
switch(a)
{
case 1:
printf("TRUE");
break;
case 2:
printf("TRUE");
break;
case 3:
printf("TRUE");
break;
case 4:
printf("TRUE");
break;
case 5:
printf("TRUE");
break;
case 6:
printf("FALSE");
break;
case 7:
printf("FALSE");
break;
}
return 0;
}
