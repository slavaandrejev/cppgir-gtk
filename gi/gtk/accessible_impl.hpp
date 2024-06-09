// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLE_IMPL_HPP_
#define _GI_GTK_ACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkAccessible* /*full,nullable*/ gtk_accessible_get_accessible_parent (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ gtk_accessible_get_accessible_parent (::GtkAccessible* self /*none*/);
Gtk::Accessible base::AccessibleBase::get_accessible_parent () noexcept
{
  typedef ::GtkAccessible* (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_get_accessible_parent;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkAccessibleRole gtk_accessible_get_accessible_role (GtkAccessible* self /*none*/);
// ::GtkAccessibleRole gtk_accessible_get_accessible_role (::GtkAccessible* self /*none*/);
Gtk::AccessibleRole base::AccessibleBase::get_accessible_role () noexcept
{
  typedef ::GtkAccessibleRole (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_get_accessible_role;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkATContext* /*full*/ gtk_accessible_get_at_context (GtkAccessible* self /*none*/);
// ::GtkATContext* /*full*/ gtk_accessible_get_at_context (::GtkAccessible* self /*none*/);
Gtk::ATContext base::AccessibleBase::get_at_context () noexcept
{
  typedef ::GtkATContext* (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_get_at_context;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_accessible_get_bounds (GtkAccessible* self /*none*/, int* x, int* y, int* width, int* height);
// gboolean gtk_accessible_get_bounds (::GtkAccessible* self /*none*/, gint* x, gint* y, gint* width, gint* height);
bool base::AccessibleBase::get_bounds (gint & x, gint & y, gint & width, gint & height) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccessible* self, gint* x, gint* y, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_get_bounds;
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gint*) (&width_o), (gint*) (&height_o));
  height = height_o;
  width = width_o;
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint, gint, gint> base::AccessibleBase::get_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccessible* self, gint* x, gint* y, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_get_bounds;
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = x_o;
  auto &&tmp_return_3 = y_o;
  auto &&tmp_return_4 = width_o;
  auto &&tmp_return_5 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}

// GtkAccessible* /*full,nullable*/ gtk_accessible_get_first_accessible_child (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ gtk_accessible_get_first_accessible_child (::GtkAccessible* self /*none*/);
Gtk::Accessible base::AccessibleBase::get_first_accessible_child () noexcept
{
  typedef ::GtkAccessible* (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_get_first_accessible_child;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkAccessible* /*full,nullable*/ gtk_accessible_get_next_accessible_sibling (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ gtk_accessible_get_next_accessible_sibling (::GtkAccessible* self /*none*/);
Gtk::Accessible base::AccessibleBase::get_next_accessible_sibling () noexcept
{
  typedef ::GtkAccessible* (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_get_next_accessible_sibling;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_accessible_get_platform_state (GtkAccessible* self /*none*/, GtkAccessiblePlatformState state);
// gboolean gtk_accessible_get_platform_state (::GtkAccessible* self /*none*/, ::GtkAccessiblePlatformState state);
bool base::AccessibleBase::get_platform_state (Gtk::AccessiblePlatformState state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessiblePlatformState state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_get_platform_state;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessiblePlatformState) (state_to_c));
  return _temp_ret;
}

// void gtk_accessible_reset_property (GtkAccessible* self /*none*/, GtkAccessibleProperty property);
// void gtk_accessible_reset_property (::GtkAccessible* self /*none*/, ::GtkAccessibleProperty property);
void base::AccessibleBase::reset_property (Gtk::AccessibleProperty property) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessibleProperty property);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_reset_property;
  auto property_to_c = gi::unwrap (property);
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessibleProperty) (property_to_c));
}

// void gtk_accessible_reset_relation (GtkAccessible* self /*none*/, GtkAccessibleRelation relation);
// void gtk_accessible_reset_relation (::GtkAccessible* self /*none*/, ::GtkAccessibleRelation relation);
void base::AccessibleBase::reset_relation (Gtk::AccessibleRelation relation) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessibleRelation relation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_reset_relation;
  auto relation_to_c = gi::unwrap (relation);
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessibleRelation) (relation_to_c));
}

