# Frugally-Deep Model Evaluation
Implement Frugally-Deep to import and assess the CNN model developed by the Python library, enabling evaluation and user testing.
## Table of Contents
1. [Introduction](#introduction)
2. [Workflow](#workflow)
3. [Requirements and Installation](#requirements-and-installation)

## Introduction <a name="introduction"></a>
This concluding segment of our project, developed in C++, focuses on evaluating the effectiveness of the model generated in the previous steps. The model, initially created and exported as a .keras file by the 'create-model' library, is transformed into a "fdeep_model.json" file by Frugally-Deep for further processing and predictions.

## Workflow <a name="workflow"></a>
1. The `main.cpp` file creates the `Model`, and calls predict() to predict the class of the image at the specified input image path. The input path should refer to an image from the CIFAR-10 Dataset.
3. In `Model.cpp`, we open the input image path using OpenCV functionality and tranform this image into a Frugally-Deep tensor. We then use predict() method from the Frugally-Deep's library to predict the class of the input image and the confidence it predicts with.
4. The model outputs its confidence level and the predicted closest match for the selected image class.

## Requirements and Installation <a name="requirements-and-installation"></a>
- A C++17 or higher compatible compiler.
- OpenCV library (see [OpenCV GitHub](https://github.com/opencv/opencv)).
- Frugally-Deep library (available at [Frugally-Deep GitHub](https://github.com/Dobiasd/frugally-deep)).
