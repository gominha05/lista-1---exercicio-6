#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int x1;
    int x2;
    int PR;
    int QR;
    int P;
    int Q;

    printf("Digite seu CPF sem os digitos:");
    scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i);

    x1 = 10*a + 9*b + 8*c + 7*d + 6*e + 5*f + 4*g + 3*h + 2*i;
    PR = x1%11;

    if(PR<2){
        P= 0;
    }
    else{
        P = 11 - PR;
    }
    x2 = 11*a + 10*b + 9*c + 8*d + 7*e + 6*f + 5*g + 4*h + 3*i + 2*P;
    QR = x2%11;

    if(QR<2){
        Q = 0;
    }
    else{
        Q = 11 - QR;
    }

    printf("Seu digito e: %d %d", P,Q);

    return 0;

}
