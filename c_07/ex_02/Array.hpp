#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T, typename U>
class Array
{
private:
    /* data */
public:
    Array<T, U>()
    {
        std::cout << "Generic tab called." << std::endl;
        tab = new T;
    };
    Array<T, U>(const Array& other)
    {
        std::cout << "Copy constructor called" << std::endl;
	    *this = other;
    };
    Array<T, U>& operator=(const Array& rhs)
    {
        std::cout << "Copy assignment overload called" << std::endl;
        if (this != &rhs)
            this->tab = rhs.tab;
        return (*this);
    };
    ~Array<T, U>(void){};
    T   tab[];
};

template <typename U>
class Array <unsigned int, U>
{
private:
    /* data */
public:
    Array<unsigned int, U>(unsigned int s, U type) : size(s)
    {
        std::cout << "Int specializaion tab called." << std::endl;
        tab = new [s] T;
    };
    Array<unsigned int, U>(const Array& other)
    {
        std::cout << "Copy constructor called" << std::endl;
	    *this = other;
    };
    Array<unsigned int, U>& operator=(const Array& rhs)
    {
        std::cout << "Copy assignment overload called" << std::endl;
        if (this != &rhs)
        {
            this->tab = rhs.tab;
            this->size = rhs.tab_size;
        }
        return (*this);
    };

    ~Array<unsigned int, U>(void){};
    unsigned int    size() const {
        return (size);
    };

    T   tab[];
    unsigned    int tab_size;
};

#endif