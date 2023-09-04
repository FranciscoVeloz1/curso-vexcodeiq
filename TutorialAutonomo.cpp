#pragma region VEXcode Generated Robot Configuration
// Make sure all required headers are included.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


#include "vex.h"

using namespace vex;

// Brain should be defined by default
brain Brain;


// START IQ MACROS
#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)
// END IQ MACROS


// Robot configuration code.
motor ChasisIzq = motor(PORT1, false);
motor ChasisDer = motor(PORT6, true);
motor Torre = motor(PORT2, false);
motor Pinza = motor(PORT11, true);

#pragma endregion VEXcode Generated Robot Configuration

//----------------------------------------------------------------------------
//                                                                            
//    Module:       main.cpp                                                  
//    Author:       {author}                                                  
//    Created:      {date}                                                    
//    Description:  IQ project                                                
//                                                                            
//----------------------------------------------------------------------------

// Include the IQ Library
#include "iq_cpp.h"

// Allows for easier use of the VEX Library
using namespace vex;

int main() {
  Pinza.spin(forward, 100, percent);
  wait(100, msec);

  Pinza.stop();
  wait(10, msec);

  ChasisIzq.spin(forward, 100, percent);
  ChasisDer.spin(forward, 100, percent);
  wait(2000, msec);

  ChasisIzq.stop();
  ChasisDer.stop();
  wait(10, msec);

  Pinza.spin(reverse, 100, percent);
  wait(150, msec);

  Pinza.stop();
  wait(10, msec);

  ChasisIzq.spin(reverse, 100, percent);
  ChasisDer.spin(reverse, 100, percent);
  wait(2000, msec);

  ChasisIzq.stop();
  ChasisDer.stop();
  wait(10, msec);

  Torre.spin(forward, 100, percent);
  wait(500, msec);

  Torre.stop();
  wait(10, msec);

  Pinza.spin(forward, 100, percent);
  wait(100, msec);

  Pinza.stop();
  wait(10, msec);
}
