#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

int filled[9]={0,0,0,0,0,0,0,0,0}; //to keep track of filled blocks in the matrix
int k=0;





void print_matr(char matr[3][3])
{ /*  function to print matrix */

    for(int i=0; i<3; i++)
    {
        printf("%c    |   %c   |    %c\n", matr[i][0], matr[i][1], matr[i][2]);
        printf("%s","--------------------\n");
    }
}



void result(char matr[3][3], int k, char XO, char XO2)
{ /* function that checks if someone has won the match after every
     move by the user and the computer */

      if(matr[0][0] == matr[0][1] && matr[0][0] == matr[0][2])
      {
          printf("\n\t\t%s  the winner", ((matr[0][0]==XO)? "You are" : "Computer is"));
          exit(0);
      }

      if(matr[1][0] == matr[1][1] && matr[1][0] == matr[1][2])
      {
          printf("\n\t\t%s  the winner", ((matr[1][0]==XO)? "You are" : "Computer is"));
          exit(0);
      }

      if(matr[2][0]==matr[2][1]&&matr[2][0]==matr[2][2])
      {
          printf("\n\t\t%s  the winner", ((matr[2][0]==XO)? "You are" : "Computer is"));
          exit(0);
      }

      if(matr[0][0]==matr[1][1]&&matr[0][0]==matr[2][2])
      {
          printf("\n\t\t%s  the winner", ((matr[0][0]==XO)? "You are" : "Computer is"));
          exit(0);
      }

      if(matr[2][0]==matr[1][1]&&matr[2][0]==matr[0][2])
      {
          printf("\n\t\t%s  the winner", ((matr[2][0]==XO)? "You are" : "Computer is"));
          exit(0);
      }

      if(matr[0][0]==matr[1][0]&&matr[0][0]==matr[2][0])
      {
          printf("\n\t\t%s  the winner", ((matr[0][0]==XO)? "You are" : "Computer is"));
          exit(0);
      }

      if(matr[0][1]==matr[1][1]&&matr[0][1]==matr[2][1])
      {
          printf("\n\t\t%s  the winner", ((matr[0][2]==XO)? "You are" : "Computer is"));
          exit(0);
      }

      if(matr[0][2]==matr[1][2]&&matr[2][2]==matr[0][2])
      {
          printf("\n\t\t%s  the winner", ((matr[0][2]==XO)? "You are" : "Computer is"));
          exit(0);
      }

      if(k==5)
      {
          printf("\n\t\tThis is a draw\n");
          exit(0);
      }
}



