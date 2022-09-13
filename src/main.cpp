#include <iostream>
#include "Button.h"
#include "Led.h"
#include <wiringPi.h>
#include "Listener.h"

int main()
{
    std::cout << "Hello World!" << std::endl;

    Button Button1(27);
    Led led1(25);
    Listener listener(&Button1, &led1);

    while(1)
    {   
        listener.checkEvent();
        delay(50);
    }
    return 0;
}