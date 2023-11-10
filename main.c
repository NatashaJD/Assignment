#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*A program to store and manage students records*/
    //variable initialization.
    char regNumber[20];
    printf("Enter your registration number\n");
    scanf("%s",&regNumber);
    printf("Welcome %s\n",regNumber);

   char firstName[30];
   printf("Enter your first name\n");
   scanf("%s",&firstName);
   printf("Welcome %s\n",firstName);

   char lastName[30];
   printf("Enter your last name\n");
   scanf("%s",&lastName);
   printf("Welcome %s\n",lastName);

    int age;
    printf("Enter age\n");
    scanf("%d",&age);
    printf("Your age is %d:\n ",age);

    float networking;
    printf("Enter your Networking marks\n");
    scanf("%f",&networking);
    printf("Your average marks is %f:\n",networking);

    float intro_to_programming;
    printf("Enter your Programming marks\n");
    scanf("%f",&intro_to_programming);
    printf("Your average marks is %f:\n",intro_to_programming);

    float accounting;
    printf("Enter your Accounting marks\n");
    scanf("%f",&accounting);
    printf("Your average marks is %f:\n",accounting);

    float operatingSystems;
    printf("Enter your Operating System's marks\n");
    scanf("%f",&operatingSystems);
    printf("Your average marks is %f:\n",operatingSystems);

    float comp_application;
    printf("Enter your Computer Application marks\n");
    scanf("%f",&comp_application);
    printf("Your average marks is %f:\n",comp_application);

    float grade;
    printf("Enter your average grade\n");
    scanf("%f",&grade);
    printf("Your average grade is %f:\n",grade);



    return 0;
}
