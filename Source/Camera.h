#pragma once

#include <SFML/Graphics.hpp>

namespace Entity
{
    class Mob;
}

namespace sf
{
    class Drawable;
}

class Camera
{
    public:
        Camera(sf::RenderWindow& window);

        void hookMob(Entity::Mob& mob);

        void update();

        void draw(sf::Drawable& drawable);

        sf::RenderWindow& getWindow();

		bool inBounds(sf::FloatRect & rect);

    private:
        sf::View m_view;
		sf::FloatRect m_bounds;

        Entity::Mob* m_pMob = nullptr;
        sf::RenderWindow* m_pWindow = nullptr;
};
