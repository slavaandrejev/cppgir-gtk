// AUTO-GENERATED

#ifndef _GI_GIO_APPLICATIONCOMMANDLINE_IMPL_HPP_
#define _GI_GIO_APPLICATIONCOMMANDLINE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GFile* /*full*/ g_application_command_line_create_file_for_arg (GApplicationCommandLine* cmdline /*none*/, const gchar* arg /*none*/);
// ::GFile* /*full*/ g_application_command_line_create_file_for_arg (::GApplicationCommandLine* cmdline /*none*/, const char* arg /*none*/);
Gio::File base::ApplicationCommandLineBase::create_file_for_arg (const gi::cstring_v arg) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* arg);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_create_file_for_arg;
  auto arg_to_c = gi::unwrap (arg, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (arg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_application_command_line_done (GApplicationCommandLine* cmdline /*none*/);
// void g_application_command_line_done (::GApplicationCommandLine* cmdline /*none*/);
void base::ApplicationCommandLineBase::done () noexcept
{
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_done;
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
}

// gchar** /*full*/ g_application_command_line_get_arguments (GApplicationCommandLine* cmdline /*none*/, int* argc);
// char** /*full*/ g_application_command_line_get_arguments (::GApplicationCommandLine* cmdline /*none*/, gint* argc);
gi::Collection<gi::DSpan, char*, gi::transfer_full_t> base::ApplicationCommandLineBase::get_arguments () noexcept
{
  typedef char** (*call_wrap_t) (::GApplicationCommandLine* cmdline, gint* argc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_get_arguments;
  gint argc;
  auto _ret_o = call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (gint*) (&argc));
  gi::Collection<gi::DSpan, char*, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, char*, gi::transfer_full_t>>(_ret_o, argc, gi::transfer_full);
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_application_command_line_get_cwd (GApplicationCommandLine* cmdline /*none*/);
// const char* /*none,nullable*/ g_application_command_line_get_cwd (::GApplicationCommandLine* cmdline /*none*/);
gi::cstring_v base::ApplicationCommandLineBase::get_cwd () noexcept
{
  typedef const char* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_get_cwd;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* const* /*none*/ g_application_command_line_get_environ (GApplicationCommandLine* cmdline /*none*/);
// const char** /*none*/ g_application_command_line_get_environ (::GApplicationCommandLine* cmdline /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::ApplicationCommandLineBase::get_environ () noexcept
{
  typedef const char** (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_get_environ;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// int g_application_command_line_get_exit_status (GApplicationCommandLine* cmdline /*none*/);
// gint g_application_command_line_get_exit_status (::GApplicationCommandLine* cmdline /*none*/);
gint base::ApplicationCommandLineBase::get_exit_status () noexcept
{
  typedef gint (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_get_exit_status;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return _temp_ret;
}

// gboolean g_application_command_line_get_is_remote (GApplicationCommandLine* cmdline /*none*/);
// gboolean g_application_command_line_get_is_remote (::GApplicationCommandLine* cmdline /*none*/);
bool base::ApplicationCommandLineBase::get_is_remote () noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_get_is_remote;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return _temp_ret;
}

// GVariantDict* /*none*/ g_application_command_line_get_options_dict (GApplicationCommandLine* cmdline /*none*/);
// ::GVariantDict* /*none*/ g_application_command_line_get_options_dict (::GApplicationCommandLine* cmdline /*none*/);
GLib::VariantDict_Ref base::ApplicationCommandLineBase::get_options_dict () noexcept
{
  typedef ::GVariantDict* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_get_options_dict;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full,nullable*/ g_application_command_line_get_platform_data (GApplicationCommandLine* cmdline /*none*/);
// ::GVariant* /*full,nullable*/ g_application_command_line_get_platform_data (::GApplicationCommandLine* cmdline /*none*/);
GLib::Variant base::ApplicationCommandLineBase::get_platform_data () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_get_platform_data;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GInputStream* /*full,nullable*/ g_application_command_line_get_stdin (GApplicationCommandLine* cmdline /*none*/);
// ::GInputStream* /*full,nullable*/ g_application_command_line_get_stdin (::GApplicationCommandLine* cmdline /*none*/);
Gio::InputStream base::ApplicationCommandLineBase::get_stdin () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_get_stdin;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ g_application_command_line_getenv (GApplicationCommandLine* cmdline /*none*/, const gchar* name /*none*/);
// const char* /*none,nullable*/ g_application_command_line_getenv (::GApplicationCommandLine* cmdline /*none*/, const char* name /*none*/);
gi::cstring_v base::ApplicationCommandLineBase::getenv (const gi::cstring_v name) noexcept
{
  typedef const char* (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_getenv;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_application_command_line_print (GApplicationCommandLine* cmdline /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_application_command_line_print (::GApplicationCommandLine* cmdline /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_application_command_line_print_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void g_application_command_line_print_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
void base::ApplicationCommandLineBase::print_literal (const gi::cstring_v message) noexcept
{
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_print_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (message_to_c));
}

// void g_application_command_line_printerr (GApplicationCommandLine* cmdline /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_application_command_line_printerr (::GApplicationCommandLine* cmdline /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_application_command_line_printerr_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void g_application_command_line_printerr_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
void base::ApplicationCommandLineBase::printerr_literal (const gi::cstring_v message) noexcept
{
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_printerr_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (message_to_c));
}

// void g_application_command_line_set_exit_status (GApplicationCommandLine* cmdline /*none*/, int exit_status);
// void g_application_command_line_set_exit_status (::GApplicationCommandLine* cmdline /*none*/, gint exit_status);
void base::ApplicationCommandLineBase::set_exit_status (gint exit_status) noexcept
{
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline, gint exit_status);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_command_line_set_exit_status;
  auto exit_status_to_c = exit_status;
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (gint) (exit_status_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/applicationcommandline_extra_def_impl.hpp>)
#include <gio/applicationcommandline_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/applicationcommandline_extra_impl.hpp>)
#include <gio/applicationcommandline_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ApplicationCommandLineClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GApplicationCommandLineClass *methods = (::GApplicationCommandLineClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.done) methods->done = (decltype (methods->done)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::done_>;
  if (init_data.get_stdin) methods->get_stdin = (decltype (methods->get_stdin)) detail::method_wrapper<self, Gio::InputStream (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_stdin_>;
  if (init_data.print_literal) methods->print_literal = (decltype (methods->print_literal)) detail::method_wrapper<self, void (*) (const gi::cstring_v message), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::print_literal_>;
  if (init_data.printerr_literal) methods->printerr_literal = (decltype (methods->printerr_literal)) detail::method_wrapper<self, void (*) (const gi::cstring_v message), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::printerr_literal_>;
}

// void ApplicationCommandLine::done (GApplicationCommandLine* cmdline /*none*/);
// void ApplicationCommandLine::done (::GApplicationCommandLine* cmdline /*none*/);
void ApplicationCommandLineClass::done_ () noexcept
{
  if (!get_struct_()->done) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->done;
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
}

// GInputStream* /*full,nullable*/ ApplicationCommandLine::get_stdin (GApplicationCommandLine* cmdline /*none*/);
// ::GInputStream* /*full,nullable*/ ApplicationCommandLine::get_stdin (::GApplicationCommandLine* cmdline /*none*/);
Gio::InputStream ApplicationCommandLineClass::get_stdin_ () noexcept
{
  if (!get_struct_()->get_stdin) { g_critical ("no method in class struct"); return {}; }
  typedef ::GInputStream* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_stdin;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void ApplicationCommandLine::print_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void ApplicationCommandLine::print_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
void ApplicationCommandLineClass::print_literal_ (const gi::cstring_v message) noexcept
{
  if (!get_struct_()->print_literal) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->print_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (message_to_c));
}

// void ApplicationCommandLine::printerr_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void ApplicationCommandLine::printerr_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
void ApplicationCommandLineClass::printerr_literal_ (const gi::cstring_v message) noexcept
{
  if (!get_struct_()->printerr_literal) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->printerr_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (message_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
