# CIFAR-10 CNN Model Creation

Utilize TensorFlow in Python within a Jupyter Notebook to develop a Convolutional Neural Network (CNN) tailored for the CIFAR-10 image dataset.

## Table of Contents
1. [Introduction](#introduction)
2. [Workflow](#workflow)
3. [Requirements and Installation](#requirements-and-installation)
4. [Data Preparation](#data-preparation)
5. [Model Architecture and Training](#model-architecture-and-training)
6. [Evaluation and Model Export](#evaluation-and-model-export)

## Introduction <a name="introduction"></a>
This project, developed in a Jupyter Notebook using Python, focuses on the CIFAR-10 dataset. It leverages an augmented image dataset, divided into training and testing directories, to construct, train, and evaluate a Convolutional Neural Network (CNN) using TensorFlow.

## Workflow <a name="workflow"></a>
The workflow centers around the CIFAR-10 dataset of 32x32 pixel images. The process begins with data visualization and distribution analysis, followed by the construction of a CNN using TensorFlow. The model undergoes training with the augmented dataset and is subsequently evaluated for performance. Finally, the trained model is exported in the .keras format for integration into other applications.

## Requirements and Installation <a name="requirements-and-installation"></a>
- Jupyter Notebook for script execution and interactive development.
- TensorFlow library for neural network construction and training.
- Additional Python libraries: Pillow, NumPy, Matplotlib, and scikit-learn.

## Data Preparation <a name="data-preparation"></a>
The data preparation involves loading the augmented image dataset, normalizing the images, and encoding the labels to one-hot vectors. The dataset is split into training and testing sets, with a focus on ensuring data distribution across different classes.

## Model Architecture and Training <a name="model-architecture-and-training"></a>
The model architecture is defined using TensorFlow's Keras API, featuring convolutional layers, max-pooling layers, and fully connected layers. The training process involves fitting the model to the training data, with validation on the testing set to monitor performance.

## Evaluation and Model Export <a name="evaluation-and-model-export"></a>
Post-training, the model's accuracy and loss are evaluated using the test dataset. The final trained model is then saved as a .keras file for future use.

