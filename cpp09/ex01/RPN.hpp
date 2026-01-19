/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/15 15:26:29 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H 

# include <iostream>
# include <stack>
# include <cstdlib>
# include <sstream>

class RPN
{
	private:
		std::stack<int>     num;
	public:
		RPN	();
		RPN	(const RPN &a);
		~RPN ();
		RPN &operator=(const RPN &a);

		void	Parsing(std::string input);
		int		Result(int n1, int n2, char o);

};

#endif