#include<stdio.h>
int main (){
    int i,a,r=0;
    printf("digite um numero:");
    scanf("%d",&a);
    printf("digite a qual valor  esse numero sera elevado:");
    scanf("%d",&r);
    for(i=1;i<r;i++){
    a +=a;
    }
    printf("%d \n", a);


}