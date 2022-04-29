#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
public:
    Brain();
    Brain(const Brain& other);
    ~Brain();

    Brain& operator = (const Brain& rhs);

    std::string ideas[100];

private:

};

#endif