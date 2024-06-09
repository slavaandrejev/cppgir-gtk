// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTBUILDER_HPP_
#define _GI_GLIB_VARIANTBUILDER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Variant;
class VariantBuilder_Ref;
class VariantType;
class VariantType_Ref;

class VariantBuilder;

namespace base {


#define GI_GLIB_VARIANTBUILDER_BASE base::VariantBuilderBase
class VariantBuilderBase : public gi::detail::GBoxedWrapperBase<VariantBuilderBase, ::GVariantBuilder>
{
typedef gi::detail::GBoxedWrapperBase<VariantBuilderBase, ::GVariantBuilder> super_type;
public:

VariantBuilderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_variant_builder_get_type(); } 

// GVariantBuilder* /*full*/ g_variant_builder_new (const GVariantType* type /*none*/);
// ::GVariantBuilder* /*full*/ g_variant_builder_new (const ::GVariantType* type /*none*/);
static GI_INLINE_DECL GLib::VariantBuilder new_ (const GLib::VariantType_Ref type) noexcept;

// void g_variant_builder_add (GVariantBuilder* builder /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// void g_variant_builder_add (::GVariantBuilder* builder /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_variant_builder_add_parsed (GVariantBuilder* builder /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_variant_builder_add_parsed (::GVariantBuilder* builder /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_variant_builder_add_value (GVariantBuilder* builder /*none*/, GVariant* value /*none*/);
// void g_variant_builder_add_value (::GVariantBuilder* builder /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void add_value (GLib::Variant value) noexcept;

// void g_variant_builder_clear (GVariantBuilder* builder /*none*/);
// void g_variant_builder_clear (::GVariantBuilder* builder /*none*/);
GI_INLINE_DECL void clear () noexcept;

// void g_variant_builder_close (GVariantBuilder* builder /*none*/);
// void g_variant_builder_close (::GVariantBuilder* builder /*none*/);
GI_INLINE_DECL void close () noexcept;

// GVariant* /*none*/ g_variant_builder_end (GVariantBuilder* builder /*none*/);
// ::GVariant* /*none*/ g_variant_builder_end (::GVariantBuilder* builder /*none*/);
GI_INLINE_DECL GLib::Variant end () noexcept;

// void g_variant_builder_init (GVariantBuilder* builder /*none*/, const GVariantType* type /*none*/);
// void g_variant_builder_init (::GVariantBuilder* builder /*none*/, const ::GVariantType* type /*none*/);
GI_INLINE_DECL void init (const GLib::VariantType_Ref type) noexcept;

// void g_variant_builder_open (GVariantBuilder* builder /*none*/, const GVariantType* type /*none*/);
// void g_variant_builder_open (::GVariantBuilder* builder /*none*/, const ::GVariantType* type /*none*/);
GI_INLINE_DECL void open (const GLib::VariantType_Ref type) noexcept;

// GVariantBuilder* /*full*/ g_variant_builder_ref (GVariantBuilder* builder /*none*/);
// ::GVariantBuilder* /*full*/ g_variant_builder_ref (::GVariantBuilder* builder /*none*/);
// IGNORE; marked ignore

// void g_variant_builder_unref (GVariantBuilder* builder /*full*/);
// void g_variant_builder_unref (::GVariantBuilder* builder /*full*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantbuilder_extra_def.hpp>)
#include <glib/variantbuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantbuilder_extra.hpp>)
#include <glib/variantbuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class VariantBuilder_Ref;

class VariantBuilder : public gi::detail::GBoxedWrapper<VariantBuilder, ::GVariantBuilder, GI_GLIB_VARIANTBUILDER_BASE, VariantBuilder_Ref>
{ typedef gi::detail::GBoxedWrapper<VariantBuilder, ::GVariantBuilder, GI_GLIB_VARIANTBUILDER_BASE, VariantBuilder_Ref> super_type; using super_type::super_type; };


class VariantBuilder_Ref : public gi::detail::GBoxedRefWrapper<VariantBuilder, ::GVariantBuilder, GI_GLIB_VARIANTBUILDER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<VariantBuilder, ::GVariantBuilder, GI_GLIB_VARIANTBUILDER_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariantBuilder>
{ typedef GLib::VariantBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
