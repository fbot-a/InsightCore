#pragma once
#include <nlohmann/json.hpp>
#include <fstream>

class ConfigLoader {
public:
    static nlohmann::json load(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) throw std::runtime_error("Cannot open config file.");
        nlohmann::json config;
        file >> config;
        return config;
    }
};