void main ()
{
	int c;
	float f;
	
	printf ("Digite a temperatura em graus centigrados\n");
	scanf ("%d", &c);
	
	f = (9 * c + 160) / 5;
	
	printf ("A temperatura em fahrenheit sera: %f\n", f);
	system ("pause");
}
