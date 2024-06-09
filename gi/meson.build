gio_unix_dep  = dependency('gio-unix-2.0')
gthread_dep   = dependency('gthread-2.0')
gtk_dep       = dependency('gtk4')
gtk_print_dep = dependency('gtk4-unix-print')

# gtk_required_bindings = []
# cpp_bindings = custom_target(
#     'gtk_bindings'
#   , output: [
#         'gi'
#       ]
#   , command: [
#         cppgir
#       , '--output', 'gi'
#       , '--class'
#       , 'Gtk-4.0'
#       ]
#   )

required_bindings = [
    'cairo'
  , 'freetype2'
  , 'gdk'
  , 'gdkpixbuf'
  , 'gio'
  , 'glib'
  , 'gmodule'
  , 'gobject'
  , 'graphene'
  , 'gsk'
  , 'gtk'
  , 'harfbuzz'
  , 'pango'
  , 'pangocairo'
  ]
cppgir_src = []
foreach b : required_bindings
    # cppgir_src += files(meson.current_build_dir() / b / f'@b@.cpp')
    cppgir_src += files(b / f'@b@.cpp')
endforeach

gigtkmm_lib = library(
    'gigtkmm'
#   , cpp_bindings
  , cppgir_src
  , include_directories: gi_inc
  , implicit_include_directories: false
  , dependencies: [
        cppgir_dep
      , gio_unix_dep
      , gthread_dep
      , gtk_dep
      , gtk_print_dep
      ]
)

gigtkmm_dep = declare_dependency(
    include_directories: gi_inc
  , link_with: gigtkmm_lib
  , dependencies: [
        cppgir_dep
      , gio_unix_dep
      , gthread_dep
      , gtk_dep
      , gtk_print_dep
      ]
)
