void main (){
	
	int numero;
	int soma;
	int cp;
	
	numero = 0;
	cp = 1;
	
	while (cp <= 10) {
		printf ("Digite um numero \n");
		scanf ("%d", &numero);
		system ("cls");
		soma = soma + numero;
		cp = cp + 1;
	}
	printf ("A soma dos 10 numeros digitados e: %d\n", soma);
}
