#include "Figure.h"

Figure::Figure() 
{
    hwnd = 0;

    if ((hwnd = GetConsoleWindow()) == 0) // получаем идентификатор окна
    {
        cout << "Window not found!!!" << endl;
        return;
    }

    if ((hdc = GetDC(hwnd)) == 0)       // получаем контекст отображения
    {
        cout << "Error!!!" << endl;
        return;
    }

    GetClientRect(hwnd, &rt);   // получаем размер окна

}

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
}

void Figure::move(int _X, int _Y)
{
    
}