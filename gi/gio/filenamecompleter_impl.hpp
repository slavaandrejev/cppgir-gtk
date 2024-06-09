// AUTO-GENERATED

#ifndef _GI_GIO_FILENAMECOMPLETER_IMPL_HPP_
#define _GI_GIO_FILENAMECOMPLETER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GFilenameCompleter* /*full*/ g_filename_completer_new ();
// ::GFilenameCompleter* /*full*/ g_filename_completer_new ();
Gio::FilenameCompleter base::FilenameCompleterBase::new_ () noexcept
{
  typedef ::GFilenameCompleter* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_completer_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_filename_completer_get_completion_suffix (GFilenameCompleter* completer /*none*/, const char* initial_text /*none*/);
// char* /*full,nullable*/ g_filename_completer_get_completion_suffix (::GFilenameCompleter* completer /*none*/, const char* initial_text /*none*/);
gi::cstring base::FilenameCompleterBase::get_completion_suffix (const gi::cstring_v initial_text) noexcept
{
  typedef char* (*call_wrap_t) (::GFilenameCompleter* completer, const char* initial_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_completer_get_completion_suffix;
  auto initial_text_to_c = gi::unwrap (initial_text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFilenameCompleter*) (gobj_()), (const char*) (initial_text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char** /*full*/ g_filename_completer_get_completions (GFilenameCompleter* completer /*none*/, const char* initial_text /*none*/);
// char** /*full*/ g_filename_completer_get_completions (::GFilenameCompleter* completer /*none*/, const char* initial_text /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::FilenameCompleterBase::get_completions (const gi::cstring_v initial_text) noexcept
{
  typedef char** (*call_wrap_t) (::GFilenameCompleter* completer, const char* initial_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_completer_get_completions;
  auto initial_text_to_c = gi::unwrap (initial_text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFilenameCompleter*) (gobj_()), (const char*) (initial_text_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_filename_completer_set_dirs_only (GFilenameCompleter* completer /*none*/, gboolean dirs_only);
// void g_filename_completer_set_dirs_only (::GFilenameCompleter* completer /*none*/, gboolean dirs_only);
void base::FilenameCompleterBase::set_dirs_only (gboolean dirs_only) noexcept
{
  typedef void (*call_wrap_t) (::GFilenameCompleter* completer, gboolean dirs_only);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filename_completer_set_dirs_only;
  auto dirs_only_to_c = dirs_only;
  call_wrap_v ((::GFilenameCompleter*) (gobj_()), (gboolean) (dirs_only_to_c));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filenamecompleter_extra_def_impl.hpp>)
#include <gio/filenamecompleter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filenamecompleter_extra_impl.hpp>)
#include <gio/filenamecompleter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FilenameCompleterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GFilenameCompleterClass *methods = (::GFilenameCompleterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.got_completion_data) methods->got_completion_data = (decltype (methods->got_completion_data)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::got_completion_data_>;
}

// void FilenameCompleter::got_completion_data (GFilenameCompleter* filename_completer /*none*/);
// void FilenameCompleter::got_completion_data (::GFilenameCompleter* filename_completer /*none*/);
void FilenameCompleterClass::got_completion_data_ () noexcept
{
  if (!get_struct_()->got_completion_data) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFilenameCompleter* filename_completer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->got_completion_data;
  call_wrap_v ((::GFilenameCompleter*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
