#include <stdio.h>

int main(){
    int i=1,sum=0;
    for(i=1;i<=10;i++){
        sum=sum+i;
    }
    printf("The sum of first 10 natural number is %d\n",sum);
    return 0;
}