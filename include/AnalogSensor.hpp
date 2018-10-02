/**
 * Copyright [2018] <Rohitkrishna Nambiar>
 *
 * @file    AnalogSensor.hpp
 * @author  Rohitkrishna Nambiar
 * @date    10/01/2018
 * @version 1.0
 *
 * @brief   ENPM808X Valgrind-Exercise.
 *
 * @section DESCRIPTION
 *
 * Class hpp file for Analog Sensor.
 */

#pragma once

#include <iostream>

class AnalogSensor {
 public:
  explicit AnalogSensor(unsigned int samples);
  ~AnalogSensor();
  int Read();
 private:
    unsigned int mSamples;
};
