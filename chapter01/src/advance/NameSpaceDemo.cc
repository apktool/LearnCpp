#include "NameSpaceDemo.h"

namespace {
    void say() {
        std::cout << "hello, Anonymous space" << std::endl;
    }
}

namespace ns {
    void NameSpaceDemo::testBasic() {
        std::cout << "test basic in namespace ns" << std::endl;
    }

    void NameSpaceDemo::testMedium() {
        say();
    }
} // ns