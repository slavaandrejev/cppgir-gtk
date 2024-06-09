// AUTO-GENERATED

#ifndef _GI_GLIB_STRVBUILDER_HPP_
#define _GI_GLIB_STRVBUILDER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class StrvBuilder_Ref;

class StrvBuilder;

namespace base {


#define GI_GLIB_STRVBUILDER_BASE base::StrvBuilderBase
class StrvBuilderBase : public gi::detail::GBoxedWrapperBase<StrvBuilderBase, ::GStrvBuilder>
{
typedef gi::detail::GBoxedWrapperBase<StrvBuilderBase, ::GStrvBuilder> super_type;
public:

StrvBuilderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_strv_builder_get_type(); } 

// GStrvBuilder* /*full*/ g_strv_builder_new ();
// ::GStrvBuilder* /*full*/ g_strv_builder_new ();
static GI_INLINE_DECL GLib::StrvBuilder new_ () noexcept;

// void g_strv_builder_add (GStrvBuilder* builder /*none*/, const char* value /*none*/);
// void g_strv_builder_add (::GStrvBuilder* builder /*none*/, const char* value /*none*/);
GI_INLINE_DECL void add (const gi::cstring_v value) noexcept;

// void g_strv_builder_add_many (GStrvBuilder* builder /*none*/,  ..._ /*none*/);
// void g_strv_builder_add_many (::GStrvBuilder* builder /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_strv_builder_addv (GStrvBuilder* builder /*none*/, const char** value /*none*/);
// void g_strv_builder_addv (::GStrvBuilder* builder /*none*/, const char** value /*none*/);
GI_INLINE_DECL void addv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> value) noexcept;

// GStrv /*full*/ g_strv_builder_end (GStrvBuilder* builder /*none*/);
// char** /*full*/ g_strv_builder_end (::GStrvBuilder* builder /*none*/);
// SKIP; inconsistent  return pointer depth (0 vs 2)

// GStrvBuilder* /*full*/ g_strv_builder_ref (GStrvBuilder* builder /*none*/);
// ::GStrvBuilder* /*full*/ g_strv_builder_ref (::GStrvBuilder* builder /*none*/);
// IGNORE; marked ignore

// void g_strv_builder_take (GStrvBuilder* builder /*none*/, char* value /*full*/);
// void g_strv_builder_take (::GStrvBuilder* builder /*none*/, char* value /*full*/);
GI_INLINE_DECL void take (gi::cstring value) noexcept;

// void g_strv_builder_unref (GStrvBuilder* builder /*full*/);
// void g_strv_builder_unref (::GStrvBuilder* builder /*full*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/strvbuilder_extra_def.hpp>)
#include <glib/strvbuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/strvbuilder_extra.hpp>)
#include <glib/strvbuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class StrvBuilder_Ref;

class StrvBuilder : public gi::detail::GBoxedWrapper<StrvBuilder, ::GStrvBuilder, GI_GLIB_STRVBUILDER_BASE, StrvBuilder_Ref>
{ typedef gi::detail::GBoxedWrapper<StrvBuilder, ::GStrvBuilder, GI_GLIB_STRVBUILDER_BASE, StrvBuilder_Ref> super_type; using super_type::super_type; };


class StrvBuilder_Ref : public gi::detail::GBoxedRefWrapper<StrvBuilder, ::GStrvBuilder, GI_GLIB_STRVBUILDER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<StrvBuilder, ::GStrvBuilder, GI_GLIB_STRVBUILDER_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GStrvBuilder>
{ typedef GLib::StrvBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
