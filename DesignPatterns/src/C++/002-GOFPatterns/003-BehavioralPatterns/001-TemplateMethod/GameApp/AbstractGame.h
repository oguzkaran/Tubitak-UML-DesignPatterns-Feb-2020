#ifndef ABSTRACTGAME_H_
#define ABSTRACTGAME_H_

class AbstractGame {
    //...
public:
    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void save() = 0;
    virtual void reset() = 0;
    virtual ~AbstractGame() = default;
public:
    void run();
};


#endif //ABSTRACTGAME_H_
