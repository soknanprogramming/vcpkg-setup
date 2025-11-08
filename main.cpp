#include <fmt/color.h>

auto main() -> int{
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "Hello, {}!\n", "world");
    fmt::print(fg(fmt::color::floral_white) | bg(fmt::color::slate_gray) | fmt::emphasis::underline, "Olá, {}!\n", "Mundo");
    fmt::print(fg(fmt::color::steel_blue) | fmt::emphasis::italic, "你好{}！\n", "世界");
    fmt::print(fg(fmt::color::steel_blue) | fmt::emphasis::italic, "សួស្តី");

    return 0;
}