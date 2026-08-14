cmake_minimum_required(VERSION 3.20)
project(LeetCode C)

set(CMAKE_C_STANDARD 99)

# 自动扫描 src 目录下所有的 .c 文件
file(GLOB SOURCES "src/*.c")

# 创建可执行文件目标
add_executable(LeetCode ${SOURCES})