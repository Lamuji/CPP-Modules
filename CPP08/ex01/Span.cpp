/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:51:08 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/19 17:26:02 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(){}

Span::Span(unsigned int N) : _N(N){}

Span::Span( const Span & src )
{
	_span = src._span;
	_N = src._N;
}
 

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	_span = rhs._span;
	_N = rhs._N;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Span const & i )
// {
// 	o << "Value = " << i;
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int n){
	if (_span.size() == _N)
		throw(NoSpaceLeft());
	_span.push_back(n);
}

int		Span::shortestSpan(){
	if (_span.size() < 2)
		throw (SpanException());
	std::vector<int> temp = _span;
	std::sort(temp.begin(), temp.end());
	size_t nbr = temp[1] - temp[0];
	for (size_t i = 0; i < temp.size(); i++)
		if (nbr > (size_t)temp[i + 1] - (size_t)temp[i])
			nbr = temp[i + 1] - temp[i];
	return nbr;


}

long		Span::longestSpan(){
	if (_span.size() < 2)
		throw (SpanException());
	std::vector<int> temp = _span;
	std::sort(temp.begin(), temp.end());
	return temp[temp.size() - 1] - temp[0];
}

void Span::addByRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> temp(begin, end);
	if (temp.size() > _N)
		throw RangeTooBigException();
	std::copy(temp.begin(), temp.end(), std::back_inserter(_span));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


std::vector<int>	Span::getSpan() const{
	return _span;
}


/* ************************************************************************** */