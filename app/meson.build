# source files for app
app_source_files = files('app.cpp')
# dependencies from compiler
m_dep = cxx.find_library('m', required: true)
# dependencies from wrap
raylib_proj = subproject('raylib-5.5_linux_amd64')
if host_machine.system() == 'windows'
    raylib_proj = subproject('raylib-5.5_win64_mingw-w64')
endif
raylib_dep = raylib_proj.get_variable('raylib_dep')
# normal subprojects as dependencies
foo_proj = subproject('foo')
foo_dep = foo_proj.get_variable('foo_dep')
# all dependencies for app
app_deps = [m_dep, raylib_dep, foo_dep]
# config app
executable(
    'app',
    app_source_files,
    include_directories: [
        include_inc,
        raylib_proj.get_variable('raylib_include_inc'),
        foo_proj.get_variable('foo_include_inc'),
    ],
    dependencies: app_deps,
    link_language: 'cpp',
    link_with: [palgo_lib],
    install: false,
)