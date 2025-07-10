# InsightCore

InsightCore is a lightweight, modular C++ engine for **developing algorithmic trading logic**.

It is not a plug-and-play trading bot — it is a low-level framework that helps you design and structure your own strategies, risk models, and decision-making systems.

This version includes a minimal example using RSI and EMA.  
Future versions can integrate machine learning models, broker adapters (e.g. MT5 bridge), and real-time data handling.

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
git clone https://github.com/fbot-a/InsightCore.git
cd InsightCore
mkdir build && cd build
cmake ..
make
./InsightCore
