//
// Created by 36495 on 10/8/2024.
//

#include "Counter.h"
#include "ClockController.h"

#include <iostream>

ClockController::ClockController(Counter &counter)
    : counter(counter)
{ counter.setInteger(0); }


void ClockController::eventHandler(sf::RenderWindow& window, sf::Event event)
{
    counter.assign(std::to_string(counter.getInteger()));
    count2 = (count1 / 60);

    if(sf::Keyboard::isKeyPressed(UpKey) && UpKey == sf::Keyboard::Up)
    {
        std::cout << "UP" << std::endl;
        counter.setInteger(count1++);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && UpKey == sf::Keyboard::W)
    { count1++; }

    if(sf::Keyboard::isKeyPressed(DownKey) && DownKey == sf::Keyboard::Down)
    {
        std::cout << "DOWN" << std::endl;
        counter.setInteger(count1--);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && DownKey == sf::Keyboard::S)
    {    count1--; }

    if(UpKey == sf::Keyboard::W)
        counter.setInteger(count2);
}

void ClockController::update()
{
    if(UpKey == sf::Keyboard::Up && count1 == 60)
    {
        count1 = 0;
    }
    if(UpKey == sf::Keyboard::W && count2 == 12)
    {
        count2 = 0;
    }

    if(count1 < 0)
        count1++;
}


void ClockController::setKeys(const sf::Keyboard::Key &increment, const sf::Keyboard::Key &decrement)
{
    ClockController::UpKey = increment;
    ClockController::DownKey = decrement;
}

