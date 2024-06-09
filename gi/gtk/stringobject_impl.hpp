// AUTO-GENERATED

#ifndef _GI_GTK_STRINGOBJECT_IMPL_HPP_
#define _GI_GTK_STRINGOBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkStringObject* /*full*/ gtk_string_object_new (const char* string /*none*/);
// ::GtkStringObject* /*full*/ gtk_string_object_new (const char* string /*none*/);
Gtk::StringObject base::StringObjectBase::new_ (const gi::cstring_v string) noexcept
{
  typedef ::GtkStringObject* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_string_object_new;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_string_object_get_string (GtkStringObject* self /*none*/);
// const char* /*none*/ gtk_string_object_get_string (::GtkStringObject* self /*none*/);
gi::cstring_v base::StringObjectBase::get_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkStringObject* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_object_get_string;
  auto _temp_ret = call_wrap_v ((::GtkStringObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stringobject_extra_def_impl.hpp>)
#include <gtk/stringobject_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stringobject_extra_impl.hpp>)
#include <gtk/stringobject_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StringObjectClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkStringObjectClass *methods = (::GtkStringObjectClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