// Move for computer
int priority_move(char matr[3][3], char XO2)
{ /* fiils a block which is not filled and there are two consecutive X or O
     to win the game */

    int n=0;
    if(matr[0][0]==XO2&&matr[0][1]==XO2&&filled[2]==0)
    {
        matr[0][2]=XO2;
        filled[2]=3;
        n=1;
        goto down;
    }

    if(matr[0][1]==XO2&&matr[0][2]==XO2&&filled[0]==0)
    {
        matr[0][0]=XO2;
        filled[0]=1;
        n=1;
        goto down;
    }

    if(matr[0][2]==XO2&&matr[0][0]==XO2&&filled[1]==0)
    {
        matr[0][1]=XO2;
        filled[1]=2;
        n=1;
        goto down;
    }

    if(matr[1][0]==XO2&&matr[1][1]==XO2&&filled[5]==0)
    {
        matr[1][2]=XO2;
        filled[5]=6;
        n=1;
        goto down;
    }

    if(matr[1][1]==XO2&&matr[1][2]==XO2&&filled[3]==0)
    {
        matr[1][0]=XO2;
        filled[3]=4;
        n=1;
        goto down;
    }

    if(matr[1][0]==XO2&&matr[1][2]==XO2&&filled[4]==0)
    {
        matr[1][1]=XO2;
        filled[4]=5;
        n=1;
        goto down;
    }

    if(matr[2][0]==XO2&&matr[2][1]==XO2&&filled[8]==0)
    {
        matr[2][2]=XO2;
        filled[8]=9;
        n=1;
        goto down;
    }

    if(matr[2][1]==XO2&&matr[2][2]==XO2&&filled[6]==0)
    {
        matr[2][0]=XO2;
        filled[6]=7;
        n=1;
        goto down;
    }

    if(matr[2][0]==XO2&&matr[2][2]==XO2&&filled[7]==0)
    {
        matr[2][1]=XO2;
        filled[7]=8;
        n=1;
        goto down;
    }

    if(matr[0][0]==XO2&&matr[2][0]==XO2&&filled[3]==0)
    {
        matr[1][0]=XO2;
        filled[3]=4;
        n=1;
        goto down;
    }

    if(matr[0][0]==XO2&&matr[1][0]==XO2&&filled[6]==0)
    {
        matr[2][0]=XO2;
        filled[6]=7;
        n=1;
        goto down;
    }

    if(matr[1][0]==XO2&&matr[2][0]==XO2&&filled[2]==0)
    {
        matr[0][0]=XO2;
        filled[0]=1;
        n=1;
        goto down;
    }

    if(matr[0][1]==XO2&&matr[1][1]==XO2&&filled[7]==0)
    {
        matr[2][1]=XO2;
        filled[7]=8;
        n=1;
        goto down;
    }

    if(matr[1][1]==XO2&&matr[2][1]==XO2&&filled[1]==0)
    {
        matr[0][1]=XO2;
        filled[1]=2;
        n=1;
        goto down;
    }

    if(matr[2][1]==XO2&&matr[0][1]==XO2&&filled[4]==0)
    {
        matr[1][1]=XO2;
        filled[4]=5;
        n=1;
        goto down;
    }

    if(matr[0][2]==XO2&&matr[1][2]==XO2&&filled[8]==0)
    {
        matr[2][2]=XO2;
        filled[8]=9;
        n=1;
        goto down;
    }

    if(matr[1][2]==XO2&&matr[2][2]==XO2&&filled[2]==0)
    {
        matr[0][2]=XO2;
        filled[2]=3;
        n=1;
        goto down;
    }

    if(matr[0][2]==XO2&&matr[2][2]==XO2&&filled[5]==0)
    {
        matr[1][2]=XO2;
        filled[5]=6;
        n=1;
        goto down;
    }

    if(matr[0][0]==XO2&&matr[1][1]==XO2&&filled[8]==0)
    {
        matr[2][2]=XO2;
        filled[8]=9;
        n=1;
        goto down;
    }

    if(matr[1][1]==XO2&&matr[2][2]==XO2&&filled[0]==0)
    {
        matr[0][0]=XO2;
        filled[0]=1;
        n=1;
        goto down;
    }

    if(matr[0][0]==XO2&&matr[2][2]==XO2&&filled[4]==0)
    {
        matr[1][1]=XO2;
        filled[4]=5;
        n=1;
        goto down;
    }

    if(matr[0][2]==XO2&&matr[1][1]==XO2&&filled[6]==0)
    {
        matr[2][0]=XO2;
        filled[6]=7;
        n=1;
        goto down;
    }

    if(matr[2][0]==XO2&&matr[1][1]==XO2&&filled[2]==0)
    {
        matr[0][2]=XO2;
        filled[2]=3;
        n=1;
        goto down;
    }

    if(matr[2][0]==XO2&&matr[0][2]==XO2&&filled[4]==0)
    {
        matr[1][1]=XO2;
        filled[4]=5;
        n=1;
        goto down;
    }

    down:
    return(n);
}




