#pragma once
#include "IRiskManager.hpp"
#include <nlohmann/json.hpp>

class BasicRiskManager : public IRiskManager {
public:
    BasicRiskManager(const nlohmann::json& config);
    bool evaluateRisk(double confidence) override;
};