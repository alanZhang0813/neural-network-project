# Frugally-Deep Model Evaluation
Implement Frugally-Deep to import and assess the CNN model developed by the Python library, enabling evaluation and user testing.
## Table of Contents
1. [Introduction](#introduction)
2. [Workflow](#workflow)
3. [Requirements and Installation](#requirements-and-installation)

## Introduction <a name="introduction"></a>
This concluding segment of our project, developed in C++, focuses on evaluating the effectiveness of the model generated in the previous steps. The model, initially created and exported as a .keras file by the 'create-model' library, is transformed into a "deep_model.json" file by Frugally-Deep for further processing and predictions.

## Workflow <a name="workflow"></a>
1. Convert the .keras file into a Frugally-Deep JSON format.
2. The main.cpp file initializes the Model and calls the predict() function to determine the class and the confidence level of the image at the specified input image path. This path should correspond to an image from the CIFAR-10 Dataset.
3. In Model.cpp, the input image path is opened using OpenCV, and the image is transformed into a Frugally-Deep tensor. We then utilize the predict(Frugally-Deep tensor) method from the Frugally-Deep library to ascertain the class of the input image and the confidence level of this prediction.

## Requirements and Installation <a name="requirements-and-installation"></a>
- A C++17 or higher compatible compiler.
- OpenCV library (see [OpenCV GitHub](https://github.com/opencv/opencv)).
- Frugally-Deep library (available at [Frugally-Deep GitHub](https://github.com/Dobiasd/frugally-deep)).
