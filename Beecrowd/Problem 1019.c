#include<stdio.h>
int main(){
    int sec1,hour,min,min2,sec2;
    scanf("%d",&sec1);
    sec2 = sec1 % 60;
    min  = sec1 / 60;
    min2 = min  % 60;
    hour = min  / 60;
    printf("%d:%d:%d\n",hour,min2,sec2);
    return 0;
}
