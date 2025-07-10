# InsightCore

**InsightCore** is a lightweight, modular C++ engine for building algorithmic trading systems.  
It is designed as a core logic module ("trading brain") to analyze market data, run strategies, manage risk, and return trade signals.

This version includes a minimal working implementation using RSI and EMA logic.  
Future versions can be extended with machine learning models, broker adapters, and real-time execution systems.

---

## ✅ Key Components

- **TradeEngine** — runs the full decision loop
- **RsiEmaStrategy** — sample logic using RSI/EMA crossover
- **BasicRiskManager** — simple TP/SL logic and filtering
- **ConfigLoader** — parses config.json settings
- **SignalResult** — standard output (Buy/Sell/None)

All logic is written in clean C++ with no external dependencies except `nlohmann/json`.

---

## 📁 File Structure

InsightCore/
├── include/ # Headers (core interfaces, strategy, risk, config)
│ └── core/ # IStrategy, IRiskManager, TradeEngine, Candle, etc.
├── src/ # Implementations (.cpp)
├── config.json # Config file for strategy & risk
├── main.cpp # Entry point
├── CMakeLists.txt # Build script
└── README.md

## ⚙️ Build & Run

```bash
git clone https://github.com/yourname/InsightCore.git
cd InsightCore
mkdir build && cd build
cmake ..
make
./InsightCore
