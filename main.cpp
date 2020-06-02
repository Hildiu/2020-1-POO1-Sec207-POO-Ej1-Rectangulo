//-- Dato de entrada: largo, ancho (double)
//-- Dato de salida : area, perimetro (double)

#include <iostream>
#include "CRectangulo.h"
using namespace std;

int main()
{
  CRectangulo  R1;  //-- constructor por defecto

  R1.setLargo(34.78);
  R1.setAncho(12.75);
  cout << "El area es : " << R1.Area() << "\n";
  cout << "El perimetro es : " << R1.Perimetro() << "\n";

  tnumero l,a;
  cout << "Largo: ";
  cin >>l;
  cout << "Ancho : ";
  cin >> a;

  CRectangulo R2;

  R2.setLargo(l);
  R2.setAncho(a);
  cout << "El area es : " << R2.Area() << "\n";
  cout << "El perimetro es : " << R2.Perimetro() << "\n";

  cout << "\nCreamos el tercer objeto\n";
  cout << "Largo : ";
  cin >> l;
  cout << "Ancho :";
  cin>>a;

  CRectangulo R3(l,a);  //-- estamos usando el propio constructor
  cout << "Area : " << R3.Area() << "\n";
  cout << "Perimetro : " << R3.Perimetro();

  return 0;
}

