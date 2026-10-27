#include"picture.h"
int main()
{
    Shape *s = new Circle(10);
    std::cout << s -> display() << std::endl;
}