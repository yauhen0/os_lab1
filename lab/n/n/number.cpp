#include "number.h"

using namespace number;

int number::Number::getNumber()
{
    return number_;
}

std::ostream& operator<<(std::ostream& out, Number num)
{
    out << num.getNumber();
    return out;
}