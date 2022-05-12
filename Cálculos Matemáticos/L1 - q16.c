void main()
{
	int a, b, c, d, e, f, g, r;
	
	a = 57;
	b = sqrt(5);
	c = pow (3,2);
	d = 32;
	e = 21;
	f = 17;
	g = sqrt(5+ pow(10,2));
	
	r = (a / (b + c)) + (32 / (21-17)) + g;
	
	printf("A soma de (%d : %d +%d) + (%d : %d - %d) + %d  e: %d\n", a, b, c, d, e, f, g, r);
	system ("pause");
}
