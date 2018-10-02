/**
 * Copyright [2018] <Rohitkrishna Nambiar>
 *
 * @file    main.cpp
 * @author  Rohitkrishna Nambiar
 * @date    10/01/2018
 * @version 1.0
 *
 * @brief   ENPM808X Valgrind-Exercise.
 *
 * @section DESCRIPTION
 *
 * Main program for bug fixing.
 */

#include <iostream>
#include <AnalogSensor.hpp>

int main() {
  AnalogSensor lightSensor(5);
  std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
  bool terminator = true;
  if (terminator) {
    std::cout << "DONE" << std::endl;
  }
  return 0;
}
