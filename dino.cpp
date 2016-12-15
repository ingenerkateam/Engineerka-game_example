#include "TXLib.h"
#include "dinosaur.h"

int main ()
{
    int x = 50, y = 100;
    double vx = 5.0, vy = 3.0;
    
    txCreateWindow(600, 400);
    while(!GetAsyncKeyState(VK_ESCAPE)) {
        moveDino(x, y, &vx, &vy);
    }
    
    return 0;
}
