#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int game(char you,char comp){

    if(you==comp)
        return -1;
    else if (you == 's' && comp == 'p')
        return 0;
    else if (you == 'p' && comp == 's')
        return 1;
    else if (you == 's' && comp == 'r')
        return 1;
    else if (you == 'r' && comp == 's')
        return 0;
    else if (you == 'p' && comp== 'r')
        return 0;
    else if (you == 'r' && comp == 'p')
        return 1;

}

int main(){
  char player,comp,result;
printf("use 's' for SCISSOR\n use 'r' for ROCK\n use 'p' for PAPER\n\n");

   do{
 printf("player move ");
  scanf(" %c",&player);

     srand(time(NULL));
  int num=rand()%100;

  if(num<33)
    comp='r';
 else if (num>33&&num<66)
    comp='s';
 else
    comp='p';

  printf("computer move %c \n\n",comp);
  result=game(player,comp);

  if(result==0 || result==-1)
  printf("not yet \n\n");

} while (result==0 || result==-1);


if(result==1)
   printf("You lose skill issue\n\n");

return 0;
}
