// AUTO-GENERATED

#ifndef _GI_GIO_MENUATTRIBUTEITER_IMPL_HPP_
#define _GI_GIO_MENUATTRIBUTEITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// const gchar* /*none*/ g_menu_attribute_iter_get_name (GMenuAttributeIter* iter /*none*/);
// const char* /*none*/ g_menu_attribute_iter_get_name (::GMenuAttributeIter* iter /*none*/);
gi::cstring_v base::MenuAttributeIterBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GMenuAttributeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_attribute_iter_get_name;
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_menu_attribute_iter_get_next (GMenuAttributeIter* iter /*none*/, const gchar** out_name /*none,out,opt*/, GVariant** value /*full,out,opt*/);
// gboolean g_menu_attribute_iter_get_next (::GMenuAttributeIter* iter /*none*/, const char** out_name /*none,out,opt*/, ::GVariant** value /*full,out,opt*/);
bool base::MenuAttributeIterBase::get_next (gi::cstring_v * out_name, GLib::Variant * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_attribute_iter_get_next;
  ::GVariant* value_o {};
  const char* out_name_o {};
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()), (const char**) (out_name ? &out_name_o : nullptr), (::GVariant**) (value ? &value_o : nullptr));
  if (value) *value = gi::wrap (value_o, gi::transfer_full);
  if (out_name) *out_name = gi::wrap (out_name_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, gi::cstring_v, GLib::Variant> base::MenuAttributeIterBase::get_next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_attribute_iter_get_next;
  ::GVariant* value_o {};
  const char* out_name_o {};
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()), (const char**) (&out_name_o), (::GVariant**) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_name_o, gi::transfer_none);
  auto &&tmp_return_3 = gi::wrap (value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GVariant* /*full*/ g_menu_attribute_iter_get_value (GMenuAttributeIter* iter /*none*/);
// ::GVariant* /*full*/ g_menu_attribute_iter_get_value (::GMenuAttributeIter* iter /*none*/);
GLib::Variant base::MenuAttributeIterBase::get_value () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuAttributeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_attribute_iter_get_value;
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_menu_attribute_iter_next (GMenuAttributeIter* iter /*none*/);
// gboolean g_menu_attribute_iter_next (::GMenuAttributeIter* iter /*none*/);
bool base::MenuAttributeIterBase::next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuAttributeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_attribute_iter_next;
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menuattributeiter_extra_def_impl.hpp>)
#include <gio/menuattributeiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menuattributeiter_extra_impl.hpp>)
#include <gio/menuattributeiter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MenuAttributeIterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GMenuAttributeIterClass *methods = (::GMenuAttributeIterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_next) methods->get_next = (decltype (methods->get_next)) detail::method_wrapper<self, bool (*) (gi::cstring_v & out_name, GLib::Variant & value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::get_next_>;
}

// gboolean MenuAttributeIter::get_next (GMenuAttributeIter* iter /*none*/, const gchar** out_name /*none,out,opt*/, GVariant** value /*full,out,opt*/);
// gboolean MenuAttributeIter::get_next (::GMenuAttributeIter* iter /*none*/, const char** out_name /*none,out,opt*/, ::GVariant** value /*full,out,opt*/);
bool MenuAttributeIterClass::get_next_ (gi::cstring_v & out_name, GLib::Variant & value) noexcept
{
  if (!get_struct_()->get_next) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMenuAttributeIter* iter, const char** out_name, ::GVariant** value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_next;
  ::GVariant* value_o {};
  const char* out_name_o {};
  auto _temp_ret = call_wrap_v ((::GMenuAttributeIter*) (gobj_()), (const char**) (&out_name_o), (::GVariant**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full);
  out_name = gi::wrap (out_name_o, gi::transfer_none);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
