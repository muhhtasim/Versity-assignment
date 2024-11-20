#include <stdio.h>
int main (){

float w, a[3], angle[3];
int m, wa=0,i;
printf("Enter the wavelength in nm : ");
scanf("%f", &w);

if (w < 380 || w > 750){
    printf("Out of the rang.Pleace enter a valid number. \n");
    return 1;
}
printf("Enter the order of diffraction (m) :");
scanf("%d", &m);
printf ("Enter three slit widths (um): \n");
for (i=0;i<3;i++){
    printf("a[%d]: ",i + 1);
    scanf("%f", &a[i]);
}
for(i=0;i<3;i++){
    angle[i]=(m*w/1000.0)/a[i];
    if(angle[i]>angle[wa]){
        wa=i;
    }
}
printf("\nDiffraction Angle:\n");
for(i=0;i<3;i++){
    printf("Slit %d: %.5f radians\n",i + 1,angle[i]);

}
printf("Slit %d bend the light most.\n", wa + 1);

return 0;


  /*
    Wavelenth = w


  */


}
