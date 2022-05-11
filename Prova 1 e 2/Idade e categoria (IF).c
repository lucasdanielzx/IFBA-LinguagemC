void main (){
	
	int x;
	
	printf ("Ola, nadador! Digite sua idade \n");
	scanf ("%d", &x);
	system ("cls");
	
	if (x >= 5 & x <= 7){
		printf ("Sua categoria e: Infantil A \n");
	}
	if (x >= 8 & x <= 10){
		printf ("Sua categoria e: Infantil B \n");
	}
	if (x >= 11 & x <= 13){
		printf ("Sua categoria e: Juvenil A \n");
	}
	if (x >= 14 & x <= 17){
		printf ("Sua categoria e: Juvenil B \n");
	}
	if (x >= 18){
		printf ("Sua categoria e: Senior \n");
	}
	system ("pause");
}
