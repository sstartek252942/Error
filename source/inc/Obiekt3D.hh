#ifndef OBIEKT3D_HH
#define OBIEKT3D_HH

#include "rozmiar.h"
#include "MacierzOb.hh"
#include "Wektor3D.hh"
#include <iostream>

class Obiekt3D{
  protected:
  MacierzOb orientacja;
  Wektor3D srodek;
};

#endif
