#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
class Span
{
private:
    std::vector<int>        m_vec;
    unsigned int            m_size;
public:
    void                    addNumber(int nbr);
    int                     shortestSpan(void);
    int                     longestSpan(void);
    void                    generate(void);
    Span                    &operator=(Span const &cp);
                            Span(Span const &cp);
                            Span(unsigned int N);
                            Span(void);
                            ~Span();

    class  ArrayIsFull : public std::exception
    {
        public:
            virtual const char *what() const throw(); 
    };
};

#endif