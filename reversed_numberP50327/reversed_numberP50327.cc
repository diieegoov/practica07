 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file P57548.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program sums two numbers
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */

#include <iostream>

int main() {
  std::string numero;
  std::cin >> numero;
  for (int contador = numero.size()-1; contador >= 0; --contador) {
    std::cout << numero.at(contador);
  }
  std::cout << '\n';

  return 0;
}
