#ifndef ICRUDREPOSITORY_H_
#define ICRUDREPOSITORY_H_

#include <deque>

template <typename T, typename ID, typename Cont = std::deque<T>>
struct ICrudRepository {
    virtual T &save(T &t) = 0;
    virtual Cont find_all() = 0;
    virtual bool exist_by_id(const ID &id) = 0;
    //...
    virtual ~ICrudRepository() = default;
};

#endif //ICRUDREPOSITORY_H_
