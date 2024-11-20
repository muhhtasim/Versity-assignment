#include <stdio.h>
#include <math.h>

int main() {
    int m1=3, m2=2;
    double lg=530.0, tgd=65.0, lr=700.0,tgr, d, str, trr,trd;

    tgr=tgd * (M_PI / 180.0);

    d=(m1 * lg) / sin(tgr);

   str=(m2* lr) / d;

   trr=asin(str);

   trd=trr * (180.0 / M_PI);

    printf("The angle for the second-order bright spot for red light is: %.2f degrees\n", trd);

    /*
       Third-order bright spot for green light m = m1
       second-order bright spot for red light m = m2
       wavelength for green light = lg
       wavelength for red light = lr
       Theta for green light = tgd
       Theta for red light = trd
       Convert Theta degree to radian (green) = tgr
       Convert Theta degree to radian (red) = trr

    */

    return 0;
}
