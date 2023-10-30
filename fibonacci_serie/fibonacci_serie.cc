/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática  
 * Informática Básica 2023-2024
 * @file fibonacci_serie.cc
 * @author Diego Vegas Acosta alu0101651361@ull.edu.es
 * @date Oct 24 2023    
 * @brief The program gives the quantity of numbers of the Fibonacci's serie that enters in the input
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P57548
 */
  
#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program prints the quantity of numbers from the fibonacci's serie that enters in input." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "The number or parameters that should been inputed is 1." << std::endl;
    return false;
  }
  return true;
}

int GetQuantity(char *argv[]) {
  int cantidad;
  cantidad = std::stoi(argv[1]);
  return cantidad;
}

int FibonacciNum(int cantidad) {
  int numero_1 = 0;
  int numero_2 = 1;
  int nuevo; 
  for (int i = 0; cantidad > i; i++) {
    std::cout << numero_1 << " ";
    nuevo = numero_1; // nuevo and numero_1 = 0
    numero_1 = numero_2; // numero_1 and numero_2 = 1
    numero_2 = nuevo + numero_1; // numero_2 = 1 + 0 = 1
  }
  std::cout << std::endl;
  return 0;
}

int main(const int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  int cantidad = GetQuantity(argv);
  FibonacciNum(cantidad);
  return 0;
}
