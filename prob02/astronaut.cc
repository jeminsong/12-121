// Please fill in below.
// Jemin Song
// PSC 121L-02
// 04/24/24
// jeminsong0119@csu.fullerton.edu
// <Your GitHub username>
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "astronaut.h"

Astronaut::Astronaut(const std::string& name, const graphics::Color& color)
    : name_(name), color_(color) {}

const std::string& Astronaut::GetName() const { return name_; }

const graphics::Color& Astronaut::GetColor() const { return color_; }

std::string Astronaut::GetIconFilename() const { return "astronaut.bmp"; }