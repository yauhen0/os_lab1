#include <ostream>

namespace number
{
    class Number
    {
    public:
        Number(int number) : number_(number) {};

        int getNumber();

        Number operator+(const Number& right) const
        {
            return Number(number_ + right.number_);
        }

        Number operator-(const Number& right) const
        {
            return Number(number_ - right.number_);
        }

        Number operator*(const Number& right) const
        {
            return Number(number_ * right.number_);
        }

        Number operator/(const Number& right) const
        {
            return Number(number_ / right.number_);
        }

       
    private:
        int number_;
    };

    const Number ZERO = Number(0);
    const Number ONE = Number(1);

}