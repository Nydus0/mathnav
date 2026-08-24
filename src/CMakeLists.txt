add_library(mathnav STATIC
    equations/straight_line.cpp
)

target_include_directories(mathnav PUBLIC
        ${PROJECT_SOURCE_DIR}
)