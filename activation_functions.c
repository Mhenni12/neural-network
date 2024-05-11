#include <math.h>

// the sigmoid activation function: outputs a value between 0 and 1
double sigmoid(double input)
{
    return 1 / (1 + exp(-input));
}

// the ReLU activation function: outputs either 0 or the input value
double ReLU(double input)
{
    if (input > 0)
        return input;
    else
        return 0;
}
