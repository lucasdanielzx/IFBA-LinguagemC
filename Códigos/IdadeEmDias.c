void main ()
{
int i, d;
char n [10];

printf ("Qual e o seu nome?\n");
scanf ("%s", &n);
printf ("Qual e a sua idade?\n");
scanf ("%d", &i);

d = i * 365;

printf ("A idade em dias de %s e: %d\n", n, d);
system ("pause");
}
