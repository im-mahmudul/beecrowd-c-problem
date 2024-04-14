#include<stdio.h>
#include<math.h>
int main(){
    double pi,r,ans;
    pi = 3.14159;
    scanf("%lf",&r);
    ans = (4*pi*pow(r,3))/3;
    printf("VOLUME = %.3lf\n",ans);
return 0;
}
