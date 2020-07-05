#include <iostream>
#include <windows.h>

using namespace std;

int main(void){

POINT mouse;

        GetCursorPos(&mouse);
        cout << mouse.x << "," << mouse.y << "\n";



    return 0;
}
