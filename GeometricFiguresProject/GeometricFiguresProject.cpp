#include <iostream>
#include "Figure.h"

// virtual destructor
class Parent
{
public:
    Parent()
    {
        //std::cout << "parent construct\n";
    }

    virtual std::string GetStr()
    {
        return "Parent";
    }

    virtual ~Parent() = default;
};
class Child : public Parent
{
    int* array;
public:
    Child()
    {
        //std::cout << "child construct\n";
        //array = new int[10];
    }

    std::string GetStr() override
    {
        return "Child";
    }

    ~Child()
    {
        //std::cout << "child destruct\n";
        //delete[] array;
    }
};


class A {};
class B : public A{};
class C final : public B{};

class D : public B {};


int main()
{
    /*
    Circle* circle1 = new Circle(0, 0, 10);
    std::cout << circle1->Perimeter() << "\n";
    std::cout << circle1->Square() << "\n";
    std::cout << "\n";
    
    Rectangle* rectangle1 = new Rectangle(0, 0, 10, 20);
    std::cout << rectangle1->Perimeter() << "\n";
    std::cout << rectangle1->Square() << "\n";
    std::cout << "\n";

    Rectangle* rectangle2 = new Rectangle(0, 0, 5, 7);
    std::cout << rectangle2->Perimeter() << "\n";
    std::cout << rectangle2->Square() << "\n";
    std::cout << "\n";
    
    ComplexFigure* cfig = new ComplexFigure();
    cfig->Add(circle1);
    cfig->Add(rectangle1);
    cfig->Add(rectangle2);
    std::cout << cfig->Perimeter() << "\n";
    std::cout << cfig->Square() << "\n";
    std::cout << "\n";

    ComplexFigure* cfig2 = new ComplexFigure();
    Circle* circle2 = new Circle(0, 0, 5);
    std::cout << circle2->Perimeter() << "\n";
    std::cout << circle2->Square() << "\n";
    std::cout << "\n";

    cfig2->Add(circle2);
    cfig2->Add(cfig);
    std::cout << cfig2->Perimeter() << "\n";
    std::cout << cfig2->Square() << "\n";
    std::cout << "\n";
    */



    // virtual destructor
    /*Child* child = new Child();
    delete child;

    std::cout << "\n";

    Parent* parent = new Child();
    delete parent;*/

    Child* child = new Child();
    Parent* parent = child;

    std::cout << child->GetStr() << "\n";
    std::cout << parent->Parent::GetStr() << "\n";
}
