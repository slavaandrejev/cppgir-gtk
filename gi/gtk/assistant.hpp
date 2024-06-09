// AUTO-GENERATED

#ifndef _GI_GTK_ASSISTANT_HPP_
#define _GI_GTK_ASSISTANT_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AssistantPage;
class Widget;

class Assistant;

namespace base {


#define GI_GTK_ASSISTANT_BASE base::AssistantBase
class AssistantBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkAssistant BaseObjectType;

AssistantBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_assistant_get_type(); } 

// GtkWidget* /*none*/ gtk_assistant_new ();
// ::GtkAssistant* /*none*/ gtk_assistant_new ();
static GI_INLINE_DECL Gtk::Assistant new_ () noexcept;

// void gtk_assistant_add_action_widget (GtkAssistant* assistant /*none*/, GtkWidget* child /*none*/);
// void gtk_assistant_add_action_widget (::GtkAssistant* assistant /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void add_action_widget (Gtk::Widget child) noexcept;

// int gtk_assistant_append_page (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// gint gtk_assistant_append_page (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
GI_INLINE_DECL gint append_page (Gtk::Widget page) noexcept;

// void gtk_assistant_commit (GtkAssistant* assistant /*none*/);
// void gtk_assistant_commit (::GtkAssistant* assistant /*none*/);
GI_INLINE_DECL void commit () noexcept;

// int gtk_assistant_get_current_page (GtkAssistant* assistant /*none*/);
// gint gtk_assistant_get_current_page (::GtkAssistant* assistant /*none*/);
GI_INLINE_DECL gint get_current_page () noexcept;

// int gtk_assistant_get_n_pages (GtkAssistant* assistant /*none*/);
// gint gtk_assistant_get_n_pages (::GtkAssistant* assistant /*none*/);
GI_INLINE_DECL gint get_n_pages () noexcept;

// GtkWidget* /*none,nullable*/ gtk_assistant_get_nth_page (GtkAssistant* assistant /*none*/, int page_num);
// ::GtkWidget* /*none,nullable*/ gtk_assistant_get_nth_page (::GtkAssistant* assistant /*none*/, gint page_num);
GI_INLINE_DECL Gtk::Widget get_nth_page (gint page_num) noexcept;

// GtkAssistantPage* /*none*/ gtk_assistant_get_page (GtkAssistant* assistant /*none*/, GtkWidget* child /*none*/);
// ::GtkAssistantPage* /*none*/ gtk_assistant_get_page (::GtkAssistant* assistant /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Gtk::AssistantPage get_page (Gtk::Widget child) noexcept;

// gboolean gtk_assistant_get_page_complete (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// gboolean gtk_assistant_get_page_complete (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
GI_INLINE_DECL bool get_page_complete (Gtk::Widget page) noexcept;

// const char* /*none*/ gtk_assistant_get_page_title (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// const char* /*none*/ gtk_assistant_get_page_title (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
GI_INLINE_DECL gi::cstring_v get_page_title (Gtk::Widget page) noexcept;

// GtkAssistantPageType gtk_assistant_get_page_type (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// ::GtkAssistantPageType gtk_assistant_get_page_type (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
GI_INLINE_DECL Gtk::AssistantPageType get_page_type (Gtk::Widget page) noexcept;

// GListModel* /*full*/ gtk_assistant_get_pages (GtkAssistant* assistant /*none*/);
// ::GListModel* /*full*/ gtk_assistant_get_pages (::GtkAssistant* assistant /*none*/);
GI_INLINE_DECL Gio::ListModel get_pages () noexcept;

// int gtk_assistant_insert_page (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/, int position);
// gint gtk_assistant_insert_page (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/, gint position);
GI_INLINE_DECL gint insert_page (Gtk::Widget page, gint position) noexcept;

// void gtk_assistant_next_page (GtkAssistant* assistant /*none*/);
// void gtk_assistant_next_page (::GtkAssistant* assistant /*none*/);
GI_INLINE_DECL void next_page () noexcept;

// int gtk_assistant_prepend_page (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// gint gtk_assistant_prepend_page (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
GI_INLINE_DECL gint prepend_page (Gtk::Widget page) noexcept;

// void gtk_assistant_previous_page (GtkAssistant* assistant /*none*/);
// void gtk_assistant_previous_page (::GtkAssistant* assistant /*none*/);
GI_INLINE_DECL void previous_page () noexcept;

