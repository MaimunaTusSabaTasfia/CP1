#include <stdio.h>

int main() {
 int N;
 scanf("%d",&N);
 printf("%d\n",N);

  int vagsesh;
  int note100;
  note100 = N/100;
  printf("%d nota(s) de R$ 100,00\n", note100);
  vagsesh = N%100;

  int note50;
  note50 = vagsesh/50;
  printf("%d nota(s) de R$ 50,00\n", note50);
  vagsesh = vagsesh%50;

  int note20;
  note20 = vagsesh/20;
  printf("%d nota(s) de R$ 20,00\n", note20);
  vagsesh = vagsesh%20;

  int note10;
  note10 = vagsesh/10;
  printf("%d nota(s) de R$ 10,00\n", note10);
  vagsesh = vagsesh%10;

  int note5;
  note5 = vagsesh/5;
  printf("%d nota(s) de R$ 5,00\n", note5);
  vagsesh = vagsesh%5;

  int note2;
  note2 = vagsesh/2;
  printf("%d nota(s) de R$ 2,00\n", note2);
  vagsesh = vagsesh%2;

  int note1;
  note1 = vagsesh/1;
  printf("%d nota(s) de R$ 1,00\n", note1);

    return 0;
}
