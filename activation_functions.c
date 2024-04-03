#include <math.h>

// the sigmoid activation function
double sigmoid(double input)
{
    return 1 / (1 + exp(-input));
}

// the ReLU activation function
double ReLU(double input)
{
    if (input > 0)
        return input;
    else
        return 0;
}