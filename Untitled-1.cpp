#include <stdio.h>
#include <iostream>
int main()
{
    printf("Hello world\n");
    std::cout << "Press Enter to exit...";
    std::cin.get(); // 等待用户输入，防止窗口立即关闭
    
}