#pragma once

#include <utility>

namespace com::bshg::data::repository {
    template<typename T>
    using MyOptional = std::pair<T *, bool>; //C++ 11 ile bu tür zaten var

    template<typename T, typename ID>
    struct ICrudRepository {
        virtual T &save(T &t) = 0;
        virtual MyOptional<T> find_by_id(const ID &id) = 0;
        virtual void delete_by_id(const ID &id) = 0;
        //...
        virtual ~ICrudRepository() = default;
    };
}