#include <stdio.h>

int main() {

   int age = 22;
   float gpa = 6.48;
   double pi =3.1415926535;
   char currancy = '$';
   char name[] = "Sahil Chettri";

   printf("%d\n",age);
   printf("%f\n",gpa);
   printf("%10f\n",pi);
   printf("%c\n",currancy);
   printf("%s\n",name);
 

    //width

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n",num1);
    printf("%-3d\n",num2);
    printf("%3d\n",num3);


    // precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%+7.1f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);




       return 0;
}






















 // Format specifier = Special tokens that begin with a % symbol,
    //                     followed by a character that specifies the data type
    //                     and optional modifiers (width, precision, flags).
    //                     They control how data is displayed or interpreted.
