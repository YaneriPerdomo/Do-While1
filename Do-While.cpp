#include<stdio.h>

int main(){
    char opc;



    do{
       fflush(stdin);
       printf("Te digo algo: ");
       printf("/nDigite Presionar la letra 'B': ");
       scanf("%c",&opc);
    }while(opc == 'B');

    do{
       printf("Me haces feliz, y esa es la razon sufiente, para elegirte una y mil veces ");
       printf("/nDigite Teneis que presionar la 'T' para finalizar Gabriel: ");
       scanf("%c",&opc);
    }while(opc == 'T' || opc == 't');


    return 0;

    }
