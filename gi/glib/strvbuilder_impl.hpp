// AUTO-GENERATED

#ifndef _GI_GLIB_STRVBUILDER_IMPL_HPP_
#define _GI_GLIB_STRVBUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GStrvBuilder* /*full*/ g_strv_builder_new ();
// ::GStrvBuilder* /*full*/ g_strv_builder_new ();
GLib::StrvBuilder base::StrvBuilderBase::new_ () noexcept
{
  typedef ::GStrvBuilder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_strv_builder_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_strv_builder_add (GStrvBuilder* builder /*none*/, const char* value /*none*/);
// void g_strv_builder_add (::GStrvBuilder* builder /*none*/, const char* value /*none*/);
void base::StrvBuilderBase::add (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GStrvBuilder* builder, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strv_builder_add;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GStrvBuilder*) (gobj_()), (const char*) (value_to_c));
}

// void g_strv_builder_add_many (GStrvBuilder* builder /*none*/,  ..._ /*none*/);
// void g_strv_builder_add_many (::GStrvBuilder* builder /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_strv_builder_addv (GStrvBuilder* builder /*none*/, const char** value /*none*/);
// void g_strv_builder_addv (::GStrvBuilder* builder /*none*/, const char** value /*none*/);
void base::StrvBuilderBase::addv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> value) noexcept
{
  typedef void (*call_wrap_t) (::GStrvBuilder* builder, const char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strv_builder_addv;
  auto value_w = unwrap (std::move(value), gi::transfer_none);
  auto value_to_c = value_w;
  call_wrap_v ((::GStrvBuilder*) (gobj_()), (const char**) (value_to_c));
}

// GStrv /*full*/ g_strv_builder_end (GStrvBuilder* builder /*none*/);
// char** /*full*/ g_strv_builder_end (::GStrvBuilder* builder /*none*/);
// SKIP; inconsistent  return pointer depth (0 vs 2)

// GStrvBuilder* /*full*/ g_strv_builder_ref (GStrvBuilder* builder /*none*/);
// ::GStrvBuilder* /*full*/ g_strv_builder_ref (::GStrvBuilder* builder /*none*/);
// IGNORE; marked ignore

// void g_strv_builder_take (GStrvBuilder* builder /*none*/, char* value /*full*/);
// void g_strv_builder_take (::GStrvBuilder* builder /*none*/, char* value /*full*/);
void base::StrvBuilderBase::take (gi::cstring value) noexcept
{
  typedef void (*call_wrap_t) (::GStrvBuilder* builder, char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strv_builder_take;
  auto value_to_c = gi::unwrap (std::move(value), gi::transfer_full);
  call_wrap_v ((::GStrvBuilder*) (gobj_()), (char*) (value_to_c));
}

// void g_strv_builder_unref (GStrvBuilder* builder /*full*/);
// void g_strv_builder_unref (::GStrvBuilder* builder /*full*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/strvbuilder_extra_def_impl.hpp>)
#include <glib/strvbuilder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/strvbuilder_extra_impl.hpp>)
#include <glib/strvbuilder_extra_impl.hpp>
#endif
#endif

#endif