// void gtk_accessible_reset_state (GtkAccessible* self /*none*/, GtkAccessibleState state);
// void gtk_accessible_reset_state (::GtkAccessible* self /*none*/, ::GtkAccessibleState state);
void base::AccessibleBase::reset_state (Gtk::AccessibleState state) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessibleState state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_reset_state;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessibleState) (state_to_c));
}

// void gtk_accessible_set_accessible_parent (GtkAccessible* self /*none*/, GtkAccessible* parent /*none,nullable*/, GtkAccessible* next_sibling /*none,nullable*/);
// void gtk_accessible_set_accessible_parent (::GtkAccessible* self /*none*/, ::GtkAccessible* parent /*none,nullable*/, ::GtkAccessible* next_sibling /*none,nullable*/);
void base::AccessibleBase::set_accessible_parent (Gtk::Accessible parent, Gtk::Accessible next_sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessible* parent, ::GtkAccessible* next_sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_set_accessible_parent;
  auto next_sibling_to_c = gi::unwrap (next_sibling, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessible*) (parent_to_c), (::GtkAccessible*) (next_sibling_to_c));
}
void base::AccessibleBase::set_accessible_parent () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessible* parent, ::GtkAccessible* next_sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_set_accessible_parent;
  auto next_sibling_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessible*) (parent_to_c), (::GtkAccessible*) (next_sibling_to_c));
}

// void gtk_accessible_update_next_accessible_sibling (GtkAccessible* self /*none*/, GtkAccessible* new_sibling /*none,nullable*/);
// void gtk_accessible_update_next_accessible_sibling (::GtkAccessible* self /*none*/, ::GtkAccessible* new_sibling /*none,nullable*/);
void base::AccessibleBase::update_next_accessible_sibling (Gtk::Accessible new_sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessible* new_sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_update_next_accessible_sibling;
  auto new_sibling_to_c = gi::unwrap (new_sibling, gi::transfer_none);
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessible*) (new_sibling_to_c));
}
void base::AccessibleBase::update_next_accessible_sibling () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessible* new_sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_update_next_accessible_sibling;
  auto new_sibling_to_c = nullptr;
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessible*) (new_sibling_to_c));
}

// void gtk_accessible_update_property (GtkAccessible* self /*none*/, GtkAccessibleProperty first_property,  ..._ /*none*/);
// void gtk_accessible_update_property (::GtkAccessible* self /*none*/, ::GtkAccessibleProperty first_property,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by update_property_value, varargs not supported

// void gtk_accessible_update_property_value (GtkAccessible* self /*none*/, int n_properties, GtkAccessibleProperty* properties /*none*/, const GValue* values /*none*/);
// void gtk_accessible_update_property_value (::GtkAccessible* self /*none*/, gint n_properties, ::GtkAccessibleProperty* properties /*none*/, const ::GValue** values /*none*/);
// SKIP; values in boxed array not supported (depth 1)

// void gtk_accessible_update_relation (GtkAccessible* self /*none*/, GtkAccessibleRelation first_relation,  ..._ /*none*/);
// void gtk_accessible_update_relation (::GtkAccessible* self /*none*/, ::GtkAccessibleRelation first_relation,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by update_relation_value, varargs not supported

// void gtk_accessible_update_relation_value (GtkAccessible* self /*none*/, int n_relations, GtkAccessibleRelation* relations /*none*/, const GValue* values /*none*/);
// void gtk_accessible_update_relation_value (::GtkAccessible* self /*none*/, gint n_relations, ::GtkAccessibleRelation* relations /*none*/, const ::GValue** values /*none*/);
// SKIP; values in boxed array not supported (depth 1)

// void gtk_accessible_update_state (GtkAccessible* self /*none*/, GtkAccessibleState first_state,  ..._ /*none*/);
// void gtk_accessible_update_state (::GtkAccessible* self /*none*/, ::GtkAccessibleState first_state,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by update_state_value, varargs not supported

