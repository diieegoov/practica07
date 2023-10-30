 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file binary_to_decimal.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 24 2023
   * @brief The program transforms the binary number that enters in decimal
   * @bug There are no known bugs
   * @see https://jutge.org/problems/
   */

#include <iostream>
#include <math.h>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This programs transforms a binary number in a decimal one." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "The number or parameters that should been inputed is 1." << std::endl;
    return false;
  }
  return true;
}

int GetBinaryNumber(char *argv[]) {
  int binario;
  binario = std::stoi(argv[1]);
  return binario;
}

int TransformBinToDec(int binario) {
  int suma{0}, contador{0};
  int numero_1 = binario;
  for (int i{0}; !(binario == 1); i++) {
    numero_1 = binario % 10;
    binario = binario / 10;
    suma += (numero_1 * pow(2, i));
    contador++;
  }
  int decimal = suma + (1 * pow(2, contador));
  return decimal;
}

int PrintDecimal(int decimal) {
  std::cout << decimal << std::endl;
  return 0;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  int binario = GetBinaryNumber(argv);
  int decimal = TransformBinToDec(binario);
  PrintDecimal(decimal);
  return 0;
}
