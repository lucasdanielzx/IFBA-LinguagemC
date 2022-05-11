int adicao(int numero1, int numero2) {
	int resultadoAdicao = numero1 + numero2;
	return resultadoAdicao; 
}
	
int subtracao(int numero1, int numero2) {
	if (numero1 > numero2) {
	int resultadoSubtracao = numero1 - numero2;
	return resultadoSubtracao;
	}
	else {
		int resultadoSubtracao = numero2 - numero1;
	return resultadoSubtracao;
	}
}
	
int multiplicacao(int numero1, int numero2) {
	int resultadoMultiplicacao = numero1 * numero2;
	return resultadoMultiplicacao; 
}
	
int divisao(int numero1, int numero2) {
	if (numero1 > numero2) {
		int resultadoDivisao = numero1 / numero2;
		return resultadoDivisao;
	}
	else {
		int resultadoDivisao = numero2 / numero1;
		return resultadoDivisao;
	}
}

int main () {
	
	int n1, n2, soma, sub, mult, div;
	
	printf ("Digite o primeiro numero \n");
	scanf ("%d", &n1);
	system ("cls");
	
	printf ("Digite o segundo numero \n");
	scanf ("%d", &n2);
	system ("cls");
	
	soma = adicao (n1, n2);
	sub = subtracao (n1, n2);
	mult = multiplicacao (n1, n2);
	div = divisao (n1, n2);
	
	printf ("Resultado da Soma: %d\n", soma);
	printf ("Resultado da Subtracao: %d\n", sub);
	printf ("Resultado da Multiplicacao: %d\n", mult);
	printf ("Resultado da Divisao: %d\n", div);
	
	system ("pause");
}
 
