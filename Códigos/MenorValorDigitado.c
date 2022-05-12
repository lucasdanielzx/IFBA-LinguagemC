void main ()
{
	int a, b;
	
	printf ("Digite um numero\n");
	scanf ("%d", &a);
	printf ("Digite um numero\n");
	scanf ("%d", &b);
	
	if (a < b){
		printf ("O menor valor digitado e %d\n", a);
	}
	else {
		printf ("O menor valor digitado e %d\n", b);
	}
	system ("pause");	
}
