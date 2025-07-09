#include "core/TradeEngine.hpp"
#include "RsiEmaStrategy.hpp"
#include "BasicRiskManager.hpp"
#include "Candle.hpp"
#include <iostream>

TradeEngine::TradeEngine(const nlohmann::json& config) {
    strategy = std::make_unique<RsiEmaStrategy>(config["strategy"]);
    riskManager = std::make_unique<BasicRiskManager>(config["risk"]);
}

void TradeEngine::run() {
    std::vector<Candle> candles = {
        {1.0, 1.1, 0.9, 1.05, 1000},
        {1.05, 1.15, 1.0, 1.1, 1500},
        {1.1, 1.2, 1.05, 1.15, 1700}
    };

    auto signal = strategy->execute(candles);
    if (riskManager->evaluateRisk(signal.confidence)) {
        std::cout << "[SIGNAL] ✅ ENTER with confidence: " << signal.confidence << std::endl;
    } else {
        std::cout << "[SIGNAL] ❌ REJECTED (confidence: " << signal.confidence << ")" << std::endl;
    }
}