#include <stdio.h>
#include <math.h>

//problem 2-2

int main() {
    int m=1;
    double td = 45.0, tr, a_by_lambda;

    tr = td * (M_PI / 180.0);

    a_by_lambda = m / sin(tr);

    printf("The ratio of the slit width to the wavelength (a/lambda) is: %.2f\n", a_by_lambda);

    return 0;
}
