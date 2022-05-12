void main(){
	
	int n;
	int i = 1;
	int valor;
	int num;
	int maior;

	printf ("Digite um valor para N: ");
	scanf ("%d", &n);
	system ("cls");
	
	while (i <= n) {
		i++;
		printf ("Digite um valor: \n");
		scanf ("%d", &valor);	
		system ("cls");
	
		num = num + valor;
			
		if (valor > maior ) {			
			maior = valor;		
		}		
	}
	printf ("O maior numero lido e: %d \n", maior);
}
