#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
    unsigned int _tab_size;
    T   *_tab;
public:
    Array<T>()
    {
        std::cout << "Generic tab called." << std::endl;
		_tab = new T;
    };
    Array<T>(unsigned int s) : _tab_size(s)
    {
        std::cout << "Int constructor tab called." << std::endl;
		_tab = new T[s];
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
		{
			this->_tab_size = rhs._tab_size;
			this->_tab = new T[rhs._tab_size];
			for (int i = 0; i < rhs._tab_size; i++)
            	this->_tab[i] = rhs._tab[i];
		}
        return (*this);
    };
    T& operator[](unsigned int i)
    {
        if (i >= _tab_size)
            throw InvalidIndex();
        return (_tab[i]);
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
        delete [] _tab;
    };
};

#endif