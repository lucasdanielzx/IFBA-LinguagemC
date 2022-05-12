void main (){
	
	int x, y, z, t;
	
	printf("Digite sua primeira nota\n");
	scanf("%d", &x);
	printf("Digite sua segunda nota\n");
	scanf("%d", &y);
	printf("Digite sua terceira nota\n");
	scanf("%d", &z);
	
	t = (x + y + z) / 3;
	
	printf ("A media das suas notas e %d\n", t);
	
	system ("pause");
}
