#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#define RESET_COLOR    "\x1b[0m"
#define NEGRO_T        "\x1b[30m"
#define NEGRO_F        "\x1b[40m"
#define ROJO_T     "\x1b[31m"
#define ROJO_F     "\x1b[41m"
#define VERDE_T        "\x1b[32m"
#define VERDE_F        "\x1b[42m"
#define AMARILLO_T "\x1b[33m"
#define    AMARILLO_F  "\x1b[43m"
#define AZUL_T     "\x1b[34m"
#define    AZUL_F      "\x1b[44m"
#define MAGENTA_T  "\x1b[35m"
#define MAGENTA_F  "\x1b[45m"
#define CYAN_T     "\x1b[36m"
#define CYAN_F     "\x1b[46m"
#define BLANCO_T   "\x1b[37m"
#define BLANCO_F   "\x1b[47m"



void clrscr()
{
    system("@cls||clear");
}

void matriz(char v[3][3])
{ printf(VERDE_T"\n                                  ░░░░░░░░░░░░░░░");
  for (int i=0; i<3;i++)
    {     printf(VERDE_T"\n");
        printf("                                  ");
        for (int j=0;j<3;j++)
       printf("░ %c ░",v[i][j]);
       printf(VERDE_T"\n                                  ░░░░░░░░░░░░░░░");
    } 
     
  //  printf ("\r                                                   ");
    printf("\n\n\n");

   
}


int main()
{   
    int x,y,m;
    int d=0;
    int z=0;
    int l=1;
    char v[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    clrscr();
    matriz(v);
    while (z!=1)
    { if (l==1) {printf(CYAN_T"Jugador 1, ingrese un Valor: ");
                scanf("%i", &x);}
       else {printf(CYAN_T"Jugador 2, ingrese un Valor: ");
                scanf("%i", &x);}       

       if (l==1) { 
             l=2;m=1;
      
          switch (x){
                     case 1: {clrscr (); if (v[0][0]=='X' || v[0][0]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 1.\n\n");l=1;}
                                         else {v[0][0] ='X';matriz(v);d++;}}
                     break;
                    case 2: {clrscr (); if (v[0][1]=='X' || v[0][1]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 1.\n\n");l=1;}
                                         else {v[0][1] ='X';matriz(v);d++;}}
                     break;
                    case 3: {clrscr (); if (v[0][2]=='X' || v[0][2]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 1.\n\n");l=1;}
                                         else {v[0][2] ='X';matriz(v);d++;}}
                     break;
                    case 4: {clrscr (); if (v[1][0]=='X' || v[1][0]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada ejugador 1.\n\n");l=1;}
                                         else {v[1][0] ='X';matriz(v);d++;}}
                     break;
                    case 5: {clrscr (); if (v[1][1]=='X' || v[1][1]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 1.\n\n");l=1;}
                                         else {v[1][1] ='X';matriz(v);d++;}}
                     break;
                    case 6: {clrscr (); if (v[1][2]=='X' || v[1][2]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 1.\n\n");l=1;}
                                         else {v[1][2] ='X';matriz(v);d++;}}
                     break;
                    case 7: {clrscr (); if (v[2][0]=='X' || v[2][0]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 1.\n\n");l=1;}
                                         else {v[2][0] ='X';matriz(v);d++;}}
                     break;
                    case 8: {clrscr (); if (v[2][1]=='X' || v[2][1]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 1.\n\n");l=1;}
                                         else {v[2][1] ='X';matriz(v);d++;}}
                     break;
                    case 9: {clrscr (); if (v[2][2]=='X' || v[2][2]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 1.\n\n");l=1;}
                                         else {v[2][2] ='X';matriz(v);d++;}}
                     break;
                    default: {l=1;clrscr(); matriz(v); printf(AMARILLO_T"\nJugador 1, no elegiste un numero entre 1 y 9.\n\n");}
                      } 
                   
                }
         else  { l=1; m=2;
             switch (x){
                     case 1: {clrscr (); if (v[0][0]=='X' || v[0][0]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[0][0] ='O';matriz(v);}}
                     break;
                    case 2: {clrscr (); if (v[0][1]=='X' || v[0][1]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[0][1] ='O';matriz(v);}}
                     break;
                    case 3: {clrscr (); if (v[0][2]=='X' || v[0][2]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[0][2] ='O';matriz(v);}}
                     break;
                    case 4: {clrscr (); if (v[1][0]=='X' || v[1][0]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[1][0] ='O';matriz(v);}}
                     break;
                    case 5: {clrscr (); if (v[1][1]=='X' || v[1][1]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[1][1] ='O';matriz(v);}}
                     break;
                    case 6: {clrscr (); if (v[1][2]=='X' || v[1][2]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[1][2] ='O';matriz(v);}}
                     break;
                    case 7: {clrscr (); if (v[2][0]=='X' || v[2][0]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[2][0] ='O';matriz(v);}}
                     break;
                    case 8: {clrscr (); if (v[2][1]=='X' || v[2][1]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[2][1] ='O';matriz(v);}}
                     break;
                    case 9: {clrscr (); if (v[2][2]=='X' || v[2][2]=='O') {matriz(v); printf(AMARILLO_T"\nEsta casilla ya fue selecionada jugador 2.\n\n");l=2;}
                                         else {v[2][2] ='O';matriz(v);}}
                     break;
                    default: {l=2;clrscr(); matriz(v); printf(AMARILLO_T"\nJugador 2, no elegiste un numero entre 1 y 9.\n\n");}
             }
            
           } 
    if ((v[0][0]==v[0][1]&& v[0][1]==v[0][2])||(v[0][0]==v[1][0]&&v[1][0]==v[2][0])
     || (v[0][2]==v[1][2]&&v[1][2]==v[2][2])||(v[2][2]==v[2][1]&&v[2][1]==v[2][0])
     ||(v[0][0]==v[1][1]&&v[1][1]==v[2][2])||(v[0][2]==v[1][1]&&v[1][1]==v[2][0])
     ||(v[0][1]==v[1][1]&&v[1][1]==v[2][1])||(v[1][0]==v[1][1]&&v[1][1]==v[1][2])) 
     {z=1; printf(AMARILLO_T"Felicidades jugador %d, ha ganado la partida.\n\n",m);d=10;}
             
    else if (d==5) { printf(AMARILLO_T"Los jugadores han empatado.\n\n"); d=10;}
    if (d==10) {printf(CYAN_T"Si desean volver a jugar, presionen 0, si desean terminar el juego, presionen 1. ");
       scanf("%d",&y);
       d=0;
    if (y==1) {z=1;}
    else if (y==0) {z=0;
    clrscr();
    char c[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    for(l=0;l<3;l++)
       for (y=0;y<3;y++)
          {
            v[l][y]=c[l][y];
          }
    matriz(v);      
    l=1;
    }
   }
  
 }return 0;
} 

  




