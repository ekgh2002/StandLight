#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>
#include "View.h"

class Controller
{
private:
    int lightState;
    View *view;

public:
    Controller(View *viewer);
    virtual ~Controller();
    void updateEvent(std::string strBtn);

};

#endif