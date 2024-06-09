// AUTO-GENERATED

#ifndef _GI_GDK_KEYMAPKEY_HPP_
#define _GI_GDK_KEYMAPKEY_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class KeymapKey_Ref;

class KeymapKey;

namespace base {


#define GI_GDK_KEYMAPKEY_BASE base::KeymapKeyBase
class KeymapKeyBase : public gi::detail::CBoxedWrapperBase<KeymapKeyBase, ::GdkKeymapKey>
{
typedef gi::detail::CBoxedWrapperBase<KeymapKeyBase, ::GdkKeymapKey> super_type;
public:

KeymapKeyBase (std::nullptr_t = nullptr) : super_type() {}

// guint KeymapKey::keycode (const ::GdkKeymapKey* obj /*none*/);
// guint KeymapKey::keycode (const ::GdkKeymapKey* obj /*none*/);
GI_INLINE_DECL guint keycode_ () const noexcept;

//  KeymapKey::keycode (::GdkKeymapKey* obj /*none*/, guint _value);
// void KeymapKey::keycode (::GdkKeymapKey* obj /*none*/, guint _value);
GI_INLINE_DECL void keycode_ (guint _value) noexcept;

// gint KeymapKey::group (const ::GdkKeymapKey* obj /*none*/);
// gint KeymapKey::group (const ::GdkKeymapKey* obj /*none*/);
GI_INLINE_DECL gint group_ () const noexcept;

//  KeymapKey::group (::GdkKeymapKey* obj /*none*/, gint _value);
// void KeymapKey::group (::GdkKeymapKey* obj /*none*/, gint _value);
GI_INLINE_DECL void group_ (gint _value) noexcept;

// gint KeymapKey::level (const ::GdkKeymapKey* obj /*none*/);
// gint KeymapKey::level (const ::GdkKeymapKey* obj /*none*/);
GI_INLINE_DECL gint level_ () const noexcept;

//  KeymapKey::level (::GdkKeymapKey* obj /*none*/, gint _value);
// void KeymapKey::level (::GdkKeymapKey* obj /*none*/, gint _value);
GI_INLINE_DECL void level_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/keymapkey_extra_def.hpp>)
#include <gdk/keymapkey_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/keymapkey_extra.hpp>)
#include <gdk/keymapkey_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class KeymapKey_Ref;

class KeymapKey : public gi::detail::CBoxedWrapper<KeymapKey, ::GdkKeymapKey, GI_GDK_KEYMAPKEY_BASE, KeymapKey_Ref>
{ typedef gi::detail::CBoxedWrapper<KeymapKey, ::GdkKeymapKey, GI_GDK_KEYMAPKEY_BASE, KeymapKey_Ref> super_type; using super_type::super_type; };


class KeymapKey_Ref : public gi::detail::CBoxedRefWrapper<KeymapKey, ::GdkKeymapKey, GI_GDK_KEYMAPKEY_BASE>
{ typedef gi::detail::CBoxedRefWrapper<KeymapKey, ::GdkKeymapKey, GI_GDK_KEYMAPKEY_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkKeymapKey>
{ typedef Gdk::KeymapKey type; }; 

} // namespace repository

} // namespace gi

#endif
