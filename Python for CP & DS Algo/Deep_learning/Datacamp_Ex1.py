import numpy as np
input_data = np.array([[3, 5], [1, -1], [0, 0], [8, 4]])
weights = {'node_1': np.array(
    [4, -5]), 'output': np.array([2, 7]), 'node_0': np.array([2, 4])}


def relu(input):
    # Define your relu activation function here
    # Calculate the value for the output of the relu function: output
    output = max(input, 0)

    # Return the value just calculated
    return(output)


def predict_with_network(input_data_row, weights):
    # Calculate node 0 value: node_0_output
    node_0_input = (input_data * weights['node_0']).sum()
    node_0_output = relu(node_0_input)

    # Calculate node 1 value: node_1_output
    node_1_input = (input_data * weights['node_1']).sum()
    node_1_output = relu(node_1_input)

    # Put node values into array: hidden_layer_outputs
    hidden_layer_outputs = np.array([node_0_output, node_1_output])

    # Calculate model output (do not apply relu)
    input_to_final_layers = (hidden_layer_outputs * weights['output']).sum()
    model_output = relu(input_to_final_layers)
    return model_output


results = []
for input_data_row in input_data:
    # Append prediction to results
    results.append(predict_with_network(input_data_row, weights))

# Print model output
print(results)
