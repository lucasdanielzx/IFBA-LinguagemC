void main()
{
	int a, b, c, d, e, r;
	
	a = pow(2,5);
	b = sqrt(10 + pow(5,2));
	c = 3;
	d = 10;
	e = sqrt(5);
	
	r =  (a + (b / c)) / (d + e);
	
	printf("A soma de %d + %d : %d / %d + %d e: %d\n", a, b, c, d, e, r);
	system ("pause");
}
