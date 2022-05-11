// C = 5 / 9 ( F – 32 )

int centigrados(int numero1) {
	int c = 5 / 9 (numero1 - 32);
	return c;
}
	
int main () {
	
	int temp;
	int conv;
	int x;
	
	for (temp = 50; temp >= 50 & temp <= 150; temp++) {
		x = temp + 1;
		conv = c (x);
		printf ("%d Fahrenheit equivale a %d Centigrados\n", temp, conv);
	}
	
	system ("pause");
} 
