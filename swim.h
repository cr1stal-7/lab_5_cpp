#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "glasses.h"
#include "cap.h"
#include "shorts.h"
#include "slippers.h"

class swim {
private:
    glasses _glasses;
    cap _cap;
    shorts _shorts;
    slippers _slippers;
public:
    swim(glasses _glasses, cap _cap, shorts _shorts, slippers _slippers);
    swim();
    ~swim();
    void input();
    void output();
    static void res(swim a);
    static void color(swim a);
};