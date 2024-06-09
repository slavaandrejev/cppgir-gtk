// AUTO-GENERATED

#ifndef _GI_GIO_THEMEDICON_IMPL_HPP_
#define _GI_GIO_THEMEDICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Icon ThemedIconBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ThemedIconBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

// GIcon* /*full*/ g_themed_icon_new (const char* iconname /*none*/);
// ::GThemedIcon* /*full*/ g_themed_icon_new (const char* iconname /*none*/);
Gio::ThemedIcon base::ThemedIconBase::new_ (const gi::cstring_v iconname) noexcept
{
  typedef ::GThemedIcon* (*call_wrap_t) (const char* iconname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_new;
  auto iconname_to_c = gi::unwrap (iconname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (iconname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_themed_icon_new_from_names (char** iconnames /*none*/, int len);
// ::GThemedIcon* /*full*/ g_themed_icon_new_from_names (char** iconnames /*none*/, gint len);
Gio::ThemedIcon base::ThemedIconBase::new_from_names (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> iconnames) noexcept
{
  typedef ::GThemedIcon* (*call_wrap_t) (char** iconnames, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_new_from_names;
  auto iconnames_w = unwrap (std::move(iconnames), gi::transfer_none);
  auto iconnames_to_c = iconnames_w;
  auto _temp_ret = call_wrap_v ((char**) (iconnames_to_c), (gint) (iconnames._size()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_themed_icon_new_with_default_fallbacks (const char* iconname /*none*/);
// ::GThemedIcon* /*full*/ g_themed_icon_new_with_default_fallbacks (const char* iconname /*none*/);
Gio::ThemedIcon base::ThemedIconBase::new_with_default_fallbacks (const gi::cstring_v iconname) noexcept
{
  typedef ::GThemedIcon* (*call_wrap_t) (const char* iconname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_themed_icon_new_with_default_fallbacks;
  auto iconname_to_c = gi::unwrap (iconname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (iconname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_themed_icon_append_name (GThemedIcon* icon /*none*/, const char* iconname /*none*/);
// void g_themed_icon_append_name (::GThemedIcon* icon /*none*/, const char* iconname /*none*/);
void base::ThemedIconBase::append_name (const gi::cstring_v iconname) noexcept
{
  typedef void (*call_wrap_t) (::GThemedIcon* icon, const char* iconname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_themed_icon_append_name;
  auto iconname_to_c = gi::unwrap (iconname, gi::transfer_none);
  call_wrap_v ((::GThemedIcon*) (gobj_()), (const char*) (iconname_to_c));
}

// const gchar* const* /*none*/ g_themed_icon_get_names (GThemedIcon* icon /*none*/);
// const char** /*none*/ g_themed_icon_get_names (::GThemedIcon* icon /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::ThemedIconBase::get_names () noexcept
{
  typedef const char** (*call_wrap_t) (::GThemedIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_themed_icon_get_names;
  auto _temp_ret = call_wrap_v ((::GThemedIcon*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// void g_themed_icon_prepend_name (GThemedIcon* icon /*none*/, const char* iconname /*none*/);
// void g_themed_icon_prepend_name (::GThemedIcon* icon /*none*/, const char* iconname /*none*/);
void base::ThemedIconBase::prepend_name (const gi::cstring_v iconname) noexcept
{
  typedef void (*call_wrap_t) (::GThemedIcon* icon, const char* iconname);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_themed_icon_prepend_name;
  auto iconname_to_c = gi::unwrap (iconname, gi::transfer_none);
  call_wrap_v ((::GThemedIcon*) (gobj_()), (const char*) (iconname_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/themedicon_extra_def_impl.hpp>)
#include <gio/themedicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/themedicon_extra_impl.hpp>)
#include <gio/themedicon_extra_impl.hpp>
#endif
#endif

#endif
