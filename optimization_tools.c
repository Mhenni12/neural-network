#include "types.h"

// Loss function

double loss(Neuron *output_layer, int *target, int input_num)
{
    double sum = 0;
    for (int i = 0; i <= input_num; i++)
    {
        sum += target[i] * log(output_layer[i].output) + (1 - target[i]) * log(1 - output_layer[i].output);
    }
    return -(sum / input_num);
}