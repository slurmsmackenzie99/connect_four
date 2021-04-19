#include <stdio.h>


int main()
{


  char row1[7]={0,0,0,0,0,0,0};
  char row2[7]={0,0,0,0,0,0,0};
  char row3[7]={0,0,0,0,0,0,0};
  char row4[7]={0,0,0,0,0,0,0};
  char row5[7]={0,0,0,0,0,0,0};
  char row6[7]={0,0,0,0,0,0,0};
  char row7[7]={0,0,0,0,0,0,0};


  int move1;
  int win=0;
  int j;
  int i;
  int onescore=0;
  int twoscore=0;
  char again='y';




  for(i=0;i<7;++i)
    {
      //row1.push_back('O');
      row1[0]='1';
      //row2.push_back('O');
      row2[0]='2';
      //row3.push_back('O');
      row3[0]='3';
      //row4.push_back('O');
      row4[0]='4';
      //row5.push_back('O');
      row5[0]='5';
      //row6.push_back('O');
      row6[0]='6';
      //row7.push_back('O');
      row7[0]='7';
    }


  while(again=='Y'||again=='y')
{
     for(i=0;i<7;i++)
            {
              if(i==0)
                printf("\n\n\n   %c %c %c %c %c %c %c  \n  ---------------\n", row1[i], row2[i], row3[i], row4[i], row5[i], row6[i], row7[i]);
              if(i>0&&i<7)
                printf(" | %c %c %c %c %c %c %c |\n", row1[i], row2[i], row3[i], row4[i], row5[i], row6[i], row7[i]);
              if(i==6)
                printf("  ---------------\n |               |\n\n\n");
            }

     while(win==0)
        {
          if(win==0)
            {
              printf("Player1:  ");
              scanf("%d", &move1);
              printf("\n\n");
              //illegal move detection
              while(move1<1 || move1>7 || (move1==1 && (row1[1]=='X'||row1[1]=='O')) 
              ||(move1==2&&(row2[1]=='X'||row2[1]=='O'))
              ||(move1==3&&(row3[1]=='X'||row3[1]=='O'))
              ||(move1==4&&(row4[1]=='X'||row4[1]=='O'))
              ||(move1==5&&(row5[1]=='X'||row5[1]=='O'))
              ||(move1==6&&(row6[1]=='X'||row6[1]=='O'))
              ||(move1==7&&(row7[1]=='X'||row7[1]=='O')))
                {
                  printf("Can't let you move there! \n\n\n Player1:  ");
                  scanf("%d", &move1);
                }

                //start of legal move detection and placing '1' or '2' in the correct row
              if(move1 == 1)
                {
                  j=6;
                  while(row1[j]=='X'||row1[j]=='O')
                    {
                      j--;
                    }
                  row1[j]='X';
                }
              else if(move1==2)
                {
                  j=6;
                  while(row2[j]=='X'||row2[j]=='O')
                    {
                      j--;
                    }
                  row2[j]='X';
                }
              else if(move1==3)
                {
                  j=6;
                  while(row3[j]=='X'||row3[j]=='O')
                    {
                      j--;
                    }
                  row3[j]='X';
                }
              else if(move1==4)
                {
                  j=6;
                  while(row4[j]=='X'||row4[j]=='O')
                    {
                      j--;
                    }
                  row4[j]='X';
                }
              else if(move1==5)
                {
                  j=6;
                  while(row5[j]=='X'||row5[j]=='O')
                    {
                      j--;
                    }
                  row5[j]='X';
                }
              else if(move1==6)
                {
                  j=6;
                  while(row6[j]=='X'||row6[j]=='O')
                    {
                      j--;
                    }
                  row6[j]='X';
                }
              else if(move1==7)
                {
                  j=6;
                  while(row7[j]=='X'||row7[j]=='O')
                    {
                      j--;
                    }
                  row7[j]='X';
                }
                // end of legal move detection and placing '1' in the correct row
              // printf('*', move1);
            }
          //displaying the game board
          for(i=0;i<7;++i){
              if(i==0) {
                // i believe that using d as a placeholder is causing display of number 49 to 55 in the row column, instead of 1-7
                // however, replacing it with c placeholder (char) doesn't fix the issue
                printf("\n\n\n %c %c %c %c %c %c %c \n --------------- \n", row1[i], row2[i], row3[i], row4[i], row5[i], row6[i], row7[i]);
                }
              if(i>0 && i<7)
                printf(" | %c %c %c %c %c %c %c |\n", row1[i], row2[i], row3[i], row4[i], row5[i], row6[i], row7[i]);
              //displaying end of the board
              if(i==6)
                printf("---------------\n");
            }
          //winning position 1
          for(i=6;i>0;--i){
              if(
              //horizontal winning condition
              //if first possibility
              (row1[i]=='X' && row2[i]=='X' 
              && row3[i]=='X' && row4[i]=='X')
              //if second possibility
              || (row5[i]=='X' && row2[i]=='X' 
              && row3[i]=='X' && row4[i]=='X')
              //if third possibility
              ||(row5[i]=='X'&&row6[i]=='X'
              &&row3[i]=='X'&&row4[i]=='X')
              //if fourth possibility
              ||(row5[i]=='X' && row6[i]=='X'
              &&row7[i]=='X'&&row4[i]=='X'))
              //then win
               win=1;
            }
          //winning position 2
          for(i=6;i>2;--i){
              if(
              //vertical winning position
              //if first possibility
              (row1[i]=='X'&&row1[i-1]=='X'&&row1[i-2]=='X'&&row1[i-3]=='X')
              //if second possibility
              ||(row2[i]=='X'&&row2[i-1]=='X'&&row2[i-2]=='X'&&row2[i-3]=='X')
              //if third possibility
              ||(row3[i]=='X'&&row3[i-1]=='X'&&row3[i-2]=='X'&&row3[i-3]=='X')
              //if fourth possibility
              ||(row4[i]=='X'&&row4[i-1]=='X'&&row4[i-2]=='X'&&row4[i-3]=='X')
              //if fifth possibility
              ||(row5[i]=='X'&&row5[i-1]=='X'&&row5[i-2]=='X'&&row5[i-3]=='X')
              //if sixth possibility
              ||(row6[i]=='X'&&row6[i-1]=='X'&&row6[i-2]=='X'&&row6[i-3]=='X')
              //if seventh possibility
              ||(row7[i]=='X'&&row7[i-1]=='X'&&row7[i-2]=='X'&&row7[i-3]=='X'))
              //then win
               win=1;

              if(
              //diagonally up right winning position
              //if first possibility
              (row1[i]=='X'&&row2[i-1]=='X'&&row3[i-2]=='X'&&row4[i-3]=='X')
              //if second possibility
              ||(row2[i]=='X'&&row3[i-1]=='X'&&row4[i-2]=='X'&&row5[i-3]=='X')
              //if third possibility
              ||(row3[i]=='X'&&row4[i-1]=='X'&&row5[i-2]=='X'&&row6[i-3]=='X')
              //if fourth possibility
              ||(row4[i]=='X'&&row5[i-1]=='X'&&row6[i-2]=='X'&&row7[i-3]=='X'))
              //then win
                win=1;
              if(
              //diagonally up left winning position
              //if first possibility
              (row7[i]=='X'&&row6[i-1]=='X'&&row5[i-2]=='X'&&row4[i-3]=='X')
              //if second possibility
              ||(row6[i]=='X'&&row5[i-1]=='X'&&row4[i-2]=='X'&&row3[i-3]=='X')
              //if third possibility
              ||(row5[i]=='X'&&row4[i-1]=='X'&&row3[i-2]=='X'&&row2[i-3]=='X')
              //if fourth possibility
              ||(row4[i]=='X'&&row3[i-1]=='X'&&row2[i-2]=='X'&&row1[i-3]=='X'))
              //then win
                win=1;
            }
          //continuing the game if four not connected, prompting players for moves
          if(win==0)
            {
              printf("Player 2:  ");
              scanf("%d", &move1);
              printf("\n\n");

              //blocking the illegal moves
              while(
              move1<1||move1>7
              ||(move1==1&&(row1[1]=='X'||row1[1]=='O'))
              ||(move1==2&&(row2[1]=='X'||row2[1]=='O'))
              ||(move1==3&&(row3[1]=='X'||row3[1]=='O'))
              ||(move1==4&&(row4[1]=='X'||row4[1]=='O'))
              ||(move1==5&&(row5[1]=='X'||row5[1]=='O'))
              ||(move1==6&&(row6[1]=='X'||row6[1]=='O'))
              ||(move1==7&&(row7[1]=='X'||row7[1]=='O')))
                {
                  printf("Can't let you move there!\n\n\nPlayer 2:  ");
                  //prompt for the move again
                  scanf("%d", &move1);
                }
              //if (user wants to place token in the first row) then try to place token starting from column 6, 
              //if it's already taken, go up the column ladder
              if(move1==1)
                {
                  j=6;
                  while(row1[j]=='1'||row1[j]=='2'){
                      j--;
                   }
                  row1[j]='O';
                }
              else if(move1==2)
                {
                  j=6;
                  while(row2[j]=='1'||row2[j]=='2')
                    {
                      j--;
                    }
                  row2[j]='O';
                }
              else if(move1==3)
                {
                  j=6;
                  while(row3[j]=='1'||row3[j]=='2')
                    {
                    j--;
                    }
                  row3[j]='O';
                }
              else if(move1==4)
                {
                  j=6;
                  while(row4[j]=='1'||row4[j]=='2')
                    {
                      j--;
                    }
                  row4[j]='O';
                }
              else if(move1==5)
                {
                  j=6;
                  while(row5[j]=='1'||row5[j]=='2')
                    {
                      j--;
                    }
                  row5[j]='O';
                }
              else if(move1==6)
                {
                  j=6;
                  while(row6[j]=='1'||row6[j]=='2')
                    {
                      j--;
                      {//is this below necessary?
                        j--;
                      }
                      row6[j]='O';
                    }
                }
              else if(move1==7)
                    {
                       if(row7[1]=='X'||row7[1]=='O'){
                        printf("nope");
                        }
                       else{
                          j=6;
                          while(row7[j]=='X'||row7[j]=='O')
                            {
                              j--;
                            }
                          row7[j]='O';
                        }
                    }  // end of legal move detection and placing '2' in the correct row
            }
            for(i=0;i<7;++i)
                {
                  //displaying the board
                  if(i==0)
                    printf("\n\n\n   %c %c %c %c %c %c %c  \n  ---------------\n", row1[i], row2[i], row3[i], row4[i], row5[i], row6[i], row7[i]);
                  if(i>0 && i<7)
                    printf(" | %c %c %c %c %c %c %c |\n", row1[i], row2[i], row3[i], row4[i], row5[i], row6[i], row7[i]);
                  if(i==6)
                    printf("  ---------------\n");
                }
            for(i=6;i>0;--i)
                {
                  //condition to win for horizontal
                  if((row1[i]=='O'&&row2[i]=='O'&&row3[i]=='O'&&row4[i]=='O')
                  ||(row5[i]=='O'&&row2[i]=='O'&&row3[i]=='O'&&row4[i]=='O')
                  ||(row5[i]=='O'&&row6[i]=='O'&&row3[i]=='O'&&row4[i]=='O')
                  ||(row5[i]=='O'&&row6[i]=='O'&&row7[i]=='O'&&row4[i]=='O'))
                    win=2;
                }
              for(i=6;i>2;--i)
                {
                  //condition to win for vertical
                  if((row1[i]=='O'&&row1[i-1]=='O'&&row1[i-2]=='O'&&row1[i-3]=='O')
                  ||(row2[i]=='O'&&row2[i-1]=='O'&&row2[i-2]=='O'&&row2[i-3]=='O')
                  ||(row3[i]=='O'&&row3[i-1]=='O'&&row3[i-2]=='O'&&row3[i-3]=='O')
                  ||(row4[i]=='O'&&row4[i-1]=='O'&&row4[i-2]=='O'&&row4[i-3]=='O')
                  ||(row5[i]=='O'&&row5[i-1]=='O'&&row5[i-2]=='O'&&row5[i-3]=='O')
                  ||(row6[i]=='O'&&row6[i-1]=='O'&&row6[i-2]=='O'&&row6[i-3]=='O')
                  ||(row7[i]=='O'&&row7[i-1]=='O'&&row7[i-2]=='O'&&row7[i-3]=='O'))
                    win=2;
                  //condition to win for diagonally up right
                  if((row1[i]=='2'&&row2[i-1]=='2'&&row3[i-2]=='2'&&row4[i-3]=='2')
                  ||(row2[i]=='2'&&row3[i-1]=='2'&&row4[i-2]=='2'&&row5[i-3]=='2')
                  ||(row3[i]=='2'&&row4[i-1]=='2'&&row5[i-2]=='2'&&row6[i-3]=='2')
                  ||(row4[i]=='2'&&row5[i-1]=='2'&&row6[i-2]=='2'&&row7[i-3]=='2'))
                    win=2;
                  //condition to win for diagonally up left
                  if((row7[i]=='O'&&row6[i-1]=='O'&&row5[i-2]=='O'&&row4[i-3]=='O')
                  ||(row6[i]=='O'&&row5[i-1]=='O'&&row4[i-2]=='O'&&row3[i-3]=='O')
                  ||(row5[i]=='O'&&row4[i-1]=='O'&&row3[i-2]=='O'&&row2[i-3]=='O')
                  ||(row4[i]=='O'&&row3[i-1]=='O'&&row2[i-2]=='O'&&row1[i-3]=='O'))
                    win=2;
                }
            }
          //winning conditions met, display end of game congratulatons and ask whether
          //they wish to play again
          if(win==2)
            {
              ++twoscore;
              printf("Player 2 Wins!\n\n Would you like to play again? (Y/N): ");
            }
          else if(win==1)
            {
              ++onescore;
              printf("Player 1 Wins!\n\n Would you like to play again? (Y/N): ");
            }
          //start next game condition
          scanf("%c" ,&again);
          while(again!='Y' && again!='y' && again!='N' && again!='n')
            {
              printf("Would you like to play again? (Y/N): ");
              scanf("%c", &again);
            }
          printf("\n\n\n\n\n\n");
          win=0;
          //set up new values for all the rows
          for(i=1;i<7;i++)
            {
              row1[i]='O';
              row2[i]='O';
              row3[i]='O';
              row4[i]='O';
              row5[i]='O';
              row6[i]='O';
              row7[i]='O';
            }
        }
      printf("Thanks for Playing!\n\n");
      return 0;
    }