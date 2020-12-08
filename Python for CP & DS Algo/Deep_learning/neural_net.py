inputs=[1,2,3,2.5]
weights=[[0.3,0.6,-0.5,1.0],
         [0.5,0.7,0.1,-0.67],
         [-0.7,-1.6,3.4,1.2]]
biases=[2,3,0.5,1.3]
m_neuron=[]
for n_layers,bias in zip(weights,biases):
    n_output=0
    for neurons,ins in zip(n_layers,inputs):
        n_output+=neurons*ins
    n_output+=bias
    m_neuron.append(n_output)
print(m_neuron)