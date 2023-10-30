 /** 
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file binary_to_decimal.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 24 2023
   * @brief The program reads a number x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P96767
   */

#include <iostream>
#include <math.h>
#include <iomanip>


int main() {
  double numero, coeficiente, resultado{0};
  std::cin >> numero;
  int i{0};
  while (std::cin >> coeficiente) {
    resultado += coeficiente * pow(numero, i);
    ++i;
    }
  std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;

  return 0;
}
