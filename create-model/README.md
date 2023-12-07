# CIFAR-10 CNN Model Creation
Utilize TensorFlow in Python within a Jupyter Notebook to develop a Convolutional Neural Network (CNN) tailored for the CIFAR-10 image dataset.
## Table of Contents
1. [Introduction](#introduction)
2. [Workflow](#workflow)
3. [Requirements and Installation](#requirements-and-installation)

## Introduction <a name="introduction"></a>
This portion of the project, developed in Python and housed in a Jupyter Notebook, is dedicated to working with the CIFAR-10 dataset. It requires an augmented image dataset, divided into training and testing directories. Using TensorFlow, the script constructs and trains a CNN, and evaluates its performance.

## Workflow <a name="workflow"></a>
The CIFAR-10 dataset, consisting of 32x32 pixel images, is the primary focus. Initially, the script visualizes the data distribution across the training and testing sets. Following this, TensorFlow is employed to build the CNN structure.

Training commences with the specified dataset, and the model's accuracy is assessed post-training. Upon completion, the model is exported as a .keras file, facilitating its integration into the project's frugally-deep framework.

## Requirements and Installation <a name="requirements-and-installation"></a>
- A Python IDE, preferably Jupyter Notebook, for script execution and visualization.
- TensorFlow library, specifically for CNN model creation and training.
