int funcaoExpoente (int base, int expoente){
	int resultado = pow (base, expoente);
	return resultado; 
}

int main () {
	 
	int b, e, valor;
	 
	printf ("digite a base\n");
	scanf ("%d", &b);
	system ("cls");
	
	printf ("digite o expoente\n");
	scanf ("%d", &e);
	system ("cls");
	
	valor = funcaoExpoente (b, e);
	
	printf ("%d elevado a %d e igual a %d\n", b, e, valor);
}
