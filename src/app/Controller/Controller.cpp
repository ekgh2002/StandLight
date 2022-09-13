#include "Controller.h"

Controller::Controller(Led *Led)
{
    light = Led;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{

}

void Controller::updateEvent(std::string strBtn)  //  무슨 button이 눌렸는지 문자열로 입력하겠다.
{
    switch (lightState)
    {
        case LIGHT_OFF:
            if(strBtn == "powerButton"){
               lightState = LIGHT_ON;
               light->On();
            }

            break;
        case LIGHT_ON:
           if(strBtn == "powerButton"){
                lightState = LIGHT_OFF;
                light->Off();
            }
            break;
    }
}