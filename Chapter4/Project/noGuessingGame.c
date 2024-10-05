#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int attempts =0;
    // srand is used to generate different no at different times of attempt otherwise it will generate no again and again
    srand(time(0));
    // used to generate random no
int random = rand()%100;
while(1){

printf("guess a no between 0 and 100\n");
attempts++;
int n;
scanf("%d",&n);
if (n<random)
{
   printf("enter the no greater than it\n"); /* code */
}
else if (n>random)
{
   printf("enter the no lesser than it\n"); /* code */
}
else if(n==random){
    printf("congratulation you guessed right no\n");
    break;
}
}
printf("the no of attempts is %d ",attempts);
}