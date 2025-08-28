#include <stdio.h>

int main() {

   int p1serial, p1unit;
    double p1price;

 int p2serial, p2unit;
  double p2price;

scanf("%d %d %lf", &p1serial, &p1unit, &p1price);

scanf("%d %d %lf", &p2serial, &p2unit, &p2price);

  double gunfol1 = p1unit * p1price;

 double gunfol2 = p2unit * p2price;

 double finalgunfol = gunfol1 + gunfol2;

printf("VALOR A PAGAR: R$ %.2lf\n", finalgunfol);

    return 0;
}
