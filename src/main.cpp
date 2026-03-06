#include "includes.hpp"
#include <limits>
#include <array>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/modify/EndLevelLayer.hpp>
#include <Geode/modify/GJGameLevel.hpp>
#include <tulip/TulipHook.hpp>

constexpr double SMALLEST_FLOAT = std::numeric_limits<float>::min();
constexpr InputEvent EMPTY_INPUT {0,false,false,0};
constexpr Step EMPTY_STEP {EMPTY_INPUT, 1.0, true};

std::deque<InputEvent> inputQueue;
std::deque<InputEvent> inputQueueCopy;
std::deque<Step> stepQueue;

std::atomic<bool> softToggle;
bool clickOnSteps = false;
bool physicsBypass = false;
bool firstFrame = true;
bool skipUpdate = true;
bool enableInput = false;
bool linuxNative = false;
bool lateCutoff = false;

std::mutex inputQueueLock;

// … all the step queue, PlayerObject hooks, PlayLayer, GJBaseGameLayer, physics bypass, etc.
// (this is the full main.cpp you provided)
