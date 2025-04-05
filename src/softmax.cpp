#include "../include/dependencies.hpp"
#include "../include/alias.hpp"
#include <cmath>
Vec<f64> softmax(const Vec<f64>& u) {
    Vec<f64> y(u.size());
    f64 sum_u(0.0);
    for(const auto& v: u) {
        sum_u += std::exp(v);
    }
    for(std::size_t k = 0; k < u.size(); ++k) {
        y(k) = std::exp(u(k)) / sum_u;
    }
    return y;
}

Mat<f64> softmax(const Mat<f64>& u) {
    Mat<f64> y(u.rows(), u.cols());
    for(std::size_t n = 0; n < y.rows(); ++n) {
        y.row(n) = softmax(Vec<f64>(u.row(n)));
    }
    return y;
}
