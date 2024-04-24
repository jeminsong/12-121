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

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H

class Crewmate : public Astronaut {
 public:
  Crewmate(const std::string& name, const graphics::Color& color);
  Crewmate();

  bool GetIsAlive() const;
  void SetIsAlive(bool alive);
  int GetTaskCount() const;
  void DoTask(const std::string& task);

  graphics::Color GetColor() const;

  std::string GetIconFilename() const override;

 private:
  bool alive_;
  int task_count_;
};

#endif  // CREWMATE_H
