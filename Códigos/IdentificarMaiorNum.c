void main (){
	
	int x, y, z;
	
	printf ("Digite um numero\n");
	scanf ("%d", &x);
	printf ("Digite um numero\n");
	scanf ("%d", &y);
	printf ("Digite um numero\n");
	scanf ("%d", &z);
	
	if (x>y & x>z){
		printf ("O numero %d e o maior\n", x);
	}
	if (y>x & y>z){
		printf ("O numero %d e o maior\n", y);
	}
	if (z>y & z>x){
		printf ("O numero %d e o maior\n", z);
	}
	
	system ("pause");
}
