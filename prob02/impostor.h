// Please fill in below.
// Jemin Song
// CPSC 121L-02
// 4.24/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <string>

#include "astronaut.h"
#include "crewmate.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef IMPOSTOR_H
#define IMPOSTOR_H

class Impostor : public Astronaut {
 public:
  Impostor(const std::string& name, const graphics::Color& color);
  Impostor();

  void Kill(Crewmate& crewmate) const;
};

#endif
