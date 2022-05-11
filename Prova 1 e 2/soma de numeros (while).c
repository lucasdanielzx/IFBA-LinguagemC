void main () {
	
	int nt;
	int s;
	
	s = 0;
	
	while (nt != 0) {
		printf ("Digite um numero \n");
		scanf ("%d", &nt);
		system ("cls");
		
		s = s + nt;
	}
	printf ("A soma dos numeros digitados e: %d\n", s);
}
