#include<stdio.h>
#include<cs50.h>
int main(void)
{

string name=get_string("Enter your name");



float m=get_float("Enter your height (in m)");
int kg=get_int("Enter your weight (in kg)");


float BMI= (float)(kg/(m*m));

if(BMI <18.5)
{
 printf("%s %.2f underweight\n",name,BMI);
}
else if(BMI>=18.5 && BMI<=24.9){

printf("%s %.2f normal weight\n",name,BMI);
}
else if(BMI>=25 && BMI<=29.9)
{
printf("%s %.2f overweight\n",name,BMI);

}
else if(BMI> 30)
{
printf("%s %.2f obese\n",name,BMI);
}

}
