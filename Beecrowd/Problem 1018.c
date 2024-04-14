#include<stdio.h>
#include<stdlib.h>
int main(){
    int note[7] = {100,50,20,10,5,2,1},money[7],amount,i;
    scanf("%d",&amount);
    printf("%d\n",amount);
    for(i = 0; i < 7; i++){
        money[i] = amount / note[i];
        amount = amount % note[i];
    }
    for(i = 0; i < 7; i++){
        printf("%d nota(s) de R$ %d,00\n",money[i],note[i]);
    }


return 0;
}
