# CMakeのバージョン, C++のバージョンの指定
cmake_minimum_required(VERSION 3.27)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# プロジェクト名と言語の設定
# プロジェクト名はcmake_template, 言語はC++
project(machine_learning CXX)

# 出力ディレクトリを指定
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Eigenのインクルードディレクトリを指定
set(EIGEN3_INCLUDE_DIR "C:\\msys64\\mingw64\\include\\eigen3")
find_package(Eigen3 3.3 REQUIRED)

# src, testディレクトリをサブディレクトリとして追加
add_subdirectory(src)
add_subdirectory(test)
