// AUTO-GENERATED

#ifndef _GI_GIO_ICON_IMPL_HPP_
#define _GI_GIO_ICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GIcon* /*full,nullable*/ g_icon_deserialize (GVariant* value /*none*/);
// ::GIcon* /*full,nullable*/ g_icon_deserialize (::GVariant* value /*none*/);
Gio::Icon base::IconBase::deserialize (GLib::Variant value) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_icon_deserialize;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_icon_new_for_string (const gchar* str /*none*/, GError ** error);
// ::GIcon* /*full*/ g_icon_new_for_string (const char* str /*none*/, GError ** error);
Gio::Icon base::IconBase::new_for_string (const gi::cstring_v str)
{
  typedef ::GIcon* (*call_wrap_t) (const char* str, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_icon_new_for_string;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Icon base::IconBase::new_for_string (const gi::cstring_v str, GLib::Error * _error) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (const char* str, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_icon_new_for_string;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_icon_equal (GIcon* icon1 /*none,nullable*/, GIcon* icon2 /*none,nullable*/);
// gboolean g_icon_equal (::GIcon* icon1 /*none,nullable*/, ::GIcon* icon2 /*none,nullable*/);
bool base::IconBase::equal (Gio::Icon icon2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIcon* icon1, ::GIcon* icon2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_icon_equal;
  auto icon2_to_c = gi::unwrap (icon2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()), (::GIcon*) (icon2_to_c));
  return _temp_ret;
}
bool base::IconBase::equal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GIcon* icon1, ::GIcon* icon2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_icon_equal;
  auto icon2_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()), (::GIcon*) (icon2_to_c));
  return _temp_ret;
}

// guint g_icon_hash (gconstpointer icon /*none*/);
// guint g_icon_hash (const ::GIcon* icon /*none*/);
guint base::IconBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_icon_hash;
  auto _temp_ret = call_wrap_v ((const ::GIcon*) (gobj_()));
  return _temp_ret;
}

// GVariant* /*full,nullable*/ g_icon_serialize (GIcon* icon /*none*/);
// ::GVariant* /*full,nullable*/ g_icon_serialize (::GIcon* icon /*none*/);
GLib::Variant base::IconBase::serialize () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_icon_serialize;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ g_icon_to_string (GIcon* icon /*none*/);
// char* /*full,nullable*/ g_icon_to_string (::GIcon* icon /*none*/);
gi::cstring base::IconBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_icon_to_string;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/icon_extra_def_impl.hpp>)
#include <gio/icon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/icon_extra_impl.hpp>)
#include <gio/icon_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void IconIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GIconIface *methods = (::GIconIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.equal) methods->equal = (decltype (methods->equal)) detail::method_wrapper<self, bool (*) (Gio::Icon icon2), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::equal_>;
  if (init_data.hash) methods->hash = (decltype (methods->hash)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::hash_>;
  if (init_data.serialize) methods->serialize = (decltype (methods->serialize)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::serialize_>;
}

// gboolean Icon::equal (GIcon* icon1 /*none,nullable*/, GIcon* icon2 /*none,nullable*/);
// gboolean Icon::equal (::GIcon* icon1 /*none,nullable*/, ::GIcon* icon2 /*none,nullable*/);
bool IconIfaceClassImpl::equal_ (Gio::Icon icon2) noexcept
{
  if (!get_struct_()->equal) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GIcon* icon1, ::GIcon* icon2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->equal;
  auto icon2_to_c = gi::unwrap (icon2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()), (::GIcon*) (icon2_to_c));
  return _temp_ret;
}

// guint Icon::hash (GIcon* icon /*none*/);
// guint Icon::hash (::GIcon* icon /*none*/);
guint IconIfaceClassImpl::hash_ () noexcept
{
  if (!get_struct_()->hash) { g_critical ("no method in class struct"); return {}; }
  typedef guint (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hash;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()));
  return _temp_ret;
}

// GVariant* /*full,nullable*/ Icon::serialize (GIcon* icon /*none*/);
// ::GVariant* /*full,nullable*/ Icon::serialize (::GIcon* icon /*none*/);
GLib::Variant IconIfaceClassImpl::serialize_ () noexcept
{
  if (!get_struct_()->serialize) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->serialize;
  auto _temp_ret = call_wrap_v ((::GIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean Icon::to_tokens (GIcon* icon /*none*/, GPtrArray* tokens /*none,out,ca*/, gint* out_version);
// gboolean Icon::to_tokens (::GIcon* icon /*none*/,  tokens /*none,out,ca*/, gint* out_version);
// SKIP; tokens type  not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
