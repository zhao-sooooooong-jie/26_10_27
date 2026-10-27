#include"picture.h"
int main()
{
    Shape *s = new Circle(10);
    std::cout << s -> display() << std::endl;
    s = new Rect(10, 20);
    std::cout << s -> display() << std::endl;
}