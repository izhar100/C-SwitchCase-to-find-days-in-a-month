#include<stdio.h>
int main()
{
int yr,m;
printf("Enter Year:");
scanf("%d",&yr);
printf("\nEnter Month:");
scanf("%d",&m);
switch(m)
{
case 1:
printf("January:31days\n");
break;
case 2:
if(yr%4==0)
  {
  if(yr%100==0)
    {
    if(yr%400==0)
      {
     printf("Fabruary:29 days\n");
      }
    else
      {
    printf("February:28 days\n");
      }
    }
  else
    {
  printf("February:29 days\n");
    }
}
else
{
printf("February:28 days");
}
break;
case 3:
printf("March:31 days\n");
break;
case 4:
printf("April:30 days\n");
break;
case 5:
printf("May:31 days\n");
break;
case 6:
printf("June:30 days\n");
break;
case 7:
printf("July:31 days\n");
break;
case 8:
printf("August:31 days\n");
break;
case 9:
printf("September:30 days\n");
break;
case 10:
printf("October:31 days\n");
break;
case 11:
printf("November:30 days\n");
break;
case 12:
printf("December:31 days\n");
break;
default:
printf("Wrong choice");
}
return 0;
}
