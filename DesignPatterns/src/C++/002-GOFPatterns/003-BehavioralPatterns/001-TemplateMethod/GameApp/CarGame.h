#ifndef CARGAME_H_
#define CARGAME_H_

#include "AbstractGame.h"

class CarGame : public AbstractGame {
public:
    void play() override;

    void pause() override;

    void save() override;

    void reset() override;

};


#endif //CARGAME_H_
