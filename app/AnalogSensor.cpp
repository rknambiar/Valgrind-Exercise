/**
 * Copyright [2018] <Rohitkrishna Nambiar>
 *
 * @file    AnalogSensor.cpp
 * @author  Rohitkrishna Nambiar
 * @date    10/01/2018
 * @version 1.0
 *
 * @brief   ENPM808X Valgrind-Exercise.
 *
 * @section DESCRIPTION
 *
 * Class cpp file for Analog Sensor.
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
  std::vector<int> *readings = new std::vector<int>(mSamples, 10);

  double result = std::accumulate(readings->begin(), readings->end(), 0.0)
      / readings->size();

  delete readings;
  return result;
}


