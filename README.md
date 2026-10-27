# Csc-122-Wk10

1. Write a C++ program to create a class called Shape with methods getArea() and getPerimeter(). These should just return 0 for the base class. CHK
2. Create three classes: Circle, Rectangle, and RightTriangle. Override the getArea() and getPerimeter() methods in each subclass to calculate and return the area and perimeter of the respective shapes. CHK
3. Test each of the classes in a main program via assert statements. CHK

1. Update the Shape class to be an abstract class, with getArea and getPerimeter being purely virtual! CHK
2. Update your program with a new concrete class called Square. Square should inherit its behavior from the Rectangle class. You may or may not need to overwrite getArea() and getPerimeter().
3. Update your program with a new concrete class called IsocelesRightTriangle. IsoscelesRightTriangle should inherit its behavior from the RightTriangle class. You may or may not need to overwrite getArea() and getPerimeter().
4. Write a function called "void printAreaToScreen(Shape *s)" which takes a shape object and then prints out a nice message which includes the name and area of the shape. You should be able to use it with all of the shapes that you created!
5. Test each of the classes in a main program via assert statements.
