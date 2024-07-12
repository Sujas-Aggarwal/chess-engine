#include "raylib.h"
using namespace std;
int main()
{
    InitWindow(800, 600, "Tower Defense Game");
    SetTargetFPS(60);

    Font font = LoadFontEx("assets/fonts/pixel/pixel-var.ttf", 64, 0, 0);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        DrawTextEx(font, "CHESS!", {260, 100}, 64, 0, WHITE);
        DrawRectangleLines(260, 200, 280, 60, BLUE);

        // DrawRectangle(260, 200, 280, 60, BLUE);
        DrawTextEx(font, "START", {360, 213}, 32, 0, WHITE);
        if (CheckCollisionPointRec(GetMousePosition(), {260, 280, 280, 60}) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            CloseWindow();
            break;
        }
        if (CheckCollisionPointRec(GetMousePosition(), {260, 280, 280, 60}) || CheckCollisionPointRec(GetMousePosition(), {260, 200, 280, 60}))
        {
            SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
        }
        else
        {
            SetMouseCursor(MOUSE_CURSOR_DEFAULT);
        }
        DrawRectangleLines(260, 280, 280, 60, RED);
        // DrawRectangle(260, 280, 280, 60, RED);
        DrawTextEx(font, "EXIT", {370, 292}, 32, 0, WHITE);
        EndDrawing();
    }
    return 0;
}