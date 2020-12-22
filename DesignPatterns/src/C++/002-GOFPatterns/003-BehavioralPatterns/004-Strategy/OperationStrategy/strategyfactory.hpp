#include <vector>
#include <memory>
#include "IOperationStrategy.h"
#include "AddOperationStrategy.h"
#include "AddWithValueOperationStrategy.h"
#include "MulOperationStrategy.h"

template <typename T>
using uptrvec = std::vector<std::unique_ptr<T>>;

uptrvec<IOperationStrategy> GetStrategies()
{
    uptrvec<IOperationStrategy> vec;

    vec.push_back(std::make_unique<AddOperationStrategy>());
    vec.push_back(std::make_unique<MulOperationStrategy>());
    vec.push_back(std::make_unique<AddWithValueOperationStrategy>(3));

    return vec;
}

