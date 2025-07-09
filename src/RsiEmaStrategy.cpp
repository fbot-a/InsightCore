#include "core/RsiEmaStrategy.hpp"

RsiEmaStrategy::RsiEmaStrategy(const nlohmann::json&) {}

SignalResult RsiEmaStrategy::execute(const std::vector<Candle>&) {
    return {true, 0.75};
}