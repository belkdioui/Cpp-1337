#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    std::cout<<"generate"<<std::endl;
    Base *type = NULL;
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
    A *a = new A();
    B *b = new B();
    C *c = new C();
    int i;
    Base * types[3]={a, b, c};
    for(i = 0; i < 3; i++)
    {
        types[i]=dynamic_cast<types[i]>(p);
        if(types == NULL)
            i++;
        else
            break;
    }
    switch (i)
    {
    case 0:
        std::cout<<"type is A"<<std::endl;
        break;
    case 1:
        std::cout<<"type is B"<<std::endl;
        break;
    case 2:
        std::cout<<"type is C"<<std::endl;
        break;
    default:
        break;
    }
}

int main()
{
    Base *base;
    base = generate();
    identify(base);
}