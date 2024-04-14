#include <stdio.h>
int main(){
    double x,y,z;
    double unit_num1,quantity1,unit_price1;
    double unit_num2,quantity2,unit_price2;
    scanf("%lf %lf %lf",&unit_num1,&quantity1,&unit_price1);
    scanf("%lf %lf %lf",&unit_num2,&quantity2,&unit_price2);
    x = quantity1 * unit_price1;
    y = quantity2 * unit_price2;
    z = x + y;
    printf("VALOR A PAGAR: R$ %.2lf\n",z);
return 0;
}
