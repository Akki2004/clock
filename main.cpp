#include <iostream>
#include <SFML/Graphics.hpp>

#include "Counter.h"
#include "CounterView.h"
#include "ClockController.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode (720, 420, 32), "SFML Tutorial");
    window.setFramerateLimit(60);

    Counter counter1;
    Counter counter2;
    CounterView view1(counter1);
    CounterView view2(counter2);
    ClockController controller1(counter1);
    ClockController controller2(counter2);

    view1.setPosition(100.f, 50.f);
    view2.setPosition(200.f, 50.f);

    controller1.setKeys(sf::Keyboard::W, sf::Keyboard::S);
    controller2.setKeys(sf::Keyboard::Up, sf::Keyboard::Down);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();

            controller1.eventHandler(window, event);
            controller2.eventHandler(window, event);
        }

        controller1.update();
        controller2.update();
        view1.update();
        view2.update();
        window.clear();
        window.draw(view1);
        window.draw(view2);
        window.display();
    }
    return 0;
}
