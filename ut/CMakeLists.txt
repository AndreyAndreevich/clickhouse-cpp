ADD_EXECUTABLE (clickhouse-cpp-ut
    main.cpp

    columns_ut.cpp
    types_ut.cpp
    type_parser_ut.cpp
    client_ut.cpp
)

if(MSVC)
    TARGET_COMPILE_DEFINITIONS(clickhouse-cpp-ut PRIVATE GTEST_LANG_CXX11=1)
endif()

TARGET_LINK_LIBRARIES (clickhouse-cpp-ut
    clickhouse-cpp-lib
    gtest-lib
)
