ADD_LIBRARY (gtest-lib STATIC
    gtest-all.cc
)

if(MSVC)
    TARGET_COMPILE_DEFINITIONS(gtest-lib PRIVATE GTEST_LANG_CXX11=1)
endif()