//
// Created by Dz on 24-6-16.
//

#include "iostream"
#include "string"

class Screen {
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ''){};
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){};

    [[nodiscard]] inline char get() const {
        return contents[cursor];
    }
    [[nodiscard]] inline char get(pos r, pos c) const;
    Screen &Move(pos r, pos c);
    Screen &SetContent(char c);
    Screen &SetPos(pos r, pos c, char ch);

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

Screen &Screen::Move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}
Screen &Screen::SetContent(char c) {
    contents[cursor] = c;
    return *this;
}

Screen &Screen::SetPos(pos r, pos c, char ch) {
    contents[r * width + c] = ch;
    return *this;
}