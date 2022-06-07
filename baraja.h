#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Baraja
{
 public:
  Baraja(int[13][4],int[13][4]);
  void genera(int [13][4],int[13][4]);
  void print(int [13][4]);
  void revuelve(int [13][4],int[13][4]);
};
