#include "hello.h"  // 包含自定义头文件
#include <iostream>
#include <unistd.h>
int main() {
    // 调用打印函数（模拟启动AI推理工具）
    print_hello("LLM-Inference-Tool");
    
    // 调用加法函数（模拟量化计算）
    int a = 10, b = 20;
    std::cout << "基础计算示例：" << a << " + " << b << " = " << add(a, b) << std::endl;
    
    std::cout << "程序进入常驻循环模式，按下Ctrl+C退出..." << std::endl;
    int t = 1;
    while (true) {
        sleep(1);  // 每秒休眠一次，不占CPU
        std::cout << t++ << std::endl;
    }
    return 0;
}
