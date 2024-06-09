project(
    'cppgir-gtk'
  , ['c', 'cpp']
  , version : '0.1'
  , default_options: ['cpp_std=gnu++23'])

gi_inc = include_directories('gi')

if get_option('buildtype') == ('debug')
    add_project_arguments('-DDEBUG', language: ['c', 'cpp'])
endif
if get_option('buildtype') == 'release' or get_option('buildtype') == 'debugoptimized'
    add_project_arguments('-DNDEBUG', language: ['c', 'cpp'])
endif

cppgir_dep = dependency('cppgir')
cppgir = find_program('cppgir')

bpc = find_program('blueprint-compiler', required: false)
if not bpc.found()
    subproject('blueprint-compiler')
endif
bpc = find_program('blueprint-compiler')

fs = import('fs')
blp_files = ['cppgir-gtk.blp']
ui_files = []
foreach f : blp_files
    ui_files += [fs.replace_suffix(f, '.ui')]
endforeach
blueprints = custom_target('blueprints',
    input:   blp_files
  , output:  ui_files
  , command: [bpc, 'batch-compile', '.', '@CURRENT_SOURCE_DIR@', '@INPUT@']
  )

gnome = import('gnome')

gtk_files = gnome.compile_resources(
    'cppgir-gtk-resources'
  , 'cppgir-gtk.gresource.xml'
  , c_name: 'cppgir_gtk_resources'
  , dependencies: blueprints
  )

subdir('gi')

executable(
    'cppgir-gtk'
  , 'cppgir-gtk.cpp'
  , gtk_files
  , dependencies : [gigtkmm_dep]
  )
