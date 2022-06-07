#include "baraja.h"

int main()
{
  int A[13][4]; //baraja inicial
  int B[13][4]; //baraja revuelta

  Baraja objeto(A,B); //se inicializa
  objeto.revuelve(A,B); //basado en A da B desordenado
  objeto.print(B); //imprime

  return 0;
}
