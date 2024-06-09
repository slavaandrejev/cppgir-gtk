// AUTO-GENERATED

#ifndef _GI_GLIB_PRIVATE_HPP_
#define _GI_GLIB_PRIVATE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Private_Ref;

class Private;

namespace base {


#define GI_GLIB_PRIVATE_BASE base::PrivateBase
class PrivateBase : public gi::detail::CBoxedWrapperBase<PrivateBase, ::GPrivate>
{
typedef gi::detail::CBoxedWrapperBase<PrivateBase, ::GPrivate> super_type;
public:

PrivateBase (std::nullptr_t = nullptr) : super_type() {}

// gpointer g_private_get (GPrivate* key /*none*/);
// void* g_private_get (::GPrivate* key /*none*/);
GI_INLINE_DECL gpointer get () noexcept;

// void g_private_replace (GPrivate* key /*none*/, gpointer value);
// void g_private_replace (::GPrivate* key /*none*/, void* value);
GI_INLINE_DECL void replace (void* value) noexcept;

// void g_private_set (GPrivate* key /*none*/, gpointer value);
// void g_private_set (::GPrivate* key /*none*/, void* value);
GI_INLINE_DECL void set (void* value) noexcept;

// FAILURE on g_private_new; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/private_extra_def.hpp>)
#include <glib/private_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/private_extra.hpp>)
#include <glib/private_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Private_Ref;

class Private : public gi::detail::CBoxedWrapper<Private, ::GPrivate, GI_GLIB_PRIVATE_BASE, Private_Ref>
{ typedef gi::detail::CBoxedWrapper<Private, ::GPrivate, GI_GLIB_PRIVATE_BASE, Private_Ref> super_type; using super_type::super_type; };


class Private_Ref : public gi::detail::CBoxedRefWrapper<Private, ::GPrivate, GI_GLIB_PRIVATE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Private, ::GPrivate, GI_GLIB_PRIVATE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GPrivate>
{ typedef GLib::Private type; }; 

} // namespace repository

} // namespace gi

#endif
