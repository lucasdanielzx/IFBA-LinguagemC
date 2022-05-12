void main ()
{
	int x;
	
	printf ("Digite um numero\n");
	scanf ("%d", &x);
	
	if (x == 5){
		printf ("O numero e igual a 5\n");
	}
	else {
		printf ("O numero nao e igual a 5\n");
	}
	
	if (x == 200){
		printf ("O numero e igual a 200\n");
	}
	else {
		printf ("O numero nao e igual a 200\n");
	}
	
	if (x == 400){
		printf ("O numero e igual a 400\n");
	}
	else {
		printf ("O numero nao e igual a 400\n");
	}
	
	if (x > 500 & x < 1000){
		printf ("O numero esta compreendido entre 500 e 1000\n");
	}
	else {
		printf ("O numero nao esta compreendido entre 500 e 1000\n");
	}
	
	system ("pause");
}
