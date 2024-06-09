// AUTO-GENERATED

#ifndef _GI_GTK_STYLECONTEXT_HPP_
#define _GI_GTK_STYLECONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Border;
class Border_Ref;
class StyleProvider;

class StyleContext;

namespace base {


#define GI_GTK_STYLECONTEXT_BASE base::StyleContextBase
class StyleContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkStyleContext BaseObjectType;

StyleContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_style_context_get_type(); } 

// void gtk_style_context_add_provider_for_display (GdkDisplay* display /*none*/, GtkStyleProvider* provider /*none*/, guint priority);
// void gtk_style_context_add_provider_for_display (::GdkDisplay* display /*none*/, ::GtkStyleProvider* provider /*none*/, guint priority);
static GI_INLINE_DECL void add_provider_for_display (Gdk::Display display, Gtk::StyleProvider provider, guint priority) noexcept;

// void gtk_style_context_remove_provider_for_display (GdkDisplay* display /*none*/, GtkStyleProvider* provider /*none*/);
// void gtk_style_context_remove_provider_for_display (::GdkDisplay* display /*none*/, ::GtkStyleProvider* provider /*none*/);
static GI_INLINE_DECL void remove_provider_for_display (Gdk::Display display, Gtk::StyleProvider provider) noexcept;

// void gtk_style_context_add_class (GtkStyleContext* context /*none*/, const char* class_name /*none*/);
// void gtk_style_context_add_class (::GtkStyleContext* context /*none*/, const char* class_name /*none*/);
GI_INLINE_DECL void add_class (const gi::cstring_v class_name) noexcept;

// void gtk_style_context_add_provider (GtkStyleContext* context /*none*/, GtkStyleProvider* provider /*none*/, guint priority);
// void gtk_style_context_add_provider (::GtkStyleContext* context /*none*/, ::GtkStyleProvider* provider /*none*/, guint priority);
GI_INLINE_DECL void add_provider (Gtk::StyleProvider provider, guint priority) noexcept;

// void gtk_style_context_get_border (GtkStyleContext* context /*none*/, GtkBorder* border /*none,out,ca*/);
// void gtk_style_context_get_border (::GtkStyleContext* context /*none*/, ::GtkBorder* border /*none,out,ca*/);
GI_INLINE_DECL void get_border (Gtk::Border & border) noexcept;
GI_INLINE_DECL Gtk::Border get_border () noexcept;

// void gtk_style_context_get_color (GtkStyleContext* context /*none*/, GdkRGBA* color /*none,out,ca*/);
// void gtk_style_context_get_color (::GtkStyleContext* context /*none*/, ::GdkRGBA* color /*none,out,ca*/);
GI_INLINE_DECL void get_color (Gdk::RGBA & color) noexcept;
GI_INLINE_DECL Gdk::RGBA get_color () noexcept;

// GdkDisplay* /*none*/ gtk_style_context_get_display (GtkStyleContext* context /*none*/);
// ::GdkDisplay* /*none*/ gtk_style_context_get_display (::GtkStyleContext* context /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// void gtk_style_context_get_margin (GtkStyleContext* context /*none*/, GtkBorder* margin /*none,out,ca*/);
// void gtk_style_context_get_margin (::GtkStyleContext* context /*none*/, ::GtkBorder* margin /*none,out,ca*/);
GI_INLINE_DECL void get_margin (Gtk::Border & margin) noexcept;
GI_INLINE_DECL Gtk::Border get_margin () noexcept;

// void gtk_style_context_get_padding (GtkStyleContext* context /*none*/, GtkBorder* padding /*none,out,ca*/);
// void gtk_style_context_get_padding (::GtkStyleContext* context /*none*/, ::GtkBorder* padding /*none,out,ca*/);
GI_INLINE_DECL void get_padding (Gtk::Border & padding) noexcept;
GI_INLINE_DECL Gtk::Border get_padding () noexcept;

// int gtk_style_context_get_scale (GtkStyleContext* context /*none*/);
// gint gtk_style_context_get_scale (::GtkStyleContext* context /*none*/);
GI_INLINE_DECL gint get_scale () noexcept;

// GtkStateFlags gtk_style_context_get_state (GtkStyleContext* context /*none*/);
// ::GtkStateFlags gtk_style_context_get_state (::GtkStyleContext* context /*none*/);
GI_INLINE_DECL Gtk::StateFlags get_state () noexcept;

