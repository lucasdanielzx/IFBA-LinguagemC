void main (){
	
	int c, x;
	float v;
	
	printf ("Digite o codigo do produto\n");
	scanf ("%d", &c);
	system ("cls");
	
	printf ("Digite a quantidade comprada\n");
	scanf ("%d", &x);
	system ("cls");
	
	if (c == 1001){
		v = 5.32 * x;
		printf ("Valor total devido pelo cliente: %.2f\n", v);
	}
	if (c == 1324){
		v = 6.45 * x;
		printf ("Valor total devido pelo cliente: %.2f\n", v);
	}
	if (c == 6548){
		v = 2.37 * x;
		printf ("Valor total devido pelo cliente: %.2f\n", v);
	}
	if (c == 987){
		v = 5.32 * x;
		printf ("Valor total devido pelo cliente: %.2f\n", v);
	}
	if (c == 7623){
		v = 6.45 * x;
		printf ("Valor total devido pelo cliente: %.2f\n", v);
	}
	
	system ("pause");
}
