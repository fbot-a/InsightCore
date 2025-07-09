#include "core/BasicRiskManager.hpp"

BasicRiskManager::BasicRiskManager(const nlohmann::json&) {}

bool BasicRiskManager::evaluateRisk(double confidence) {
    return confidence >= 0.7;
}