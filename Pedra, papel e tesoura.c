#include<stdio.h>
int main(){
    
    int j1,j2,r;
     
    printf("Jogador 1\nEscolha pedra=1, papel=2, ou tesoura=3\n");
scanf("%d",&j1);
    printf("Jogador 2\nEscolha pedra=1, papel=2,  ou tesoura=3\n");
scanf("%d", &j2);

    r=j1-j2;
    
if(j2==j1){
    printf("Empate");
}
 else if(r==-1||r==2){
    printf("Jogador 2 ganhou");
}
else{
    printf("Jogador 1 ganhou");
}
}
 