#include <iostream>
using namespace std;
#include <cstdlib>

//Ejercicio 3

int main(){
   const int sueldofijo=15000, premiofijo=2000;
   //const int premiofijo = 2000;
   int autosvendidos, sueldototal;
   cout << "Ingrese la cantidad de autos vendidos: ";
   cin >> autosvendidos;

   sueldototal = (autosvendidos*premiofijo)+sueldofijo;

   cout << " Su sueldo es: " << sueldototal;


 system("pause>nul");
 return 0;
}
