//break statement will exit the loop when we apply it 
//continue statement will exit only that line of code or skip this iteration now
#include<stdio.h>
int main(){
    for (int i = 0; i<=20;i++){
        if (i==11)
        {
// break;/* code */
continue;
        }
        
        printf("%d\n",i);
    }
}