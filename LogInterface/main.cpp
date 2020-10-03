#include <iostream>
#include <vector>
#include <sstream>

#include "LogInterface.h"

int main()
{
    std::cout << "Hello Log!\n";

    int n = 14;
    double d = 3.4l;
    char cstr[] = "cstring";

    Log_e("this is error log");
    Log_i("n = 0x" << std::hex << n);
    Log_w("n = " << n << ", d = " << d << ", cstr = " << cstr);
    Log_v("n = " << n << ", d = " << d << ", cstr = " << cstr);

    std::vector<int> intArray{ 2, 4, 6, 8, 10 };
    std::ostringstream oss;
    for (auto num : intArray) {
        oss << num << ", ";
    }
    Log_i("intArray(" << oss.str() << ")");

    

}