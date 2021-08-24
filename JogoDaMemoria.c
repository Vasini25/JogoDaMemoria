#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>


int main(){

int t, temp;
int v[5], w[5], i=0, x, z;

srand(time(NULL));

printf("                    \nTecle 'ENTER' para comecar");
getch();
system("cls");

for(t=0;t<10;t++){
system("cls");
printf("\n\n %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d", rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10);
printf("\n\n                       Jogo da Memoria                \n\n\n  Neste jogo voce tera que memorizar sequencias de numeros\n  apresentados por 5 segundos e depois digita-los na tela");
printf("\n\n %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d   %d", rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10, rand()%10);
Sleep(0750);
}
printf("\n\n\n\n         .....Pressione 'ENTER' para iniciar.....");
getch();
system("cls");

for(i=0;i<10;i++){
    w[i]=rand()%10;
}

for(x=0;x<5;x++){
        for(z=5;z>0;z--){
            printf("\n\n\n\n\n\n\n                           Memorize:");
  for(i=0;i<=x;i++){
    printf(" %d", w[i]);
}
    printf("\n\n                           Tempo: %d", z);
    sleep(1);
    system("cls");
}

printf("\n\n\n\n\n\n\n                           Resposta: ");
  for(i=0;i<=x;i++){
    scanf("%d", &v[i]);
  }
  for(i=0;i<=x;i++){
    if(v[i]!=w[i]){
        z=100;
    }
  }
  if(z==100){
        printf("\n                          Resposta errada!");
    printf("\n\n                         Resposta certa: ");
    for(i=0;i<=x;i++){
        printf("%d ", w[i]);
    }
    break;
  }
  if(x<4){
  printf("\n                          Resposta certa!\n                          Proximo...");
  Sleep(2500);
  system("cls");
  }
  else{
    printf("\n                       Boa memoria!  \n                       Todas as respostas corretas!");
  }
}

printf("\n\n\n                     Tecle 'ENTER' para finalizar");
getch();

printf("\n\n\n");
return 0;
}

