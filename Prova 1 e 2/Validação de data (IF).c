void main (){
	
	int d, m, a, b;
	
	printf ("Digite o dia: ");  
	scanf ("%d", &d); 
	system ("cls");
	
	printf ("Digite o mes: ");
	scanf ("%d", &m);
	system ("cls");
	
	printf ("Digite o ano: ");
	scanf ("%d", &a);
	system ("cls");

	if ( d <= 31) {
		if (m >= 1 & m <= 12){
			if (m != 2){
				printf ("A data e valida \n");
			}
			else {
				printf ("O ano e bissexto? \n");
					printf ("Se for bissexto digite 1 \n");
					printf ("Se nao for bissexto digite 2 \n");
				scanf ("%d", &b);
				system ("cls");
				
				if (b == 1){
					if (d >= 1 & d<= 29){
						printf ("A data e valida \n");
					}
				}
				if (b == 2){	
						printf ("A data n e valida \n");
					
				}
			}
		}
	}
	else{
		printf ("a data n e valida");
	}				
}
