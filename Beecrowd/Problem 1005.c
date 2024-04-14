#include <stdio.h>
int main() {
    float A,B,W_A,W_B,C,MEDIA;
    scanf("%f\n%f",&A,&B);
    W_A = 3.5;
    W_B = 7.5;
    C = A*W_A + B*W_B;
    MEDIA = C/11;
    printf("MEDIA = %.5f\n",MEDIA);
    return 0;
}
