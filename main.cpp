#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "paddle.h"
#include "ball.h"
#include <sstream>


int main(int argc, const char * argv[])
{
    int windowWidth = 1024;
    int windowHeight = 768;
    // Initialization
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Rainbow Pong");
    
//    int leftScore = 0;
//    int rightScore = 0;
    
    Paddle leftPaddle (70, windowHeight / 2 - 20, .3f);
    Paddle rightPaddle (windowWidth - 70, windowHeight / 2 - 20, .3f);
    
    Ball ball(windowWidth / 2, windowHeight / 2);
    
    // Config Heads Up Display (aka hud)
    sf::Text hud;
    sf::Font font;
    font.loadFromFile("Summerti.ttf");
    hud.setFont(font);
    hud.setCharacterSize(75);
    hud.setFillColor(sf::Color::White);
    
    while (window.isOpen())
    {
        // Handle the player input
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                // Someone closed the window- bye
                window.close();
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            // move left...
            //paddle.moveLeft();
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            // move right...
            //paddle.moveRight();
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            // quit...
            // Someone closed the window- bye
            window.close();
        }
    
        //Update the frame
    
        // Handle the ball hitting the left side
        
        // Handle the ball hitting the left paddle
        
        // Handle the ball hitting the right side
        
        // Handle the ball hitting the right paddle
    
        
        ball.update();
        leftPaddle.update();
        rightPaddle.update();
        
        // Update the HUD text
        std::stringstream ss;
//        ss << "Score:" << score << "    Lives:" << lives;
//        hud.setString(ss.str());

        // Draw the frame
        
        // Clear everything from the last frame
        window.clear(sf::Color(26, 128, 182,255));
        
        window.draw(leftPaddle.getShape());
        window.draw(rightPaddle.getShape());
        window.draw(ball.getShape());
        window.draw(hud);
        
        // Show everything we just drew
        window.display();
        
    }// Game Loop
    
    return 0;
}
