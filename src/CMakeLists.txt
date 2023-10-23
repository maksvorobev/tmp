project(src)


target_sources(FileSystem
    PRIVATE
        src/FileSystem.cpp
        src/FileSystem.h

)

target_include_directories(FileSystem
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}"
)


