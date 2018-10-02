// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/10 20:32:58 by skavunen          #+#    #+#             //
//   Updated: 2017/11/10 20:57:34 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <list>
# include <stack>
# include <iostream>

template <typename T>

class MutantStack : public std::stack<T>
{
private:
	std::deque<T>	_deque;
	std::stack<T>	_stack;
public:
	MutantStack<T>() {}

	MutantStack( MutantStack const & copy ) { static_cast<void>(copy); }

	~MutantStack<T>() {}

	void push( T topush )
	{
		_deque.push_front( topush );
		_stack.push( topush );
	}

	void pop( void )
	{
		_deque.pop_front();
		_stack.pop();
	}

	T &		top( void ) { return _stack.top(); }
	T		size( void ) { return _stack.size(); }

	typedef typename std::deque<T>::iterator iterator;

	iterator begin( void ) { return _deque.begin(); }
	iterator end( void ) { return _deque.end(); }
};

#endif
