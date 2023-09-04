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
controller Controller = controller();
motor ChasisIzq = motor(PORT1, false);
motor Torre = motor(PORT2, false);
motor ChasisDer = motor(PORT6, true);
motor Pinza = motor(PORT11, true);



// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

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
  Torre.setStopping(hold);

  while(true) {
    ChasisIzq.spin(forward, Controller.AxisA.position(), percent);
    ChasisDer.spin(forward, Controller.AxisD.position(), percent);

    if(Controller.ButtonRUp.pressing()) {
      Pinza.spin(forward, 60, percent);
    } else if(Controller.ButtonRDown.pressing()) {
      Pinza.spin(reverse, 60, percent);
    } else {
      Pinza.stop();
    }

    if(Controller.ButtonLUp.pressing()) {
      Torre.spin(forward, 60, percent);
    } else if(Controller.ButtonLDown.pressing()) {
      Torre.spin(reverse, 60, percent);
    } else {
      Torre.stop();
    }

    wait(20, msec);
  }
}
