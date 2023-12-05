#ifndef FRUGALLYDEEP_MODEL_H
#define FRUGALLYDEEP_MODEL_H

#include <fdeep/fdeep.hpp>
#include <opencv2/opencv.hpp>
#include <string>
#include <vector>

class Model {
public:
    Model(const std::string& model_path);
    std::pair<std::string, float> predict(const std::string& image_path);

private:
    fdeep::model model_;
    std::vector<std::string> class_names_;
};


#endif //FRUGALLYDEEP_MODEL_H
