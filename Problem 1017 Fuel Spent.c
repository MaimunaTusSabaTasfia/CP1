#include <stdio.h>

int main() {

   int hour,speed,distance;
  scanf("%d %d",&hour,&speed);

   distance = speed*hour;
  printf("%.3lf\n",distance/12.0);

    return 0;
}
