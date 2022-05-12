void main ()
{
	int x;
	char n [15];
	
	printf ("Qual e o seu nome?\n");
	gets (n);
	system ("cls");
	
	printf ("%s, qual e a sua idade?\n", n);
	scanf ("%d", &x);
	system ("cls");
	
	if (x < 10){
		printf ("%s, voce devera pagar 30 reais\n", n);
	}
	if (x > 10 & x < 29){
	    printf ("%s, voce devera pagar 60 reais\n", n);	
	}
	if (x > 29 & x < 45){
	    printf ("%s, voce devera pagar 120 reais\n", n);	
	}
	if (x > 45 & x < 59){
    	printf ("%s, voce devera pagar 150 reais\n", n);	
	}	
	if (x > 59 & x < 65){
    	printf ("%s, voce devera pagar 250 reais\n", n);	
	}	
	if (x > 65){
    	printf ("%s, voce devera pagar 400 reais\n", n);	
	}	
	system ("pause");
}
