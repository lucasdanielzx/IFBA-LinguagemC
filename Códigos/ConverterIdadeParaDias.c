void main ()
{
	int a, m, d, t;
	
	printf ("Digite sua idade em anos\n");
	scanf ("%d", &a);
	printf ("Digite quantos meses voce tem\n");
	scanf ("%d", &m);
	printf ("Digite quantos dias voce tem\n");
	scanf ("%d", &d);
	
	t = (a * 365) + (m * 30) + d;
	
	printf ("A sua idade em dias e %d", t);
}
