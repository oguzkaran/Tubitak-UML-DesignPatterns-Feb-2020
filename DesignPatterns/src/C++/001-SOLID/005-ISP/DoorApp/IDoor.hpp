#ifndef IDOOR_H_
#define IDOOR_H_

struct IDoor {
	virtual void Open() = 0;
	virtual void Close() = 0;
	virtual bool IsOpen() = 0;
	virtual ~IDoor() = default;
};

#endif //IDOOR_H_
