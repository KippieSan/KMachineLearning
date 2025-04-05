# 出力ファイル
add_executable(main main.cpp)
# main.exeをビルドするために必要なライブラリをリンク
target_link_libraries(main ml_libraries Eigen3::Eigen)

# 実行ファイルの出力ディレクトリを指定
set_target_properties(main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
