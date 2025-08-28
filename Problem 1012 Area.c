#include <stdio.h>

int main() {

 double A, B, C;
scanf("%lf %lf %lf", &A, &B, &C);

  //Triangle = 0.5 * ucchota * vumi
 printf("TRIANGULO: %.3lf\n", 0.5*A*C);

  //Circle = pi * R * R
 printf("CIRCULO: %.3lf\n", 3.14159 *C*C);

  //Trapezoid = ((A+B)*h)/2
 printf("TRAPEZIO: %.3lf\n",((A+B)*C)/2);

  //Quadrado = B*B
 printf("QUADRADO: %.3lf\n",B*B);

  //Retangulo = A*B
 printf("RETANGULO: %.3lf\n", A*B);

    return 0;
}
