//Shape lab
//Alexander W Kazantzis
//10-27-26
//check my code
#include <iostream>
#include <cmath>
#include <numbers>

const double Pi = 3.14159; //constant for Pi

// Base Class for the shapes
class shape{
    private:
    protected:
    public:
    double getArea(){
        return 0;
    }

    double getPerim(){
        return 0;
    }
};
class Circle : public shape{ 
private:
    int Radius = 3;

public:
   double getArea(){ //Area of a circle is Pi times radius squared (pi*R^2) 
        return (Pi * Radius * Radius);
    }

    double getPerim(){ //the circumference of a circle is 2 times pi times r (2*pi*R)
        return (2 * Pi * Radius);
    }
};

int main(){
    Circle c;
    std::cout << "Area of a Circle: " << c.getArea()<< '\n';

    std::cout << "Circumference of a Circle" << c.getPerim()<< '\n';

}