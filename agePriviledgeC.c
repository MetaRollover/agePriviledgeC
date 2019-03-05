/*
This program was takes the user's age as input, and outputs what their priviledges are based on that.
I created this program for my Programming in C class.

Created By: Austin Garrett (MetaRollover)
Date: 3/5/2019
*/
#include <stdio.h>

/*Declarations*/
int user_input();
int response(int caseN);

/*Main Function*/
int main(void){

/*Local Declarations*/
int caseN;
int age;

//Obtain User Age
user_input(&age);

/*Check Age*/
if (age < 18) //If user is under 18
{
  caseN = 1;
  response(caseN);
}
else if (age >= 18 && age < 21) //If user is 18 to 20
{
  caseN = 2;
  response(caseN);
}
else //If user is 21 or older
{
  caseN = 3;
  response(caseN);
}
}

/*Created Functions*/

int user_input(){ //This function gets the user's age
  int age;

  printf("What is your age? \n");
  scanf("%d", &age);

  return age;
}

int response(caseN){ //This function returns the appropriate print statement for the user's age 

switch(caseN) {
  case 1 : printf("You are not allowed to vote. Sorry!");
           break;

  case 2 : printf("You can vote, and serve in the military, but you cannot drink.");
           break;

  case 3 : printf("You can drink, serve, and vote. Enjoy life responsibly!");
           break;
}
}
