#include<stdio.h>

int main()
{
char caracter;
printf("********************************************\n");
printf("* universidad Alva Edison                  *\n");
printf("* Cesar Palalia Arce                       *\n");
printf("* Metodologia de la programacion           *\n");
printf("* ID:F170012                               *\n");
printf("********************************************\n");
puts("determinar si un caracter es vocal o consonante");
printf("ingrese cualquier caracter del teclado");
scanf("%c",&caracter);
if (caracter=='a'&&caracter=='e'&&caracter=='i'&&caracter=='o'&&caracter=='u'&&caracter=='A'&&caracter=='E'&&caracter=='I'&&caracter=='O'&&caracter=='U')
{
	printf("es vocal");
}
else if(caracter=='b'&&caracter=='c'&&caracter=='d'&&caracter=='f'&&caracter=='g'&&caracter=='h'&&caracter=='j'&&caracter=='k'&&caracter=='l'&&caracter=='m'&&caracter=='n'&&caracter=='p'&&caracter=='q'&&caracter=='r'&&caracter=='s'caracter=='t'&&caracter=='v'&&caracter=='w'&&caracter=='x'&&caracter=='y'&&caracter=='z')
{
	printf("es consonante");
}
else 
{
	printf("error intente de nuevo")
}
return 0;
}



                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

