# frugally-deep
Use frugally-deep implementation to import the model created by the Python create-model library and
evaluate the results and let the user test it.
## Table of Contents
1. [Introduction](#introduction)
2. [Workflow](#workflow)
3. [Requirements and Installation](#requirements-and-installation)

## Introduction <a name="introduction"></a>
This final part of the project is written in C++, and represents the step where we can evaluate how well the model was
created. The model has been exported from the create-model and is now stored as "fdeep_model.json".

## Workflow <a name="workflow"></a>
1. In main.cpp, it attempts to initialize a variable carrying the created neural network.
2. Of the 10 possible subclasses in the CIFAR-10 image dataset, one should be chosen as the predicted class.
3. Then, in Model.cpp, code from frugally-deep (https://github.com/Dobiasd/frugally-deep) to predict the accuracy of
that guess.
4. The confidence that the model has is printed out, along with its result for the closest match.

## Requirements and Installation <a name="requirements-and-installation"></a>
- C++17 compatible compiler.
- OpenCV (https://github.com/opencv/opencv).
- Frugally_Deep library (https://github.com/Dobiasd/frugally-deep).