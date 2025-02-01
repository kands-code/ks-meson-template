# config project
project(
    'algo',
    'cpp',
    version: '0.1',
    license: 'AGPL-3.0-or-later',
    meson_version: '>=1.6.1',
    # options ref: https://mesonbuild.com/Builtin-options.html
    default_options: [
        'cpp_std=c++23',
        'warning_level=3',
    ],
)
cxx = meson.get_compiler('cpp')
# subfolders
subdir('include')
subdir('src')
subdir('app')
# config library pkgconfig module
pkg_mod = import('pkgconfig')
pkg_mod.generate(
    libraries: palgo_lib,
    version: meson.project_version(),
    name: palgo_lib.name(),
    filebase: 'lib' + palgo_lib.name(),
    description: 'Basic template library for meson.',
)
