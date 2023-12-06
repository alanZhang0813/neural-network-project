# create-model
Use TensorFlow in Python to create a convolutional neural network (CNN) for processing the image dataset.
## Table of Contents
1. [Introduction](#introduction)
2. [Workflow](#workflow)
3. [Requirements and Installation](#requirements-and-installation)

## Introduction <a name="introduction"></a>
This segment of the project is written in Python, which we have made in Jupyter Notebook.
To use it, it will require an image dataset and two directories for testing and training. The code will 
use TensorFlow to create a neural network and then train it with the dataset, as well as evaluating the results.

## Workflow <a name="workflow"></a>
The dataset used must be filled with images of the same 32x32 pixel size. It will then
plot out the data of each dataset and use TensorFlow to structure the CNN.

The model is then trained on the dataset provided and there is a line to evaluate the accuracy of the training results.
Finally, the model is exported as a .keras file to be used in the frugally-deep code of the program.

## Requirements and Installation <a name="requirements-and-installation"></a>
- Any Python IDE such as Jupyter Notebook