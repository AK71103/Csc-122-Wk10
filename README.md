# Csc-122-Wk10
## Shape Lab
1. Write a C++ program to create a class called Shape with methods getArea() and getPerimeter(). These should just return 0 for the base class. CHK
2. Create three classes: Circle, Rectangle, and RightTriangle. Override the getArea() and getPerimeter() methods in each subclass to calculate and return the area and perimeter of the respective shapes. CHK
3. Test each of the classes in a main program via assert statements. CHK

1. Update the Shape class to be an abstract class, with getArea and getPerimeter being purely virtual! CHK
2. Update your program with a new concrete class called Square. Square should inherit its behavior from the Rectangle class. You may or may not need to overwrite getArea() and getPerimeter(). CHK
3. Update your program with a new concrete class called IsocelesRightTriangle. IsoscelesRightTriangle should inherit its behavior from the RightTriangle class. You may or may not need to overwrite getArea() and getPerimeter(). CHK
4. Write a function called "void printAreaToScreen(Shape *s)" which takes a shape object and then prints out a nice message which includes the name and area of the shape. You should be able to use it with all of the shapes that you created!
5. Test each of the classes in a main program via assert statements.

## Symphonia Polymorphismi Lab

Your job is to create a symphony using polymorphism.

-Create a base class "instrument". It should have a name variable and a sound variable, as well as a virtual function called play (the goal of this function is to just print the name and sound). must be abstracted!

-Create 5 or more derived classes representing various specific instruments. Implement the play function such that each instrument prints its sound for a different number of repetitions. For example, a trumpet might play three "doot"s, and a violin might play five "vwa"s

-Create a class called "orchestra". It should contain a polymorphic list of instruments (aka a list of instrument pointers). The orchestra should have a method also called "play", that makes each instrument in the list call its play function, in the order they are in the list.

Example Output:

Trumpet: doot doot doot '\n'

Violin: vwa vwa vwa vwa vwa '\n'

Piano: Dee dee '\n'

Trombone: Dwooooo~ '\n'

Trumpet: doot doot doot '\n'

Singer: Blah blah blah blah blah blah '\n'

Also answer these TPQs:
Describe how this pattern could be abstracted and then applied to a useful real world scenario.
Imagine you wanted to impose some restrictions on the ordering of your orchestra. E.G. the piano can only go immediately after the trumpet. At what part in your program do you think it would be best to add code to apply these conditions?
