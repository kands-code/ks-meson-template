# subproject declare
project(
    'foo',
    'cpp',
    default_options: [
        'cpp_std=c++23',
        'warning_level=3',
    ],
)
# header folder
subdir('include')
# sources
sources = files('src/foo.cpp')
# declare a shared library
# can use static_library() for static libraries
# or just use library() and declare by options
foo = shared_library(
    'foo',
    sources,
    include_directories: foo_include_inc,
    install: false,
)
# declare as a dependency
foo_dep = declare_dependency(
    include_directories: ['include', 'src'],
    link_with: foo,
)
# pkg_mod = import('pkgconfig')
# pkg_mod.generate(
#     name: foo.name(),
#     filebase: 'lib' + foo.name(),
#     libraries: foo,
#     description: 'Fooo!',
# )
set_variable('foo_include_inc', foo_include_inc)