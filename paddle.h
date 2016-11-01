//  paddle.h

#pragma once
#include <SFML/Graphics.hpp>


/**
 * Paddles are controlled by users and are used to hit the ball.
 */
class Paddle
{
    
private:
    sf::Vector2f position;
    
    sf::RectangleShape paddleShape;
    
    float paddleSpeed = .3f;
    
public:
    /**
     * Paddle constructor
     * \param startX horizontal starting position of the paddle
     * \param startY vertical starting position of the paddle
     */
    Paddle(float startX, float startY);
    
    sf::FloatRect getPosition();
    
    sf::RectangleShape getShape();
    
    void moveUp();
    
    void moveDown();
    
    void update();
    
};
