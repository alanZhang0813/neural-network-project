# Frugally-Deep Model Evaluation

Implement Frugally-Deep to import and assess the CNN model developed by the Python library, enabling evaluation and user testing.

## Table of Contents
1. [Introduction](#introduction)
2. [Workflow](#workflow)
3. [Requirements and Installation](#requirements-and-installation)
4. [Implementation Details](#implementation-details)
5. [Usage](#usage)
6. [Code Structure](#code-structure)

## Introduction <a name="introduction"></a>
This concluding segment, developed in C++, focuses on evaluating the Convolutional Neural Network (CNN) model generated in previous steps. Using the Frugally-Deep library, the model exported as a .keras file is transformed into a JSON format for further processing and predictions in a C++ environment.

## Workflow <a name="workflow"></a>
1. Convert the trained CNN model from .keras format to Frugally-Deep's JSON format.
2. Utilize `main.cpp` to initialize the Model, loading the JSON file, and perform predictions on specified input images from the CIFAR-10 Dataset.
3. In `Model.cpp`, images are loaded and processed using OpenCV and then passed to the Frugally-Deep model for classification and confidence assessment.

## Requirements and Installation <a name="requirements-and-installation"></a>
- C++17 or higher compatible compiler.
- OpenCV library for image processing ([OpenCV GitHub](https://github.com/opencv/opencv)).
- Frugally-Deep library for deep learning model conversion and inference ([Frugally-Deep GitHub](https://github.com/Dobiasd/frugally-deep)).

## Implementation Details <a name="implementation-details"></a>
The implementation involves loading the CNN model in JSON format, processing input images with OpenCV, and using Frugally-Deep for predictions. The model predicts the class of the input image along with the confidence level of its prediction.

## Usage <a name="usage"></a>
1. Convert your trained .keras model to a Frugally-Deep compatible JSON format.
2. Compile and run `main.cpp`, providing the path to the JSON model and the input image.
3. Review the output to assess the predicted class and confidence level.

## Code Structure <a name="code-structure"></a>
- **main.cpp**: Entry point for the application. Handles model loading and performs prediction on a specified image.
- **Model.cpp/h**: Defines the `Model` class, which encapsulates the logic for loading the Frugally-Deep model, processing images, and performing predictions.


