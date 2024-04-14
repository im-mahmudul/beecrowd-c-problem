#include<stdio.h>
int main(){
    int km;
    double fuel,total_distance;
    scanf("%d",&km);
    scanf("%lf",&fuel);
    total_distance = km / fuel;
    printf("%.3lf km/l\n",total_distance);
    return 0;
}
