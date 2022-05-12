void main()
{
	int a, b, c, d, e, r;
	
	a = 5;
	b = 8;
	c = 5;
	d = pow (3,2);
	e = 1;
	
	r = a + ((b / c)/(d - e));
	
	printf("A soma de %d + %d : %d / %d - %d e: %d\n", a, b, c, d, e, r);
	system ("pause");
}
