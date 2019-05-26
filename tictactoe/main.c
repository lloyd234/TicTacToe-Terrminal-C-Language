#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int num;
    int exit = 0;
    char n1[1] = "1";
    char n2[1] ="2",n3[1] ="3",n4[1] ="4",n5[1] ="5",n6[1] ="6",n7[1] ="7",n8[1] ="8",n9[1] ="9";
    char turn[2]= {'0','X'};
    int i = 0;
    char player[2] = {'X', 'O'};
    int a1 = 0,a2 = 0, a3 = 0, a4=0, a5=0,a6 = 0, a7=0,a8=0,a9=0;
    int xwin = 0;
    int owin = 0;


    void changeValue()
{
        if(i == 1)
        {
            i = 0;
        }
        else
        {
            i = 1;
        }
    return;
}

void backValue()
{
    changeValue();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t*****************************\n");
    printf("\t\t\t\t\t\tPlayer %c wins\n", player[i]);
    if(player[i]== 'X')
    {
        xwin++;
    }
    else if(player[i]=='O')
    {
        owin++;
    }
    printf("\t\t\t\t\t*****************************\n\n\n");
    printf("\t\t\t\t\t\tScoreboard\n\n");
    printf("\t\t\t\t\t\*****************************\n\n");
    printf("\t\t\t\t\tPlayer X         %d - %d\n\n", xwin, owin);
    printf("\t\t\t\t\t\*****************************\n\n");
    printf("\t\t\t\t\tPlayer O         %d - %d\n\n", owin,xwin);
    printf("\t\t\t\t\t\*****************************\n\n\t\t\t\t\t");
    system("pause");
    n1[0] = '1';
    n2[0] = '2';
    n3[0] = '3';
    n4[0] = '4';
    n5[0] = '5';
    n6[0] = '6';
    n7[0] = '7';
    n8[0] = '8';
    n9[0] = '9';
    a1 = 0;
    a2 = 0;
    a3 = 0;
    a4 = 0;
    a5= 0;
    a6=0;
    a7= 0;
    a8=0;
    a9 = 0;
    i = 0;
    return;
}


    void checkWin()
{
    if(n1[0]==n2[0] && n2[0] == n3[0])
    {
   backValue();
    }
    else if(n1[0]==n4[0] && n4[0] == n7[0])
    {
    backValue();
    }
    else if(n1[0]==n5[0] && n5[0] == n9[0])
    {
    backValue();
    }
    else if(n3[0]==n6[0] && n6[0] == n9[0])
    {
    backValue();
    }
      else if(n3[0]==n5[0] && n5[0] == n7[0])
    {
    backValue();
    }
    else if(n7[0]==n5[0] && n5[0] == n3[0])
    {
    backValue();
    }
    else if(n2[0]==n5[0] && n5[0] == n8[0])
    {
    backValue();
    }
    else if(n4[0]==n5[0] && n5[0] == n6[0])
    {
    backValue();
    }
      else if(n7[0]==n8[0] && n8[0] == n9[0])
    {
    backValue();
    }
return;
}

void draw()
{
    if(a1 ==1 && a2 == 1 && a3 == 1&& a4 == 1 && a5 == 1&& a6 == 1 && a7 == 1&& a8 == 1 && a9 == 1)
    {
    n1[0] = '1';
    n2[0] = '2';
    n3[0] = '3';
    n4[0] = '4';
    n5[0] = '5';
    n6[0] = '6';
    n7[0] = '7';
    n8[0] = '8';
    n9[0] = '9';
    i = 0;
    a1 = 0;
    a2 = 0;
    a3 = 0;
    a4 = 0;
    a5= 0;
    a6=0;
    a7= 0;
    a8=0;
    a9 = 0;
     system("cls");
    return;
    }
}

    do{

    draw();
    printf("\n\n\n\t\t\t\t**********************************\n");
    printf("\t\t\t\t*          *          *          *\n");
    printf("\t\t\t\t*    %c     *     %c    *     %c    *\n", n1[0],n2[0],n3[0]);
    printf("\t\t\t\t*          *          *          *\n");
    printf("\t\t\t\t**********************************\n");
    printf("\t\t\t\t*          *          *          *\n");
    printf("\t\t\t\t*    %c     *     %c    *     %c    *\n", n4[0],n5[0],n6[0]);
    printf("\t\t\t\t*          *          *          *\n");
    printf("\t\t\t\t**********************************\n");
    printf("\t\t\t\t*          *          *          *\n");
    printf("\t\t\t\t*    %c     *     %c    *     %c    *\n", n7[0],n8[0],n9[0]);
    printf("\t\t\t\t*          *          *          *\n");
    printf("\t\t\t\t**********************************\n\n\n\n");

    printf("\t\t\t\tPlayer %c enter a number: ", player[i] );
    scanf("%d",&num);

    if(num==1)
    {
        if(a1==0)
        {
            a1 =1;
        changeValue();
       n1[0] = turn[i];
       checkWin();

        }
        else
        {
            printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }
    }
    else if(num==2)
    {
        if(a2==0)
        {
        a2 = 1;
        changeValue();
       n2[0] = turn[i];
       checkWin();
        }
       else
        {
            printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }
    }
     else if(num==3)
    {
        if(a3 == 0)
        {
        a3 = 1;
        changeValue();
       n3[0] = turn[i];
       checkWin();
        }
          else
        {
            printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }

    }
     else if(num==4)
    {
        if(a4 == 0)
        {
        a4 = 1;
        changeValue();
       n4[0] = turn[i];
    checkWin();
        }
        else
        {
             printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }
    }
     else if(num==5)
    {
        if(a5==0)
        {
            a5 = 1;
        changeValue();
       n5[0] = turn[i];
        checkWin();
        }
        else
        {
             printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }

    }
     else if(num==6)
    {
        if(a6 ==0)
        {
        a6= 1;
        changeValue();
       n6[0] = turn[i];
        checkWin();
        }
         else
        {
             printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }
    }
     else if(num==7)
    {
        if(a7 == 0)
        {
         a7 = 1;
        changeValue();
       n7[0] = turn[i];
        checkWin();
        }
         else
        {
             printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }

    }
     else if(num==8)
    {
        if(a8==0)
        {
            a8 = 1;
        changeValue();
      n8[0] = turn[i];
        checkWin();
        }
         else
        {
             printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }
    }
     else if(num==9)
    {
        if(a9 ==0)
        {
        a9 = 1;
        changeValue();
       n9[0] = turn[i];
        checkWin();
        }

        else
        {
             printf("\n\n \t\t\t\tPlease enter another number, Thank you. ");
            system("pause");
        }
    }
    else
    {
    printf("\t\t\t\t\n\nPlease enter a valid number. Thank you.\n ");
    system("pause");
    }
    system("cls");
    }
    while(exit>=-1);
return 0;
}
