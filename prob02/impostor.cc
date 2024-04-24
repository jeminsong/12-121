// Please fill in below.
// Jemin Song
// CPSC 121L-02
// 4.24.2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "impostor.h"

#include <iostream>

#include "crewmate.h"

Impostor::Impostor(const std::string& name, const graphics::Color& color)
    : Astronaut(name, color) {}

Impostor::Impostor() : Astronaut("No Name", graphics::Color(0, 0, 0)) {}

void Impostor::Kill(Crewmate& crewmate) const {
  std::cout << Astronaut::GetName() << " killed " << crewmate.GetName()
            << std::endl;
  crewmate.SetIsAlive(false);
}