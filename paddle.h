#ifndef rainbowpong_paddle_h
#define rainbowpong_paddle_h

#include <SFML/Graphics.hpp>


/**
 * Paddles are controlled by users and are used to hit the ball.
 */
class Paddle
{
    
private:
    sf::Vector2f position;
    
    sf::RectangleShape paddleShape;
    
    float paddleSpeed;
    
public:
    /**
     * Paddle constructor
     * \param startX horizontal starting position of the paddle
     * \param startY vertical starting position of the paddle
     */
    Paddle(float startX, float startY, float initSpeed);
    
    sf::FloatRect getPosition();
    
    sf::RectangleShape getShape();
    
    void moveUp();
    
    void moveDown();
    
    void update();
    
};

#endif /* paddle_h */
