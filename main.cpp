#include <iostream>
#include "NoPerecedero.h"
#include "Producto.h"

using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main(){
    Producto *productos[4];

    productos[0] = new NoPerecedero("fd","Lata",50);
    productos[1] = new NoPerecedero("fd","Lata",50);
    productos[2] = new NoPerecedero("fd","Lata",50);
    productos[3] = new NoPerecedero("fd","Lata",50);

    for (int i = 0; i < 4; i++){
        cout << productos[i]->getNombre()<<"\n"<<productos[i]->getPrecio()<<endl;
    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}