#include <iostream>

class Shape{
public:
    virtual int display() = 0;
};

class Circle : public Shape {
    private:
        int r;
    public:
        Circle(int R);
        int display()override;
};

class Rect : public Shape {
    private:
        int l, b;
    public:
        Rect(int L, int B);
        int display()override;
};