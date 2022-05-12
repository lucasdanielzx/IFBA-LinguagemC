void main(){
	
	int i, a, b, c;
	
	printf ("Digite um numero entre 1 e 3\n");
	scanf ("%d", &i);
	system ("cls");
	
	printf ("Digite o primeiro numero\n");
	scanf ("%d", &a);
	system ("cls");
	
	printf ("Digite o segundo numero\n");
	scanf ("%d", &b);
	system ("cls");
	
	printf ("Digite o terceiro numero\n");
	scanf ("%d", &c);
	system ("cls");
	
	if (i == 1){
		if (a > b & b > c){
		printf ("Numeros digitados em ordem crescente: %d, %d e %d\n", c, b, a);
		}
		if (a > c & c > b){
		printf ("Numeros digitados em ordem crescente: %d, %d e %d\n", b, c, a);
		}
		if (b > a & a > c){
		printf ("Numeros digitados em ordem crescente: %d, %d e %d\n", c, a, b);
		}
		if (b > c & c > a){
		printf ("Numeros digitados em ordem crescente: %d, %d e %d\n", a, c, b);
		}
		if (c > b & b > a){
		printf ("Numeros digitados em ordem crescente: %d, %d e %d\n", a, b, c);
		}
		if (c > a & a > b){
		printf ("Numeros digitados em ordem crescente: %d, %d e %d\n", b, a, c);
		}
	}
	
	if (i == 2){
		if (a > b & b >c){
		printf ("Numeros digitados em ordem decrescente: %d, %d e %d\n", a, b, c);
		}
		if (a > c & c > b){
		printf ("Numeros digitados em ordem decrescente: %d, %d e %d\n", a, c, b);
		}
		if (b > a & a >c){
		printf ("Numeros digitados em ordem decrescente: %d, %d e %d\n", b, a, c);
		}
		if (b > c & c >a){
		printf ("Numeros digitados em ordem decrescente: %d, %d e %d\n", b, c, a);
		}
		if (c > b & b >a){
		printf ("Numeros digitados em ordem decrescente: %d, %d e %d\n", c, b, a);
		}
		if (c > a & a >b){
		printf ("Numeros digitados em ordem decrescente: %d, %d e %d\n", c, a, b);
		}
	}
	
	if (i == 3){
		if (a > b & b > c){
		printf ("Numeros digitados em ordem: %d, %d e %d\n", c, a, b);
		}
		if (a > c & c > b){
		printf ("Numeros digitados em ordem: %d, %d e %d\n", b, a, c);
		}
		if (b > a & a > c){
		printf ("Numeros digitados em ordem: %d, %d e %d\n", c, b, a);
		}
		if (b > c & c > a){
		printf ("Numeros digitados em ordem: %d, %d e %d\n", a, b, c);
		}
		if (c > b & b > a){
		printf ("Numeros digitados em ordem: %d, %d e %d\n", a, c, b);
		}
		if (c > a & a > b){
		printf ("Numeros digitados em ordem: %d, %d e %d\n", b, c, a);
		}
	}
}
