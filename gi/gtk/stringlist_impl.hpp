// AUTO-GENERATED

#ifndef _GI_GTK_STRINGLIST_IMPL_HPP_
#define _GI_GTK_STRINGLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel StringListBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

StringListBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::Buildable StringListBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

StringListBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkStringList* /*full*/ gtk_string_list_new (const char* const* strings /*none,nullable*/);
// ::GtkStringList* /*full*/ gtk_string_list_new (const char** strings /*none,nullable*/);
Gtk::StringList base::StringListBase::new_ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> strings) noexcept
{
  typedef ::GtkStringList* (*call_wrap_t) (const char** strings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_string_list_new;
  auto strings_w = unwrap (std::move(strings), gi::transfer_none);
  auto strings_to_c = strings_w;
  auto _temp_ret = call_wrap_v ((const char**) (strings_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_string_list_append (GtkStringList* self /*none*/, const char* string /*none*/);
// void gtk_string_list_append (::GtkStringList* self /*none*/, const char* string /*none*/);
void base::StringListBase::append (const gi::cstring_v string) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringList* self, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_list_append;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  call_wrap_v ((::GtkStringList*) (gobj_()), (const char*) (string_to_c));
}

// const char* /*none,nullable*/ gtk_string_list_get_string (GtkStringList* self /*none*/, guint position);
// const char* /*none,nullable*/ gtk_string_list_get_string (::GtkStringList* self /*none*/, guint position);
gi::cstring_v base::StringListBase::get_string (guint position) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkStringList* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_list_get_string;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkStringList*) (gobj_()), (guint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_string_list_remove (GtkStringList* self /*none*/, guint position);
// void gtk_string_list_remove (::GtkStringList* self /*none*/, guint position);
void base::StringListBase::remove (guint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringList* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_list_remove;
  auto position_to_c = position;
  call_wrap_v ((::GtkStringList*) (gobj_()), (guint) (position_to_c));
}

// void gtk_string_list_splice (GtkStringList* self /*none*/, guint position, guint n_removals, const char* const* additions /*none,nullable*/);
// void gtk_string_list_splice (::GtkStringList* self /*none*/, guint position, guint n_removals, const char** additions /*none,nullable*/);
void base::StringListBase::splice (guint position, guint n_removals, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> additions) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringList* self, guint position, guint n_removals, const char** additions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_list_splice;
  auto additions_w = unwrap (std::move(additions), gi::transfer_none);
  auto additions_to_c = additions_w;
  auto n_removals_to_c = n_removals;
  auto position_to_c = position;
  call_wrap_v ((::GtkStringList*) (gobj_()), (guint) (position_to_c), (guint) (n_removals_to_c), (const char**) (additions_to_c));
}

// void gtk_string_list_take (GtkStringList* self /*none*/, char* string /*full*/);
// void gtk_string_list_take (::GtkStringList* self /*none*/, char* string /*full*/);
void base::StringListBase::take (gi::cstring string) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringList* self, char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_list_take;
  auto string_to_c = gi::unwrap (std::move(string), gi::transfer_full);
  call_wrap_v ((::GtkStringList*) (gobj_()), (char*) (string_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stringlist_extra_def_impl.hpp>)
#include <gtk/stringlist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stringlist_extra_impl.hpp>)
#include <gtk/stringlist_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StringListClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkStringListClass *methods = (::GtkStringListClass *) class_struct;
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
