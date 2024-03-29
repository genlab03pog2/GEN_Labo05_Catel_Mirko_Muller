cmake_minimum_required(VERSION 2.8.2)

project(GEN_Labo05_Catel_Mirko_Muller CXX)

set(CMAKE_CXX_STANDARD 14)

include(CTest)

if (CMAKE_VERSION VERSION_LESS 3.2)
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "")
else()
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")
endif()

include(DownloadProject.cmake)
download_project(PROJ                googletest
        GIT_REPOSITORY      https://github.com/google/googletest.git
        GIT_TAG             master
        ${UPDATE_DISCONNECTED_IF_AVAILABLE}
        )

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

# When using CMake 2.8.11 or later, header path dependencies
# are automatically added to the gtest and gmock targets.
# For earlier CMake versions, we have to explicitly add the
# required directories to the header search path ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include"
            "${gmock_SOURCE_DIR}/include")
endif()

add_executable(GEN_Labo05_Catel_Mirko_Muller src/main.cpp src/rental.h src/movie.h src/Customer.cpp src/Price.h src/PriceNewRealease.h src/PriceRegular.h src/PriceChildren.h)

add_executable(MesTests test/CustomerTests.cpp test/example.cpp src/Customer.cpp test/PricesTests.cpp test/PricesTests.cpp test/RentalTest.cpp)

target_link_libraries(MesTests gtest gmock_main)

add_test(NAME example_test COMMAND MesTests)