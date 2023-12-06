# augment-images
Use the OpenCV library and its file traversal to go through the image dataset and augment it.
## Table of Contents
1. [Introduction](#introduction)
2. [Workflow](#workflow)
3. [Requirements and Installation](#requirements-and-installation)

## Introduction <a name="introduction"></a>
To properly train the model, the dataset should be varied and complex. Therefore, it is normal to augment the elements
by applying various transformations to them. For every image, they will be randomly processed before written to a
specified destination.

## Workflow <a name="workflow"></a>
1. main.cpp outlines code for the input and output directories
2. Using file traversal and iteration, ever image is passed through and 1 of 6 changes is applied.
   - **Random Cropping**: Altering image boundaries.
   - **Scaling**: Resizing images.
   - **Flipping**: Mirroring images horizontally or vertically.
   - **Gaussian Noise**: Adding random pixel noise.
   - **Color Jittering**: Varying brightness, contrast, and saturation.
3. The resulting database is outputted in the specified path location.

## Requirements and Installation <a name="requirements-and-installation"></a>
- C++17 compatible compiler
- OpenCV (https://github.com/opencv/opencv).