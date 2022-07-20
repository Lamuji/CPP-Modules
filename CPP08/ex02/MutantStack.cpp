#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T> &				MutantStack<T>::operator=( MutantStack const & rhs )
{
	if ( this != &rhs )
	{
		this->_value = rhs.getValue();
	}
	return *this;
}

//template<typename T>
// std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i )
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */