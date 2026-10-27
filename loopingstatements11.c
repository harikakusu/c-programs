#include<stdio.h>
int main(){

float percentage;
printf("enter the percentage");
scanf("%f",&percentage);
if(percentage>=85)
printf("gradeA");
else if(percentage>=75 && percentage<85)
printf("gradeB");
else if (percentage>=65 && percentage<75)
printf("gradeC");
else if (percentage>=55 && percentage<65)
printf ("gradeD");
else if (percentage>=45 && percentage<55)
printf("gradeE");
else
printf("gradeF");
return 0;

}