#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zadanie1()
{
printf("Podaj promien kola: ");
float r;
scanf("%f", &r);
if(r<0)
{
    	printf("Niepoprawne dane");
}
	else
{	
    	float pole = 3.14*r*r;
    	printf("Pole kola o podanym promieniu wynosi: %.2f", pole);
}
   	getchar();
}

void zadanie2()
{
printf("Podaj dlugosc pierwszego boku ");
float a;
scanf("%f", &a);
printf("Podaj dlugosc drugiego boku ");
float b;
scanf("%f", &b);
float pole = a*b;
printf("Pole prostokata wynosi: %f", pole);
if(a==b)
{
	printf(", prostokat o takich bokach jest kwadratem");
}
	getchar();
}

void zadanie3()
{
int n;
printf("Podaj liczbe");
scanf("%i", &n);
if(n % 2 == 0)	
{
	printf("Ta liczba jest parzysta");	
}
else
printf("Ta liczba nie jest parzysta");
getchar();
}

void zadanie4()
{
//TUTAJ KOD ZADANIA 4
printf("Uruchomiono zad 4 ...");
int a, b, c, m;
printf("Podaj pierwsza liczbe ");
scanf("%i", &a);
printf("Podaj druga liczbe ");
scanf("%i", &b);
printf("Podaj trzecia liczbe ");
scanf("%i", &c);
m=a;
if(b>m) m=b;
if(c>m) m=c;
printf("Najwieksza z podanych liczb jest %i", m);
getchar();
}

void zadanie5()
{
//TUTAJ KOD ZADANIA 5
printf("Uruchomiono zad 5 ...");
double a, b, c, delta, x0, x1, x2, urojona, rzeczywista;
printf("Podaj rownanie kwadratowe w zapisie ax^2+bx+c: ");
scanf("%lf\n%lf\n%lf", &a, &b, &c);
delta=(b*b)-4*a*c;
if(delta == 0)
{
	x0=(-1)*b/(2*a);
	printf("Miejsce zerowe to %lf ", x0);
}
else if (delta > 0)
{
	x1=((-1)*b-sqrt(delta))/(2*a);
	x2=((-1)*b+sqrt(delta))/(2*a);
	printf("Miejsca zerowe to %lf, %lf ", x1, x2);
}
else
{
	urojona=sqrt(delta*(-1))/(2*a);
	rzeczywista=(-1)*b/(2*a);
	printf("Miejsca zerowe w zapisie liczb zespolonych to: %lf - %lfi, %lf + %lfi ", rzeczywista, urojona, rzeczywista, urojona);
	
}
getchar();
}
int main() 
{
    zadanie1();
    //zadanie2();
    //zadanie3();
    //zadanie4();
    //zadanie5();
}
