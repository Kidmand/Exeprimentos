#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void clear()
{
    system("@cls||clear");
}


/*int main()
{
  int x,y;
  int v[2][30]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
  for ( y=0;y<30;y++)
  {   clear();
      v[0][y]=10000;
      imprimeVertical(v);
      devuelve(v);
      usleep(100000000);
  }
  clear();
  devuelve(v);
  imprimeVertical(v);
  if (y==30)
  {for (int z=1;z<2;z++)
  {   
      v[z][29]=10000;
      imprimeHorizontal(v);
      devuelve(v);
      usleep(100000);
  }}
}

void imprimeVertical(int v[2][30])
{   
    for (int i=0;i<30;i++)
    {
        printf("\n%d ",v[0][i]);
    }
}

void imprimeHorizontal(int v[2][30])
{
    for (int i=0;i<2;i++)
    {
        printf("%d ",v[i][29]);
    }
}

void devuelve(int v[2][30])
{   int v1[2][30]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
    for (int i=0;i<30;i++)
    {
        v[0][i]=v1[0][i];
    }
}*/

/*int main ()

{ const N=10000;
  int k;
  assert (N>=0);
  for (k=0;((k*k*k)+k)<N;k++);
  assert (((k*k*k)+k)>=N % (((k-1)*(k-1)*(k-1))+(k-1))<N);
  printf (" El valor de K es %d %d\n",k,k-1);
  return 0;
}*/


int const tiempo=9000;



