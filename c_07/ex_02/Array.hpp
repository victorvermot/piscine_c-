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
    T operator[](unsigned int i)
    {
        T   ret;
        try
        {
            if (i > _tab_size)
                throw std::exception();
            else
                ret = tab[i];
        }
        catch(const std::exception& e)
            std::cerr << "The index is not valid." << std::endl;
        return (ret);
    };
    unsigned int size() const
    {
        return (_tab_size);
    };
    ~Array<T>(void)
    {
        delete [] tab;
    };
    T   *tab;
};

#endif