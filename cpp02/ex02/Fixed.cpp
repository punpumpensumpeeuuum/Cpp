/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:13:06 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/03 17:12:15 by dinda-si         ###   ########.fr       */
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

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->value++;
	return (temp);
}
Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->value--;
	return (temp);
}
Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
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