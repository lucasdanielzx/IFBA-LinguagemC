void main (){


int n = 0;
int i = 0;
int impar = 1;
printf ("Digite a quaantidade de numeros impares a serem impressos\n");
scanf ("%d", &n);

while (i < n){
	printf ("%d\n", impar);
	impar = impar + 2;
	i++;
}
}
