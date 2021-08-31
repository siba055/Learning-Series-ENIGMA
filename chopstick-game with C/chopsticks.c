#include <stdio.h>
int main()
{
    int player1[2]={1,1};
    int player2[2]={1,1};
 for(int i=1;i!=0;i++)
 {
     if(i%2!=0) //For player1
     {  printf("current status: \n player1:%d \t %d \n player2:%d \t %d \n",player1[0],player1[1],player2[0],player2[1]);
         char x,y,z,s;
         printf("Enter move for player 1:\n");
         scanf("%c",&x);
         if (x=='A'|| x=='a')
         {
             scanf("%c %c",&y,&z);
             if(y=='L'&& z=='R')
             {
                 player2[1]=player2[1]+player1[0];
             }
             else if(y=='L'&& z=='L')
             {
                 player2[0]=player2[0]+player1[0];
             }
             else if(y=='R'&& z=='L')
             {
                 player2[0]=player2[0]+player1[1];
             }
             else if(y=='R'&& z=='R')
             {
                 player2[1]=player2[1]+player1[1]; 
             }
            if(player2[0]>=5 )
            {
                player2[0]=0;
            }
            if (player2[1]>=5)
            {
               player2[1]=0;
            }
            
            
         }
         else if(x=='S'||x=='s')
             {
                 printf("enter move combination:\n");
                 scanf("%c %d %d", &s, &player1[0],&player1[1]);

             }         
         
    }
    else if(i%2==0)
    {
         printf("current status: \n player1:%d \t %d /n player2:%d \t %d \n",player1[0],player1[1],player2[0],player2[1]);
         char x,y,z,s;
         printf("Enter move for player 2: \n");
         scanf("%c",&x);
         if (x=='A'|| x=='a')
         {
             scanf("%c %c",&y,&z);
             if(y=='L'&& z=='R')
             {
                 player1[1]=player2[0]+player1[1];
             }
             else if(y=='L'&& z=='L')
             {
                 player1[0]=player2[0]+player1[0];
             }
             else if(y=='R'&& z=='L')
             {
                 player1[0]=player2[1]+player1[0];
             }
             else if(y=='R'&& z=='R')
             {
                 player1[1]=player2[1]+player1[1]; 
             }
              if(player1[0]>=5 )
            {
                player1[0]=0;
            }
            if (player1[1]>=5)
            {
               player1[1]=0;
            }
         }
         else if(x=='S'||x=='s')
             {
                 printf("enter move combination:\n");
                 scanf("%c %d %d", &s, &player2[0],&player2[1]);

             }         
    }
    if (player1[0]==0 && player1[1]==0)
    {
        printf("WWINNER IS PLAYER2");
        break;
    }
     if (player2[0]==0 && player2[1]==0)
    {
        printf("WWINNER IS PLAYER1");
        break;
    }
}
}
