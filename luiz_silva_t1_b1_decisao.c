#include <stdio.h>
#include <stdlib.h>

int 
main() 
  {
  int x, y, z, xy, xz, yz;
  printf("\nPrograma para descobrir se os 3 valores podem formar um triangulo, e qual sua classificacao: equilatero, escaleno ou isoceles. \n\nValor do lado 1 = ");
  scanf("%i", &x);
  printf("Valor do lado 2 = ");
  scanf("%i", &y);
  printf("Valor do lado 3 = ");
  scanf("%i", &z);

  xy = x + y;
  xz = x + z;
  yz = y + z;

  if((((x > abs(y - z)) && (x < yz)) && ((y > abs(x - z)) && (y < xz))) && (((z > abs(x - y)) && (z < xy)))) // 15 parenteses
    {
    if((x == y) && (y == z)) // 3 parenteses
      {
      printf("\nE um triangulo equilatero\n");
      }
    if((((x == y) && (x != z)) || ((x == z) && (x != y))) || (((y == z) && (y != x)))) // 12 parenteses 
      {
      printf("\nE um triangulo isoceles\n");
      }
    if(((x != y) && (y != z)) && ((x != z))) // 6 parenteses 
      {
      printf("\nE um triangulo escaleno\n");
      }
    } 
  else 
    {
    printf("\nNao e um triangulo\n");
    }

  return (0);
  }
