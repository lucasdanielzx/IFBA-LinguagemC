void main ()
{
int x, h, m, s;

printf ("Escreva a duracao do evento em segundos\n");
scanf ("%d", &x);

h = x / 3600;
m = (x % 3600) / 60;
s = (x % 3600) % 60;

printf ("O evento durou %d horas, %d minutos e %d segundos\n", h, m, s);
system ("pause");

}
