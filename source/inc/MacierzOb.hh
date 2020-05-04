#ifndef MACIERZOB_HH
#define MACIERZOB_HH

#include "rozmiar.h"
#include "Macierz.hh"
#include <math.h>
#include <iostream>



class MacierzOb : public Macierz<double, 3>{
public:
  MacierzOb() : Macierz<double, 3>() {}
  MacierzOb(double alfa, wymiar w)
  {
    double tempAlfa = alfa / 180 * M_PI;
    switch (w) {
    case x:
      array[1][1] = cos(tempAlfa);
      array[1][2] = sin(tempAlfa);
      array[2][1] = -sin(tempAlfa);
      array[2][2] = cos(tempAlfa);
    //Zera
      array[0][2] = 0;
      array[0][1] = 0;
      array[2][0] = 0;
      array[1][0] = 0;
    //Jeden
      array[0][0] = 1;
    break;
    case y:
      array[2][2] = cos(tempAlfa);
      array[2][0] = sin(tempAlfa);
      array[0][2] = -sin(tempAlfa);
      array[0][0] = cos(tempAlfa);
    //Zera
      array[1][0] = 0;
      array[2][1] = 0;
      array[0][1] = 0;
      array[1][2] = 0;
    //Jeden
      array[1][1] = 1;
    break;
    case z:

      array[0][0] = cos(tempAlfa);
      array[0][1] = sin(tempAlfa);
      array[1][0] = -sin(tempAlfa);
      array[1][1] = cos(tempAlfa);
    //Zera
      array[2][0] = 0;
      array[2][1] = 0;
      array[0][2] = 0;
      array[1][2] = 0;
    //Jeden
      array[2][2] = 1;
    break;
    }
  }
  MacierzOb(const Macierz<double, 3> M) : Macierz<double, 3>(M) {}
};

#endif
