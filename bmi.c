#include<stdio.h>

void BMI(){
   float weight; // KG
   float height; // m
   printf("Enter your Weight in KG: \n");
   scanf("%f",&weight);
   printf("Enter your Height in Meter: \n");
   scanf("%f",&height);

   float bmi = weight/(height*height);
   printf("BMI index is : %.2f\n",bmi);

   if (bmi<18.5)
       printf("STATUS: UNDERWEIGHT.... \n");
   else if (bmi>=18.5 && bmi<24.9)
       printf("STATUS: HEALTHY.... \n");
   else if (bmi>=24.9 && bmi<30)
       printf("STATUS: OVERWEIGHT.... \n");
   else
       printf("STATUS: SUFFERING FROM OBESITY.... \n");

}
int main(){

    BMI();
    return 0;

}
