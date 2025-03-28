#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include "Serie.hpp"
#include <iostream>
using namespace std;
using namespace ftxui;


int main(int argc, char const *argv[])
{
auto Pantalla = Screen::Create{
    ftxui::Full(),
    ftxui::Full()
};

auto Documento = vbox{
    spinner(21,1);
}
Render(Pantalla,documento);
Pantalla.print();



Serie serienavidena;

serienavidena.ApagarTodo();
serienavidena.Imprimir();
serienavidena.EncenderTodo();
serienavidena.Imprimir();
serienavidena.ApagarCantidad(8);
serienavidena.Imprimir();
serienavidena.EncenderCantidad(3);
serienavidena.Imprimir();
serienavidena.AlternarEncendido();
serienavidena.Imprimir();
serienavidena.RecorrerDerecha();
serienavidena.Imprimir();
serienavidena.RecorrerIzquierda();
serienavidena.Imprimir();



 return 0;
}