// AUTO-GENERATED

#ifndef _GI_GTK_BOOKMARKLIST_IMPL_HPP_
#define _GI_GTK_BOOKMARKLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel BookmarkListBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BookmarkListBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// GtkBookmarkList* /*full*/ gtk_bookmark_list_new (const char* filename /*none,nullable*/, const char* attributes /*none,nullable*/);
// ::GtkBookmarkList* /*full*/ gtk_bookmark_list_new (const char* filename /*none,nullable*/, const char* attributes /*none,nullable*/);
Gtk::BookmarkList base::BookmarkListBase::new_ (const gi::cstring_v filename, const gi::cstring_v attributes) noexcept
{
  typedef ::GtkBookmarkList* (*call_wrap_t) (const char* filename, const char* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_bookmark_list_new;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (attributes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::BookmarkList base::BookmarkListBase::new_ () noexcept
{
  typedef ::GtkBookmarkList* (*call_wrap_t) (const char* filename, const char* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_bookmark_list_new;
  auto attributes_to_c = nullptr;
  auto filename_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (attributes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ gtk_bookmark_list_get_attributes (GtkBookmarkList* self /*none*/);
// const char* /*none,nullable*/ gtk_bookmark_list_get_attributes (::GtkBookmarkList* self /*none*/);
gi::cstring_v base::BookmarkListBase::get_attributes () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkBookmarkList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bookmark_list_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkBookmarkList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_bookmark_list_get_filename (GtkBookmarkList* self /*none*/);
// const char* /*none*/ gtk_bookmark_list_get_filename (::GtkBookmarkList* self /*none*/);
gi::cstring_v base::BookmarkListBase::get_filename () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkBookmarkList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bookmark_list_get_filename;
  auto _temp_ret = call_wrap_v ((::GtkBookmarkList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_bookmark_list_get_io_priority (GtkBookmarkList* self /*none*/);
// gint gtk_bookmark_list_get_io_priority (::GtkBookmarkList* self /*none*/);
gint base::BookmarkListBase::get_io_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GtkBookmarkList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bookmark_list_get_io_priority;
  auto _temp_ret = call_wrap_v ((::GtkBookmarkList*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_bookmark_list_is_loading (GtkBookmarkList* self /*none*/);
// gboolean gtk_bookmark_list_is_loading (::GtkBookmarkList* self /*none*/);
bool base::BookmarkListBase::is_loading () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBookmarkList* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bookmark_list_is_loading;
  auto _temp_ret = call_wrap_v ((::GtkBookmarkList*) (gobj_()));
  return _temp_ret;
}

// void gtk_bookmark_list_set_attributes (GtkBookmarkList* self /*none*/, const char* attributes /*none,nullable*/);
// void gtk_bookmark_list_set_attributes (::GtkBookmarkList* self /*none*/, const char* attributes /*none,nullable*/);
void base::BookmarkListBase::set_attributes (const gi::cstring_v attributes) noexcept
{
  typedef void (*call_wrap_t) (::GtkBookmarkList* self, const char* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bookmark_list_set_attributes;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GtkBookmarkList*) (gobj_()), (const char*) (attributes_to_c));
}
void base::BookmarkListBase::set_attributes () noexcept
{
  typedef void (*call_wrap_t) (::GtkBookmarkList* self, const char* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bookmark_list_set_attributes;
  auto attributes_to_c = nullptr;
  call_wrap_v ((::GtkBookmarkList*) (gobj_()), (const char*) (attributes_to_c));
}

// void gtk_bookmark_list_set_io_priority (GtkBookmarkList* self /*none*/, int io_priority);
// void gtk_bookmark_list_set_io_priority (::GtkBookmarkList* self /*none*/, gint io_priority);
void base::BookmarkListBase::set_io_priority (gint io_priority) noexcept
{
  typedef void (*call_wrap_t) (::GtkBookmarkList* self, gint io_priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bookmark_list_set_io_priority;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GtkBookmarkList*) (gobj_()), (gint) (io_priority_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bookmarklist_extra_def_impl.hpp>)
#include <gtk/bookmarklist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bookmarklist_extra_impl.hpp>)
#include <gtk/bookmarklist_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BookmarkListClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkBookmarkListClass *methods = (::GtkBookmarkListClass *) class_struct;
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
