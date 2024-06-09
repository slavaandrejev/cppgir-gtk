// AUTO-GENERATED

#ifndef _GI_GIO_THEMEDICON_HPP_
#define _GI_GIO_THEMEDICON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;

class ThemedIcon;

namespace base {


#define GI_GIO_THEMEDICON_BASE base::ThemedIconBase
class ThemedIconBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GThemedIcon BaseObjectType;

ThemedIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_themed_icon_get_type(); } 

GI_INLINE_DECL Gio::Icon interface_ (gi::interface_tag<Gio::Icon>);

GI_INLINE_DECL operator Gio::Icon ();

// GIcon* /*full*/ g_themed_icon_new (const char* iconname /*none*/);
// ::GThemedIcon* /*full*/ g_themed_icon_new (const char* iconname /*none*/);
static GI_INLINE_DECL Gio::ThemedIcon new_ (const gi::cstring_v iconname) noexcept;

// GIcon* /*full*/ g_themed_icon_new_from_names (char** iconnames /*none*/, int len);
// ::GThemedIcon* /*full*/ g_themed_icon_new_from_names (char** iconnames /*none*/, gint len);
static GI_INLINE_DECL Gio::ThemedIcon new_from_names (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> iconnames) noexcept;

// GIcon* /*full*/ g_themed_icon_new_with_default_fallbacks (const char* iconname /*none*/);
// ::GThemedIcon* /*full*/ g_themed_icon_new_with_default_fallbacks (const char* iconname /*none*/);
static GI_INLINE_DECL Gio::ThemedIcon new_with_default_fallbacks (const gi::cstring_v iconname) noexcept;

// void g_themed_icon_append_name (GThemedIcon* icon /*none*/, const char* iconname /*none*/);
// void g_themed_icon_append_name (::GThemedIcon* icon /*none*/, const char* iconname /*none*/);
GI_INLINE_DECL void append_name (const gi::cstring_v iconname) noexcept;

// const gchar* const* /*none*/ g_themed_icon_get_names (GThemedIcon* icon /*none*/);
// const char** /*none*/ g_themed_icon_get_names (::GThemedIcon* icon /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_names () noexcept;

// void g_themed_icon_prepend_name (GThemedIcon* icon /*none*/, const char* iconname /*none*/);
// void g_themed_icon_prepend_name (::GThemedIcon* icon /*none*/, const char* iconname /*none*/);
GI_INLINE_DECL void prepend_name (const gi::cstring_v iconname) noexcept;

gi::property_proxy_write<gi::cstring, base::ThemedIconBase> property_name()
{ return gi::property_proxy_write<gi::cstring, base::ThemedIconBase> (*this, "name"); }

gi::property_proxy<bool, base::ThemedIconBase> property_use_default_fallbacks()
{ return gi::property_proxy<bool, base::ThemedIconBase> (*this, "use-default-fallbacks"); }
const gi::property_proxy<bool, base::ThemedIconBase> property_use_default_fallbacks() const
{ return gi::property_proxy<bool, base::ThemedIconBase> (*this, "use-default-fallbacks"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/themedicon_extra_def.hpp>)
#include <gio/themedicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/themedicon_extra.hpp>)
#include <gio/themedicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ThemedIcon : public GI_GIO_THEMEDICON_BASE
{ typedef GI_GIO_THEMEDICON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GThemedIcon>
{ typedef Gio::ThemedIcon type; }; 

} // namespace repository

} // namespace gi

#endif
