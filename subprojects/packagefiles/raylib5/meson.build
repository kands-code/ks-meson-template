project('raylib', 'c')

cc = meson.get_compiler('c')
raylib_include_inc = include_directories('include')
raylib_dep = cc.find_library(
    'raylib',
    dirs: meson.current_source_dir() / 'lib',
    # used header files
    has_headers: ['raylib.h'],
    header_include_directories: raylib_include_inc,
    required: true,
    static: true,
)

set_variable('raylib_include_inc', raylib_include_inc)
set_variable('raylib_dep', raylib_dep)