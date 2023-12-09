# Image Dataset Augmentation

Leverage OpenCV for image augmentation and C++ filesystem for directory navigation in image datasets.

## Table of Contents
1. [Overview](#overview)
2. [Features](#features)
3. [Process Steps](#process-steps)
4. [Setup and Dependencies](#setup-and-dependencies)
5. [Usage](#usage)
6. [Code Structure](#code-structure)

## Overview <a name="overview"></a>
To enhance model training, having a diverse and complex dataset is crucial. This tool augments images by applying various transformations, improving the robustness of the dataset for machine learning applications. Each image in the dataset undergoes random transformations before being saved to a designated output directory.

## Features <a name="features"></a>
- **Random Cropping**: Modifies the borders of the image.
- **Scaling**: Adjusts image size.
- **Flipping**: Reflects images across horizontal or vertical axes.
- **Gaussian Noise**: Introduces random noise at the pixel level.
- **Color Jittering**: Alters brightness, contrast, and saturation levels.

## Process Steps <a name="process-steps"></a>
1. `main.cpp` handles the setup for input and output directory paths.
`std::string baseInputDir = "../../../Downloads/CIFAR-10-images";
std::string baseOutputDir = "../../../Downloads/Processed-CIFAR-10-images";
std::vector<std::string> subDirs = {"test", "train"};`
Replace this with the designated directory for the CIFAR-10 database
3. `ImageProcessor.cpp` traverses directories, applying one of the augmentations randomly to each image.
4. Augmented images are written to the designated output path.

## Setup and Dependencies <a name="setup-and-dependencies"></a>
- C++17 or higher compiler required.
- OpenCV library [OpenCV GitHub](https://github.com/opencv/opencv).

## Usage <a name="usage"></a>
1. Clone the repository.
2. Ensure OpenCV is installed and set up correctly in your environment.
3. Compile the project using your preferred C++ compiler.
4. Run the executable, specifying the input and output directories.

## Code Structure <a name="code-structure"></a>
- **main.cpp**: Sets up input/output directories and initiates the image processing loop.
- **ImageProcessor.h/cpp**: Contains the logic for traversing directories and processing images.
- **AugmentImages.h/cpp**: Defines the various augmentation functions applied to the images.
