// AUTO-GENERATED

#ifndef _GI_GLIB_DEBUGKEY_HPP_
#define _GI_GLIB_DEBUGKEY_HPP_


namespace gi {

namespace repository {

namespace GLib {

class DebugKey_Ref;

class DebugKey;

namespace base {


#define GI_GLIB_DEBUGKEY_BASE base::DebugKeyBase
class DebugKeyBase : public gi::detail::CBoxedWrapperBase<DebugKeyBase, ::GDebugKey>
{
typedef gi::detail::CBoxedWrapperBase<DebugKeyBase, ::GDebugKey> super_type;
public:

DebugKeyBase (std::nullptr_t = nullptr) : super_type() {}

// const char* /*none*/ DebugKey::key (const ::GDebugKey* obj /*none*/);
// const char* /*none*/ DebugKey::key (const ::GDebugKey* obj /*none*/);
GI_INLINE_DECL gi::cstring_v key_ () const noexcept;

// guint DebugKey::value (const ::GDebugKey* obj /*none*/);
// guint DebugKey::value (const ::GDebugKey* obj /*none*/);
GI_INLINE_DECL guint value_ () const noexcept;

//  DebugKey::value (::GDebugKey* obj /*none*/, guint _value);
// void DebugKey::value (::GDebugKey* obj /*none*/, guint _value);
GI_INLINE_DECL void value_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/debugkey_extra_def.hpp>)
#include <glib/debugkey_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/debugkey_extra.hpp>)
#include <glib/debugkey_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class DebugKey_Ref;

class DebugKey : public gi::detail::CBoxedWrapper<DebugKey, ::GDebugKey, GI_GLIB_DEBUGKEY_BASE, DebugKey_Ref>
{ typedef gi::detail::CBoxedWrapper<DebugKey, ::GDebugKey, GI_GLIB_DEBUGKEY_BASE, DebugKey_Ref> super_type; using super_type::super_type; };


class DebugKey_Ref : public gi::detail::CBoxedRefWrapper<DebugKey, ::GDebugKey, GI_GLIB_DEBUGKEY_BASE>
{ typedef gi::detail::CBoxedRefWrapper<DebugKey, ::GDebugKey, GI_GLIB_DEBUGKEY_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GDebugKey>
{ typedef GLib::DebugKey type; }; 

} // namespace repository

} // namespace gi

#endif
