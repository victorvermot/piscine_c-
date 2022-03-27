#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
    unsigned int _tab_size;
public:
    Array<T>()
    {
        std::cout << "Generic tab called." << std::endl;
        tab = new T;
    };
    Array<T>(unsigned int s) : _tab_size(s)
    {
        std::cout << "Int constructor tab called." << std::endl;
        tab = new T[s];
    };
    Array<T>(const Array& other)
    {
        std::cout << "Copy constructor called" << std::endl;
	    *this = other;
    };
    Array<T>& operator=(const Array& rhs)
    {
        std::cout << "Copy assignment overload called" << std::endl;
        if (this != &rhs)
            this->tab = rhs.tab;
        return (*this);
    };
    T& operator[](unsigned int i)
    {
        if (i >= _tab_size)
            throw InvalidIndex();
        return (tab[i]);
    };
    unsigned int size() const
    {
        return (_tab_size);
    };
    class InvalidIndex : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("The index value provided is not valid");
            }
    };
    ~Array<T>(void)
    {
        delete [] tab;
    };
    T   *tab;
};

#endif