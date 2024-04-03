#ifndef OPTIMIZATION_TOOLS_H
#define OPTIMIZATION_TOOLS_H

#include "types.h"

// The loss function
double loss(Neuron *output_layer, int *target, int input_num);

#endif