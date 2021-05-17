//
// Created by evgen on 4/14/2021.
//

#ifndef SFMLTEST_RENDER_H
#define SFMLTEST_RENDER_H

#include "../object/object.h"

class Camera
{
public:
    Camera();
    ~Camera();
    void render(GameObject * object);

};

#endif //SFMLTEST_RENDER_H
