 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file leap-year.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 25 2023    
   * @brief The program says if the year that enters in input is a leap-year
   * @bug There are no known bugs
   * @see https://jutge.org/problems/
   */

#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program says if the year that enters in input is a leap year or not." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wwrong number of parameters." << std::endl;
    std::cout << "The number of parameters that should been inputed is 1." << std::endl;
    return false;
  }
  return true;
}

int GetYear(char* argv[]) {
  int año;
  año = std::stoi(argv[1]);
  return año;
}

int LeapOrNotLeap(int año) {
  int i, suma;
  int año_2 = año;
  int año_nuevo = año / 100;
  for(i = 0; año > 99; i++) {
    suma += año % 10;
    año = año / 10;
  }
  if (suma > 0) {
    if (año_2 % 4 == 0) {
      std::cout << "YES" << std::endl;
    }
    else {
      std::cout << "NO" << std::endl;
    }
  }
  else {
    if (año_nuevo % 4 == 0) {
    std::cout << "YES" << std::endl;
  }
  else {
    std::cout << "NO" << std::endl;
  }
  }    
  return 0;
}

int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  int año = GetYear(argv);
  LeapOrNotLeap(año);
  return 0;
}
