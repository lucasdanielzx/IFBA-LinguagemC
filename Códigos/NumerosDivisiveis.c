void main()
{
	int a, b;
	
	printf ("Digite o primeiro numero\n");
	scanf ("%d", &a);
	printf ("Digite o segundo numero\n");
	scanf ("%d", &b);
	
	if (a % b == 0){
		printf ("O primeiro numero e divisivel pelo segundo\n");
	}
	else {
		printf ("O primeiro numero nao e divisivel pelo segundo\n");
	}
	system ("pause");
}
