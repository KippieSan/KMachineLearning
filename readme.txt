ビルド
cmake -B build
cmake --build build

実行ファイルの場所
./build/bin/<filename>.exe

CMakeLists.txtのプロジェクト名、ライブラリ名、実行ファイル名はそれぞれ
cmake_template
tempalte
main
となっているので適宜変更

また、指定ファイル名も
template.cpp
main.cpp
となっているので適宜変更
