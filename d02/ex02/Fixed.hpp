#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int m_rawBits;
    static const int FRACTION_BITS = 8;
public:
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat( void ) const;
    int     toInt( void ) const;
    Fixed   &operator=(Fixed const& cp);

    bool         operator<(Fixed const& cp);
    bool         operator<=(Fixed const& cp);
    bool         operator>(Fixed const& cp);
    bool         operator>=(Fixed const& cp);
    bool         operator==(Fixed const& cp);
    bool         operator!=(Fixed const& cp);
    Fixed        operator*(Fixed const& cp);
    Fixed        operator/(Fixed const& cp);
    Fixed        operator-(Fixed const& cp);
    Fixed        operator+(Fixed const& cp);
    Fixed        operator++(void);
    Fixed        operator++(int);
    Fixed(const int nbr);
    Fixed(const float nbr);
    Fixed(const Fixed& cp);
    Fixed(void);
    ~Fixed(void);
};

std::ostream &operator<<(std::ostream &out, const Fixed& cp);