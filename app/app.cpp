#include <foo/foo.hpp>
#include <format>
#include <functional>
#include <palgo/math.hpp>
#include <palgo/sort.hpp>
#include <raylib.h>
#include <sstream>
#include <string>
#include <vector>

int main() {
  foo();
  std::string text1 = std::format("Answer for fib(42) is {}", fib(42));

  std::vector<int> arr{-2, 3, 1, 5, 6, 12, 8, -4, 9};
  std::stringstream ss;
  for (auto &e : arr) {
    ss << e << " ";
  }
  std::string text2 = std::format("arr is {}", ss.str());
  std::function<Ord(int, int)> cmp = [](int a, int b) {
    if (a > b) {
      return Ord::GT;
    } else if (a < b) {
      return Ord::LT;
    } else {
      return Ord::EQ;
    }
  };

  insert_sort(arr, cmp);
  ss = {};
  for (auto &e : arr) {
    ss << e << " ";
  }
  std::string text3 = std::format("after sort is {}", ss.str());

  const int window_width = 800;
  const int window_height = 500;
  const int fps = 60;

  InitWindow(window_width, window_height, "Hello World from Raylib5");
  SetTargetFPS(fps);

  Font timesi_font =
      LoadFontEx("res/timesi.ttf", 32, static_cast<int *>(nullptr), 255);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(Color{165, 191, 204, 236});

    DrawTextEx(timesi_font, text1.c_str(), Vector2{96, 154},
               static_cast<float>(timesi_font.baseSize), 2.0, DARKBROWN);
    DrawTextEx(timesi_font, text2.c_str(), Vector2{96, 230},
               static_cast<float>(timesi_font.baseSize), 2.0, DARKBROWN);
    DrawTextEx(timesi_font, text3.c_str(), Vector2{96, 308},
               static_cast<float>(timesi_font.baseSize), 2.0, DARKBROWN);

    EndDrawing();
  }
  CloseWindow();

  return 0;
}