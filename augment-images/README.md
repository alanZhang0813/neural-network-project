# Image Dataset Augmentation
Leverage OpenCV for image augmentation and C++ filesystem for directory navigation in image datasets.
## Table of Contents
1. [Overview](#overview)
2. [Process Steps](#process-steps)
3. [Setup and Dependencies](#setup-and-dependencies)

## Overview <a name="overview"></a>
To enhance model training, it's crucial to have a diverse and complex dataset. Augmentation of images by applying various transformations is a key strategy in achieving this. Each image in the dataset undergoes random transformations before being saved to a designated output directory.

## Process Steps <a name="process-steps"></a>
1. `main.cpp` handles the setup for input and output directory paths.
2. Through directory traversal, each image undergoes one of the following random augmentations:
   - **Random Cropping**: Modifying the borders of the image.
   - **Scaling**: Adjusting image size.
   - **Flipping**: Reflecting images across horizontal or vertical axes.
   - **Gaussian Noise**: Introducing random noise at the pixel level.
   - **Color Jittering**: Altering brightness, contrast, and saturation levels.
3. Augmented images are saved to the designated output path.

## Setup and Dependencies <a name="setup-and-dependencies"></a>
- C++17 or higher compiler required.
- OpenCV library (https://github.com/opencv/opencv).
