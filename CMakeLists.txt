cmake_minimum_required(VERSION 3.20)
project(CAndCppLearning)

set(CMAKE_CXX_STANDARD 20)

add_executable(CAndCppLearning
        c/01helloworld.c
        c/02comment.c
        c/03system.c
        c/04string_format.c
        c/05var_and_val.c
        c/06keyword1.c
        c/07buy_items.c
        c/08define_constant.c
        c/09keyboard_input.c
        c/10sizeof_test.c
        c/11typedef.c
        c/12extern_keyword.c
        c/13position.c
        c/14binary_number.c
        c/leetcode/1_twoSum.c
        c/leetcode/9_palindrome.c)
