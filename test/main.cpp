#include "../include/dependencies.hpp"
#include "../include/alias.hpp"
#include "../include/softmax.hpp"
#include "../include/cross_entropy.hpp"
#include <iostream>
int main() {
    Mat<f64> mat(4, 4);
    mat <<  1, 2, 3, 4,
            6, 2, 2, 3,
            4, 6, 8, 9,
            1, 1, 10, 1;
    Mat<bool> d(4, 4);
    d <<    false, false, false, true,
            true, false, false, false,
            false, false, false, true,
            false, false, true, false;


    const auto res = softmax(mat);
    for(std::size_t r = 0; r < res.rows(); ++r) {
        for(std::size_t c = 0; c < res.cols(); ++c) {
            std::cout << res(r, c) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    const auto res2 = cross_entropy(res, d);
    for(std::size_t r = 0; r < res2.rows(); ++r) {
        for(std::size_t c = 0; c < res2.cols(); ++c) {
            std::cout << res2(r, c) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}