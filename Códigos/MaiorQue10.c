void main ()
{
	int x;
	
	printf ("Digite um numero\n");
	scanf ("%d", &x);
	
	if (x > 10){
		printf ("O numero digitado (%d) e maior que 10\n", x);
	}
	else {
		printf ("O numero digitado (%d) e menor que 10\n", x);
	}
	system ("pause");
}
