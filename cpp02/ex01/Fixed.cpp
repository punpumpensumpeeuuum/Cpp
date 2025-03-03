/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:13:06 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/02 22:41:46 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int Constructor called" << std::endl;
	value = i << bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float Constructor called" << std::endl;
	value = roundf(f * (1 << bits));
}

Fixed::Fixed(const Fixed &copy) : value(copy.value)
{
	std::cout << "Copy Constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		value = copy.value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const
{
	return (value);
}

void	Fixed::setRawBits(int raw)
{
	value = raw;
}

float	Fixed::toFloat(void)const
{
	return ((float)value / (float)(1 << bits));
}

int		Fixed::toInt(void)const
{
	return (value >> bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}