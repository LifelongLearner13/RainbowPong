#ifndef rainbowpong_ball_h
#define rainbowpong_ball_h

#include <SFML/Graphics.hpp>

/**
 * The ball moves across the game board. It can rebound against a wall or
 * paddle. Crossing the either player's goal will earn their 
 * opponent point.
 */
class Ball
{
private:
    sf::Vector2f position;
    
    sf::RectangleShape ballShape;
    
    float xVelocity;
    float yVelocity;
    
public:
    Ball(float startX, float startY);
    
    sf::FloatRect getPosition();
    
    sf::RectangleShape getShape();
    
    float getXVelocity();
    
    void reboundSides();
    
    void reboundBatOrTop();
    
    void hitBottom();
    
    void update();
    
};

#endif /* ball_h */
