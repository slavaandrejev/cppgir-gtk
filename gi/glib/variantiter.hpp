// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTITER_HPP_
#define _GI_GLIB_VARIANTITER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Variant;
class VariantIter_Ref;

class VariantIter;

namespace base {


#define GI_GLIB_VARIANTITER_BASE base::VariantIterBase
class VariantIterBase : public gi::detail::CBoxedWrapperBase<VariantIterBase, ::GVariantIter>
{
typedef gi::detail::CBoxedWrapperBase<VariantIterBase, ::GVariantIter> super_type;
public:

VariantIterBase (std::nullptr_t = nullptr) : super_type() {}

// GVariantIter* /*full*/ g_variant_iter_copy (GVariantIter* iter /*none*/);
// ::GVariantIter* /*full*/ g_variant_iter_copy (::GVariantIter* iter /*none*/);
GI_INLINE_DECL GLib::VariantIter copy () noexcept;

// void g_variant_iter_free (GVariantIter* iter /*full*/);
// void g_variant_iter_free (::GVariantIter* iter /*full*/);
// IGNORE; marked ignore

// gsize g_variant_iter_init (GVariantIter* iter /*none*/, GVariant* value /*none*/);
// gsize g_variant_iter_init (::GVariantIter* iter /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL gsize init (GLib::Variant value) noexcept;

// gboolean g_variant_iter_loop (GVariantIter* iter /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_variant_iter_loop (::GVariantIter* iter /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gsize g_variant_iter_n_children (GVariantIter* iter /*none*/);
// gsize g_variant_iter_n_children (::GVariantIter* iter /*none*/);
GI_INLINE_DECL gsize n_children () noexcept;

// gboolean g_variant_iter_next (GVariantIter* iter /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_variant_iter_next (::GVariantIter* iter /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full,nullable*/ g_variant_iter_next_value (GVariantIter* iter /*none*/);
// ::GVariant* /*full,nullable*/ g_variant_iter_next_value (::GVariantIter* iter /*none*/);
GI_INLINE_DECL GLib::Variant next_value () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantiter_extra_def.hpp>)
#include <glib/variantiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantiter_extra.hpp>)
#include <glib/variantiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class VariantIter_Ref;

class VariantIter : public gi::detail::CBoxedWrapper<VariantIter, ::GVariantIter, GI_GLIB_VARIANTITER_BASE, VariantIter_Ref>
{ typedef gi::detail::CBoxedWrapper<VariantIter, ::GVariantIter, GI_GLIB_VARIANTITER_BASE, VariantIter_Ref> super_type; using super_type::super_type; };


class VariantIter_Ref : public gi::detail::CBoxedRefWrapper<VariantIter, ::GVariantIter, GI_GLIB_VARIANTITER_BASE>
{ typedef gi::detail::CBoxedRefWrapper<VariantIter, ::GVariantIter, GI_GLIB_VARIANTITER_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariantIter>
{ typedef GLib::VariantIter type; }; 

} // namespace repository

} // namespace gi

#endif
