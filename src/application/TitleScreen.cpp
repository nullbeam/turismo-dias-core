#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>
#include <iomanip>
#include <stdlib.h>
#include "Colors.h"
#include "TitleScreen.h"
#include "MainScreen.h"

using namespace std;

void TitleScreen::render() {
    drawnBorder();
    drawnContent(" ", false, ANSI_COLOR_GREEN);

    drawnContent(" ___ _  _ ____   _  ____ _  _ ____    ___  _ ____ ____ ", false, ANSI_COLOR_PURPLE);
    drawnContent("  |  |  | |__/   |  [__  |\\/| |  |    |  \\ | |__| [__  ", false, ANSI_COLOR_PURPLE);
    drawnContent("  |  |__| |  \\   |  ___] |  | |__|    |__/ | |  | ___] ", false, ANSI_COLOR_PURPLE);
    drawnContent("", false, ANSI_COLOR_GREEN);
    drawnContent("", false, ANSI_COLOR_GREEN);
    drawnContent("1. Ingresar como invitado", false, ANSI_COLOR_GREEN);
    drawnContent("2. Iniciar sesion", false, ANSI_COLOR_GREEN);
    drawnContent("3. Registrase", false, ANSI_COLOR_GREEN);
    drawnContent("4. Salir", false, ANSI_COLOR_GREEN);
    drawnContent("", false, ANSI_COLOR_GREEN);
    drawnContent("Escoge una opcion:", false, ANSI_COLOR_GREEN);

    drawnContent(" ", false, ANSI_COLOR_GREEN);
    drawnBorder();
};
 
void TitleScreen::load() {
    int option = 0;
    do {
        render();
        cin >> option;
        
        system("clear");
        switch (option)
        {
            case 1:
                MainScreen::load();
                break;
            case 2:
                MainScreen::load();
                break;
            case 3:
                MainScreen::load();
            default:
                cout << "Esa opcion no es valida";
                break;
        }
    } while (option != 4);
};

 