#ifndef TYPES_H
#define TYPES_H

// Define the structure of a neuron, a layer, and a neural network

typedef struct Neuron
{
    double output;
    double *weights_tab;
    double bias;
    int activation_function;
} Neuron;

typedef struct Layer
{
    int num_neurons;
    Neuron *neurons_tab;
} Layer;

typedef struct NeuralNetwork
{
    int num_layers;
    Layer *layers_tab;
} NeuralNetwork;

#endif
