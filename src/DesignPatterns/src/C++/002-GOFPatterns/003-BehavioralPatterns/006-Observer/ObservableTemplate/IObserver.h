#ifndef IOBSERVER_H_
#define IOBSERVER_H_

#include <string>

template <typename T>
struct IObserver {
	virtual void FieldChanged(T &src, const std::string &name) = 0;
	virtual ~IObserver() = default;
};

#endif //IOBSERVER_H_
