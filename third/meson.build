third_part_path = meson.current_source_dir()
# raylib as dependency
raylib_incs = include_directories('raylib' / 'include')
raylib_dep = cxx.find_library(
    'raylib',
    dirs: third_part_path / 'raylib' / 'lib',
    # used header files
    has_headers: ['raylib.h'],
    header_include_directories: raylib_incs,
    required: true,
    static: true,
)