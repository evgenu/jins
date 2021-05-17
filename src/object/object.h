//
// Created by evgen on 5/10/2021.
//

#ifndef SFMLTEST_OBJECT_H
#define SFMLTEST_OBJECT_H

class GameObject
{
public:
    GameObject();
    ~GameObject();
    void setCoordinates(int x, int y);
    int getCoordinate(char axis);
    void setDepth(int layer);
    int getDepth();
    virtual void render();

protected:
    int x;
    int y;
    int id;
    int depth;
};

#endif //SFMLTEST_OBJECT_H
