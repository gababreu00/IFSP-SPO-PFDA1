#include <stdio.h>
#include <math.h>

int main (void) {

int Idade = 22;
int Meses = 8;
int Dias = 14;


//scanf ("%d/n", Idade);
//scanf ("%d/n", Meses);
//scanf ("%d/n", Dias);

float imc;
float Peso;
float Altura;

printf ("Informe seu peso:");
scanf ("%f", &Peso);

printf ("Informe sua altura:");
scanf ("%f", &Altura);

 imc = Peso / (Altura * Altura);
do {

	if (imc > 0.0 && imc < 18.5) { 
	    printf("Baixo peso"); }
	else if (imc >= 18.5 && imc <= 24.9) {
	    printf("Peso normal"); }
	else if (imc >= 25.0 && imc <= 29.9) {
	    printf("Excesso de peso"); }
	else if (imc >= 30.0 && imc <= 34.9) {
	    printf("Obesidade"); }
	else
	    printf("Obesidade extrema");
}while(Altura == 0 && Peso == 0);
	
	
	
printf("Desligado");

    return 0;
}
