#include "picture.h"


        Circle::Circle(int R)
        {
            r = R;
        }
        int Circle::display()
        {   return 3.14 * r * r;
        }


        Rect::Rect(int L, int B)
        {
            l = L;
            b = B;
        }
        int Rect::display()
        {
            return l * b;
        }