#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

// Variables
Texture texture;
Sprite sprite;

int main() {

    // Cargamos la textura del archivo
    texture.loadFromFile("plataforma.jpg");

    // Cargamos el material del sprite
    sprite.setTexture(texture);

    // Crear una ventana de SFML
    sf::RenderWindow ventana(sf::VideoMode(800, 600, 32), "Escenario de juego de Plataformas");

    
    // Bucle principal del juego
    while (ventana.isOpen())
    {
        sf::Event event;
        while (ventana.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ventana.close();
        }
        // Limpiar la ventana
        ventana.clear();

        // Primer escalón escalado a 0.25
        sprite.setScale(0.25, 0.25);
        // escalon de la izquierda
        sprite.setPosition(20, 600 - 64);
        ventana.draw(sprite);

        // Segundo escalón escalado a 0.50
        sprite.setScale(0.25, 0.5);
        // escalon de la izquierda
        sprite.setPosition(20 + 64 + 20, 600 - 128);
        ventana.draw(sprite);

        // Tercer escalón escalado a 0.75
        sprite.setScale(0.25, 0.75);
        // escalon de la izquierda
        sprite.setPosition(20 + 128 + 40, 600 - 172);
        ventana.draw(sprite);

        // Cuarto escalón escalado a 1.0
        sprite.setScale(0.25, 1.0);
        // escalon de la izquierda
        sprite.setPosition(20 + 192 + 60, 600 - 256);
        ventana.draw(sprite);
       
        // Quinto escalón escalado a 1.25
        sprite.setScale(0.25, 1.25);
        // escalon de la izquierda
        sprite.setPosition(20 + 256 + 80, 600 - 320);
        ventana.draw(sprite);

        // Sexto escalón escalado a 1.5
        sprite.setScale(0.25, 1.5);
        // escalon de la izquierda
        sprite.setPosition(20 + 320 + 100, 600 - 384);
        ventana.draw(sprite);

        // Sexto escalón escalado a 1.5
        sprite.setScale(1, 0.25);
        // escalon de la izquierda
        sprite.setPosition(20 + 384 + 120, 600 - 384);
        ventana.draw(sprite);

        // Mostrar la ventana
        ventana.display();
    }

    return 0;
}
