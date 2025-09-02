#include <stdio.h>

int main() {

 int N;
 scanf("%d",&N);

  int hour,minute,second,vagsesh;

  hour = N / 3600;
  vagsesh = N % 3600;

   minute = vagsesh / 60;
   vagsesh = vagsesh % 60;

 second = vagsesh / 1;
    printf ("%d:%d:%d\n",hour,minute,second);

    return 0;
}
