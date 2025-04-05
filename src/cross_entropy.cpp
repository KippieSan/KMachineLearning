#include "./../include/dependencies.hpp"
#include "./../include/alias.hpp"
#include <cmath>

f64 cross_entropy(const Vec<f64>& y, const Vec<bool>& d) {
    f64 ce(0.0);
    for(std::size_t k = 0; k < y.size(); ++k) {
        if(d(k)) {
            ce -= std::log(y(k));
        }
    }
    return ce;
}

Vec<f64> cross_entropy(const Mat<f64>& y, const Mat<bool>& d) {
    Vec<f64> ce(y.rows());
    for(std::size_t n = 0; n < y.rows(); ++n) {
        ce(n) = cross_entropy(Vec<f64>(y.row(n)), Vec<bool>(d.row(n)));
    }
    return ce;
}
