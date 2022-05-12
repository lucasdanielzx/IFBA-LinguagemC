void main (){
	
	int s;
	float a, p;
	
	printf ("Qual e o seu sexo?\n");
	printf ("\n");
	printf ("Digite 1 para masculino\n");
	printf ("Digite 2 para feminino\n");
	printf ("\n");
	scanf ("%d", &s);
	system ("cls");
	
	printf ("Digite sua altura\n");
	printf ("\n");
	printf ("Obs: utilize . (Exemplo: 1.65)");
	printf ("\n");
	scanf ("%f", &a);
	system ("cls");
	
	if (s == 1){
		p = (72.7 * a) - 58;
		printf ("O seu peso ideal e: %.2f\n", p);
	}
	else {
		p = (62.1 * a) - 44.7;
		printf ("O seu peso ideal e: %.2f\n", p);
	}
}
