// Please fill in below.
// Jemin Song
// CPSC 121L-02
// 4/24/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "crewmate.h"

#include <iostream>

Crewmate::Crewmate(const std::string& name, const graphics::Color& color)
    : Astronaut(name, color), alive_(true), task_count_(0) {}

Crewmate::Crewmate()
    : Astronaut("No Name", graphics::Color(0, 0, 0)),
      alive_(true),
      task_count_(0) {}

bool Crewmate::GetIsAlive() const { return alive_; }

void Crewmate::SetIsAlive(bool alive) { alive_ = alive; }

int Crewmate::GetTaskCount() const { return task_count_; }

void Crewmate::DoTask(const std::string& task) {
  task_count_++;
  std::cout << GetName() << " is doing " << task << std::endl;
}

graphics::Color Crewmate::GetColor() const {
  if (alive_) {
    return Astronaut::GetColor();
  } else {
    graphics::Color baseColor = Astronaut::GetColor();
    graphics::Color shifted((baseColor.Red() + 256) / 2,
                            (baseColor.Green() + 256) / 2,
                            (baseColor.Blue() + 256) / 2);
    return shifted;
  }
}

std::string Crewmate::GetIconFilename() const {
  if (alive_) {
    return "astronaut.bmp";
  } else {
    return "ghost.bmp";
  }
}