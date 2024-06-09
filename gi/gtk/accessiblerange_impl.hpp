// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLERANGE_IMPL_HPP_
#define _GI_GTK_ACCESSIBLERANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessiblerange_extra_def_impl.hpp>)
#include <gtk/accessiblerange_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessiblerange_extra_impl.hpp>)
#include <gtk/accessiblerange_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AccessibleRangeInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkAccessibleRangeInterface *methods = (::GtkAccessibleRangeInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.set_current_value) methods->set_current_value = (decltype (methods->set_current_value)) detail::method_wrapper<self, bool (*) (gdouble value), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_current_value_>;
}

// gboolean AccessibleRange::set_current_value (GtkAccessibleRange* self /*none*/, double value);
// gboolean AccessibleRange::set_current_value (::GtkAccessibleRange* self /*none*/, gdouble value);
bool AccessibleRangeInterfaceClassImpl::set_current_value_ (gdouble value) noexcept
{
  if (!get_struct_()->set_current_value) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkAccessibleRange* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_current_value;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleRange*) (gobj_()), (gdouble) (value_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
