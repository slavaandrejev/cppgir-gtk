// AUTO-GENERATED

#ifndef _GI_GTK_FILTER_IMPL_HPP_
#define _GI_GTK_FILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_filter_changed (GtkFilter* self /*none*/, GtkFilterChange change);
// void gtk_filter_changed (::GtkFilter* self /*none*/, ::GtkFilterChange change);
void base::FilterBase::changed (Gtk::FilterChange change) noexcept
{
  typedef void (*call_wrap_t) (::GtkFilter* self, ::GtkFilterChange change);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_changed;
  auto change_to_c = gi::unwrap (change);
  call_wrap_v ((::GtkFilter*) (gobj_()), (::GtkFilterChange) (change_to_c));
}

// GtkFilterMatch gtk_filter_get_strictness (GtkFilter* self /*none*/);
// ::GtkFilterMatch gtk_filter_get_strictness (::GtkFilter* self /*none*/);
Gtk::FilterMatch base::FilterBase::get_strictness () noexcept
{
  typedef ::GtkFilterMatch (*call_wrap_t) (::GtkFilter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_get_strictness;
  auto _temp_ret = call_wrap_v ((::GtkFilter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_filter_match (GtkFilter* self /*none*/, gpointer item /*none*/);
// gboolean gtk_filter_match (::GtkFilter* self /*none*/, ::GObject* item /*none*/);
bool base::FilterBase::match (GObject::Object item) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFilter* self, ::GObject* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_filter_match;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkFilter*) (gobj_()), (::GObject*) (item_to_c));
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filter_extra_def_impl.hpp>)
#include <gtk/filter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filter_extra_impl.hpp>)
#include <gtk/filter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FilterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFilterClass *methods = (::GtkFilterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_strictness) methods->get_strictness = (decltype (methods->get_strictness)) detail::method_wrapper<self, Gtk::FilterMatch (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_strictness_>;
  if (init_data.match) methods->match = (decltype (methods->match)) detail::method_wrapper<self, bool (*) (GObject::Object item), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::match_>;
}

// GtkFilterMatch Filter::get_strictness (GtkFilter* self /*none*/);
// ::GtkFilterMatch Filter::get_strictness (::GtkFilter* self /*none*/);
Gtk::FilterMatch FilterClass::get_strictness_ () noexcept
{
  if (!get_struct_()->get_strictness) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkFilterMatch (*call_wrap_t) (::GtkFilter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_strictness;
  auto _temp_ret = call_wrap_v ((::GtkFilter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean Filter::match (GtkFilter* self /*none*/, gpointer item /*none,nullable*/);
// gboolean Filter::match (::GtkFilter* self /*none*/, ::GObject* item /*none,nullable*/);
bool FilterClass::match_ (GObject::Object item) noexcept
{
  if (!get_struct_()->match) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkFilter* self, ::GObject* item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->match;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkFilter*) (gobj_()), (::GObject*) (item_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
