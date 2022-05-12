void main()
{
	float x, y, t, px, py;
	
	printf ("Digite a primeira variavel\n");
	scanf ("%f", &x);
	printf ("Digite a segunda variavel\n");
	scanf ("%f", &y);
	
	t = x + y;
	
	px = (100 * x) / t;
	py = (100 * y) / t;
	
	printf ("O percentual de %f na soma e: %f e o percentual de %f e: %f\n", x, px, y, py);
	system ("pause");
}
