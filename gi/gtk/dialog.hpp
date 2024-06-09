// AUTO-GENERATED

#ifndef _GI_GTK_DIALOG_HPP_
#define _GI_GTK_DIALOG_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Box;
class HeaderBar;
class Widget;
class Window;

class Dialog;

namespace base {


#define GI_GTK_DIALOG_BASE base::DialogBase
class DialogBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkDialog BaseObjectType;

DialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_dialog_get_type(); } 

// GtkWidget* /*none*/ gtk_dialog_new ();
// ::GtkDialog* /*none*/ gtk_dialog_new ();
static GI_INLINE_DECL Gtk::Dialog new_ () noexcept;

// GtkWidget* /*none*/ gtk_dialog_new_with_buttons (const char* title /*none,nullable*/, GtkWindow* parent /*none,nullable*/, GtkDialogFlags flags, const char* first_button_text /*none,nullable*/,  ..._ /*none*/);
// ::GtkDialog* /*none*/ gtk_dialog_new_with_buttons (const char* title /*none,nullable*/, ::GtkWindow* parent /*none,nullable*/, ::GtkDialogFlags flags, const char* first_button_text /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_dialog_add_action_widget (GtkDialog* dialog /*none*/, GtkWidget* child /*none*/, int response_id);
// void gtk_dialog_add_action_widget (::GtkDialog* dialog /*none*/, ::GtkWidget* child /*none*/, gint response_id);
GI_INLINE_DECL void add_action_widget (Gtk::Widget child, gint response_id) noexcept;

// GtkWidget* /*none*/ gtk_dialog_add_button (GtkDialog* dialog /*none*/, const char* button_text /*none*/, int response_id);
// ::GtkWidget* /*none*/ gtk_dialog_add_button (::GtkDialog* dialog /*none*/, const char* button_text /*none*/, gint response_id);
GI_INLINE_DECL Gtk::Widget add_button (const gi::cstring_v button_text, gint response_id) noexcept;

// void gtk_dialog_add_buttons (GtkDialog* dialog /*none*/, const char* first_button_text /*none*/,  ..._ /*none*/);
// void gtk_dialog_add_buttons (::GtkDialog* dialog /*none*/, const char* first_button_text /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* /*none*/ gtk_dialog_get_content_area (GtkDialog* dialog /*none*/);
// ::GtkBox* /*none*/ gtk_dialog_get_content_area (::GtkDialog* dialog /*none*/);
GI_INLINE_DECL Gtk::Box get_content_area () noexcept;

// GtkWidget* /*none*/ gtk_dialog_get_header_bar (GtkDialog* dialog /*none*/);
// ::GtkHeaderBar* /*none*/ gtk_dialog_get_header_bar (::GtkDialog* dialog /*none*/);
GI_INLINE_DECL Gtk::HeaderBar get_header_bar () noexcept;

// int gtk_dialog_get_response_for_widget (GtkDialog* dialog /*none*/, GtkWidget* widget /*none*/);
// gint gtk_dialog_get_response_for_widget (::GtkDialog* dialog /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_response_for_widget (Gtk::Widget widget) noexcept;

// GtkWidget* /*none,nullable*/ gtk_dialog_get_widget_for_response (GtkDialog* dialog /*none*/, int response_id);
// ::GtkWidget* /*none,nullable*/ gtk_dialog_get_widget_for_response (::GtkDialog* dialog /*none*/, gint response_id);
GI_INLINE_DECL Gtk::Widget get_widget_for_response (gint response_id) noexcept;

// void gtk_dialog_response (GtkDialog* dialog /*none*/, int response_id);
// void gtk_dialog_response (::GtkDialog* dialog /*none*/, gint response_id);
GI_INLINE_DECL void response (gint response_id) noexcept;

// void gtk_dialog_set_default_response (GtkDialog* dialog /*none*/, int response_id);
// void gtk_dialog_set_default_response (::GtkDialog* dialog /*none*/, gint response_id);
GI_INLINE_DECL void set_default_response (gint response_id) noexcept;

// void gtk_dialog_set_response_sensitive (GtkDialog* dialog /*none*/, int response_id, gboolean setting);
// void gtk_dialog_set_response_sensitive (::GtkDialog* dialog /*none*/, gint response_id, gboolean setting);
GI_INLINE_DECL void set_response_sensitive (gint response_id, gboolean setting) noexcept;

gi::property_proxy<gint, base::DialogBase> property_use_header_bar()
{ return gi::property_proxy<gint, base::DialogBase> (*this, "use-header-bar"); }
const gi::property_proxy<gint, base::DialogBase> property_use_header_bar() const
{ return gi::property_proxy<gint, base::DialogBase> (*this, "use-header-bar"); }

// (signal) void close ();
// (signal) void close ();
gi::signal_proxy<void(Gtk::Dialog)> signal_close()
{ return gi::signal_proxy<void(Gtk::Dialog)> (*this, "close"); }

// (signal) void response (gint response_id);
// (signal) void response (gint response_id);
gi::signal_proxy<void(Gtk::Dialog, gint response_id)> signal_response()
{ return gi::signal_proxy<void(Gtk::Dialog, gint response_id)> (*this, "response"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dialog_extra_def.hpp>)
#include <gtk/dialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dialog_extra.hpp>)
#include <gtk/dialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Dialog : public GI_GTK_DIALOG_BASE
{ typedef GI_GTK_DIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDialog>
{ typedef Gtk::Dialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class DialogClassDef
{
typedef DialogClassDef self;
public:
typedef Gtk::Dialog instance_type;
typedef ::GtkDialogClass class_type;

using GI_MEMBER_CHECK_CONFLICT(close) = self;
using GI_MEMBER_CHECK_CONFLICT(response) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Dialog::close (GtkDialog* dialog /*none*/);
// void Dialog::close (::GtkDialog* dialog /*none*/);
virtual void close_ () noexcept = 0;

// void Dialog::response (GtkDialog* dialog /*none*/, int response_id);
// void Dialog::response (::GtkDialog* dialog /*none*/, gint response_id);
virtual void response_ (gint response_id) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DialogClass: public detail::ClassTemplate<Gtk::impl::internal::DialogClassDef, Gtk::impl::internal::WindowClass>
{
friend class internal::DialogClassDef;
typedef DialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::DialogClassDef, Gtk::impl::internal::WindowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Dialog::close (GtkDialog* dialog /*none*/);
// void Dialog::close (::GtkDialog* dialog /*none*/);
GI_INLINE_DECL void close_ () noexcept override;

// void Dialog::response (GtkDialog* dialog /*none*/, int response_id);
// void Dialog::response (::GtkDialog* dialog /*none*/, gint response_id);
GI_INLINE_DECL void response_ (gint response_id) noexcept override;


};


struct DialogClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(DialogClass, close)
  GI_MEMBER_DEFINE(DialogClass, response)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, response)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DialogImpl = detail::ObjectImpl<Dialog, internal::DialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
