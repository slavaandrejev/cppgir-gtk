// AUTO-GENERATED

#ifndef _GI_GIO_MENULINKITER_IMPL_HPP_
#define _GI_GIO_MENULINKITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// const gchar* /*none*/ g_menu_link_iter_get_name (GMenuLinkIter* iter /*none*/);
// const char* /*none*/ g_menu_link_iter_get_name (::GMenuLinkIter* iter /*none*/);
gi::cstring_v base::MenuLinkIterBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GMenuLinkIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_link_iter_get_name;
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_menu_link_iter_get_next (GMenuLinkIter* iter /*none*/, const gchar** out_link /*none,out,opt*/, GMenuModel** value /*full,out,opt*/);
// gboolean g_menu_link_iter_get_next (::GMenuLinkIter* iter /*none*/, const char** out_link /*none,out,opt*/, ::GMenuModel** value /*full,out,opt*/);
bool base::MenuLinkIterBase::get_next (gi::cstring_v * out_link, Gio::MenuModel * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_link_iter_get_next;
  ::GMenuModel* value_o {};
  const char* out_link_o {};
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()), (const char**) (out_link ? &out_link_o : nullptr), (::GMenuModel**) (value ? &value_o : nullptr));
  if (value) *value = gi::wrap (value_o, gi::transfer_full);
  if (out_link) *out_link = gi::wrap (out_link_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, gi::cstring_v, Gio::MenuModel> base::MenuLinkIterBase::get_next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_link_iter_get_next;
  ::GMenuModel* value_o {};
  const char* out_link_o {};
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()), (const char**) (&out_link_o), (::GMenuModel**) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_link_o, gi::transfer_none);
  auto &&tmp_return_3 = gi::wrap (value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GMenuModel* /*full*/ g_menu_link_iter_get_value (GMenuLinkIter* iter /*none*/);
// ::GMenuModel* /*full*/ g_menu_link_iter_get_value (::GMenuLinkIter* iter /*none*/);
Gio::MenuModel base::MenuLinkIterBase::get_value () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GMenuLinkIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_link_iter_get_value;
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_menu_link_iter_next (GMenuLinkIter* iter /*none*/);
// gboolean g_menu_link_iter_next (::GMenuLinkIter* iter /*none*/);
bool base::MenuLinkIterBase::next () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuLinkIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_link_iter_next;
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menulinkiter_extra_def_impl.hpp>)
#include <gio/menulinkiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menulinkiter_extra_impl.hpp>)
#include <gio/menulinkiter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MenuLinkIterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GMenuLinkIterClass *methods = (::GMenuLinkIterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_next) methods->get_next = (decltype (methods->get_next)) detail::method_wrapper<self, bool (*) (gi::cstring_v & out_link, Gio::MenuModel & value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::get_next_>;
}

// gboolean MenuLinkIter::get_next (GMenuLinkIter* iter /*none*/, const gchar** out_link /*none,out,opt*/, GMenuModel** value /*full,out,opt*/);
// gboolean MenuLinkIter::get_next (::GMenuLinkIter* iter /*none*/, const char** out_link /*none,out,opt*/, ::GMenuModel** value /*full,out,opt*/);
bool MenuLinkIterClass::get_next_ (gi::cstring_v & out_link, Gio::MenuModel & value) noexcept
{
  if (!get_struct_()->get_next) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMenuLinkIter* iter, const char** out_link, ::GMenuModel** value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_next;
  ::GMenuModel* value_o {};
  const char* out_link_o {};
  auto _temp_ret = call_wrap_v ((::GMenuLinkIter*) (gobj_()), (const char**) (&out_link_o), (::GMenuModel**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full);
  out_link = gi::wrap (out_link_o, gi::transfer_none);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
