// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTDICT_HPP_
#define _GI_GLIB_VARIANTDICT_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Variant;
class VariantDict_Ref;
class VariantType;
class VariantType_Ref;

class VariantDict;

namespace base {


#define GI_GLIB_VARIANTDICT_BASE base::VariantDictBase
class VariantDictBase : public gi::detail::GBoxedWrapperBase<VariantDictBase, ::GVariantDict>
{
typedef gi::detail::GBoxedWrapperBase<VariantDictBase, ::GVariantDict> super_type;
public:

VariantDictBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_variant_dict_get_type(); } 

// GVariantDict* /*full*/ g_variant_dict_new (GVariant* from_asv /*none,nullable*/);
// ::GVariantDict* /*full*/ g_variant_dict_new (::GVariant* from_asv /*none,nullable*/);
static GI_INLINE_DECL GLib::VariantDict new_ (GLib::Variant from_asv) noexcept;
static GI_INLINE_DECL GLib::VariantDict new_ () noexcept;

// void g_variant_dict_clear (GVariantDict* dict /*none*/);
// void g_variant_dict_clear (::GVariantDict* dict /*none*/);
GI_INLINE_DECL void clear () noexcept;

// gboolean g_variant_dict_contains (GVariantDict* dict /*none*/, const gchar* key /*none*/);
// gboolean g_variant_dict_contains (::GVariantDict* dict /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool contains (const gi::cstring_v key) noexcept;

// GVariant* /*none*/ g_variant_dict_end (GVariantDict* dict /*none*/);
// ::GVariant* /*none*/ g_variant_dict_end (::GVariantDict* dict /*none*/);
GI_INLINE_DECL GLib::Variant end () noexcept;

// void g_variant_dict_init (GVariantDict* dict /*none*/, GVariant* from_asv /*none,nullable*/);
// void g_variant_dict_init (::GVariantDict* dict /*none*/, ::GVariant* from_asv /*none,nullable*/);
GI_INLINE_DECL void init (GLib::Variant from_asv) noexcept;
GI_INLINE_DECL void init () noexcept;

// void g_variant_dict_insert (GVariantDict* dict /*none*/, const gchar* key /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// void g_variant_dict_insert (::GVariantDict* dict /*none*/, const char* key /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_variant_dict_insert_value (GVariantDict* dict /*none*/, const gchar* key /*none*/, GVariant* value /*none*/);
// void g_variant_dict_insert_value (::GVariantDict* dict /*none*/, const char* key /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void insert_value (const gi::cstring_v key, GLib::Variant value) noexcept;

// gboolean g_variant_dict_lookup (GVariantDict* dict /*none*/, const gchar* key /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_variant_dict_lookup (::GVariantDict* dict /*none*/, const char* key /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full,nullable*/ g_variant_dict_lookup_value (GVariantDict* dict /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ g_variant_dict_lookup_value (::GVariantDict* dict /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GI_INLINE_DECL GLib::Variant lookup_value (const gi::cstring_v key, const GLib::VariantType_Ref expected_type) noexcept;
GI_INLINE_DECL GLib::Variant lookup_value (const gi::cstring_v key) noexcept;

// GVariantDict* /*full*/ g_variant_dict_ref (GVariantDict* dict /*none*/);
// ::GVariantDict* /*full*/ g_variant_dict_ref (::GVariantDict* dict /*none*/);
// IGNORE; marked ignore

// gboolean g_variant_dict_remove (GVariantDict* dict /*none*/, const gchar* key /*none*/);
// gboolean g_variant_dict_remove (::GVariantDict* dict /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool remove (const gi::cstring_v key) noexcept;

// void g_variant_dict_unref (GVariantDict* dict /*full*/);
// void g_variant_dict_unref (::GVariantDict* dict /*full*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantdict_extra_def.hpp>)
#include <glib/variantdict_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantdict_extra.hpp>)
#include <glib/variantdict_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class VariantDict_Ref;

class VariantDict : public gi::detail::GBoxedWrapper<VariantDict, ::GVariantDict, GI_GLIB_VARIANTDICT_BASE, VariantDict_Ref>
{ typedef gi::detail::GBoxedWrapper<VariantDict, ::GVariantDict, GI_GLIB_VARIANTDICT_BASE, VariantDict_Ref> super_type; using super_type::super_type; };


class VariantDict_Ref : public gi::detail::GBoxedRefWrapper<VariantDict, ::GVariantDict, GI_GLIB_VARIANTDICT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<VariantDict, ::GVariantDict, GI_GLIB_VARIANTDICT_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariantDict>
{ typedef GLib::VariantDict type; }; 

} // namespace repository

} // namespace gi

#endif
