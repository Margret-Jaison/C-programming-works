
#include <stdio.h>
#include<math.h>
int main()
{ int num, result=0,r,n;
    printf("enter the 3 digit num ",num);
    scanf("%d",&num);
    n=num;

while(n!=0)
{
    r=n%10;
    result+=pow(r,3);
    n=n/10;
    
}
if(result==num)
{
    printf("number is armstrong");
}
else{
    printf("number is not armstrong");
}
    
