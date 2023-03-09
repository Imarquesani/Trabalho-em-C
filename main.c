#include <stdio.h>

int main()
{
   int matricula = 38956478;
   int ra = 569182356;
   int idade [] = {20, 30 , 40 , 50};
   idade [1] = 22;
   
   printf("endereço de memória: %p, Endereço de contéudo: %d \n" , &matricula, matricula);
   printf("endereço de memória: %p, Endereço de contéudo: %d \n" , &ra, ra);
   printf("%d" ,idade[1]);
   

    return 0;
}
