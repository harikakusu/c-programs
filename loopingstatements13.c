#include<stdio.h>
int main()
{
char x;
printf("enter a character:");
scanf("%c", &x);
if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')||(x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U'))
 
{
printf("The character is a vowel.");
}
else
{
printf("The character is not a vowel.");
}
return 0;
}