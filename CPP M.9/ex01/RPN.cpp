/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:09:08 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/15 08:08:12 by bel-kdio         ###   ########.fr       */
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
        throw std::runtime_error("Error1");
    if(((index > 1) && (!((static_cast<int>(one_ele[0]) >= 48 && static_cast<int>(one_ele[0]) <= 57) || one_ele[0] =='/' ||  one_ele[0] =='+' || one_ele[0] =='-' || one_ele[0] =='*'))))
    {
        std::cout<<" *"<<one_ele<<"* "<<std::endl;
        throw std::runtime_error("Error2");
    }
}
void calculate(std::stack<std::string>st_1, std::stack<std::string>st_2,int index, float num1, float num2)
{
    std::string operation;
    float res;
    std::stack<std::string> st_3;
    
    operation = st_1.top();
    check_errors(st_1.top(), index);
    if(index == 0)
    {
        std::stringstream ss1(st_1.top());
        ss1>>num1;
        st_1.pop();
    }
    else if(index == 1)
    {
        std::stringstream ss2(st_1.top());
        ss2>>num2;
        st_1.pop();
    }
    else if (st_1.top() == "+" || st_1.top() == "-" || st_1.top() == "*" || st_1.top() == "/") {
        st_1.pop();
    }
    else 
    {
        std::stringstream ss1(st_1.top());
        ss1>>num1;
        st_1.pop();
        if (st_1.top() == "+" || st_1.top() == "-" || st_1.top() == "*" || st_1.top() == "/")
            st_1.pop();
        std::stringstream ss2(st_1.top());
        ss2>>num2;
        st_1.pop();
    }
    while(index > 1 && !st_2.empty() && !st_1.empty()) 
    {
        if (st_2.top() == "+")
            res = num1 + num2;
        else if (st_2.top() == "-")
            res = num1 - num2;
        else if (st_2.top() == "*")
            res = num1 * num2;
        else if (st_2.top() == "/")
            res = num1 / num2;
        else if (st_2.empty() && !(st_1.empty()))
            throw std::runtime_error("Error3");
        else
        {
            st_2.pop();
            continue;
        }
        std::ostringstream ss;
        ss<<res;
        std::string result=ss.str();
        if (st_1.top() != "+" && st_1.top() != "-" && st_1.top() != "*" && st_1.top() != "/")
            std::cout<<st_1.top()<<std::endl;
        st_1.push(result);
        std::cout<<num1<<st_2.top()<<num2<<"="<<res<<std::endl;
        st_2.pop();
        break;
    }
    index++;
    if(!st_1.empty() && !st_2.empty())
        calculate(st_1, st_2, index, num1, num2);
}

RPN::RPN(std::string av)
{
    std::istringstream iss(av);
    std::stack<std::string> st_1;
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
    std::stack<std::string> st_2(st_1);
    calculate(st_1, st_2, 0, -1, -1);
}