add_library(mathnav STATIC
        equations/straight_line.cpp
        math/Vector3.hpp
)

target_include_directories(mathnav PUBLIC
        ${PROJECT_SOURCE_DIR}
)