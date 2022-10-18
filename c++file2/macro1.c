#include<stdio.h>
#define AREA_TRI
#define AREA_SQR
int main()

{
#ifdef AREA_TRI
printf("This is Triangle are calculation program");
float base, height;
fflush(stdout);
printf("Enter base and height");
fflush(stdout);
scanf("%f%f",&base,&height);
printf("Area of triangle = %f\n",(0.5*base*height));
#endif

return 0;
}