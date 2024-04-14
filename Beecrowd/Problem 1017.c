#include<stdio.h>
#include<math.h>
int main(){
    int hours,avg_speed,total_km;
    double liter,mileage;
    mileage = 12;
    scanf("%d\n%d",&hours,&avg_speed);
    total_km = hours * avg_speed;
    liter = total_km / mileage;
    printf("%.3lf\n",liter);
    return 0;
}
