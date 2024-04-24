// Please fill in below.
// Jemin Song
// CPSC 121L-02
// 04/22/24
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 12-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <string>

#include "star.h"

int main() {
  int num = 0;
  std::cout << "How many stars? ";
  std::cin >> num;

  for (int i = 0; i < num; ++i) {
    std::string name;
    double radius = 0;

    std::cout << "Enter star " << i + 1 << "'s name: ";
    std::cin >> name;

    std::cout << "What is the solar radius? ";
    std::cin >> radius;

    Star newStar(name, radius);
    std::cout << "Created star " << newStar.GetName() << std::endl;
  }
  return 0;
}