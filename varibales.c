#include <stdio.h>
#include <stdbool.h>
 int main(){
    int age = 25;   //intger 
    int year = 2026;

    printf("you are %d years old\n", age);
    printf("the year is %d\n", year);

     float gpa = 6.50;   // flot
     float price = 19.99;
     printf("your gpa is %.2f\n",gpa);
     printf("the price is $%f/n", price);

     double pi = 3.14159;    // double
        printf("The Value is pi is %lf>\n",pi);

        char grade = 'A';   //character
        char symbol = '!';
        
        printf("Your grade is %c\n", grade);
        printf("Your favorite symbol is %c\n", symbol);

        char name[] = "Sahil chettri";   // string 
        char favoriteSinger[]= "Kumar Sanu";

        printf("HI iam  %s\n", name);
        printf("My favorite singer is %s\n",favoriteSinger);
       
        bool isUnemployed = true;   // bool
        
        printf(" this github user is %d\n",isUnemployed);

    return 0;
 }