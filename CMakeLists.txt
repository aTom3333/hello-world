cmake_minimum_required(VERSION 3.2)

project(hello-world)

add_executable(hello-world main.cpp hello.hpp hello.cpp)

add_executable(hello-test hello.hpp hello.cpp test.cpp)

target_compile_features(hello-test
        PUBLIC
        cxx_alignas
        cxx_alignof
        cxx_attributes
        cxx_auto_type
        cxx_constexpr
        cxx_defaulted_functions
        cxx_deleted_functions
        cxx_final
        cxx_lambdas
        cxx_noexcept
        cxx_override
        cxx_range_for
        cxx_rvalue_references
        cxx_static_assert
        cxx_strong_enums
        cxx_trailing_return_types
        cxx_unicode_literals
        cxx_user_literals
        cxx_variadic_macros
        )

enable_testing()
add_test(test hello-test)