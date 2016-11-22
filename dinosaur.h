/**
    Структура "человек".

    @param x                Горизонтальная координата глаза человека
    @param y                Вертикальная координата глаза человека
    @param vx               Скорость человека по горизонтали
    @param vy               Скорость человека по вертикали
*/
struct Man {
    int x, y;
    double vx, vy;
};

/**
    Рисует динозавра.

    @param x                Горизонтальная координата глаза динозавра
    @param y                Вертикальная координата глаза динозавра
    @param leg_pos          Позиция задней ноги (1 - поднята, 0 - опущена)
    @param message          Текст, который говорит динозавр

    @warning Предполагается, что координаты x и y находятся в пределах разрешения экрана.
*/
void drawDino(int x, int y, int leg_pos, const char* message);

/**
    Движение динозавра.

    @param x                Горизонтальная координата глаза динозавра
    @param y                Вертикальная координата глаза динозавра
    @param vx               Скорость динозавра по горизонтали
    @param vy               Скорость динозавра по вертикали

    @warning Предполагается, что координаты x и y находятся в пределах разрешения экрана.
    @warning Скорость движения динозавра меняется внутри функции.
*/
void moveDino(double x, double y, double* vx, double* vy);

void drawDino(int x, int y, int leg_pos, const char* message)
{
    //...
}
void moveDino(double x, double y, double* vx, double* vy)
{
    //.....
}
