#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    double tri,cir,trap,quad,reta,pi;
    pi = 3.14159;
    scanf("%lf %lf %lf",&a,&b,&c);
    tri = (a*c)/2;
    cir = pi * pow(c,2);
    trap= ((a+b)*c/2);
    quad= pow(b,2);
    reta= a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,trap,quad,reta);
    return 0;
}
