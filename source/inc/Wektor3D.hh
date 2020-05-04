#ifndef WEKTOR3D_HH
#define WEKTOR3D_HH

#include "rozmiar.h"
#include "Wektor.hh"
#include <math.h>
#include <iostream>



class Wektor3D : public Wektor<double, 3>{
public:
  Wektor3D() : Wektor<double, 3>() {}
  Wektor3D(double x, double y, double z) {array[0] = x; array[1] = y; array[2] = z;}
  Wektor3D(const Wektor<double, 3> M) : Wektor<double, 3>(M) {}
};

#endif
