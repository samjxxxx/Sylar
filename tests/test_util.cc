#include "../sylar/sylar.h"

sylar::Logger::ptr p_logger = SYLAR_LOG_ROOT();

void test_assert(){
    SYLAR_LOG_INFO(p_logger) << sylar::BacktraceToString(10);
    SYLAR_ASSERT2(0 == 1, "abcdef xx");
}

int main(int argc, char** argv) {
    test_assert();
    return 0;
}