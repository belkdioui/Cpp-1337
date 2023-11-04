#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <typeinfo>

Base * generate(void)
{
    std::cout<<"generate"<<std::endl;
    Base *type = NULL;
    srand(time(0));
    int random_number = rand() % 3;
    switch (random_number)
    {
    case 0:
        type = new A();
        break;
    case 1:
        type = new B();
        break;
    case 2:
        type = new C();
        break;
    default:
        break;
    }
    return type;
}

void identify(Base* p)
{
    std::cout<<"Identify by pointer: ";
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    
    if (a) {
        std::cout<<"type is A"<<std::endl;
        return;
    }
    else if (b) {
        std::cout<<"type is B"<<std::endl;
        return;
    }
    else if (c)
    {
        std::cout<<"type is C"<<std::endl;
        return;
    }
    else {
        std::cout<<"has no type"<<std::endl;
    }
}

void identify(Base& p)
{
    std::cout<<"Identify by Reference: ";
    try {
    A a = dynamic_cast<A&>(p);
    std::cout<<"type is A"<<std::endl;
    return;
    } catch (std::bad_cast e) {
    }
    try {
    B b = dynamic_cast<B&>(p);
    std::cout<<"type is B"<<std::endl;
    return;
    } catch (std::bad_cast e) {
    }
    try {
    C c = dynamic_cast<C&>(p);
    std::cout<<"type is C"<<std::endl;
    return;
    } catch (std::bad_cast e) {
    }
}

int main()
{
    Base *base;
    base = generate();
    identify(base);
    if(base)
        identify(*base);
}