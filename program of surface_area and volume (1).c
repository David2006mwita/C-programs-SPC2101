/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: Program to find volume 
*/

#include<stdio.h>
int main(){
float pi , radius , height , surface_area ,volume;

printf("enter pi : ");
scanf("%f",&pi);

printf(" enter radius:");
scanf("%f", &radius);

printf(" enter height:");
scanf("%f", &height);

surface_area =(2*pi*radius *radius)+(2*pi*radius *height);
volume =pi*radius*radius*height;

printf("surface_area is %f \n ", surface_area);
printf("volume is %f",volume);

return 0;
}