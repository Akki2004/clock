//
// Created by 36495 on 10/10/2024.
//

#include "CounterView.h"

#include <iostream>

CounterView::CounterView(Counter &counter)
    : counter(counter)
{
    if(font.loadFromFile("OpenSans-Bold.ttf"))
    {
        text.setFont(font);
        text.setCharacterSize(60);
    }
}

void CounterView::update()
{
    text.setString(counter);
}

void CounterView::setPosition(float x, float y)
{
    text.setPosition(x, y);
}
void CounterView::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    window.draw(text);
}


