//
// Created by 36495 on 10/10/2024.
//

#ifndef COUNTERVIEW_H
#define COUNTERVIEW_H

#include <SFML/Graphics.hpp>
#include "Counter.h"

class CounterView : public sf::Drawable, public Counter
{
private:
    Counter &counter;
    sf::Text text;
    sf::Font font;
    float x, y;
public:
    CounterView(Counter &counter);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void setPosition(float x, float y);
    void update();
};



#endif //COUNTERVIEW_H
