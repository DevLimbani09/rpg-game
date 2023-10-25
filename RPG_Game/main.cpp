#include <SFML/Graphics.hpp>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

int main() {


	//--------INITIALIZE--------------------------------------

	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	//window object
	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "RPG Game", sf::Style::Default, settings);

	float circleRadius = 50.0f;
	sf::CircleShape circle(circleRadius);
	circle.setFillColor(sf::Color::Red);
	circle.setOutlineThickness(10);
	circle.setOutlineColor(sf::Color::White);
	circle.setPosition(sf::Vector2f((WINDOW_WIDTH / 2) - circleRadius, (WINDOW_HEIGHT / 2) - circleRadius));

	float rectangleWidth = 100.0f;
	float rectangleHeight = 50.0f;
	sf::RectangleShape rectangle(sf::Vector2f(rectangleWidth, rectangleHeight));
	rectangle.setFillColor(sf::Color::Blue);
	rectangle.setOutlineThickness(10);
	rectangle.setOutlineColor(sf::Color::White);
	//rectangle.setPosition(sf::Vector2f((WINDOW_WIDTH / 2) - rectangleWidth / 2, (WINDOW_HEIGHT / 2) - rectangleHeight / 2));
	//rectangle.setOrigin(sf::Vector2f(50, 50));
	//rectangle.setRotation(45.0f);

	//--------INITIALIZE--------------------------------------

	//main game loop
	while (window.isOpen()) {

		//--------UPDATE--------------------------------------
		sf::Event event;

		//LOOK FOR and CLEAR window events queue
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		//--------UPDATE--------------------------------------

		//--------DRAW--------------------------------------
		//clear screen
		window.clear(sf::Color::Black);

		window.draw(circle);
		window.draw(rectangle);

		//dislay the buffer on screen
		window.display();
		//--------DRAW--------------------------------------


	}

	return 0;
}