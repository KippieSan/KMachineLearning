#include "./dependencies.hpp"
#include <stdfloat>
#include <stdint.h>

using f64 = std::float64_t;

template <typename T>
using Vec = Eigen::Matrix<T, 1, Eigen::Dynamic>;

template <typename T>
using Mat = Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic>;
