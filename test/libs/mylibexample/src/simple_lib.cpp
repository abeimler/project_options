#include <algorithm>

#include "simple_lib.hpp"

namespace mylib::example {

void Foo::bar() {
    auto find = std::find_if(m_data.begin(), m_data.end(), [](int it) {
        return it == 5;
    });
    if (find != m_data.end()) {
        *find = 42;
    }
}

}
