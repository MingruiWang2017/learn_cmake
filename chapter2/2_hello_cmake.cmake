message(STATUS "Hello CMake!")

# CMake默认是用于构建任务的，如果想让它像脚本语言一样执行需要指定-P参数。
# cmake -P 2_hello_cmake.cmake