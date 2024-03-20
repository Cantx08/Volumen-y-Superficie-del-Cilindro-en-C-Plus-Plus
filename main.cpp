#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "04 Programa que calcula el volumen y la superficie de un cilindro" << endl;
    float radio, altura, area, volumen;

    // Ingresar la longitud del radio y de la altura del cilindro.
    // Nota: El radio y la altura deben tener una longitud mayor a 0!
    cout << "Ingrese el radio del cilindro (en cm): ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro (en cm): ";
    cin >> altura;

    // Calcular la superficie del cilindro.
    area = 2 * M_PI * radio * (radio + altura);

    // Calcular el volumen del cilindro.
    volumen = M_PI * pow(radio, 2) * altura;

    // Mostrar el resultado en consola.
    cout << "La superficie del cilindro es: " << area << " cm^2." << endl;
    cout << "El volumen del cilindro es: " << volumen << " cm^3.";
    return 0;
}
