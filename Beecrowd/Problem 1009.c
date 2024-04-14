#include <stdio.h>
int main(){
    char name;
    double salary,comission,total_salary,X,Y;
    scanf("%s\n%lf\n%lf",&name,&salary,&comission);
    X = comission / 100;
    Y = X * 15;
    total_salary = salary + Y;
    printf("TOTAL = R$ %.2lf\n",total_salary);
    return 0;
}
