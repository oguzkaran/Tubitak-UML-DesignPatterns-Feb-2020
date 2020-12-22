#ifndef ICLONEABLE_H_
#define ICLONEABLE_H_

#include <memory>

template <typename T>
struct ICloneable {
    virtual std::unique_ptr<T> clone() = 0;
    virtual ~ICloneable() = default;
};

#endif //ICLONEABLE_H_
