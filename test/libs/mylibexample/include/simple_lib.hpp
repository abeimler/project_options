#pragma once

#include <vector>
#include "mylibexample_export.h"

namespace mylib::example {

    class MYLIBEXAMPLE_EXPORT Foo {

        Foo() = default;

        // trigger warning
        Foo(const std::vector<int>& data) : m_data(data) {}

        void bar();

    private:
        std::vector<int> m_data;    
    };

}