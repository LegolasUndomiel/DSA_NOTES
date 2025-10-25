#ifndef __TIMER_H__
#define __TIMER_H__
#pragma once

#include <chrono>

class Timer {
  public:
    Timer() = default;
    ~Timer() = default;

    // 启动计时器
    void start() { startTime_ = std::chrono::high_resolution_clock::now(); }

    // 结束计时器并返回时间（单位：毫秒）
    double end() {
        endTime_ = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> duration = endTime_ - startTime_;
        return duration.count();
    }

  private:
    std::chrono::high_resolution_clock::time_point startTime_;
    std::chrono::high_resolution_clock::time_point endTime_;
};

#endif