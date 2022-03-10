#include "Fixed.hpp"

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    m_rawBits = nbr << FRACTION_BITS;
}

Fixed::Fixed(const float nbr)   
{
    std::cout << "Float constructor called" << std::endl;
    float floatNbr = nbr;
    floatNbr = roundf(floatNbr * 256.0);
    m_rawBits = (int)floatNbr;
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
int Fixed::getRawBits(void) const
{
    return (m_rawBits);
}

void    Fixed::setRawBits(int const raw)
{
    m_rawBits = raw;
}

float Fixed::toFloat( void ) const
{
    return((float)m_rawBits / 256.0);
}

int Fixed::toInt( void ) const
{
    return((int)((float)m_rawBits / 256.0));
}
std::ostream &operator<<(std::ostream &out, const Fixed& cp)
{
    out << cp.toFloat() ;
    return (out);
}

Fixed &Fixed::operator=(const Fixed& cp)
{
    std::cout << "Copy assignment operator called" << std::endl;
    m_rawBits = cp.getRawBits();
    return(*this);
}

bool    Fixed::operator<(Fixed const& cp)
{
    return(this->getRawBits() < cp.getRawBits());
}

bool    Fixed::operator<=(Fixed const& cp)
{
    return(this->getRawBits() <= cp.getRawBits());
}

bool    Fixed::operator>(Fixed const& cp)
{
    return(this->getRawBits() > cp.getRawBits());
}

bool    Fixed::operator>=(Fixed const& cp)
{
    return(this->getRawBits() >= cp.getRawBits());
}

bool    Fixed::operator==(Fixed const& cp)
{
    return(this->getRawBits() == cp.getRawBits());
}

bool    Fixed::operator!=(Fixed const& cp)
{
    return(this->getRawBits() != cp.getRawBits());
}

Fixed   Fixed::operator*(Fixed const& cp)
{
    return(Fixed(this->toFloat() * cp.toFloat()));
}

Fixed   Fixed::operator/(Fixed const& cp)
{
    return(Fixed(this->toFloat() / cp.toFloat()));
}

Fixed   Fixed::operator-(Fixed const& cp)
{
    return(Fixed(this->toFloat() - cp.toFloat()));
}

Fixed   Fixed::operator+(Fixed const& cp)
{
    return(Fixed(this->toFloat() + cp.toFloat()));
}
Fixed   Fixed::operator++(void)
{
    Fixed tmp(*this);
    this->setRawBits(this->getRawBits() + 1);
    return (tmp);
}

Fixed Fixed::operator++(int)
{
    this->setRawBits(this->getRawBits);
}