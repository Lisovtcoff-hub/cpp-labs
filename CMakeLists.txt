cmake_minimum_required(VERSION 3.20)
project(cpp_labs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Shared settings for all lab executables.
function(add_lab target dir)
    file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
        "${dir}/*.cpp"
        "common/src/*.cpp"
    )

    add_executable(${target} ${SOURCES})

    target_include_directories(${target} PRIVATE
        "${dir}"
        "${dir}/include"
        "common/include"
    )

    if (MSVC)
        target_compile_options(${target} PRIVATE /utf-8)
    endif()
endfunction()

# kr2
add_lab(kr2_pr06_arrays  kr2/practice06_arrays_strings/arrays)
add_lab(kr2_pr06_strings kr2/practice06_arrays_strings/strings)

# kr3 - practice 7
add_lab(kr3_pr07_task01_swap             kr3/practice07_functions_pointers/task01_swap)
add_lab(kr3_pr07_task02_function_pointer kr3/practice07_functions_pointers/task02_function_pointer)
add_lab(kr3_pr07_task03_overload_min_max kr3/practice07_functions_pointers/task03_overload_min_max)

# kr3 - practice 8
add_lab(kr3_pr08_task01_sqrt         kr3/practice08_recursion/task01_sqrt)
add_lab(kr3_pr08_task02_product      kr3/practice08_recursion/task02_product)
add_lab(kr3_pr08_task03_reverse_array kr3/practice08_recursion/task03_reverse_array)
add_lab(kr3_pr08_task04_power_of_two kr3/practice08_recursion/task04_power_of_two)
add_lab(kr3_pr08_task05_ackermann    kr3/practice08_recursion/task05_ackermann)
add_lab(kr3_pr08_task06_pow_fast     kr3/practice08_recursion/task06_pow_fast)
add_lab(kr3_pr08_task07_digit_sum    kr3/practice08_recursion/task07_digit_sum)
add_lab(kr3_pr08_task08_max_count    kr3/practice08_recursion/task08_max_count)

# kr4
# add_lab(kr4_pr09_structs        kr4/practice09_structs)
# add_lab(kr4_pr10_files          kr4/practice10_files)
# add_lab(kr4_pr11_fraction       kr4/practice11_classes/task01_fraction)
# add_lab(kr4_pr11_complex        kr4/practice11_classes/task02_complex)
# add_lab(kr4_pr12_static_virtual kr4/practice12_static_virtual)
