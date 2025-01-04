# path string for include folder
header_folder_path = meson.project_source_root() / 'include'
# all header files for this library
lib_header_files = files(
    header_folder_path / 'palgo/sort.hpp',
    header_folder_path / 'palgo/math.hpp',
)
# all source for this library include header files
lib_source_files = files('math.cpp') + lib_header_files
# config library
palgo_lib = static_library(
    'palgo',
    lib_source_files,
    include_directories: include_inc,
    install: true,
)