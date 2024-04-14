#include<stdio.h>
int main(){
    int user_day,day,month,year;
    scanf("%d",&user_day);
    year = user_day / 365;
    month= user_day % 365 / 30;
    day  = user_day % 365 % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
return 0;
}
