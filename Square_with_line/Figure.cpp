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

void Figure::draw() {

    pen = CreatePen(PS_SOLID, 2, RGB(255, 162, 0));
    brush = CreateSolidBrush(RGB(218, 255, 255));

    SelectObject(hdc, pen);
    SelectObject(hdc, brush);

    Rectangle(hdc, X - R, Y - R, X + R, Y + R);

    DeleteObject(pen);
    DeleteObject(brush);
}
void Figure::hide() {

    pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
    brush = CreateSolidBrush(RGB(255, 255, 255));
    SelectObject(hdc, pen);
    SelectObject(hdc, brush);
    Rectangle(hdc, X - R, Y - R, X + R, Y + R);
    DeleteObject(pen);
    DeleteObject(brush);

}