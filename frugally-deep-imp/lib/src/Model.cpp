#include "Model.h"
#include <algorithm>
#include <iostream>

Model::Model(const std::string& model_path)
        : model_(fdeep::load_model(model_path)),
          class_names_{"airplane", "automobile", "bird", "cat", "deer",
                       "dog", "frog", "horse", "ship", "truck"} {}

std::pair<std::string, float> Model::predict(const std::string& image_path) {
    // Load the image using OpenCV
    cv::Mat img = cv::imread(image_path);
    cv::cvtColor(img, img, cv::COLOR_BGR2RGB);

    // Convert OpenCV Mat to fdeep::tensor
    const auto input_tensor = fdeep::tensor_from_bytes(img.ptr(),
                                                static_cast<std::size_t>(img.rows),
                                                static_cast<std::size_t>(img.cols),
                                                static_cast<std::size_t>(img.channels()),
                                                0.0f, 1.0f);
    // Predict
    const auto result = model_.predict({input_tensor});

    // Get the prediction results as a vector
    const auto& output = result.front().to_vector();

    // Find the index of the maximum value
    const auto confidence = std::max_element(output.begin(), output.end());
    int predicted_class = std::distance(output.begin(), confidence);

    // Return the class name and confidence
    return {class_names_[predicted_class], *confidence};
}
