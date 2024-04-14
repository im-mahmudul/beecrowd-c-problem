#include<stdio.h>
int main() {
    int employees_number,hour;
    float salary_per_hour,salary;
    scanf("%d\n%d\n%f",&employees_number,&hour,&salary_per_hour);
    printf("NUMBER = %d\n",employees_number);
    salary = hour*salary_per_hour;
    printf("SALARY = U$ %.2f\n",salary);
return 0;
}
