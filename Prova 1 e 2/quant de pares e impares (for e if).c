void main (){
	
	int numero;
	int i = 0;
	int p = 0;
	int valor;

	for (numero = 1; numero <= 10; numero++){
	
		printf ("Digite um numero: ");
		scanf ("%d", &valor);
		system ("cls");
		
		if ( valor % 2 == 0){	
			p = p + 1;	
		}
		else{
			i = i + 1;
		}	
	}

	printf ("o total de numeros pares foram: %d\n o total de numero impares foram %d\n", p, i);
}
