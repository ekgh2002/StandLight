#ifndef VIEW_H
#define VIEW_H
#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_ON};

class View
{
private:
    int lightState;
    Led *light;

public:
    View(Led *Led);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lightOn();
    void lightOff();

};

#endif