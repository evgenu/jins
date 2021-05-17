//
// Created by evgen on 5/10/2021.
//

#include "object.h"
#include <iostream>

GameObject::GameObject() {}

GameObject::~GameObject() {}

void GameObject::setCoordinates(int x, int y)
{
    try
    {
        this->x = x;
        this->y = y;
        if (!(this->x == x && this->y == y))
            throw 505;
    }
    catch (...)
    {
        std::cout << "Unable to set values to object " << id << std::endl;
    }
}

int GameObject::getCoordinate(char axis)
{
    try
    {
        switch (axis)
        {
            case 'x':
                return this->x;
                break;
            case 'y':
                return this->y;
                break;
            default:
                std::cout << "Not an axis" << std::endl;
                break;
        }
    }
    catch (...)
    {
        std::cout << "Unable to retrieve value" << std::endl;
    };
}

void GameObject::setDepth(int layer)
{
    try
    {
        this->depth = layer;
        if (this->depth != layer)
        {
            std::cout << "Value is not the required one" << std::endl;
        }
    }
    catch (...)
    {
        std::cout << "Unable to set value" << std::endl;
    }
}

const int GameObject::getDepth()
{
    try
    {
        return this->depth;
    }
    catch (...)
    {
        std::cout << "Unable to retrieve value" << std::endl;
    }
}

void GameObject::render() {}