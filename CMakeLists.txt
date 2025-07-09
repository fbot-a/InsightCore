cmake_minimum_required(VERSION 3.10)
project(InsightCore)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(include/core)

add_executable(insightcore
    src/main.cpp
    src/TradeEngine.cpp
    src/ConfigLoader.cpp
    src/BasicRiskManager.cpp
    src/RsiEmaStrategy.cpp
)