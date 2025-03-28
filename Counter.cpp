//
// Created by 36495 on 10/8/2024.
//

#include "Counter.h"

Counter::Counter()
{}
Counter operator+(const Counter &c1, const Counter &c2)
{
    Counter temp;
    temp.integer = c1.integer + c2.integer;
    return temp;
}
Counter operator-(const Counter &c1, const Counter &c2)
{
    Counter temp;
    temp.integer = c1.integer - c2.integer;
    return temp;
}
Counter Counter::operator++(int c1){
    Counter temp;
    temp.integer = c1 + 1;
    return temp;
}
Counter Counter::operator--(int c1){
    Counter temp;
    temp.integer = c1 - 1;
    return temp;
}
Counter operator+=(const Counter &c1, const Counter &c2)
{
    Counter temp;
    temp.integer = c1.integer + c2.integer;
    return temp;
}
Counter operator-=(const Counter &c1, const Counter &c2)
{
    Counter temp;
    temp.integer = c1.integer - c2.integer;
    return temp;
}
void Counter::setInteger(int integer)
{
    Counter::integer = integer;
}
int Counter::getInteger() const
{
    return integer;
}