//
// Created by Maria Hilda Bermejo on 6/2/20.
//

#include "CRectangulo.h"


tnumero CRectangulo::Area()
{
  return largo*ancho;
}

tnumero CRectangulo::Perimetro()
{
  return 2*largo + 2*ancho;
}

