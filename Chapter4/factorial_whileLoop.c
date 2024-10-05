#include<stdio.h>
int main(){
    int product =1;
int i = 1;
printf("enter the no which factorial you required\n");
int n;
scanf("%d",&n);
while (i<=n)
{
//   product = product*i; /* code */
// same above line can be written as 
product*=i;
  i++;
}
printf("the factorial is %d",product); 
return 0;
}