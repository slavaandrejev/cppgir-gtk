// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTITER_IMPL_HPP_
#define _GI_GLIB_VARIANTITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GVariantIter* /*full*/ g_variant_iter_copy (GVariantIter* iter /*none*/);
// ::GVariantIter* /*full*/ g_variant_iter_copy (::GVariantIter* iter /*none*/);
GLib::VariantIter base::VariantIterBase::copy () noexcept
{
  typedef ::GVariantIter* (*call_wrap_t) (::GVariantIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_iter_copy;
  auto _temp_ret = call_wrap_v ((::GVariantIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_variant_iter_free (GVariantIter* iter /*full*/);
// void g_variant_iter_free (::GVariantIter* iter /*full*/);
// IGNORE; marked ignore

// gsize g_variant_iter_init (GVariantIter* iter /*none*/, GVariant* value /*none*/);
// gsize g_variant_iter_init (::GVariantIter* iter /*none*/, ::GVariant* value /*none*/);
gsize base::VariantIterBase::init (GLib::Variant value) noexcept
{
  typedef gsize (*call_wrap_t) (::GVariantIter* iter, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_iter_init;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariantIter*) (gobj_()), (::GVariant*) (value_to_c));
  return _temp_ret;
}

// gboolean g_variant_iter_loop (GVariantIter* iter /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_variant_iter_loop (::GVariantIter* iter /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gsize g_variant_iter_n_children (GVariantIter* iter /*none*/);
// gsize g_variant_iter_n_children (::GVariantIter* iter /*none*/);
gsize base::VariantIterBase::n_children () noexcept
{
  typedef gsize (*call_wrap_t) (::GVariantIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_iter_n_children;
  auto _temp_ret = call_wrap_v ((::GVariantIter*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_iter_next (GVariantIter* iter /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_variant_iter_next (::GVariantIter* iter /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full,nullable*/ g_variant_iter_next_value (GVariantIter* iter /*none*/);
// ::GVariant* /*full,nullable*/ g_variant_iter_next_value (::GVariantIter* iter /*none*/);
GLib::Variant base::VariantIterBase::next_value () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariantIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_iter_next_value;
  auto _temp_ret = call_wrap_v ((::GVariantIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantiter_extra_def_impl.hpp>)
#include <glib/variantiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantiter_extra_impl.hpp>)
#include <glib/variantiter_extra_impl.hpp>
#endif
#endif

#endif
