#pragma once
#include <chrono>

class FrameTimer {
public:
	FrameTimer() {
		last = std::chrono::steady_clock::now();
	}
	float Mark();
private:
	std::chrono::steady_clock::time_point last;
};