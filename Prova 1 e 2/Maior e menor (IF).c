void main(){
	
	int x;
	int y;
	int z;
	
	printf ("Digite o primeiro numero: \n");
	scanf ("%d", &x);
	system ("cls");
	
	printf ("Digite o segundo numero: \n");
	scanf ("%d", &y);
	system ("cls");
	
	printf ("Digite o terceiro numero: \n");
	scanf ("%d", &z);
	system ("cls");
	
	if ( x > y && y > z ){
		
		printf ("\n");
		printf (" O maior: %d\n", x);
		printf (" O menor: %d\n", z);		
	}
	
	if ( x > z && z > y ){
		
		printf ("\n");
		printf (" O maior: %d\n", x);
		printf (" O menor: %d\n", y);			
	}
	
	if ( y > x && x > z ){
		
		printf ("\n");
		printf (" O maior: %d\n", y);
		printf (" O menor: %d\n", z);		
	}
	
	if ( y > z && z > x ){
		
		printf ("\n");
		printf (" O maior: %d\n", y);
		printf (" O menor: %d\n", x);		
	}
	
	if ( z > x && x > y ){
		
		printf ("\n");
		printf (" O maior: %d\n", z);
		printf (" O menor: %d\n", y);		
	}
	
	if ( z > y && y > x ){
		
		printf ("\n");
		printf (" O maior: %d\n", z);
		printf (" O menor: %d\n", x);		
	}	
}
