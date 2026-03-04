# 最低CMake版本要求（阿里云CentOS7默认满足）
cmake_minimum_required(VERSION 3.10)

# 项目名称（和你的仓库对齐，便于识别）
project(LLM_Inference_Demo)

# 设置C++标准（C++11足够，兼容LLaMA.cpp源码）
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 包含头文件目录（告诉CMake去哪找hello.h）
include_directories(include)

# 收集src目录下所有.cpp文件（避免手动列文件，工业级写法）
file(GLOB SOURCES "src/*.cpp")

# 生成可执行文件（程序名：llm_demo，源码列表：SOURCES）
add_executable(llm_demo ${SOURCES})
