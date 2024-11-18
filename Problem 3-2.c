#include <stdio.h>
#include <math.h>

int main() {
    int m1 = 3, m2 = 2;
    double lg = 530.0, tgd = 65.0, lr = 700.0,tgr, d, str, trr,trd;

    tgr = tgd * (M_PI / 180.0);

    d = (m1 * lg) / sin(tgr);

   str = (m2* lr) / d;

   trr = asin(str);

   trd = trr * (180.0 / M_PI);

    printf("The angle for the second-order bright spot for red light is: %.2f degrees\n", trd);

    return 0;
}