int check(char matr[3][3], int a, int b, char XO2)
{ /* computer will look for this move before other. This move sees if
     computer can win the game with next move */

    int n=0;
    if(a==0&&b==0)
    {
        if((matr[0][1]==XO2)&&filled[2]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[0][2]==XO2)&&filled[1]==0)
        {
            matr[0][1]=XO2;
            filled[1]=2;
            n=1;
            goto down;
        }

        if((matr[0][1]!=XO2)&&(matr[0][2]!=XO2)&&filled[2]==0&&filled[1]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[1][0]==XO2)&&filled[6]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[2][0]==XO2)&&filled[3]==0)
        {
            matr[1][0]=XO2;
            filled[3]=4;
            n=1;
            goto down;
        }

        if((matr[1][0]!=XO2)&&(matr[2][0]!=XO2)&&filled[6]==0&&filled[3]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[1][1]==XO2)&&filled[8]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }

        if((matr[2][2]==XO2)&&filled[4]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }

        if((matr[1][1]!=XO2)&&(matr[2][2]!=XO2)&&filled[8]==0&&filled[4]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }
    }

    if(a==0&&b==2)
    {
        if((matr[0][1]==XO2)&&filled[0]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[0][0]==XO2)&&filled[1]==0)
        {
            matr[0][1]=XO2;
            filled[1]=2;
            n=1;
            goto down;
        }

        if((matr[0][1]!=XO2)&&(matr[0][0]!=XO2)&&filled[0]==0&&filled[1]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[1][2]==XO2)&&filled[8]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }

        if((matr[2][2]==XO2)&&filled[5]==0)
        {
            matr[1][2]=XO2;
            filled[5]=6;
            n=1;
            goto down;
        }

        if((matr[1][2]!=XO2)&&(matr[2][2]!=XO2)&&filled[8]==0&&filled[5]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }

        if((matr[1][1]==XO2)&&filled[6]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[2][0]==XO2)&&filled[4]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }

        if((matr[1][1]!=XO2)&&(matr[2][0]!=XO2)&&filled[6]==0&&filled[4]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }
    }

    if(a==2&&b==0)
    {
        if((matr[2][1]==XO2)&&filled[8]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }

        if((matr[2][2]==XO2)&&filled[7]==0)
        {
            matr[2][1]=XO2;
            filled[7]=8;
            n=1;
            goto down;
        }

        if((matr[2][1]!=XO2)&&(matr[2][2]!=XO2)&&filled[8]==0&&filled[7]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[1][0]==XO2)&&filled[0]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[0][0]==XO2)&&filled[3]==0)
        {
            matr[1][0]=XO2;
            filled[3]=4;
            n=1;
            goto down;
        }

        if((matr[1][0]!=XO2)&&(matr[0][0]!=XO2)&&filled[0]==0&&filled[3]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[1][1]==XO2)&&filled[2]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[0][2]==XO2)&&filled[4]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }

        if((matr[1][1]!=XO2)&&(matr[0][2]!=XO2)&&filled[2]==0&&filled[4]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }
    }

    if(a==2&&b==2)
    {
        if((matr[1][2]==XO2)&&filled[2]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[0][2]==XO2)&&filled[5]==0)
        {
            matr[1][2]=XO2;
            filled[5]=6;
            n=1;
            goto down;
        }

        if((matr[1][2]!=XO2)&&(matr[0][2]!=XO2)&&filled[2]==0&&filled[5]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[0][0]==XO2)&&filled[6]==0)
        {
            matr[2][1]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[0][0]==XO2)&&filled[7]==0)
        {
            matr[2][0]=XO2;
            filled[7]=8;
            n=1;
            goto down;
        }

        if((matr[2][1]!=XO2)&&(matr[2][0]!=XO2)&&filled[6]==0&&filled[7]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[1][1]==XO2)&&filled[0]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[0][0]==XO2)&&filled[4]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }

        if((matr[1][1]!=XO2)&&(matr[0][0]!=XO2)&&filled[0]==0&&filled[4]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }
    }

    if(a==0&&b==1)
    {
        if((matr[0][0]==XO2)&&filled[2]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[0][2]==XO2)&&filled[0]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[0][0]!=XO2)&&(matr[0][2]!=XO2)&&filled[0]==0&&filled[2]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[1][1]==XO2)&&filled[7]==0)
        {
            matr[2][1]=XO2;
            filled[7]=8;
            n=1;
            goto down;
        }

        if((matr[2][1]==XO2)&&filled[4]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }

        if((matr[1][1]!=XO2)&&(matr[2][1]!=XO2)&&filled[4]==0&&filled[7]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }
    }

    if(a==1&&b==2)
    {
        if((matr[0][2]==XO2)&&filled[8]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }

        if((matr[2][2]==XO2)&&filled[2]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[0][2]!=XO2)&&(matr[2][2]!=XO2)&&filled[8]==0&&filled[2]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[1][1]==XO2)&&filled[3]==0)
        {
            matr[2][1]=XO2;
            filled[3]=4;
            n=1;
            goto down;
        }

        if((matr[1][0]==XO2)&&filled[4]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }

        if((matr[1][1]!=XO2)&&(matr[1][0]!=XO2)&&filled[4]==0&&filled[3]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }
    }

    if(a==2&&b==1)
    {
        if((matr[2][0]==XO2)&&filled[8]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }

        if((matr[2][2]==XO2)&&filled[6]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[2][0]!=XO2)&&(matr[2][2]!=XO2)&&filled[8]==0&&filled[6]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }

        if((matr[1][1]==XO2)&&filled[1]==0)
        {
            matr[0][1]=XO2;
            filled[1]=2;
            n=1;
            goto down;
        }

        if((matr[0][1]==XO2)&&filled[4]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }

        if((matr[1][1]!=XO2)&&(matr[0][1]!=XO2)&&filled[4]==0&&filled[7]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }
    }

    if(a==1&&b==0)
    {
        if((matr[0][0]==XO2)&&filled[6]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[2][0]==XO2)&&filled[0]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[0][0]!=XO2)&&(matr[2][0]!=XO2)&&filled[0]==0&&filled[6]==7)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[1][1]==XO2)&&filled[3]==0)
        {
            matr[1][0]=XO2;
            filled[3]=4;
            n=1;
            goto down;
        }

        if((matr[1][0]==XO2)&&filled[4]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }

        if((matr[1][1]!=XO2)&&(matr[1][0]!=XO2)&&filled[4]==0&&filled[3]==0)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            n=1;
            goto down;
        }
    }

    if(a==1&&b==1)
    {
        if((matr[0][0]==XO2)&&filled[8]==0)
        {
            matr[2][2]=XO2;
            filled[8]=9;
            n=1;
            goto down;
        }

        if((matr[2][2]==XO2)&&filled[0]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[0][0]!=XO2)&&(matr[2][2]!=XO2)&&filled[0]==0&&filled[8]==0)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            n=1;
            goto down;
        }

        if((matr[0][2]==XO2)&&filled[6]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[2][0]==XO2)&&filled[2]==0)
        {
            matr[0][2]=XO2;
            filled[2]=3;
            n=1;
            goto down;
        }

        if((matr[0][2]!=XO2)&&(matr[2][0]!=XO2)&&filled[2]==0&&filled[6]==0)
        {
            matr[2][0]=XO2;
            filled[6]=7;
            n=1;
            goto down;
        }

        if((matr[0][1]==XO2)&&filled[7]==0)
        {
            matr[2][1]=XO2;
            filled[7]=8;
            n=1;
            goto down;
        }

        if((matr[2][1]==XO2)&&filled[1]==0)
        {
            matr[0][1]=XO2;
            filled[1]=2;
            n=1;
            goto down;
        }

        if(filled[1]==0&&filled[7]==0)
        {
            matr[0][1]=XO2;
            filled[1]=2;
            n=1;
            goto down;
        }

        if((matr[1][2]==XO2)&&filled[3]==0)
        {
            matr[1][0]=XO2;
            filled[3]=4;
            n=1;
            goto down;
        }

        if((matr[1][0]==XO2)&&filled[5]==0)
        {
            matr[1][2]=XO2;
            filled[5]=6;
            n=1;
            goto down;
        }

        if((matr[1][2]!=XO2)&&(matr[1][0]!=XO2)&&filled[5]==0&&filled[3]==0)
        {
            matr[1][0]=XO2;
            filled[3]=4;
            n=1;
            goto down;
        }
    }
    down:
    return(n);
}



