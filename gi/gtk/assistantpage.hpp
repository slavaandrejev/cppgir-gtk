// AUTO-GENERATED

#ifndef _GI_GTK_ASSISTANTPAGE_HPP_
#define _GI_GTK_ASSISTANTPAGE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class AssistantPage;

namespace base {


#define GI_GTK_ASSISTANTPAGE_BASE base::AssistantPageBase
class AssistantPageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkAssistantPage BaseObjectType;

AssistantPageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_assistant_page_get_type(); } 

// GtkWidget* /*none*/ gtk_assistant_page_get_child (GtkAssistantPage* page /*none*/);
// ::GtkWidget* /*none*/ gtk_assistant_page_get_child (::GtkAssistantPage* page /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

gi::property_proxy<Gtk::Widget, base::AssistantPageBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::AssistantPageBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::AssistantPageBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::AssistantPageBase> (*this, "child"); }

gi::property_proxy<bool, base::AssistantPageBase> property_complete()
{ return gi::property_proxy<bool, base::AssistantPageBase> (*this, "complete"); }
const gi::property_proxy<bool, base::AssistantPageBase> property_complete() const
{ return gi::property_proxy<bool, base::AssistantPageBase> (*this, "complete"); }

gi::property_proxy<Gtk::AssistantPageType, base::AssistantPageBase> property_page_type()
{ return gi::property_proxy<Gtk::AssistantPageType, base::AssistantPageBase> (*this, "page-type"); }
const gi::property_proxy<Gtk::AssistantPageType, base::AssistantPageBase> property_page_type() const
{ return gi::property_proxy<Gtk::AssistantPageType, base::AssistantPageBase> (*this, "page-type"); }

gi::property_proxy<gi::cstring, base::AssistantPageBase> property_title()
{ return gi::property_proxy<gi::cstring, base::AssistantPageBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::AssistantPageBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::AssistantPageBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/assistantpage_extra_def.hpp>)
#include <gtk/assistantpage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/assistantpage_extra.hpp>)
#include <gtk/assistantpage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AssistantPage : public GI_GTK_ASSISTANTPAGE_BASE
{ typedef GI_GTK_ASSISTANTPAGE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAssistantPage>
{ typedef Gtk::AssistantPage type; }; 

} // namespace repository

} // namespace gi

#endif
