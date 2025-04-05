# ライブラリは共有ライブラリであり、以下のcppファイルによって生成される
add_library(ml_libraries SHARED 
    softmax.cpp
)

# ライブラリのインクルードディレクトリを指定する
target_include_directories(ml_libraries PUBLIC 
    ${PROJECT_SOURCE_DIR}/include
    ${EIGEN3_INCLUDE_DIR}
)

# 共有ライブラリの出力ディレクトリを指定
set_target_properties(ml_libraries PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)
