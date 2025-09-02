#include <stdio.h>

int main() {

    int N;
    scanf("%d",&N);
int year,month,day,vagsesh;

 year = N/365;
 vagsesh = N%365;
  printf("%d ano(s)\n",year);

  month = vagsesh/30;
  vagsesh = vagsesh%30;
  printf("%d mes(es)\n",month);

  day = vagsesh/1;
  printf("%d dia(s)\n", day);


    return 0;
}
