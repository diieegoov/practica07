 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file decimal_to_binary.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program transforms in a decimal the binary number that enters
   * @bug There are no known bugs
   * @see https://jutge.org/problems/
   */

#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program transforms a decimal number in his binary form." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wwrong number of parameters." << std::endl;
    std::cout << "The number of parameters that should been inputed is 1." << std::endl;
    return false;
  }
  return true;
}

int GetDecimal(char *argv[]) {
  int decimal;
  decimal = std::stoi(argv[1]);
  return decimal;
}

int TransformDecToBin(int decimal) {
    int binario = 0;
    int peso = 1;
    while (decimal > 0) {
        binario += (decimal % 2) * peso;
        decimal /= 2;
        peso *= 10;
    }
    return binario;
}

int PrintBin(int binario) {
  std::cout << binario << std::endl;
  return 0;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  int decimal = GetDecimal(argv);
  int binario = TransformDecToBin(decimal);
  PrintBin(binario);
  return 0;
}
