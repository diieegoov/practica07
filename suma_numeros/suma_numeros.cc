 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file suma_numeros.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 24 2023    
   * @brief The program sums the digits of the number that enters in input
   * @bug There are no known bugs
   * @see https://jutge.org/problems/
   */

#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program sums all the digits of the number that enters in input." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wwrong number of parameters." << std::endl;
    std::cout << "The number of parameters that should been inputed is 1." << std::endl;
    return false;
  }
  return true;
}

long int GetNumber(char *argv[]) {
  long int numero;
  numero = std::stoi(argv[1]);
  return numero;
}

int GetSum(long int numero) {
  int unidad{0}, suma{0};
  for (int i = 0; numero > 9; i++) {
    unidad = numero % 10;
    numero = numero / 10;
    suma += unidad;
  }
  return suma;
}

int GetNum(long int numero) {
  int unidad{0}, suma{0};
  for (int i = 0; numero > 9; i++) {
    unidad = numero % 10;
    numero = numero / 10;
    suma += unidad;
  }
  return numero;
}


int PrintSuma(int suma, int numerox) {
  std::cout << suma + numerox << std::endl;
  return 0;
}


int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  long int numero = GetNumber(argv);
  int suma = GetSum(numero);
  int numerox = GetNum(numero);
  PrintSuma(suma, numerox);
  return 0;
}
