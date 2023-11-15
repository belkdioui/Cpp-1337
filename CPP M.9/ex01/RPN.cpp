/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:09:08 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/15 16:19:20 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>

RPN::~RPN()
{}

void check_errors(std::string one_ele, int index)
{
	if(((index == 0) ||(index == 1))&& !(static_cast<int>(one_ele[0]) >= 48 && static_cast<int>(one_ele[0]) <= 57))
		throw std::runtime_error("Error");
	if(((index > 1) && (!((static_cast<int>(one_ele[0]) >= 48 && static_cast<int>(one_ele[0]) <= 57) || one_ele[0] =='/' ||  one_ele[0] =='+' || one_ele[0] =='-' || one_ele[0] =='*'))))
	{
		std::cout<<" *"<<one_ele<<"* "<<std::endl;
		throw std::runtime_error("Error");
	}
}

std::string result_operation(std::string str1, std::string str2, std::string ope)
{
	float num1 = 0, num2 = 0, res = 0;
	std::ostringstream ss;
	std::stringstream ss1(str1);
    ss1>>num1;
	std::stringstream ss2(str2);
    ss2>>num2;
	if (ope == "+")
		res = num1 + num2;
	else if (ope == "-")
		res = num1 - num2;
	else if (ope == "*")
		res = num1 * num2;
	else if (ope == "/")
		res = num1 / num2;
    ss<<res;
	// std::cout<<num1<<ope<<num2<<"="<<res<<std::endl;
    std::string result=ss.str();
	return result;
}

void calculate(std::stack<std::string>st_1, std::stack<std::string>st_2,int index)
{
	static std::string result;
	if (!st_1.empty())
	{
		std::string top_ele_st1 = st_1.top();
		check_errors(top_ele_st1, index);
		if (top_ele_st1 != "+" && top_ele_st1 != "-" && top_ele_st1 != "*" && top_ele_st1 != "/")
		{
			st_1.pop();
			if (!st_1.empty() && (st_1.top() != "+" && st_1.top() != "-" && st_1.top() != "*" && st_1.top() != "/"))
			{
				st_2.push(top_ele_st1);
				index++;
				// std::cout<<"here1"<<std::endl;
				calculate(st_1, st_2, index);
			}
			else if (index > 0 && !st_1.empty() && !st_2.empty())
			{
				result = result_operation(st_2.top(), top_ele_st1, st_1.top());
				st_1.pop();
				st_2.pop();
				st_1.push(result);
				index++;
				// std::cout<<"here2"<<std::endl;
				calculate(st_1, st_2, index);
			}
			else {
				if(!(st_2.empty() && st_1.size() == 1))
					throw std::runtime_error("Error");
				std::cout<<result<<std::endl;
			}
		}
	}
}

RPN::RPN(std::string av)
{
	std::istringstream iss(av);
	std::stack<std::string> st_1;
	std::stack<std::string> st_2;
	std::string ele;
	do {
		iss>>ele;
		if(!ele.empty())
			st.push(ele);
	}while (iss);
	while (!st.empty())
	{
	st_1.push(st.top());
	st.pop();
	}
	calculate(st_1, st_2, 0);
}