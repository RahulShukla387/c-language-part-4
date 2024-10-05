#include<stdio.h>
int main(){
    printf("enter the no you want to check\n");
    int n;
    scanf("%d",&n);
    int i;
    int prime=0;
    if (n==1 ||n==0)
    {
     prime =1;   /* code */
    }
    
    for (int i = 2; i <n; i++)
    {
       if (n%i==0 &&n!=2)
       {
prime = 1;
break;
       }
    }
    if(prime==1)
    {
       
        printf("the no is not prime");
       }
       else
       {
        printf("the no is prime");
       } /* code */ 

}