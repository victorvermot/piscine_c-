#ifndef KAREN_H
# define KAREN_H

# include <iostream>

# define DEBUG 1
# define INFO 2
# define WARNING 3
# define ERROR 4

class Karen
{
public :

    Karen(void);
    ~Karen(void);

    void complain(std::string level);
    int get_filter_lvl(std::string level);
private:
    void _debug( void );
    void _info( void );
    void _warning( void );
    void _error( void );
    std::string _ft_to_upper(std::string str);

};

#endif