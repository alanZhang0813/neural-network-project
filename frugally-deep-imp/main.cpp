#include "Model.h"
#include <iostream>

int main() {
    try {
        Model model("../deep_model.json");
        auto [predicted_class, confidence] = model.predict("../frog.jpg");

        std::cout << "Predicted class: " << predicted_class << std::endl;
        std::cout << "Confidence: " << confidence << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << std::endl;
        return 1;
    }

    return 0;
}
