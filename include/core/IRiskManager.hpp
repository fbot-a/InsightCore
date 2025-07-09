#pragma once
class IRiskManager {
public:
    virtual ~IRiskManager() = default;
    virtual bool evaluateRisk(double confidence) = 0;
};