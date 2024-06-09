// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTTYPE_HPP_
#define _GI_GLIB_VARIANTTYPE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class VariantType_Ref;

class VariantType;

namespace base {


#define GI_GLIB_VARIANTTYPE_BASE base::VariantTypeBase
class VariantTypeBase : public gi::detail::GBoxedWrapperBase<VariantTypeBase, ::GVariantType>
{
typedef gi::detail::GBoxedWrapperBase<VariantTypeBase, ::GVariantType> super_type;
public:

VariantTypeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_variant_type_get_gtype(); } 

// GVariantType* /*full*/ g_variant_type_new (const gchar* type_string /*none*/);
// ::GVariantType* /*full*/ g_variant_type_new (const char* type_string /*none*/);
static GI_INLINE_DECL GLib::VariantType new_ (const gi::cstring_v type_string) noexcept;

// GVariantType* /*full*/ g_variant_type_new_array (const GVariantType* element /*none*/);
// ::GVariantType* /*full*/ g_variant_type_new_array (const ::GVariantType* element /*none*/);
static GI_INLINE_DECL GLib::VariantType new_array (const GLib::VariantType_Ref element) noexcept;

// GVariantType* /*full*/ g_variant_type_new_dict_entry (const GVariantType* key /*none*/, const GVariantType* value /*none*/);
// ::GVariantType* /*full*/ g_variant_type_new_dict_entry (const ::GVariantType* key /*none*/, const ::GVariantType* value /*none*/);
static GI_INLINE_DECL GLib::VariantType new_dict_entry (const GLib::VariantType_Ref key, const GLib::VariantType_Ref value) noexcept;

// GVariantType* /*full*/ g_variant_type_new_maybe (const GVariantType* element /*none*/);
// ::GVariantType* /*full*/ g_variant_type_new_maybe (const ::GVariantType* element /*none*/);
static GI_INLINE_DECL GLib::VariantType new_maybe (const GLib::VariantType_Ref element) noexcept;

// GVariantType* /*full*/ g_variant_type_new_tuple (const GVariantType* const* items /*none*/, gint length);
// ::GVariantType* /*full*/ g_variant_type_new_tuple (const ::GVariantType** items /*none*/, gint length);
static GI_INLINE_DECL GLib::VariantType new_tuple (gi::CollectionParameter<gi::DSpan, ::GVariantType*, gi::transfer_none_t> items) noexcept;

// GVariantType* /*full*/ g_variant_type_copy (const GVariantType* type /*none*/);
// ::GVariantType* /*full*/ g_variant_type_copy (const ::GVariantType* type /*none*/);
GI_INLINE_DECL GLib::VariantType copy () const noexcept;

// gchar* /*full*/ g_variant_type_dup_string (const GVariantType* type /*none*/);
// char* /*full*/ g_variant_type_dup_string (const ::GVariantType* type /*none*/);
GI_INLINE_DECL gi::cstring dup_string () const noexcept;

// const GVariantType* /*none*/ g_variant_type_element (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_element (const ::GVariantType* type /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref element () const noexcept;

// gboolean g_variant_type_equal (gconstpointer type1 /*none*/, gconstpointer type2 /*none*/);
// gboolean g_variant_type_equal (const ::GVariantType* type1 /*none*/, const ::GVariantType* type2 /*none*/);
GI_INLINE_DECL bool equal (const GLib::VariantType_Ref type2) const noexcept;

// const GVariantType* /*none*/ g_variant_type_first (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_first (const ::GVariantType* type /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref first () const noexcept;

// void g_variant_type_free (GVariantType* type /*none,nullable*/);
// void g_variant_type_free (::GVariantType* type /*none,nullable*/);
// IGNORE; marked ignore

// gsize g_variant_type_get_string_length (const GVariantType* type /*none*/);
// gsize g_variant_type_get_string_length (const ::GVariantType* type /*none*/);
GI_INLINE_DECL gsize get_string_length () const noexcept;

// guint g_variant_type_hash (gconstpointer type /*none*/);
// guint g_variant_type_hash (const ::GVariantType* type /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean g_variant_type_is_array (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_array (const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_array () const noexcept;

// gboolean g_variant_type_is_basic (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_basic (const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_basic () const noexcept;

// gboolean g_variant_type_is_container (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_container (const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_container () const noexcept;

// gboolean g_variant_type_is_definite (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_definite (const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_definite () const noexcept;

// gboolean g_variant_type_is_dict_entry (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_dict_entry (const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_dict_entry () const noexcept;

// gboolean g_variant_type_is_maybe (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_maybe (const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_maybe () const noexcept;

// gboolean g_variant_type_is_subtype_of (const GVariantType* type /*none*/, const GVariantType* supertype /*none*/);
// gboolean g_variant_type_is_subtype_of (const ::GVariantType* type /*none*/, const ::GVariantType* supertype /*none*/);
GI_INLINE_DECL bool is_subtype_of (const GLib::VariantType_Ref supertype) const noexcept;

// gboolean g_variant_type_is_tuple (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_tuple (const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_tuple () const noexcept;

// gboolean g_variant_type_is_variant (const GVariantType* type /*none*/);
// gboolean g_variant_type_is_variant (const ::GVariantType* type /*none*/);
GI_INLINE_DECL bool is_variant () const noexcept;

// const GVariantType* /*none*/ g_variant_type_key (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_key (const ::GVariantType* type /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref key () const noexcept;

// gsize g_variant_type_n_items (const GVariantType* type /*none*/);
// gsize g_variant_type_n_items (const ::GVariantType* type /*none*/);
GI_INLINE_DECL gsize n_items () const noexcept;

// const GVariantType* /*none*/ g_variant_type_next (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_next (const ::GVariantType* type /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref next () const noexcept;

// const gchar* /*none*/ g_variant_type_peek_string (const GVariantType* type /*none*/);
// const char* /*none*/ g_variant_type_peek_string (const ::GVariantType* type /*none*/);
GI_INLINE_DECL gi::cstring_v peek_string () const noexcept;

// const GVariantType* /*none*/ g_variant_type_value (const GVariantType* type /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_value (const ::GVariantType* type /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref value () const noexcept;

// const GVariantType* /*none*/ g_variant_type_checked_ (const gchar* type_string /*none*/);
// const ::GVariantType* /*none*/ g_variant_type_checked_ (const char* type_string /*none*/);
static GI_INLINE_DECL GLib::VariantType_Ref checked_ (const gi::cstring_v type_string) noexcept;

// gsize g_variant_type_string_get_depth_ (const gchar* type_string /*none*/);
// gsize g_variant_type_string_get_depth_ (const char* type_string /*none*/);
static GI_INLINE_DECL gsize string_get_depth_ (const gi::cstring_v type_string) noexcept;

// gboolean g_variant_type_string_is_valid (const gchar* type_string /*none*/);
// gboolean g_variant_type_string_is_valid (const char* type_string /*none*/);
static GI_INLINE_DECL bool string_is_valid (const gi::cstring_v type_string) noexcept;

// gboolean g_variant_type_string_scan (const gchar* string /*none*/, const gchar* limit /*none,nullable*/, const gchar** endptr /*full,out,opt*/);
// gboolean g_variant_type_string_scan (const char* string /*none*/, const char* limit /*none,nullable*/, const char** endptr /*full,out,opt*/);
static GI_INLINE_DECL bool string_scan (const gi::cstring_v string, const gi::cstring_v limit, gi::cstring * endptr) noexcept;
static GI_INLINE_DECL bool string_scan (const gi::cstring_v string, gi::cstring * endptr) noexcept;
static GI_INLINE_DECL std::tuple<bool, gi::cstring> string_scan (const gi::cstring_v string, const gi::cstring_v limit) noexcept;
static GI_INLINE_DECL std::tuple<bool, gi::cstring> string_scan (const gi::cstring_v string) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/varianttype_extra_def.hpp>)
#include <glib/varianttype_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/varianttype_extra.hpp>)
#include <glib/varianttype_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class VariantType_Ref;

class VariantType : public gi::detail::GBoxedWrapper<VariantType, ::GVariantType, GI_GLIB_VARIANTTYPE_BASE, VariantType_Ref>
{ typedef gi::detail::GBoxedWrapper<VariantType, ::GVariantType, GI_GLIB_VARIANTTYPE_BASE, VariantType_Ref> super_type; using super_type::super_type; };


class VariantType_Ref : public gi::detail::GBoxedRefWrapper<VariantType, ::GVariantType, GI_GLIB_VARIANTTYPE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<VariantType, ::GVariantType, GI_GLIB_VARIANTTYPE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariantType>
{ typedef GLib::VariantType type; }; 

} // namespace repository

} // namespace gi

#endif
