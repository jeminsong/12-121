// Please fill in below.
// Jemin Song
// CPSC 121L-02
// 04/24/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <string>

#include "cpputils/graphics/image.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H

class Astronaut {
 public:
  Astronaut(const std::string& name, const graphics::Color& color);

  const std::string& GetName() const;
  const graphics::Color& GetColor() const;

  virtual std::string GetIconFilename() const;

 private:
  std::string name_;
  graphics::Color color_;
};

#endif  // ASTRONAUT_H