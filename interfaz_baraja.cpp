#include "baraja.h"

Baraja::Baraja(int A[13][4],int B[13][4])
{
  genera(A,B);
}


void Baraja::genera(int A[13][4],int B[13][4])
{
  int i,j;
  for(j=0;j<4;j++)
    {
      for(i=0;i<13;i++)
	{
	  B[i][j]=0; //baraja vacia
	  A[i][j]=13*(j)+i; //baraja ordenada
	}
    }
}


void Baraja::print(int B[13][4])
{
  int i,j;  
  int r; //residuo
  for(j=0;j<4;j++)
    {
      for(i=0;i<13;i++)
	{
	  r=B[i][j]/13;
	  switch (r)
	    {
	      case 0:
		cout<<1+B[i][j]%13<<" de Bastos"<<endl;
		break;
	      case 1:
		cout<<1+B[i][j]%13<<" de Oros"<<endl;
		break;
	      case 2:
		cout<<1+B[i][j]%13<<" de Copas"<<endl;
		break;
	      case 3:
		cout<<1+B[i][j]%13<<" de Espadas"<<endl;
		break;
	    }
	}
    }
}


void Baraja::revuelve(int A[13][4],int B[13][4])
{
  srand(time(0));
  int fila,col;
  int v;
  int i,j;

  for(j=0;j<4;j++)
    {
      for(i=0;i<13;i++)
	{
	  v=1;
	  while(v==1)
	    {
	      fila=rand()%13;
	      col=rand()%4;
	      if(B[fila][col]==0) //es decir, si esta vacia
		{
		  B[fila][col]=A[i][j];
		  v=0;
		}
	    }
	}
    }
}

