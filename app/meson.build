# source files for app
app_source_files = files('app.cpp')
# dependencies for app
m_dep = cxx.find_library('m', required: true)
raylib_proj = subproject('raylib')
raylib_dep = raylib_proj.get_variable('raylib_dep')
app_deps = [m_dep, raylib_dep]
# config app
executable(
    'app',
    app_source_files,
    include_directories: [
        include_inc,
        raylib_proj.get_variable('raylib_include_inc'),
    ],
    dependencies: app_deps,
    link_language: 'cpp',
    link_with: [palgo_lib],
    install: false,
)