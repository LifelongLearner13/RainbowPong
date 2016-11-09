#include "paddle.h"

Paddle::Paddle(float startX, float startY, float initSpeed)
{
    position.x = startX;
    position.y = startY;
    
    paddleShape.setSize(sf::Vector2f(5, 50));
    paddleShape.setPosition(position);
    
    paddleSpeed = initSpeed;
}

sf::FloatRect Paddle::getPosition()
{
    return paddleShape.getGlobalBounds();
}

sf::RectangleShape Paddle::getShape()
{
    return paddleShape;
}

void Paddle::moveUp()
{
    position.y -= paddleSpeed;
}

void Paddle::moveDown()
{
    position.y += paddleSpeed;
}

void Paddle::update()
{
    paddleShape.setPosition(position);
}
