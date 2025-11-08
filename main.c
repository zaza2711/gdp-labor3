#include <stdio.h>

int main(void) {
   char vorname;
   int geburtsjahr,alter=25,matrikelnummer;
   double koerpergewicht;
    printf("======Hello-World========\n");
  printf("VORNAME: ");
  scanf("%s",&vorname);
  printf("MATRIKELNUMMER:   ");
  scanf("%d",&matrikelnummer);
  printf("KOERPERGEWICHT: ");
  scanf("%lf",&koerpergewicht);
  geburtsjahr=2025-25;
  printf("GEBURTSJAHR:  %.d\n",geburtsjahr);
return 0;
}
