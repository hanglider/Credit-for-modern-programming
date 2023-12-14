#include <clocale>
#include <iostream>
#include <windows.h>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {
    //SetConsoleOutputCP(CP_UTF8);
    system("chcp 65001");
    const ITrofimov::MenuItem* current = &ITrofimov::MAIN;
    while (1) {
        current = current->func(current);
    }
    return 0;
}