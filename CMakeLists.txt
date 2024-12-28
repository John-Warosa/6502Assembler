cmake_minimum_required(VERSION 3.21...3.31)

project(6502Assembler VERSION 1.0
                      DESCRIPTION "An Assembler for my Emulator"
                      LANGUAGES C)

add_executable(Assembler src/main.c
                         src/instructions.c)

target_include_directories(Assembler PRIVATE include)
target_compile_features(Assembler PRIVATE c_std_23)
target_compile_options(Assembler PRIVATE -Wall -Wextra)
