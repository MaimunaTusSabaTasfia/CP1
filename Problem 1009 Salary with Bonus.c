#include <stdio.h>

int main() {

   char name[100];
 double beton, ekmasherincome, bonus, finalbeton;

 scanf("%s %lf %lf", &name, &beton, &ekmasherincome);

 bonus = ekmasherincome * 0.15;
 finalbeton = beton + bonus;

 printf("TOTAL = R$ %.2lf\n", finalbeton);


    return 0;
}
