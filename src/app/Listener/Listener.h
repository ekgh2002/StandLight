#ifndef LISTENER_H
#define LISTENER_H

#include "Button.h"
#include "Led.h"

#pragma once

class Listener
{
private :
    Button *powerButton;
    Led *light;
public:
    Listener(Button *button, Led *led);  //  생성자
    ~Listener(); //  소멸자
    void checkEvent();
};

#endif