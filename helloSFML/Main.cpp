// helloSFML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>


int main()
{
	// Create window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Demo Game");

	sf::CircleShape circleRed(50);
	sf::CircleShape circleGreen(50);
	sf::CircleShape circleBlue(50);

	circleRed.setFillColor(sf::Color(255, 0, 0));
	circleGreen.setFillColor(sf::Color(0, 255, 0));
	circleBlue.setFillColor(sf::Color(0, 0, 255));

	float xGreen = 200;
	float yGreen = 200;

	float xBlue = 300;
	float yBlue = 300;

	circleRed.setPosition(100, 100);
	circleGreen.setPosition(xGreen, yGreen);
	circleBlue.setPosition(xBlue, yBlue);

	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		// new code
		xGreen = xGreen + .01;
		yGreen = yGreen - .01;

		xBlue = xBlue + .01;
		yBlue = yBlue + .01;

		circleGreen.setPosition(xGreen, yGreen);
		circleBlue.setPosition(xBlue, yBlue);

		window.draw(circleRed);
		window.draw(circleGreen);
		window.draw(circleBlue);

		window.display();
	}

    return 0;
}

