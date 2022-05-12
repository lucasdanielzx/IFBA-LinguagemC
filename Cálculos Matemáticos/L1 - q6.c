void main()
{
	int a, b, c, d, e, f, r;
	
	a = 9;
	b = pow (23, 1/2);
	c = pow (2, 1/2);
	d = 4;
	e = 3;
	f = 23;
	
	r = (a + (b + c) / d + e) + f;
	
	printf ("A soma de (%d + (%d + %d) / %d + %d) + %d e: %d\n", a, b, c, d, e, f, r);
	system ("pause");
}
