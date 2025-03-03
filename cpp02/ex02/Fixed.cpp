/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:13:06 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/03 03:33:16 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const int i)
{
	value = i << bits;
}

Fixed::Fixed(const float f)
{
	value = roundf(f * (1 << bits));
}

Fixed::Fixed(const Fixed &copy) : value(copy.value)
{
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		value = copy.value;
	return (*this);
}

Fixed::~Fixed()
{
}

bool	Fixed::operator>(Fixed fixed) const
{
	return (toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (toFloat() != fixed.toFloat());
}

float	Fixed::operator+(Fixed fixed) const
{
	return (toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (toFloat() / fixed.toFloat());
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