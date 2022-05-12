void main ()
{
	int x, y;
	
	printf ("Digite o primeiro numero\n");
	scanf ("%d", &x);
	printf ("Digite o segundo numero\n");
	scanf ("%d", &y);
	
	if (x < y){
		printf ("A ordem crescente e: %d, %d\n", x, y);
	}
	else {
		printf ("A ordem crescente e: %d, %d\n", y, x);
	}
}
