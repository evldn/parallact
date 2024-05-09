function(create_project_lib TARGET)
    file(GLOB TARGET_SRC "*.c*")
    file(GLOB TARGET_HD "*.h*")
    add_library(${TARGET} STATIC ${TARGET_SRC} ${TARGET_HD})
    
    get_property ( INCLUDE_DIRS GLOBAL PROPERTY INC_DIR)
    list(APPEND INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR})
    set_property ( GLOBAL PROPERTY INC_DIR ${INCLUDE_DIRS})
    
    get_property ( LIB_LIST GLOBAL PROPERTY LIBS_P)
    list(APPEND LIB_LIST ${TARGET})
    set_property ( GLOBAL PROPERTY LIBS_P ${LIB_LIST})
    
endfunction()

function(create_executable_project TARGET)
    file(GLOB TARGET_SRC "*.c*")
    file(GLOB TARGET_HD "*.h*")
    add_executable(${TARGET} ${TARGET_SRC} ${TARGET_HD})
    
    get_property ( INCLUDE_DIRS GLOBAL PROPERTY INC_DIR)
    target_include_directories(${TARGET} PUBLIC ${INCLUDE_DIRS})
    
    get_property ( LIB_LIST GLOBAL PROPERTY LIBS_P)
    target_link_libraries(${TARGET} ${LIB_LIST})
    
endfunction()

function(custom_enable_cxx17 TARGET)
    # Включаем C++17 везде, где CMake может.
    target_compile_features(${TARGET} PUBLIC cxx_std_17)
    # Включаем режим C++latest в Visual Studio
    if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        set_target_properties(${TARGET} PROPERTIES COMPILE_FLAGS "/std:c++latest")
    # Включаем компоновку с libc++, libc++experimental и pthread для Clang
    elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        set_target_properties(${TARGET} PROPERTIES COMPILE_FLAGS "-stdlib=libc++ -pthread")
        target_link_libraries(${TARGET} c++experimental pthread)
    endif()
endfunction(custom_enable_cxx17)