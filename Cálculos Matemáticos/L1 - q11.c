void main()
{
	int a, b, c, d, e, f, g, h, r;
	
	a = 10;
	b = pow(5,2);
	c = 12;
	d = 5;
	e = 33;
	f = 15;
	g = 5;
	h = 1;
	
	r = ((a + b) / (c - d)) + ((e - f) / (g + h));
	
	printf("A soma de (%d + %d / %d - %d) + (%d - %d / %d + %d) e: %d\n", a, b, c, d, e, f, g, h, r);
	system ("pause");
}
