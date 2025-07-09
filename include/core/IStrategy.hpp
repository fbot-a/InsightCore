#pragma once
#include <vector>
#include "Candle.hpp"
#include "SignalResult.hpp"

class IStrategy {
public:
    virtual ~IStrategy() = default;
    virtual SignalResult execute(const std::vector<Candle>& candles) = 0;
};