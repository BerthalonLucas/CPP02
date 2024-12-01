#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed {
    private:
        int _value;
        static const int _fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(const int interger);
        Fixed(const float floating);
        ~Fixed();
        Fixed& operator=(const Fixed& fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};
        std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif