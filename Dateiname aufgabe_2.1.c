#include <stdio.h>

int main(int arc, char ** arv){
    double a = 2.0;
    double power = 0.0; 
    scanf("%lf", &a);
    power = a*a;
    printf("%lf*%lf = %lf\n",a, a,power);

    return 0;
}
