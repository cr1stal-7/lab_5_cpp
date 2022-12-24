#include "swim.h"
#include <iostream>
#include <string.h>
using namespace std;

swim::swim(glasses _glasses, cap _cap, shorts _shorts, slippers _slippers) {
    this->_glasses = _glasses;
    this->_cap = _cap;
    this->_shorts = _shorts;
    this->_slippers = _slippers;
}

swim::swim() {

}

swim::~swim() {

}

void swim::input() {
    _glasses.input();
    _cap.input();
    _shorts.input();
    _slippers.input();
}

void swim::output() {
    _glasses.output();
    _cap.output();
    _shorts.output();
    _slippers.output();
}

void swim::res(swim a) {
    float sum = 0;
    sum = a._glasses.glasses_price + a._cap.cap_price + a._shorts.shorts_price + a._slippers.slippers_price;
    cout << "Итог: " << sum << endl;
}

void swim::color(swim a) {
    if ((a._glasses.glasses_color == a._cap.cap_color) && (a._glasses.glasses_color == a._shorts.shorts_color))
        cout << "У вас стильный total look" << endl;
    else
        cout << "У вас разноцветный комплект" << endl;
}
