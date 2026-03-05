#include "hello.h"  // 包含头文件
#include <iostream>

// 实现打印函数（模拟AI服务初始化提示）
void print_hello(const char* name) {
    std::cout << "===== " << name << " AI Inference Tool =====" << std::endl;
    std::cout << "CMake多文件编译成功！" << std::endl;
}

// 实现加法函数（模拟量化计算的基础逻辑）
int add(int a, int b) {
    return a + b;
}
