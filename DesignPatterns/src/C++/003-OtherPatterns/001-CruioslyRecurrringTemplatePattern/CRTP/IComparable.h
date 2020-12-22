#ifndef ICOMPARABLE_H_
#define ICOMPARABLE_H_

template <typename T>
struct IComparable {
    virtual int compare_to(const T &r) const = 0;
    virtual ~IComparable() = default;
};

#endif //ICOMPARABLE_H_
