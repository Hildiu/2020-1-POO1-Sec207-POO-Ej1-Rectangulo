//
// Created by Maria Hilda Bermejo on 6/2/20.
//

#ifndef EJ_01_CRECTANGULO_H
#define EJ_01_CRECTANGULO_H

#include <iostream>
using namespace std;

using tnumero=double;

class CRectangulo {
private:
   tnumero largo;
   tnumero ancho;
public:
    CRectangulo(){};
    CRectangulo(tnumero _largo, tnumero _ancho):largo(_largo),ancho(_ancho){};
    virtual ~CRectangulo(){ cout << "\nDestruyendo el objeto ...\n";}
    //--- metodos de acceso: setter y los getters
    void    setLargo(tnumero _largo){ largo=_largo;}
    tnumero getLargo(){ return largo;}
    void    setAncho(tnumero _ancho){ ancho = _ancho;}
    tnumero getAncho(){return ancho;}
    //----
    tnumero Area();
    tnumero Perimetro();
};
#endif //EJ_01_CRECTANGULO_H
