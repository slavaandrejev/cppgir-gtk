gio_unix_dep  = dependency('gio-unix-2.0')
gthread_dep   = dependency('gthread-2.0')
gtk_dep       = dependency('gtk4')
gtk_print_dep = dependency('gtk4-unix-print')

gtk_binding_names = [
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

gen_bindings = custom_target(
    output: gtk_binding_names
  , command: [
        cppgir
      , '--output', '@OUTDIR@'
      , '--class'
      , 'Gtk-4.0'
      ]
  )
touch = find_program('touch')
gen_bindings_dummy_h = custom_target(
    output: 'gen_bindings_dummy.h'
  , command: [touch, '@OUTPUT@']
  , input: gen_bindings
  )

binding_src = []
binding_inc = []
foreach b : gtk_binding_names
    run_command('mkdir', meson.current_build_dir() / b, check: false)
    binding_src += custom_target(
        input: gen_bindings_dummy_h
      , output: f'@b@.cpp'
      , command: [
            'cp'
          , '@OUTDIR@' / b / f'@b@.cpp'
          , '@OUTDIR@' / f'@b@.cpp'
          ]
      )
    binding_inc += include_directories(b)
endforeach

gigtkmm_lib = library(
    'gigtkmm'
  , binding_src
  , gen_bindings_dummy_h
  , include_directories: [
        binding_inc
      ]
  , dependencies: [
        cppgir_dep
      , gio_unix_dep
      , gthread_dep
      , gtk_dep
      , gtk_print_dep
      ]
  )

gigtkmm_dep = declare_dependency(
    sources: gen_bindings_dummy_h
  , link_with: gigtkmm_lib
  , dependencies: [
        cppgir_dep
      , gio_unix_dep
      , gthread_dep
      , gtk_dep
      , gtk_print_dep
      ]
  )
