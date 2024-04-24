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

#include "star.h"

#include <iomanip>
#include <iostream>
#include <string>

Star::Star(const std::string& starName, double radius)
    : name(starName), solarRadius(radius) {
  std::cout << "The star " << name << " was born." << std::endl;
}

Star::~Star() {
  double volumeRatio = std::pow(solarRadius, 3);
  std::cout << "The star " << name << " has gone supernova. It was "
            << std::fixed << std::setprecision(2) << volumeRatio
            << " times the volume of our sun." << std::endl;
}

std::string Star::GetName() const {
  return name;
}