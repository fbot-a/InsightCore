#include "ConfigLoader.hpp"
#include "core/TradeEngine.hpp"
#include <iostream>

int main() {
    try {
        nlohmann::json config = ConfigLoader::load("config.json");
        TradeEngine engine(config);
        engine.run();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}