#include <stdio.h>
// #include <stdlib.h>
int que1();
int que2();
int que3();
int score1 = 0,score2 = 0 , score3 = 0 ,Total;
int main()
{

  char choose;


  printf("                  * Wellcome to the game *\n");
  // printf("Let's start the game Yes/No (y/n): ");
  // scanf("%c",&choose);

  while (1)
  {
    // system("cls");
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
  char dog_name;
    printf("1) What is my dog name :\n");
    printf("a) Scooby\n");
    printf("b) Tommy\n");
    printf("c) Max\n");
    printf("d) Bruno\n");
    fflush(stdin);          // because enter key contain value this will clear the value
    printf("Ans :");
    scanf("%c", &dog_name); // Or write 2 scanf("") statment

    if (dog_name == 'a')
    {

      printf("Yes you are correct.\nYou reivced 100 score.");
      score1 = 100;
    }

    else if (dog_name == 'b' || dog_name == 'c' || dog_name == 'd')
    {
      printf("No it is not a correct answer.");
      score1= 0;
    }

    else
    {
      printf("Please enter valid charater.");
    }
  
}
int que2()
{
  // int score2 = 0;
  char brother_name;
  while(1){
    printf("\n2)What is my brother name :\n\n");
    printf("A)Max\n");
    printf("B)Jack\n");
    printf("C)Jon\n");
    printf("D)Sarwam\n");
    fflush(stdin);  
    printf("Ans :");
    scanf("%c",&brother_name);
  
  if (brother_name == 'd'){ 
    printf("Yes you are correct.\nYou reivced 100 score.\n");
    score2 = 100;
    break;
  }
  else if(brother_name == 'a' || brother_name == 'b' || brother_name == 'c' ){
    printf("No it is not a correct answer.\n");
    score2 = 0;

  }
  else{
    printf("Please enter valid charater.\n");
  }
  }
}
int que3()
{
  char age ;
  

  while(1){
    printf("\n3) My current age : \n");
    printf("A) 19\n");
    printf("B) 20\n");
    printf("C) 22\n");
    printf("D) 21\n");

    fflush(stdin);
    printf("Ans :");
    scanf("%c",&age);
    if(age == 'b'){
      printf("Yes you are correct.\nYou reivced 100 score.\n");
      score3 = 100;
      break;
    }
    else if(age == 'a' || age == 'c'||age == 'd'){
      printf("No it is not a correct answer.\n");
      score3 = 0 ;
      
    }
    else{
      printf("Please enter valid charater.\n");
    }

  }
}