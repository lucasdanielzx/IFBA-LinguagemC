void main ()
{ 
int f, i, d, c;

printf ("Digite o custo de fabrica\n");
scanf ("%d", &f);

d = f * 28 / 100;
i = f * 45 / 100;

c = f + d + i;

printf ("O custo do consumidor sera %d\n", c);
system ("pause");
}
