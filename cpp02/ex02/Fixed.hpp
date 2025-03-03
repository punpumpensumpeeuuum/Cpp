/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:47 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/02 22:53:30 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	value;
		static const int bits;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();

		bool	operator>(Fixed fixed)const;
		bool	operator<(Fixed fixed)const;
		bool	operator>=(Fixed fixed)const;
		bool	operator<=(Fixed fixed)const;
		bool	operator==(Fixed fixed)const;
		bool	operator!=(Fixed fixed)const;

		float	operator+(Fixed fixed)const;
		float	operator-(Fixed fixed)const;
		float	operator*(Fixed fixed)const;
		float	operator/(Fixed fixed)const;

		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
		int		toInt(void)const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif