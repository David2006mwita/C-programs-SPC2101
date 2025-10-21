/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: water charges 
*/

#include <stdio.h>

float convertToCelsius(float F);

int main(){

float C,F;

printf("Enter temperature in Fahrenheit\n");
scanf("%f",&F);

C=convertToCelsius(F);
printf("Temperature in degrees is: %.2f°C",C);

return 0;
}
float convertToCelsius(float F){
 
 float C;

C=(F-32)*5/9;
return C;

}