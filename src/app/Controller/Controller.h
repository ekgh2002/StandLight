#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>
#include "Led.h"


enum {LIGHT_OFF, LIGHT_ON};

class Controller
{
private:
    int lightState;
    Led *light;

public:
    Controller(Led *Led);
    virtual ~Controller();
    void updateEvent(std::string strBtn);

};

#endif