#include <iostream>
#include "Button.h"
// #include "Led.h"
#include <wiringPi.h>
#include "Listener.h"
// #include "Controller.h"
// #include "View.h"

int main()
{
    std::cout << "Hello World!" << std::endl;

    Button Button1(27);
    Led led1(25);
    Led led2(24);
    Led led3(23);
    Led led4(22);
    Led led5(21);
    View view(&led1, &led2, &led3, &led4, &led5);
    Controller control(&view);
    Listener listener(&Button1, &control);


    while(1)
    {   
        listener.checkEvent();
        view.lightView();
        delay(50);
    }
    return 0;
}