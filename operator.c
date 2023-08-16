#include<stdio.h>
int main()
{
    int a=1,b=2,d=1,p=3,c;
    c = ++a && b-- && d-- && p--;
    printf("\na:%d ,b:%d  d:%d, p:%d ,c:%d",a,b,d,p,c);

  //  c=a&&b;
   // printf("a:%d ,b:%d ,c:%d",a,b,c);
   // c=--a&&b;
   // printf("\na:%d ,b:%d ,c:%d",a,b,c);
   // c= a &&--b;
   // printf("\na:%d ,b:%d ,c:%d",a,b,c);
    
}