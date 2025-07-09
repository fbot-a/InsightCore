#pragma once
#include "IStrategy.hpp"
#include <nlohmann/json.hpp>

class RsiEmaStrategy : public IStrategy {
public:
    RsiEmaStrategy(const nlohmann::json& config);
    SignalResult execute(const std::vector<Candle>& candles) override;
};