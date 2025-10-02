#include "webview.h"
#include <iostream>

int main() {
    // Crée la fenêtre
    webview::webview w(true, nullptr);
    w.set_title("Mon Jeu Web");
    w.set_size(800, 600, WEBVIEW_HINT_NONE);

    // Charge le fichier HTML (ici en local)
    w.navigate("file:///C:/Users/tbloy/Documents/OwnBasketRender/index.html");

    // Boucle
    w.run();
    return 0;
}
