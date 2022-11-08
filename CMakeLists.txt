cmake_minimum_required(VERSION 3.20)
project(CAndCppLearning)

set(CMAKE_CXX_STANDARD 20)

add_executable(CAndCppLearning
        src/main/c/01helloworld.c
        src/main/c/02comment.c
        src/main/c/03system.c
        src/main/c/04string_format.c
        src/main/c/05var_and_val.c
        src/main/c/06keyword1.c
        src/main/c/07buy_items.c
        src/main/c/08define_constant.c
        src/main/c/09keyboard_input.c
        src/main/c/10sizeof_test.c
        src/main/c/11typedef.c
        src/main/c/12extern_keyword.c
        src/main/c/13position.c
        src/main/c/14binary_number.c
        src/main/c/leetcode/1_twoSum.c
        src/main/c/leetcode/9_palindrome.c)
