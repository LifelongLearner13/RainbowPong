#include "paddle.h"

Paddle::Paddle(float startX, float startY, float initSpeed)
{
    position.x = startX;
    position.y = startY;
    
    paddleShape.setSize(sf::Vector2f(5, 100));
    paddleShape.setPosition(position);
    // Reposition shapes local origin from the
    // top left corner to the center.
    paddleShape.setOrigin(
        paddleShape.getSize().x / 2,
        paddleShape.getSize().y / 2);
    
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