int attack(char matr[3][3], char XO, char XO2)
{ /* function tries to find a way for computer to win */

  int n=0;
  for(int i=0; i<3; i++)
  {
      for(int j=0; j<3; j++)
      {
          if(matr[i][j]==XO2)
          {
              n=check(matr,i,j,XO2);
              if(n==1)
                  goto down;
          }
      }
  }
  down:
  if(n==0)
  {
      for(int i=0; i<3; i++)
      {
          int n1=0;
          for(int j=0; j<3; j++)
          {
              if((matr[i][j]!='X')&&(matr[i][j]!='O'))
              {
                  matr[i][j]=XO;
                  n=1;
                  filled[i+j+n1]=i+j+n1+1;
                  break;
              }

          }

          n1+=2;
          if(n==1)
              break;
      }

  }
  int move=1;
  return move;
}




int secondary_moves(char matr[3][3], char XO, char XO2)
{  /* function checks if user has chances of winning in next move (two
      consecutive blocks filled with X/O) and
      enters a X/O sign in the third consecutive block */

    int move=0;
    if(k==1)
    {
        if(matr[1][1]==XO)
        {
            matr[0][0]=XO2;
            filled[0]=1;
            move=1;
        }

        if(matr[0][0]==XO||matr[2][2]==XO||matr[0][2]==XO||matr[2][0]==XO)
        {
            matr[1][1]=XO2;
            filled[4]=5;
            move=1;
        }
    }

    if(k==2)
    {
        if(matr[0][0]==XO&&matr[2][1]==XO&&filled[5]==0)
        {
            matr[1][2]=XO2;
            filled[5]=6;
            move=1;
        }

        if(matr[0][0]==XO&&matr[1][2]==XO&&filled[7]==0)
        {
            matr[2][1]=XO2;
            filled[7]=8;
            move=1;
        }

        if(matr[0][2]==XO&&matr[2][1]==XO&&filled[3]==0)
        {
            matr[1][0]=XO2;
            filled[3]=4;
            move=1;
        }

        if(matr[0][2]==XO&&matr[1][0]==XO&&filled[7]==0)
        {
            matr[2][1]=XO2;
            filled[7]=8;
            move=1;
        }

        if(matr[2][0]==XO&&matr[0][1]==XO&&filled[5]==0)
        {
            matr[1][2]=XO2;
            filled[5]=6;
            move=1;
        }

        if(matr[2][0]==XO&&matr[1][2]==XO&&filled[1]==0)
        {
            matr[0][1]=XO2;
            filled[1]=2;
            move=1;
        }

        if(matr[2][2]==XO&&matr[0][1]==XO&&filled[3]==0)
        {
            matr[1][0]=XO2;
            filled[3]=4;
            move=1;
        }

        if(matr[2][2]==XO&&matr[1][0]==XO&&filled[1]==0)
        {
            matr[0][1]=XO2;
            filled[1]=2;
            move=1;
        }

        if(matr[0][0]==XO&&matr[2][2]==XO&&filled[5]==0)
        {
            matr[1][2]=XO2;
            filled[5]=6;
            move=1;
        }

        if(matr[2][0]==XO&&matr[0][2]==XO&&filled[5]==0)
        {
            matr[1][2]=XO2;
            filled[5]=6;
            move=1;
        }
    }
    return move;
}



