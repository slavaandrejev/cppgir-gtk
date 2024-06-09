// AUTO-GENERATED

#ifndef _GI_GTK_STACKPAGE_HPP_
#define _GI_GTK_STACKPAGE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Accessible;
class Widget;

class StackPage;

namespace base {


#define GI_GTK_STACKPAGE_BASE base::StackPageBase
class StackPageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkStackPage BaseObjectType;

StackPageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_stack_page_get_type(); } 

GI_INLINE_DECL Gtk::Accessible interface_ (gi::interface_tag<Gtk::Accessible>);

GI_INLINE_DECL operator Gtk::Accessible ();

// GtkWidget* /*none*/ gtk_stack_page_get_child (GtkStackPage* self /*none*/);
// ::GtkWidget* /*none*/ gtk_stack_page_get_child (::GtkStackPage* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// const char* /*none,nullable*/ gtk_stack_page_get_icon_name (GtkStackPage* self /*none*/);
// const char* /*none,nullable*/ gtk_stack_page_get_icon_name (::GtkStackPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// const char* /*none,nullable*/ gtk_stack_page_get_name (GtkStackPage* self /*none*/);
// const char* /*none,nullable*/ gtk_stack_page_get_name (::GtkStackPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gboolean gtk_stack_page_get_needs_attention (GtkStackPage* self /*none*/);
// gboolean gtk_stack_page_get_needs_attention (::GtkStackPage* self /*none*/);
GI_INLINE_DECL bool get_needs_attention () noexcept;

// const char* /*none,nullable*/ gtk_stack_page_get_title (GtkStackPage* self /*none*/);
// const char* /*none,nullable*/ gtk_stack_page_get_title (::GtkStackPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean gtk_stack_page_get_use_underline (GtkStackPage* self /*none*/);
// gboolean gtk_stack_page_get_use_underline (::GtkStackPage* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// gboolean gtk_stack_page_get_visible (GtkStackPage* self /*none*/);
// gboolean gtk_stack_page_get_visible (::GtkStackPage* self /*none*/);
GI_INLINE_DECL bool get_visible () noexcept;

// void gtk_stack_page_set_icon_name (GtkStackPage* self /*none*/, const char* setting /*none*/);
// void gtk_stack_page_set_icon_name (::GtkStackPage* self /*none*/, const char* setting /*none*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v setting) noexcept;

// void gtk_stack_page_set_name (GtkStackPage* self /*none*/, const char* setting /*none*/);
// void gtk_stack_page_set_name (::GtkStackPage* self /*none*/, const char* setting /*none*/);
GI_INLINE_DECL void set_name (const gi::cstring_v setting) noexcept;

// void gtk_stack_page_set_needs_attention (GtkStackPage* self /*none*/, gboolean setting);
// void gtk_stack_page_set_needs_attention (::GtkStackPage* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_needs_attention (gboolean setting) noexcept;

// void gtk_stack_page_set_title (GtkStackPage* self /*none*/, const char* setting /*none*/);
// void gtk_stack_page_set_title (::GtkStackPage* self /*none*/, const char* setting /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v setting) noexcept;

// void gtk_stack_page_set_use_underline (GtkStackPage* self /*none*/, gboolean setting);
// void gtk_stack_page_set_use_underline (::GtkStackPage* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_use_underline (gboolean setting) noexcept;

// void gtk_stack_page_set_visible (GtkStackPage* self /*none*/, gboolean visible);
// void gtk_stack_page_set_visible (::GtkStackPage* self /*none*/, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

gi::property_proxy<Gtk::Widget, base::StackPageBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::StackPageBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::StackPageBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::StackPageBase> (*this, "child"); }

gi::property_proxy<gi::cstring, base::StackPageBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::StackPageBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::StackPageBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::StackPageBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::StackPageBase> property_name()
{ return gi::property_proxy<gi::cstring, base::StackPageBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::StackPageBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::StackPageBase> (*this, "name"); }

gi::property_proxy<bool, base::StackPageBase> property_needs_attention()
{ return gi::property_proxy<bool, base::StackPageBase> (*this, "needs-attention"); }
const gi::property_proxy<bool, base::StackPageBase> property_needs_attention() const
{ return gi::property_proxy<bool, base::StackPageBase> (*this, "needs-attention"); }

gi::property_proxy<gi::cstring, base::StackPageBase> property_title()
{ return gi::property_proxy<gi::cstring, base::StackPageBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::StackPageBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::StackPageBase> (*this, "title"); }

gi::property_proxy<bool, base::StackPageBase> property_use_underline()
{ return gi::property_proxy<bool, base::StackPageBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::StackPageBase> property_use_underline() const
{ return gi::property_proxy<bool, base::StackPageBase> (*this, "use-underline"); }

gi::property_proxy<bool, base::StackPageBase> property_visible()
{ return gi::property_proxy<bool, base::StackPageBase> (*this, "visible"); }
const gi::property_proxy<bool, base::StackPageBase> property_visible() const
{ return gi::property_proxy<bool, base::StackPageBase> (*this, "visible"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stackpage_extra_def.hpp>)
#include <gtk/stackpage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stackpage_extra.hpp>)
#include <gtk/stackpage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StackPage : public GI_GTK_STACKPAGE_BASE
{ typedef GI_GTK_STACKPAGE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStackPage>
{ typedef Gtk::StackPage type; }; 

} // namespace repository

} // namespace gi

#endif
