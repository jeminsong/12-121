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

#ifndef STAR_H
#define STAR_H

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

class Star {
 private:
  std::string name;
  double solarRadius;

 public:
  Star(const std::string& starName, double radius);
  ~Star();
  std::string GetName() const;
};

#endif