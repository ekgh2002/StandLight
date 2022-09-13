#include "View.h"
#include <wiringPi.h>

View::View(Led *Led)
{
    light = Led;
    lightState = LIGHT_OFF;

}

View::~View()
{

}

void View::updateState(std::string strState)
{
    switch (lightState)
    {
        case LIGHT_OFF:
            if (strState == "StateOn") {
                lightState = LIGHT_ON;
            }
        break;

        case LIGHT_ON:
            if (strState == "StateOff") {
                lightState = LIGHT_OFF;
            }
        break;
    }  
}

void View::lightView()
{
    switch (lightState)
    {
        case LIGHT_OFF:
            lightOff();
        break;

        case LIGHT_ON:
            lightOn();
        break;
    }
}

void View::lightOn()
{
    uint8_t prevTime = 0;

    if (millis() - prevTime < 300) return;  //  millis = 전원이 들어오면 1ms 간격으로 계속 증가
    prevTime = millis();
    light->Toggle();
}

void View::lightOff()
{
    light->Off();
}


