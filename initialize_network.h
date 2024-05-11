#ifndef INITIALIZE_NETWORK_H
#define INITIALIZE_NETWORK_H

#include "types.h"

// Initialize a neuron with random weights and a random bias
// Takes a pointer to a neuron and the number of inputs to that neuron
void initialize_neuron(Neuron *neuron, int num_inputs);

// Initialize a layer with random neurons
// Takes a pointer to a layer, the number of neurons in that layer, and the number of inputs to each neuron
void initialize_layer(Layer *layer, int num_neurons, int num_inputs);

// Initialize the neural network
// Takes a pointer to a neural network and the number of layers (both input and output layers are included)
void initialize_network(NeuralNetwork *network, int num_layers);

#endif
