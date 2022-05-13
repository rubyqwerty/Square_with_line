#include "Figure.h"

Figure::Figure() 
{
    hwnd = 0;

    if ((hwnd = GetConsoleWindow()) == 0) 
    {
        cout << "Window not found!!!" << endl;
        return;
    }

    if ((hdc = GetDC(hwnd)) == 0)      
    {
        cout << "Error!!!" << endl;
        return;
    }

    GetClientRect(hwnd, &rt);   

}

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
}

void Figure::move(int _X, int _Y)
{
    hide();
    X = _X;
    Y = _Y;
    draw();
}