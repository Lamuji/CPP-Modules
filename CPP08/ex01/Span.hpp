/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:51:05 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/19 17:27:32 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class Span
{

	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void		addNumber(int n);// ajoute un nombre a la SPan. si plus de place, jette exception.
		int			shortestSpan();
		long		longestSpan();
		void		addByRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		std::vector<int> getSpan() const;

		class NoSpaceLeft : public std::exception {
			public :
				virtual const char* what() const throw(){
					return "No space left on Span\n";
				}
		};
		class SpanException : public std::exception{
			public :
				virtual const char* what() const throw(){
					return "Not enough numbers on Span\n";
			}
		};
		class RangeTooBigException : public std::exception{
			public :
				virtual const char* what() const throw(){
					return "Range is bigger than Span capacity\n";
			}
		};
	private:

		unsigned int _N;
		std::vector<int> _span;

};

//std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */