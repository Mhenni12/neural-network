#include <stdlib.h>
#include "types.h"

#define INPUT_SIZE 5  // The initial number of neurons
#define HIDDEN_SIZE 3 // The number of neurons in each hidden layers
#define OUTPUT_SIZE 1 // The number of neurons in the output layer

// Function to generate a random double between 0 and 1 (inclusive)
double generate_random_double()
{
    return (double)rand() / RAND_MAX;
}

// Initialize a neuron with random weights and a random bias
// Takes a pointer to a neuron and the number of inputs to that neuron
void initialize_neuron(Neuron *neuron, int num_inputs)
{
    neuron->weights_tab = (double *)malloc(num_inputs * sizeof(double));
    for (int i = 0; i < num_inputs; i++)
    {
        neuron->weights_tab[i] = generate_random_double();
    }
    neuron->bias = generate_random_double();
}

// Initialize a layer with random neurons
// Takes a pointer to a layer, the number of neurons in that layer, and the number of inputs to each neuron
void initialize_layer(Layer *layer, int num_neurons, int num_inputs)
{
    layer->neurons_tab = (Neuron *)malloc(num_neurons * sizeof(Neuron));
    for (int i = 0; i < num_neurons; i++)
    {
        initialize_neuron(&(layer->neurons_tab[i]), num_inputs);
    }
}

// Initialize the neural network
// Takes a pointer to a neural network and the number of layers (both input and output layers are included)
void initialize_network(NeuralNetwork *network, int num_layers)
{
    network->layers_tab = (NeuralNetwork *)malloc(num_layers * sizeof(NeuralNetwork));

    // Initialize the first layer with the initial number of neurons (INPUT_SIZE) corresponding to the inputs
    Layer input_layer = network->layers_tab[0];
    initialize_layer(&input_layer, INPUT_SIZE, INPUT_SIZE);

    // Initialize the hidden layers
    int num_inputs_per_layer = INPUT_SIZE;
    for (int i = 1; i < num_layers - 1; i++)
    {
        initialize_layer(&(network->layers_tab[i]), HIDDEN_SIZE, num_inputs_per_layer);
        num_inputs_per_layer = HIDDEN_SIZE;
    }

    // Initialize the output layer with OUTPUT_SIZE neurons and HIDDEN_SIZE inputs
    Layer output_layer = (network->layers_tab[num_layers - 1]);
    initialize_layer(&output_layer, OUTPUT_SIZE, HIDDEN_SIZE);
}
