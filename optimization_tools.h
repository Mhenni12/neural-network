#ifndef OPTIMIZATION_TOOLS_H
#define OPTIMIZATION_TOOLS_H

#include "types.h"

// Loss function
double loss(double predicted_output, int target_output);

// gradient descent function

double gradient_descent(double input, double target_output, double learning_rate, int num_iterations);

#endif
