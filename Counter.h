//
// Created by 36495 on 10/8/2024.
//

#ifndef COUNTER_H
#define COUNTER_H

#include <string>

class Counter : public std::string
{
private:
    int integer;
public:
    Counter();
    friend Counter operator+(const Counter &c1, const Counter &c2);
    friend Counter operator-(const Counter &c1, const Counter &c2);
    Counter operator++(int c1);
    Counter operator--(int c2);
    friend Counter operator+=(const Counter &c1, const Counter &c2);
    friend Counter operator-=(const Counter &c1, const Counter &c2);
    void setInteger(int integer);
    int getInteger() const;

};



#endif //COUNTER_H
