// AUTO-GENERATED

#ifndef _GI_GDK_CURSOR_HPP_
#define _GI_GDK_CURSOR_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Texture;

class Cursor;

namespace base {


#define GI_GDK_CURSOR_BASE base::CursorBase
class CursorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkCursor BaseObjectType;

CursorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_cursor_get_type(); } 

// GdkCursor* /*full,nullable*/ gdk_cursor_new_from_name (const char* name /*none*/, GdkCursor* fallback /*none,nullable*/);
// ::GdkCursor* /*full,nullable*/ gdk_cursor_new_from_name (const char* name /*none*/, ::GdkCursor* fallback /*none,nullable*/);
static GI_INLINE_DECL Gdk::Cursor new_from_name (const gi::cstring_v name, Gdk::Cursor fallback) noexcept;
static GI_INLINE_DECL Gdk::Cursor new_from_name (const gi::cstring_v name) noexcept;

// GdkCursor* /*full*/ gdk_cursor_new_from_texture (GdkTexture* texture /*none*/, int hotspot_x, int hotspot_y, GdkCursor* fallback /*none,nullable*/);
// ::GdkCursor* /*full*/ gdk_cursor_new_from_texture (::GdkTexture* texture /*none*/, gint hotspot_x, gint hotspot_y, ::GdkCursor* fallback /*none,nullable*/);
static GI_INLINE_DECL Gdk::Cursor new_from_texture (Gdk::Texture texture, gint hotspot_x, gint hotspot_y, Gdk::Cursor fallback) noexcept;
static GI_INLINE_DECL Gdk::Cursor new_from_texture (Gdk::Texture texture, gint hotspot_x, gint hotspot_y) noexcept;

// GdkCursor* /*none,nullable*/ gdk_cursor_get_fallback (GdkCursor* cursor /*none*/);
// ::GdkCursor* /*none,nullable*/ gdk_cursor_get_fallback (::GdkCursor* cursor /*none*/);
GI_INLINE_DECL Gdk::Cursor get_fallback () noexcept;

// int gdk_cursor_get_hotspot_x (GdkCursor* cursor /*none*/);
// gint gdk_cursor_get_hotspot_x (::GdkCursor* cursor /*none*/);
GI_INLINE_DECL gint get_hotspot_x () noexcept;

// int gdk_cursor_get_hotspot_y (GdkCursor* cursor /*none*/);
// gint gdk_cursor_get_hotspot_y (::GdkCursor* cursor /*none*/);
GI_INLINE_DECL gint get_hotspot_y () noexcept;

// const char* /*none,nullable*/ gdk_cursor_get_name (GdkCursor* cursor /*none*/);
// const char* /*none,nullable*/ gdk_cursor_get_name (::GdkCursor* cursor /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// GdkTexture* /*none,nullable*/ gdk_cursor_get_texture (GdkCursor* cursor /*none*/);
// ::GdkTexture* /*none,nullable*/ gdk_cursor_get_texture (::GdkCursor* cursor /*none*/);
GI_INLINE_DECL Gdk::Texture get_texture () noexcept;

gi::property_proxy<Gdk::Cursor, base::CursorBase> property_fallback()
{ return gi::property_proxy<Gdk::Cursor, base::CursorBase> (*this, "fallback"); }
const gi::property_proxy<Gdk::Cursor, base::CursorBase> property_fallback() const
{ return gi::property_proxy<Gdk::Cursor, base::CursorBase> (*this, "fallback"); }

gi::property_proxy<gint, base::CursorBase> property_hotspot_x()
{ return gi::property_proxy<gint, base::CursorBase> (*this, "hotspot-x"); }
const gi::property_proxy<gint, base::CursorBase> property_hotspot_x() const
{ return gi::property_proxy<gint, base::CursorBase> (*this, "hotspot-x"); }

gi::property_proxy<gint, base::CursorBase> property_hotspot_y()
{ return gi::property_proxy<gint, base::CursorBase> (*this, "hotspot-y"); }
const gi::property_proxy<gint, base::CursorBase> property_hotspot_y() const
{ return gi::property_proxy<gint, base::CursorBase> (*this, "hotspot-y"); }

gi::property_proxy<gi::cstring, base::CursorBase> property_name()
{ return gi::property_proxy<gi::cstring, base::CursorBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::CursorBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::CursorBase> (*this, "name"); }

gi::property_proxy<Gdk::Texture, base::CursorBase> property_texture()
{ return gi::property_proxy<Gdk::Texture, base::CursorBase> (*this, "texture"); }
const gi::property_proxy<Gdk::Texture, base::CursorBase> property_texture() const
{ return gi::property_proxy<Gdk::Texture, base::CursorBase> (*this, "texture"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/cursor_extra_def.hpp>)
#include <gdk/cursor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/cursor_extra.hpp>)
#include <gdk/cursor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Cursor : public GI_GDK_CURSOR_BASE
{ typedef GI_GDK_CURSOR_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkCursor>
{ typedef Gdk::Cursor type; }; 

} // namespace repository

} // namespace gi

#endif
