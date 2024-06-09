// AUTO-GENERATED

#ifndef _GI_GLIB_URIPARAMSITER_HPP_
#define _GI_GLIB_URIPARAMSITER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class UriParamsIter_Ref;

class UriParamsIter;

namespace base {


#define GI_GLIB_URIPARAMSITER_BASE base::UriParamsIterBase
class UriParamsIterBase : public gi::detail::CBoxedWrapperBase<UriParamsIterBase, ::GUriParamsIter>
{
typedef gi::detail::CBoxedWrapperBase<UriParamsIterBase, ::GUriParamsIter> super_type;
public:

UriParamsIterBase (std::nullptr_t = nullptr) : super_type() {}

// void g_uri_params_iter_init (GUriParamsIter* iter /*none*/, const gchar* params /*none*/, gssize length, const gchar* separators /*none*/, GUriParamsFlags flags);
// void g_uri_params_iter_init (::GUriParamsIter* iter /*none*/, const char* params /*none*/, gssize length, const char* separators /*none*/, ::GUriParamsFlags flags);
GI_INLINE_DECL void init (const gi::cstring_v params, gssize length, const gi::cstring_v separators, GLib::UriParamsFlags flags) noexcept;

// gboolean g_uri_params_iter_next (GUriParamsIter* iter /*none*/, gchar** attribute /*full,out,opt,nullable*/, gchar** value /*full,out,opt,nullable*/, GError ** error);
// gboolean g_uri_params_iter_next (::GUriParamsIter* iter /*none*/, char** attribute /*full,out,opt,nullable*/, char** value /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool next (gi::cstring * attribute, gi::cstring * value);
GI_INLINE_DECL bool next (gi::cstring * attribute, gi::cstring * value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> next ();
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> next (GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/uriparamsiter_extra_def.hpp>)
#include <glib/uriparamsiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/uriparamsiter_extra.hpp>)
#include <glib/uriparamsiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class UriParamsIter_Ref;

class UriParamsIter : public gi::detail::CBoxedWrapper<UriParamsIter, ::GUriParamsIter, GI_GLIB_URIPARAMSITER_BASE, UriParamsIter_Ref>
{ typedef gi::detail::CBoxedWrapper<UriParamsIter, ::GUriParamsIter, GI_GLIB_URIPARAMSITER_BASE, UriParamsIter_Ref> super_type; using super_type::super_type; };


class UriParamsIter_Ref : public gi::detail::CBoxedRefWrapper<UriParamsIter, ::GUriParamsIter, GI_GLIB_URIPARAMSITER_BASE>
{ typedef gi::detail::CBoxedRefWrapper<UriParamsIter, ::GUriParamsIter, GI_GLIB_URIPARAMSITER_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GUriParamsIter>
{ typedef GLib::UriParamsIter type; }; 

} // namespace repository

} // namespace gi

#endif
