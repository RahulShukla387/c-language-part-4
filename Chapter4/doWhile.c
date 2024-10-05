#include<stdio.h>
int main(){
    printf("enter the no which table you want to print\n");
    int n;
    scanf("%d",&n);
    int i = 1;
    printf("the table of %d is ",n);
    do
    {
      printf(" %d\n" ,n*i );
      i++; /* code */
    }
     while (i<=10);
    
}