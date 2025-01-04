# source files for app
app_source_files = files('app.cpp')
# dependencies for app
m_dep = cxx.find_library('m', required: true)
foo_proj = subproject('foo')
foo_dep = dependency('foo', fallback: ['foo', 'foo_dep'], required: true)
app_deps = [m_dep, raylib_dep, foo_dep]
# config app
executable(
    'app',
    app_source_files,
    include_directories: [
        include_inc,
        raylib_incs,
        foo_proj.get_variable('foo_include_inc'),
    ],
    dependencies: app_deps,
    link_language: 'cpp',
    link_with: [palgo_lib],
    install: false,
)