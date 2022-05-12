void main ()
{
	int a, b, c, d, e;
	int x;
	
	printf ("Digite um valor para a primeira variavel\n");
	scanf ("%d", &a);
	printf ("Digite um valor para a segunda variavel\n");
	scanf ("%d", &b);
	printf ("Digite um valor para a terceira variavel\n");
	scanf ("%d", &c);
	printf ("Digite um valor para a quarta variavel\n");
	scanf ("%d", &d);
	printf ("Digite um valor para a quinta variavel\n");
	scanf ("%d", &e);
	
	x =(3 * pow(a,3)) + (c * pow(b,2)) / (1 + 4 * d) - (e/2);
	
	printf ("Os valores das variaveis, respectivamente, sao: %d, %d, %d, %d, %d. O valor da soma e: %f\n", a, b, c, d, e, x);
	system ("pause");
}
