#include "Fixed.hpp"

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    // save first digit;
    m_rawBits = nbr << FRACTION_BITS;
}

Fixed::Fixed(const float nbr)   
{
    while (nbr / 10 != 0)
    {
        nbr = nbr 
    }
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (m_rawBits);
}

void    Fixed::setRawBits(int const raw)
{
    m_rawBits = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& cp)
{
    std::cout << "Copy assignment operator called" << std::endl;
    m_rawBits = cp.getRawBits();
    return(*this);
}

Fixed::Fixed(const Fixed& cp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed::Fixed(void) : m_rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;
}