void matriz_imprime(char cua[18][20],char pri[18]){
     printf("\n\n\n\t\t\t----------------------------------------------\n");
    for (int counter=0; counter<18; counter++) {
        printf("\t\t\t||%c",pri[counter]);
    for (int counter2=0; counter2<20; counter2++) {
        printf ("%c ",cua[counter][counter2]);
    } printf("%c||\n",pri[counter]);
  }
  printf("\t\t\t----------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}



void rebote_matriz_derecha2(int *x, int *y,char cua[18][20], char pri[18]){
    int a=*x;
    int b=*y;
    for (a; a>=0; a--,b++) {
       if (a==17&& b==19) {
          break;
     }
        clear();
        cua[a][b]='*';
        pri[a]='|';
        matriz_imprime(cua, pri);
        usleep(tiempo);
        cua[a][b] = ' ';
        pri[a]=' ';
        *x=a;
        *y=b;
  }
 }


void rebote_matriz_abajo2(int *x, int *y,char cua[18][20], char pri[18]){
    int a=*x;
    int b=*y;
    for (b; b<20; a++,b++) {
        clear();
        cua[a][b]='*';
        pri[a]='|';
        matriz_imprime(cua, pri);
        usleep(tiempo);
        cua[a][b] = ' ';
        pri[a]=' ';
        *x=a;
        *y=b;
  }
 }

void rebote_matriz_izquierdo2(int *x, int *y,char cua[18][20], char pri[18]){
    int a=*x;
    int b=*y;
    for (a; a<18;a++, b--) {
        if (a==17&& b==19) {
          break;
     }
        clear();
        cua[a][b]='*';
        pri[a]='|';
        matriz_imprime(cua, pri);
        usleep(tiempo);
        cua[a][b] = ' ';
        pri[a]=' ';
        *x=a;
        *y=b;
        
   }
 }

void rebote_matriz_arriba2(int *x, int *y,char cua[18][20], char pri[18]){
    int a=*x;
    int b=*y;
    for (b; b>=0; a--,b--) {
         if (a==17&& b==19) {
          break;
     }
        clear();
        cua[a][b]='*';
        pri[a]='|';
        matriz_imprime(cua, pri);
        usleep(tiempo);
        cua[a][b] = ' ';
        pri[a]=' ';
        *x=a;
        *y=b;
   } 
 }











void rebote_matriz_derecha(int *x, int *y,char cua[18][20], char pri[18]){
    int a=*x;
    int b=*y;
    for (a; a<18; a++,b++) {
        if (a==0&& b==18) {
          break;
       }
        clear();
        cua[a][b]='*';
        pri[a]='|';
        matriz_imprime(cua, pri);
        usleep(tiempo);
        cua[a][b] = ' ';
        pri[a]=' ';
        *x=a;
        *y=b;
  }
 }


void rebote_matriz_abajo(int *x, int *y,char cua[18][20], char pri [18]){
    int a=*x;
    int b=*y;

    for (b; b>=0; a++,b--) {
        if ((a==0&& b==18)||(a==0&&b==0)) {
          break;
        }
        clear();
        cua[a][b]='*';
        pri[a]='|';
        matriz_imprime(cua, pri);
        usleep(tiempo);
        cua[a][b] = ' ';
        pri[a]=' ';
        *x=a;
        *y=b;    
  }
 }

void rebote_matriz_izquierdo(int *x, int *y,char cua[18][20], char pri[18]){
    int a=*x;
    int b=*y;
    for (a; a>=0;a--, b--) {
        if ((a==0&& b==2)||(a==0&&b==0)) {
          break;
        }
        clear();
        cua[a][b]='*';
        pri[a]='|';
        matriz_imprime(cua, pri);
        usleep(tiempo);
        cua[a][b] = ' ';
        pri[a]=' ';
        *x=a;
        *y=b;
  }
 }

void rebote_matriz_arriba(int *x, int *y,char cua[18][20], char pri[18]){
    int a=*x;
    int b=*y;
    for (b; b<20; a--,b++) {
        if ((a==0&& b==2)||(a==0&&b==0)) {
    break;
     }
        clear();
        cua[a][b]='*';
        pri[a]='|';
        matriz_imprime(cua, pri);
        usleep(tiempo);
        cua[a][b] = ' ';
        pri[a]=' ';
        *x=a;
        *y=b;

 if (a==0&& b==18) {
    break;
     }
   }
 }

void matriz_recibe(char cua[18][20]) {
  for (int counter=0; counter<18; counter++) {
    for (int counter2=0; counter2<20; counter2++) {
        cua[counter][counter2] = ' ';
        
    }
  }
}


void segundo_rebote(int *x, int *y, char cua[18][20], char pri[18]){
       int a=*x;
       int b=*y;
       for (int counter=0; counter<6; counter++) {  
        rebote_matriz_abajo2(&a, &b, cua, pri);
        rebote_matriz_izquierdo2(&a, &b, cua, pri);
        rebote_matriz_arriba2(&a, &b, cua, pri);
        rebote_matriz_derecha2(&a, &b, cua, pri);
        *x=a;
        *y=b;
      }
  }


void primer_rebote(int *x, int *y, char cua[18][20], char pri[18]){
       int a=*x;
       int b=*y;
       for (int counter=0; counter<6; counter++) {  
        rebote_matriz_arriba(&a, &b, cua, pri);
        rebote_matriz_izquierdo(&a, &b, cua, pri);
        rebote_matriz_abajo(&a, &b, cua, pri);
        rebote_matriz_derecha(&a, &b, cua, pri);
        *x=a;
        *y=b;
      }
  }




void imprime (char a[20]) {
    for (int counter=0, counter2=19; counter<20; counter++,counter2--) { 
        
    printf("\t\t\t||%c                                                 %c||\n",a[counter],a[counter2]);
  }
 }



void array_reverso(char a[20]) {
   for(int counter=20; counter>=0; counter--){
    clear();         
    printf("\t\t\t-------------------------------------------------------\n");
    a[counter]= '|';
    imprime(a);
    printf("\t\t\t-------------------------------------------------------\n");
    usleep(tiempo); 
    a[counter]=' ';
    
   }
}

void array(char a[20]) {
   for(int counter=0; counter<20; counter++){
    clear();
    a[counter]= '|';
    imprime(a);
    usleep(tiempo); 
    a[counter]=' ';
    if (counter==19) { 
        array_reverso(a);
        counter=0;
    }  
  }
}


int main(void) {
    char v[18]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
   // array(v);
    int a=0;
    int b=0;
   char cua[18][20];
   matriz_recibe(cua);
   //matriz_imprime(cua);
   //matriz_aterisco(cua);
for (int counter=0; counter!=-1; counter ++) {
    primer_rebote(&a, &b, cua, v);
    segundo_rebote(&a, &b, cua, v); 
 }
    return 0; 
 }




///////////////////// Calculadora de matrices //////////////////////////////

/*void uno_principal(int a, int b, int cua[a][b]) {
    for (int counter=0; counter<a-1; counter++) {
      for (int counter2=1; counter2<b; counter2++) {
        cua[0][counter2]/=cua[0][0];
      }
      cua[counter+1][0] = 0; 
    }
  }





void imprime_merf(int a, int b, int cua[a][b]){
    for (int counter=0; counter<a; counter++) {
        printf("\n");
        printf("\t\t\t|");
    for (int counter2=0; counter2<b; counter2++) {
        if (cua[counter][counter2]<=9){
          printf("%d |",cua[counter][counter2]);
        } else  printf("%d|",cua[counter][counter2]);
    } 
  } printf("\n\n\n\n\n\n\n\n");
}


 void recibe_matriz(int a, int b) {
  int A[a][b];

  for (int counter=0; counter<a; counter++) {
    for (int counter2=0; counter2<b; counter2++) {
      printf("Ingrese un valor para la coordenada (%d,%d): ",counter+1,counter2+1);
      scanf("%d",&A[counter][counter2]);
    }
  }
    clear();
    printf("\n\n\n");
    imprime_merf(a,b,A);
    uno_principal(a,b,A);
    imprime_merf(a,b,A);
 }
*/
/*int valor_coordenada(int a, int b, cua[a][b]) {
  return cua[a][b];
}*/


/*void merf(int a, int b, cua[a][b]) {
  for (int counter=0; counter<a; counter++) {
    for (int counter2=1; counter2<b; counter2++) {
      if (valor_coordenada(counter, counter2, cua)==0){

      }
    }
  }
}*/

/*int main () {
  clear();
  int altura, ancho;
  printf ("Ingrese la altura de su matriz: ");
  scanf("%d",&altura);
  printf ("Ingrese el ancho de su matriz: ");
  scanf ("%d",&ancho);
  
  recibe_matriz(altura,ancho);
 
}*/
