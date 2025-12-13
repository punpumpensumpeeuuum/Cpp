/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2025/12/13 19:44:54 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H 

# include <iostream>
# include <stack>
# include <cstdlib>

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