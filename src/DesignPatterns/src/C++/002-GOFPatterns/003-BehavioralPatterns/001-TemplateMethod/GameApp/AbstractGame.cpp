#include "AbstractGame.h"

void AbstractGame::run()
{
    play();
    //...

    pause();

    reset();
    save();
}