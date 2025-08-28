#include <stdio.h>

int main() {

   int serial, wpm;
  double dollar, multiplication;

  scanf("%d %d %lf", &serial, &wpm, &dollar);

  multiplication = wpm * dollar;
  printf("NUMBER = %d\n",serial);
 printf("SALARY = U$ %.2lf\n",multiplication);


    return 0;
}
