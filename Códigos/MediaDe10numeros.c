void main (){
	
	int numero;
	int soma;
	int cp;
	float media;
	
	soma = 0;
	cp = 1;
	
	while (cp <= 10) {
		printf ("Digite um numero \n");
		scanf ("%d", &numero);
		system ("cls");
		soma = soma + numero;
		cp = cp + 1;
	}
	media = soma / 10;
	printf ("A media dos 10 numeros digitados e: %.2f\n", media);
}
