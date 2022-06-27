macro(DisableStaticAnalysisForTarget target)
    set_target_properties(${target} PROPERTIES C_CPPCHECK "")
    set_target_properties(${target} PROPERTIES C_CLANG_TIDY "")
    set_target_properties(${target} PROPERTIES CXX_CPPCHECK "")
    set_target_properties(${target} PROPERTIES CXX_CLANG_TIDY "")
endmacro()


add_subdirectory(mylibexample)
# todo: add ignore checkers here
DisableStaticAnalysisForTarget(MyLibExample)
DisableStaticAnalysisForTarget(CMyLibExample)

# testing CPM
#CPMAddPackage("gh:raysan5/raylib#4.0.0")
#if(NOT MSVC)
#  # don't error on implicit declarations, which are invalid in C99 but commonly used
#  target_compile_options(raylib PRIVATE -Wno-error=implicit-function-declaration)
#endif()
#set_target_properties(raylib PROPERTIES C_CPPCHECK "")
#set_target_properties(raylib PROPERTIES C_CLANG_TIDY "")
#set_target_properties(glfw PROPERTIES C_CPPCHECK "")
#set_target_properties(glfw PROPERTIES C_CLANG_TIDY "")
#target_link_system_libraries(CMyLibExample PUBLIC raylib)