#include <stdio.h>
int main(void) { 
int temperatur;
printf("Temperatur(0-100):\n");
scanf("%d",&temperatur);
// *verschaltete if-else Anweisungen*/
if(temperatur< 0)
{
printf("Es friert!\n");
}
else if (temperatur<=15)
{
printf ("Es ist kalt\n");
}
else if ( temperatur<=25)
{
    printf("Angenehme Temperatur\n");
}
else {
    printf("Es ist warm\n");
}
return 0;
}