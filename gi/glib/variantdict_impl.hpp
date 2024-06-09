// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTDICT_IMPL_HPP_
#define _GI_GLIB_VARIANTDICT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GVariantDict* /*full*/ g_variant_dict_new (GVariant* from_asv /*none,nullable*/);
// ::GVariantDict* /*full*/ g_variant_dict_new (::GVariant* from_asv /*none,nullable*/);
GLib::VariantDict base::VariantDictBase::new_ (GLib::Variant from_asv) noexcept
{
  typedef ::GVariantDict* (*call_wrap_t) (::GVariant* from_asv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_new;
  auto from_asv_to_c = gi::unwrap (from_asv, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (from_asv_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::VariantDict base::VariantDictBase::new_ () noexcept
{
  typedef ::GVariantDict* (*call_wrap_t) (::GVariant* from_asv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_new;
  auto from_asv_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GVariant*) (from_asv_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_variant_dict_clear (GVariantDict* dict /*none*/);
// void g_variant_dict_clear (::GVariantDict* dict /*none*/);
void base::VariantDictBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GVariantDict* dict);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_clear;
  call_wrap_v ((::GVariantDict*) (gobj_()));
}

// gboolean g_variant_dict_contains (GVariantDict* dict /*none*/, const gchar* key /*none*/);
// gboolean g_variant_dict_contains (::GVariantDict* dict /*none*/, const char* key /*none*/);
bool base::VariantDictBase::contains (const gi::cstring_v key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariantDict* dict, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_contains;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GVariant* /*none*/ g_variant_dict_end (GVariantDict* dict /*none*/);
// ::GVariant* /*none*/ g_variant_dict_end (::GVariantDict* dict /*none*/);
GLib::Variant base::VariantDictBase::end () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariantDict* dict);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_end;
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_variant_dict_init (GVariantDict* dict /*none*/, GVariant* from_asv /*none,nullable*/);
// void g_variant_dict_init (::GVariantDict* dict /*none*/, ::GVariant* from_asv /*none,nullable*/);
void base::VariantDictBase::init (GLib::Variant from_asv) noexcept
{
  typedef void (*call_wrap_t) (::GVariantDict* dict, ::GVariant* from_asv);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_init;
  auto from_asv_to_c = gi::unwrap (from_asv, gi::transfer_none);
  call_wrap_v ((::GVariantDict*) (gobj_()), (::GVariant*) (from_asv_to_c));
}
void base::VariantDictBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GVariantDict* dict, ::GVariant* from_asv);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_init;
  auto from_asv_to_c = nullptr;
  call_wrap_v ((::GVariantDict*) (gobj_()), (::GVariant*) (from_asv_to_c));
}

// void g_variant_dict_insert (GVariantDict* dict /*none*/, const gchar* key /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// void g_variant_dict_insert (::GVariantDict* dict /*none*/, const char* key /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_variant_dict_insert_value (GVariantDict* dict /*none*/, const gchar* key /*none*/, GVariant* value /*none*/);
// void g_variant_dict_insert_value (::GVariantDict* dict /*none*/, const char* key /*none*/, ::GVariant* value /*none*/);
void base::VariantDictBase::insert_value (const gi::cstring_v key, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GVariantDict* dict, const char* key, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_insert_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c), (::GVariant*) (value_to_c));
}

// gboolean g_variant_dict_lookup (GVariantDict* dict /*none*/, const gchar* key /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_variant_dict_lookup (::GVariantDict* dict /*none*/, const char* key /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full,nullable*/ g_variant_dict_lookup_value (GVariantDict* dict /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ g_variant_dict_lookup_value (::GVariantDict* dict /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GLib::Variant base::VariantDictBase::lookup_value (const gi::cstring_v key, const GLib::VariantType_Ref expected_type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariantDict* dict, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_lookup_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::VariantDictBase::lookup_value (const gi::cstring_v key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariantDict* dict, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_lookup_value;
  auto expected_type_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariantDict* /*full*/ g_variant_dict_ref (GVariantDict* dict /*none*/);
// ::GVariantDict* /*full*/ g_variant_dict_ref (::GVariantDict* dict /*none*/);
// IGNORE; marked ignore

// gboolean g_variant_dict_remove (GVariantDict* dict /*none*/, const gchar* key /*none*/);
// gboolean g_variant_dict_remove (::GVariantDict* dict /*none*/, const char* key /*none*/);
bool base::VariantDictBase::remove (const gi::cstring_v key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariantDict* dict, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_dict_remove;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// void g_variant_dict_unref (GVariantDict* dict /*full*/);
// void g_variant_dict_unref (::GVariantDict* dict /*full*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantdict_extra_def_impl.hpp>)
#include <glib/variantdict_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantdict_extra_impl.hpp>)
#include <glib/variantdict_extra_impl.hpp>
#endif
#endif

#endif
