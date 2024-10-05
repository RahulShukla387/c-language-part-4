// #include<stdio.h>
// int main(){
//     int i =0;
//     int sum =0;;
//     while (i<=10)
//     {
        
//        sum=i+sum; /* code */
//        i++;
//     }
//     printf("the sum is %d",sum);
// }
#include<stdio.h>
int main(){
    int n = 8;
      int sum = 0;
    for (int i = 1; i <=10; i++)
    {
       printf("the table is %d*%d=%d \n",n,i,n*i);
       sum = sum+n*i; /* code */
    }
    printf("the sum is %d",sum);
}