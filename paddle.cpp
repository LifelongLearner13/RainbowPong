#include "paddle.h"

Paddle::Paddle(float startX, float startY)
{
    position.x = startX;
    position.y = startY;
    
    paddleShape.setSize(sf::Vector2f(50, 5));
    paddleShape.setPosition(position);
}
