#include <stdio.h>

int menorNumero(int numero1, int numero2){
    int menor = 0;
    if ( numero1 < numero2 )
        menor = numero1;
    else 
        menor = numero2;
    return menor;
}

int main() {
    int x, y, menorValor = 0;
    printf( "Digite um numero: " );
    scanf( "%d", &x);
    system ("cls");
    printf( "Digite um numero: " );
    scanf( "%d", &y);
    system ("cls");
    
    menorValor = menorNumero( x, y );
    
    printf("Valor de X: %d \nValor de Y: %d\nMenor Valor: %d\n", x, y, menorValor);
    return 0;
}
