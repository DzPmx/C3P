//
// Created by Dz on 24-6-16.
//

#include "iostream"
#include "string"
#include "vector"


class Screen {
    friend class window_mgr;


public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){};
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){};

    [[nodiscard]] inline char get() const {
        return contents[cursor];
    }
    [[nodiscard]] inline char get(pos r, pos c) const;
    Screen &Move(pos r, pos c);
    Screen &SetContent(char c);
    Screen &SetPos(pos r, pos c, char ch);
    Screen &Display(std::ostream &os);
    [[nodiscard]] pos size() const;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void DoDisplay(std::ostream &os) const;
};

class window_mgr {
public:
    using ScreenIndex = std::string::size_type;
    void Clear(ScreenIndex i) {
        Screen &s = screens[i];
        s.contents = std::string(s.height * s.width, ' ');
    };

    ScreenIndex AddScreen(const Screen &);

private:
    std::vector<Screen> screens{Screen(24, 80, 'X')};
};

window_mgr::ScreenIndex window_mgr::AddScreen(const Screen &s) {
    screens.push_back(s);
    return screens.size() - 1;
}


inline char
Screen::get(pos r, pos c) const {
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

inline Screen &Screen::Display(std::ostream &os) {
    DoDisplay(os);
    return *this;
}

Screen::pos Screen::size() const {
    return height * width;
}

void Screen::DoDisplay(std::ostream &os) const {
    os << contents << std::endl;
}

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.Move(0, 0).SetContent('#').Display(std::cout);
}