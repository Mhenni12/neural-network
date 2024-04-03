#ifndef INITIALIZE_NETWORK_H
#define INITIALIZE_NETWORK_H

#include "types.h"

// Initialize a neuron with random weights
void initialize_neuron(Neuron *neuron, int num_inputs);

// Initialize a layer with random neurons
void initialize_layer(Layer *layer, int num_neurons, int num_inputs);

// Initialize the neural network
void initialize_network(NeuralNetwork *network, int num_layers);

#endif