// gboolean gtk_style_context_has_class (GtkStyleContext* context /*none*/, const char* class_name /*none*/);
// gboolean gtk_style_context_has_class (::GtkStyleContext* context /*none*/, const char* class_name /*none*/);
GI_INLINE_DECL bool has_class (const gi::cstring_v class_name) noexcept;

// gboolean gtk_style_context_lookup_color (GtkStyleContext* context /*none*/, const char* color_name /*none*/, GdkRGBA* color /*none,out,ca*/);
// gboolean gtk_style_context_lookup_color (::GtkStyleContext* context /*none*/, const char* color_name /*none*/, ::GdkRGBA* color /*none,out,ca*/);
GI_INLINE_DECL bool lookup_color (const gi::cstring_v color_name, Gdk::RGBA & color) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::RGBA> lookup_color (const gi::cstring_v color_name) noexcept;

// void gtk_style_context_remove_class (GtkStyleContext* context /*none*/, const char* class_name /*none*/);
// void gtk_style_context_remove_class (::GtkStyleContext* context /*none*/, const char* class_name /*none*/);
GI_INLINE_DECL void remove_class (const gi::cstring_v class_name) noexcept;

// void gtk_style_context_remove_provider (GtkStyleContext* context /*none*/, GtkStyleProvider* provider /*none*/);
// void gtk_style_context_remove_provider (::GtkStyleContext* context /*none*/, ::GtkStyleProvider* provider /*none*/);
GI_INLINE_DECL void remove_provider (Gtk::StyleProvider provider) noexcept;

// void gtk_style_context_restore (GtkStyleContext* context /*none*/);
// void gtk_style_context_restore (::GtkStyleContext* context /*none*/);
GI_INLINE_DECL void restore () noexcept;

// void gtk_style_context_save (GtkStyleContext* context /*none*/);
// void gtk_style_context_save (::GtkStyleContext* context /*none*/);
GI_INLINE_DECL void save () noexcept;

// void gtk_style_context_set_display (GtkStyleContext* context /*none*/, GdkDisplay* display /*none*/);
// void gtk_style_context_set_display (::GtkStyleContext* context /*none*/, ::GdkDisplay* display /*none*/);
GI_INLINE_DECL void set_display (Gdk::Display display) noexcept;

// void gtk_style_context_set_scale (GtkStyleContext* context /*none*/, int scale);
// void gtk_style_context_set_scale (::GtkStyleContext* context /*none*/, gint scale);
GI_INLINE_DECL void set_scale (gint scale) noexcept;

// void gtk_style_context_set_state (GtkStyleContext* context /*none*/, GtkStateFlags flags);
// void gtk_style_context_set_state (::GtkStyleContext* context /*none*/, ::GtkStateFlags flags);
GI_INLINE_DECL void set_state (Gtk::StateFlags flags) noexcept;

// char* /*full*/ gtk_style_context_to_string (GtkStyleContext* context /*none*/, GtkStyleContextPrintFlags flags);
// char* /*full*/ gtk_style_context_to_string (::GtkStyleContext* context /*none*/, ::GtkStyleContextPrintFlags flags);
GI_INLINE_DECL gi::cstring to_string (Gtk::StyleContextPrintFlags flags) noexcept;

gi::property_proxy<Gdk::Display, base::StyleContextBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::StyleContextBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::StyleContextBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::StyleContextBase> (*this, "display"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stylecontext_extra_def.hpp>)
#include <gtk/stylecontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stylecontext_extra.hpp>)
#include <gtk/stylecontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StyleContext : public GI_GTK_STYLECONTEXT_BASE
{ typedef GI_GTK_STYLECONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStyleContext>
{ typedef Gtk::StyleContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StyleContextClassDef
{
typedef StyleContextClassDef self;
public:
typedef Gtk::StyleContext instance_type;
typedef ::GtkStyleContextClass class_type;

using GI_MEMBER_CHECK_CONFLICT(changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~StyleContextClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void StyleContext::changed (GtkStyleContext* context /*none*/);
// void StyleContext::changed (::GtkStyleContext* context /*none*/);
virtual void changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class StyleContextClass: public detail::ClassTemplate<Gtk::impl::internal::StyleContextClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::StyleContextClassDef;
typedef StyleContextClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StyleContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void StyleContext::changed (GtkStyleContext* context /*none*/);
// void StyleContext::changed (::GtkStyleContext* context /*none*/);
GI_INLINE_DECL void changed_ () noexcept override;


};


struct StyleContextClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(StyleContextClass, changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using StyleContextImpl = detail::ObjectImpl<StyleContext, internal::StyleContextClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
