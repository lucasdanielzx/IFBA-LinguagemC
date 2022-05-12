void main (){
	
	int numero, numero2, numero3;
	numero = 1;
	numero2 = 1;
	numero3 = 1;
	
	printf ("Usando o comando while: \n");
	
	while (numero <= 100){
		printf ("%d\n", numero);
		numero++;
	}
	 
	printf ("\n");
	printf ("Usando o comando for: \n");
	
	for (numero2 = 1; numero2 <= 100; numero2++){
		printf ("%d\n", numero2);
	}
	
	printf ("\n");
	printf ("Usando o comando do while: \n");
	
	do{
		printf ("%d\n", numero3);
		numero3++;
	}
	while (numero3 <= 100);
}