// void gtk_accessible_update_state_value (GtkAccessible* self /*none*/, int n_states, GtkAccessibleState* states /*none*/, const GValue* values /*none*/);
// void gtk_accessible_update_state_value (::GtkAccessible* self /*none*/, gint n_states, ::GtkAccessibleState* states /*none*/, const ::GValue** values /*none*/);
// SKIP; values in boxed array not supported (depth 1)


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessible_extra_def_impl.hpp>)
#include <gtk/accessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessible_extra_impl.hpp>)
#include <gtk/accessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AccessibleInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkAccessibleInterface *methods = (::GtkAccessibleInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_accessible_parent) methods->get_accessible_parent = (decltype (methods->get_accessible_parent)) detail::method_wrapper<self, Gtk::Accessible (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_accessible_parent_>;
  if (init_data.get_at_context) methods->get_at_context = (decltype (methods->get_at_context)) detail::method_wrapper<self, Gtk::ATContext (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_at_context_>;
  if (init_data.get_bounds) methods->get_bounds = (decltype (methods->get_bounds)) detail::method_wrapper<self, bool (*) (gint & x, gint & y, gint & width, gint & height), gi::transfer_none_t, std::tuple<gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_bounds_>;
  if (init_data.get_first_accessible_child) methods->get_first_accessible_child = (decltype (methods->get_first_accessible_child)) detail::method_wrapper<self, Gtk::Accessible (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_first_accessible_child_>;
  if (init_data.get_next_accessible_sibling) methods->get_next_accessible_sibling = (decltype (methods->get_next_accessible_sibling)) detail::method_wrapper<self, Gtk::Accessible (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_next_accessible_sibling_>;
  if (init_data.get_platform_state) methods->get_platform_state = (decltype (methods->get_platform_state)) detail::method_wrapper<self, bool (*) (Gtk::AccessiblePlatformState state), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_platform_state_>;
}

// GtkAccessible* /*full,nullable*/ Accessible::get_accessible_parent (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_accessible_parent (::GtkAccessible* self /*none*/);
Gtk::Accessible AccessibleInterfaceClassImpl::get_accessible_parent_ () noexcept
{
  if (!get_struct_()->get_accessible_parent) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkAccessible* (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_accessible_parent;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkATContext* /*full,nullable*/ Accessible::get_at_context (GtkAccessible* self /*none*/);
// ::GtkATContext* /*full,nullable*/ Accessible::get_at_context (::GtkAccessible* self /*none*/);
Gtk::ATContext AccessibleInterfaceClassImpl::get_at_context_ () noexcept
{
  if (!get_struct_()->get_at_context) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkATContext* (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_at_context;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean Accessible::get_bounds (GtkAccessible* self /*none*/, int* x, int* y, int* width, int* height);
// gboolean Accessible::get_bounds (::GtkAccessible* self /*none*/, gint* x, gint* y, gint* width, gint* height);
bool AccessibleInterfaceClassImpl::get_bounds_ (gint & x, gint & y, gint & width, gint & height) noexcept
{
  if (!get_struct_()->get_bounds) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkAccessible* self, gint* x, gint* y, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_bounds;
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gint*) (&width_o), (gint*) (&height_o));
  height = height_o;
  width = width_o;
  y = y_o;
  x = x_o;
  return _temp_ret;
}

// GtkAccessible* /*full,nullable*/ Accessible::get_first_accessible_child (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_first_accessible_child (::GtkAccessible* self /*none*/);
Gtk::Accessible AccessibleInterfaceClassImpl::get_first_accessible_child_ () noexcept
{
  if (!get_struct_()->get_first_accessible_child) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkAccessible* (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_first_accessible_child;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkAccessible* /*full,nullable*/ Accessible::get_next_accessible_sibling (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_next_accessible_sibling (::GtkAccessible* self /*none*/);
Gtk::Accessible AccessibleInterfaceClassImpl::get_next_accessible_sibling_ () noexcept
{
  if (!get_struct_()->get_next_accessible_sibling) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkAccessible* (*call_wrap_t) (::GtkAccessible* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_next_accessible_sibling;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean Accessible::get_platform_state (GtkAccessible* self /*none*/, GtkAccessiblePlatformState state);
// gboolean Accessible::get_platform_state (::GtkAccessible* self /*none*/, ::GtkAccessiblePlatformState state);
bool AccessibleInterfaceClassImpl::get_platform_state_ (Gtk::AccessiblePlatformState state) noexcept
{
  if (!get_struct_()->get_platform_state) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkAccessible* self, ::GtkAccessiblePlatformState state);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_platform_state;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkAccessiblePlatformState) (state_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
