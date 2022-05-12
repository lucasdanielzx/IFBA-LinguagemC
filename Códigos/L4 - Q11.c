void main ()
{
	int x;
	
	printf ("Digite um numero\n");
	scanf ("%d", &x);
	
	if (x % 10 == 0){
		printf ("O numero e divisivel por 10\n");
	}
	else {
		printf ("O numero nao e divisivel por 10\n");
	}
	
	if (x % 5 == 0){
		printf ("O numero e divisivel por 5\n");
	}
	else {
		printf ("O numero nao e divisivel por 5\n");
	}
	
	if (x % 2 == 0){
		printf ("O numero e divisivel por 2\n");
	}
	else {
		printf ("O numero nao e divisivel por 2\n");
	}
	
	system ("pause");
}
