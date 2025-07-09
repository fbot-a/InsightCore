#pragma once
#include "IStrategy.hpp"
#include "IRiskManager.hpp"
#include <memory>
#include <nlohmann/json.hpp>

class TradeEngine {
public:
    TradeEngine(const nlohmann::json& config);
    void run();

private:
    std::unique_ptr<IStrategy> strategy;
    std::unique_ptr<IRiskManager> riskManager;
};