#include <stdio.h>
int main() {
    float A,B,C,W_A,W_B,W_C,D,MEDIA;
    scanf("%f\n%f\n%f",&A,&B,&C);
    W_A = 2;
    W_B = 3;
    W_C = 5;
    D = A*W_A + B*W_B + C*W_C;
    MEDIA = D/10;
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
