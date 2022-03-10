#pragma once
#include <iostream>

class Fixed
{
private:
    int m_rawBits;
    static const int  FRACTION_BITS = 8;
public:
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed(const int nbr);
    Fixed(const float nbr);
    Fixed(const Fixed& cp);
    Fixed &operator=(Fixed const& cp);
    Fixed &operator<<(float nbr);
    Fixed(void);
    ~Fixed(void);
};
