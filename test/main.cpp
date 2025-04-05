#include "../include/dependencies.hpp"
#include "../include/alias.hpp"
#include "../include/softmax.hpp"
#include <iostream>
int main() {
    Mat<f64> mat(4, 4);
    mat <<  1, 2, 3, 4,
            6, 2, 2, 3,
            4, 6, 8, 9,
            1, 1, 1, 1;


    const auto res = softmax(mat);
    for(std::size_t r = 0; r < res.rows(); ++r) {
        for(std::size_t c = 0; c < res.cols(); ++c) {
            std::cout << res(r, c) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}