int check_diagonal(char matr[3][3], char XO, char XO2)
{ /* check diagonals to see if oponent can win the match in the next
     move by putting X/O in a diagonal */

    int move=0;
    if(matr[0][0]==XO&&matr[2][2]==XO&&filled[4]==0)
    {
        matr[1][1]=XO2;
        filled[4]=5;
        move=1;
    }

    if(matr[0][0]==XO&&matr[1][1]==XO&&filled[8]==0)
    {
        matr[2][2]=XO2;
        filled[8]=9;
        move=1;
    }

    if(matr[1][1]==XO&&matr[2][2]==XO&&filled[0]==0)
    {
        matr[0][0]=XO2;
        filled[0]=1;
        move=1;
    }

    if(matr[0][2]==XO&&matr[2][0]==XO&&filled[4]==0)
    {
        matr[1][1]=XO2;
        filled[4]=5;
        move=1;
    }

    if(matr[2][0]==XO&&matr[1][1]==XO&&filled[2]==0)
    {
        matr[0][2]=XO2;
        filled[2]=3;
        move=1;
    }

    if(matr[0][2]==XO&&matr[1][1]==XO&&filled[6]==0)
    {
        matr[2][0]=XO2;
        filled[6]=7;
        move=1;
    }

    return move;
}



int check_row(char matr[3][3], char XO, char XO2)
{ /* check rows to see if oponent can win the match in the next
     move by putting X/O in a row */

    int move=0;
    if(matr[0][0]==XO&&matr[0][1]==XO&&filled[2]==0)
    {
        matr[0][2]=XO2;
        filled[2]=3;
        move=1;
    }

    if(matr[0][0]==XO&&matr[0][2]==XO&&filled[2]==0)
    {
        matr[0][1]=XO2;
        filled[1]=2;
        move=1;
    }

    if(matr[0][1]==XO&&matr[0][2]==XO&&filled[0]==0)
    {
        matr[0][0]=XO2;
        filled[0]=1;
        move=1;
    }

    if(matr[1][0]==XO&&matr[1][1]==XO&&filled[5]==0)
    {
        matr[1][2]=XO2;
        filled[5]=6;
        move=1;
    }

    if(matr[1][0]==XO&&matr[1][2]==XO&&filled[4]==0)
    {
        matr[1][1]=XO2;
        filled[4]=5;
        move=1;
    }

    if(matr[1][1]==XO&&matr[1][2]==XO&&filled[3]==0)
    {
        matr[1][0]=XO2;
        filled[3]=4;
        move=1;
    }

    if(matr[2][0]==XO&&matr[2][1]==XO&&filled[8]==0)
    {
        matr[2][2]=XO2;
        filled[8]=9;
        move=1;
    }

    if(matr[2][0]==XO&&matr[2][2]==XO&&filled[7]==0)
    {
        matr[2][1]=XO2;
        filled[7]=8;
        move=1;
    }

    if(matr[2][1]==XO&&matr[2][2]==XO&&filled[6]==0)
    {
        matr[2][0]=XO2;
        filled[6]=7;
        move=1;
    }

    return move;
}



