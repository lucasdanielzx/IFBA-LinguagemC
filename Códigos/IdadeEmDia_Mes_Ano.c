void main ()
{
int x, a, m, d;

printf ("Digite sua idade em dias\n");
scanf ("%d", &x);

a = x / 365;
m = (x % 365) / 30;
d = (x % 365) % 30;

printf ("Sua idade,respectivamente, em anos, meses e dias e: %d anos, %d meses e %d dias\n", a, m, d);
system ("pause");
}
