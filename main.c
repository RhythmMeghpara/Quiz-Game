#include <stdio.h>
// #include <stdlib.h>
int que1();
int que2();
int que3();
int score1 = 0,score2 = 0 , score3 = 0 ,Total; // To declare in main file
int main()
{

  char choose;


  printf("                  * Wellcome to the game *\n");
  // printf("Let's start the game Yes/No (y/n): ");
  // scanf("%c",&choose);

  while (1)
  {
    // system("cls"); this for quick response
    printf("Let's start the game Yes/No (y/n): ");
    scanf("%c", &choose);
    if (choose == 'y')
    {
      printf("You are in the Quiz game \n");
      que1();
      que2();
      que3();
      Total = score1 + score2 + score3;
      printf("\n\nTotal score : %d",Total);
      break;
    }
   
    else if (choose == 'n')
    {
      printf("See your again\n");
      return 0;
    }
    else
    {
      printf("Error\n");
    }
  }
}

int que1()
{
  // int score1 = 0;
  char square;
  while(1){
    printf("\n1) What is the square of 5 :\n");
    printf("a) 25\n");
    printf("b) 16\n");
    printf("c) 36\n");
    printf("d) 64\n");
    fflush(stdin);          // because enter key contain value this will clear the value
    printf("Ans :");
    scanf("%c", &square); // Or write 2 scanf("") statment

    if (square == 'a')
    {

      printf("\nYes you are correct.\nYou reivced 100 score.\n");
      score1 = 100;
      break;
    }

    else if (square == 'b' || square == 'c' || square == 'd')
    {
      printf("\nNo it is not a correct answer.");
      score1= 0;
      break;
    }

    else
    {
      printf("\nPlease enter valid charater.\n");
    }
  }
}
int que2()
{
  char add;
  while(1){
    printf("\n2)Addition que: 9+8+7+6+5+4+3+2+1+0 = \n");
    printf("A)47\n");
    printf("B)46\n");
    printf("C)48\n");
    printf("D)45\n");
    fflush(stdin);  
    printf("Ans :");
    scanf("%c",&add);
  
  if (add == 'd'){ 
    printf("\nYes you are correct.\nYou reivced 100 score.\n");
    score2 = 100;
    break;
  }
  else if(add == 'a' || add == 'b' || add == 'c' ){
    printf("\nNo it is not a correct answer.\n");
    score2 = 0;
    break;
  }
  else{
    printf("\nPlease enter valid charater.\n");
  }
  }
}
int que3()
{
  char division ;
  

  while(1){
    printf("\n3) Division que : 29/3\n");
    printf("A) 9.677...\n");
    printf("B) 9.666...\n");
    printf("C) 9.688...\n");
    printf("D) 9.699...\n");

    fflush(stdin);
    printf("Ans :");
    scanf("%c",&division);
    if(division == 'b'){
      printf("\nYes you are correct.\nYou reivced 100 score.\n");
      score3 = 100;
      break;
    }
    else if(division == 'a' || division == 'c'|| division == 'd'){
      printf("\nNo it is not a correct answer.\n");
      score3 = 0 ;
      break;
    }
    else{
      printf("Please enter valid charater.\n");
    }

  }
}