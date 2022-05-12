void main ()
{
	int x;
	
	printf ("Digite um numero\n");
	scanf ("%d", &x);
	
	if (x % 5 == 0){
		printf ("O numero e divisivel por 5\n");
	}
	else {
		printf ("O numero nao e divisivel por 5\n");
	}
	
	if (x % 3 == 0){
		printf ("O numero e divisivel por 3\n");
	}
	else {
		printf ("O numero nao e divisivel por 3\n");
	}
	
	system ("pause");
}