// void gtk_assistant_remove_action_widget (GtkAssistant* assistant /*none*/, GtkWidget* child /*none*/);
// void gtk_assistant_remove_action_widget (::GtkAssistant* assistant /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove_action_widget (Gtk::Widget child) noexcept;

// void gtk_assistant_remove_page (GtkAssistant* assistant /*none*/, int page_num);
// void gtk_assistant_remove_page (::GtkAssistant* assistant /*none*/, gint page_num);
GI_INLINE_DECL void remove_page (gint page_num) noexcept;

// void gtk_assistant_set_current_page (GtkAssistant* assistant /*none*/, int page_num);
// void gtk_assistant_set_current_page (::GtkAssistant* assistant /*none*/, gint page_num);
GI_INLINE_DECL void set_current_page (gint page_num) noexcept;

// void gtk_assistant_set_forward_page_func (GtkAssistant* assistant /*none*/, GtkAssistantPageFunc page_func /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none*/);
// void gtk_assistant_set_forward_page_func (::GtkAssistant* assistant /*none*/, Gtk::AssistantPageFunc::cfunction_type page_func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_forward_page_func (Gtk::AssistantPageFunc page_func) noexcept;

// void gtk_assistant_set_page_complete (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/, gboolean complete);
// void gtk_assistant_set_page_complete (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/, gboolean complete);
GI_INLINE_DECL void set_page_complete (Gtk::Widget page, gboolean complete) noexcept;

// void gtk_assistant_set_page_title (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/, const char* title /*none*/);
// void gtk_assistant_set_page_title (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_page_title (Gtk::Widget page, const gi::cstring_v title) noexcept;

// void gtk_assistant_set_page_type (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/, GtkAssistantPageType type);
// void gtk_assistant_set_page_type (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/, ::GtkAssistantPageType type);
GI_INLINE_DECL void set_page_type (Gtk::Widget page, Gtk::AssistantPageType type) noexcept;

// void gtk_assistant_update_buttons_state (GtkAssistant* assistant /*none*/);
// void gtk_assistant_update_buttons_state (::GtkAssistant* assistant /*none*/);
GI_INLINE_DECL void update_buttons_state () noexcept;

gi::property_proxy<Gio::ListModel, base::AssistantBase> property_pages()
{ return gi::property_proxy<Gio::ListModel, base::AssistantBase> (*this, "pages"); }
const gi::property_proxy<Gio::ListModel, base::AssistantBase> property_pages() const
{ return gi::property_proxy<Gio::ListModel, base::AssistantBase> (*this, "pages"); }

gi::property_proxy<gint, base::AssistantBase> property_use_header_bar()
{ return gi::property_proxy<gint, base::AssistantBase> (*this, "use-header-bar"); }
const gi::property_proxy<gint, base::AssistantBase> property_use_header_bar() const
{ return gi::property_proxy<gint, base::AssistantBase> (*this, "use-header-bar"); }

// (signal) void apply ();
// (signal) void apply ();
gi::signal_proxy<void(Gtk::Assistant)> signal_apply()
{ return gi::signal_proxy<void(Gtk::Assistant)> (*this, "apply"); }

// (signal) void cancel ();
// (signal) void cancel ();
gi::signal_proxy<void(Gtk::Assistant)> signal_cancel()
{ return gi::signal_proxy<void(Gtk::Assistant)> (*this, "cancel"); }

// (signal) void close ();
// (signal) void close ();
gi::signal_proxy<void(Gtk::Assistant)> signal_close()
{ return gi::signal_proxy<void(Gtk::Assistant)> (*this, "close"); }

// (signal) void escape ();
// (signal) void escape ();
gi::signal_proxy<void(Gtk::Assistant)> signal_escape()
{ return gi::signal_proxy<void(Gtk::Assistant)> (*this, "escape"); }

// (signal) void prepare ( page /*none*/);
// (signal) void prepare (::GtkWidget* page /*none*/);
gi::signal_proxy<void(Gtk::Assistant, Gtk::Widget page)> signal_prepare()
{ return gi::signal_proxy<void(Gtk::Assistant, Gtk::Widget page)> (*this, "prepare"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/assistant_extra_def.hpp>)
#include <gtk/assistant_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/assistant_extra.hpp>)
#include <gtk/assistant_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Assistant : public GI_GTK_ASSISTANT_BASE
{ typedef GI_GTK_ASSISTANT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAssistant>
{ typedef Gtk::Assistant type; }; 

} // namespace repository

} // namespace gi

#endif