int first_move(char matr[3][3], char XO2)
{ /* function for conventional first move by putting X/O
      in the middle block */

    matr[1][1]=XO2;
    filled[4]=5;
    return(1);
}



int check_coloumn(char matr[3][3], char XO, char XO2)
{ /* check coloumns to see if oponent can win the match in the next
     move by putting X/O in a coloumn */

    int move=0;
    if(matr[0][0]==XO&&matr[1][0]==XO&&filled[6]==0)
    {
        matr[2][0]=XO2;
        filled[6]=7;
        move=1;
    }

    if(matr[0][0]==XO&&matr[2][0]==XO&&filled[3]==0)
    {
        matr[1][0]=XO2;
        filled[3]=4;
        move=1;
    }

    if(matr[1][0]==XO&&matr[2][0]==XO&&filled[0]==0)
    {
        matr[0][0]=XO2;
        filled[0]=1;
        move=1;
    }

    if(matr[2][1]==XO&&matr[0][1]==XO&&filled[4]==0)
    {
        matr[1][1]=XO2;
        filled[4]=5;
        move=1;
    }

    if(matr[2][1]==XO&&matr[1][1]==XO&&filled[1]==0)
    {
        matr[0][1]=XO2;
        filled[1]=2;
        move=1;
    }

    if(matr[1][1]==XO&&matr[0][1]==XO&&filled[7]==0)
    {
        matr[2][1]=XO2;
        filled[7]=8;
        move=1;
    }

    if(matr[0][2]==XO&&matr[2][2]==XO&&filled[5]==0)
    {
        matr[1][2]=XO2;
        filled[5]=6;
        move=1;
    }

    if(matr[1][2]==XO&&matr[2][2]==XO&&filled[2]==0)
    {
        matr[0][2]=XO2;
        filled[2]=3;
        move=1;
    }

    if(matr[0][2]==XO&&matr[1][2]==XO&&filled[8]==0)
    {
        matr[2][2]=XO2;
        filled[8]=9;
        move=1;
    }

    return move;
}



