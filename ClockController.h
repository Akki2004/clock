//
// Created by 36495 on 10/8/2024.
//

#ifndef CLOCKCONTROLLER_H
#define CLOCKCONTROLLER_H

#include "Counter.h"
#include <SFML/Graphics.hpp>

class ClockController
{
private:
    Counter &counter;
    int count1, count2;
    sf::Keyboard::Key UpKey;
    sf::Keyboard::Key DownKey;
public:
    ClockController(Counter &counter);
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    void setKeys(const sf::Keyboard::Key& increment, const sf::Keyboard::Key& decrement);
};



#endif //CLOCKCONTROLLER_H