void comp_move(char matr[3][3], char XO, char XO2)
{ /* Function which checks the best move for computer to play */

    printf("\nYour move : \n");
    print_matr(matr);
    result(matr,k,XO,XO2);
    printf("\nComputer's move : \n");
    int move=0;
    printf("\n");

    while(move==0)
    { /* While loop continues until move = 0. If one of the Function
          triggered then move will become 1 and exit the loop */

        if(k==1||k==2)
            move=secondary_moves(matr, XO, XO2);

        if(move==1)
            break;

        if(k==1)
            move=first_move(matr, XO2);

        if(move==1)
            break;
        move=priority_move(matr,XO2);

        if(move==1)
            break;
        move=check_diagonal(matr, XO, XO2);

        if(move==1)
            break;
        move=check_row(matr, XO, XO2);

        if(move==1)
            break;
        move=check_coloumn(matr, XO, XO2);

        if(move==1)
            break;
        move=attack(matr, XO, XO2);
    }
    print_matr(matr); // print matrix
    result(matr,k,XO,XO2); // check result
}



void enter_XO(char matr[3][3], char XO, char XO2)
{ /* Function allows user to enter X/O */

    int n,n1=0;
    int move=0;
    while(n1==0)
    {
      printf("\nEnter the number where you want to put %c : ", XO);
      scanf("%d", &n);
      if(n<1||n>9)
      {
          printf("\nWrong input. Enter between 1 to 9. Enter again\n");
      }
      if(filled[n-1]==n)
      {
          printf("\nblock already filled. Enter again\n");
      }
      else if(n>=1&&n<=9)
      {
          if(filled[n-1]==0)
          {
              n1=1;
              filled[n-1]=n;
          }
      }
    }

    switch(n)
    {
        case 1 :
            matr[0][0]=XO;
            k++;
            if(k<5)
                comp_move(matr, XO, XO2);
            break;
        case 2 :
            matr[0][1]=XO;
            k++;
            if(k<5)
                comp_move(matr, XO, XO2);
            break;
        case 3 :
              matr[0][2]=XO;
              k++;
              if(k<5)
                  comp_move(matr, XO, XO2);
              break;
          case 4 :
              matr[1][0]=XO;
              k++;
              if(k<5)
                  comp_move(matr, XO, XO2);
              break;
          case 5 :
                matr[1][1]=XO;
                k++;
                if(k<5)
                    comp_move(matr, XO, XO2);
                break;
          case 6 :
              matr[1][2]=XO;
              k++;
              if(k<5)
                  comp_move(matr, XO, XO2);
              break;
          case 7 :
                matr[2][0]=XO;
                k++;
                if(k<5)
                    comp_move(matr, XO, XO2);
                break;
          case 8 :
                matr[2][1]=XO;
                k++;
                if(k<5)
                    comp_move(matr, XO, XO2);
                break;
            case 9 :
                  matr[2][2]=XO;
                  k++;
                  if(k<5)
                      comp_move(matr, XO, XO2);
                  break;
            default :
                  printf("Wrong input");
                  break;
    }
    if(k==5)
    {
        print_matr(matr);
        result(matr,k,XO,XO2);
    }
}



int main()
{
    char matr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char XOuser, XOcomp;

    // asking user which sign do they want to use
    printf("Enter the  symbol  you want to use (X or O) : ");
    scanf("%c", &XOuser);
    getchar();
    XOuser = toupper(XOuser);
    int n=0;
    while(n==0)
    {
        if(XOuser!='X'&&XOuser!='O')
        {
            printf("Wrong input! Run the program again...");
            return 0;
        }
        if(XOuser=='X'||XOuser=='O')
        {
            n=1;
        }
        XOcomp=((XOuser=='X')?'O':'X');
    }
    print_matr(matr);

    /* below loop continues the program until someone has won
       or the game is draw */
    while(k<5)
    {
        enter_XO(matr, XOuser, XOcomp);
    }
    return 0;
}
