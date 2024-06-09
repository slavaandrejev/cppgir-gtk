// AUTO-GENERATED

#ifndef _GI_GTK_ALERTDIALOG_HPP_
#define _GI_GTK_ALERTDIALOG_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class AlertDialog;

namespace base {


#define GI_GTK_ALERTDIALOG_BASE base::AlertDialogBase
class AlertDialogBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkAlertDialog BaseObjectType;

AlertDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_alert_dialog_get_type(); } 

// GtkAlertDialog* /*full*/ gtk_alert_dialog_new (const char* format /*none*/,  ..._ /*none*/);
// ::GtkAlertDialog* /*full*/ gtk_alert_dialog_new (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_alert_dialog_choose (GtkAlertDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_alert_dialog_choose (::GtkAlertDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void choose (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void choose (Gio::AsyncReadyCallback callback) noexcept;

// int gtk_alert_dialog_choose_finish (GtkAlertDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gint gtk_alert_dialog_choose_finish (::GtkAlertDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gint choose_finish (Gio::AsyncResult result);
GI_INLINE_DECL gint choose_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// const char* const* /*none,nullable*/ gtk_alert_dialog_get_buttons (GtkAlertDialog* self /*none*/);
// const char** /*none,nullable*/ gtk_alert_dialog_get_buttons (::GtkAlertDialog* self /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_buttons () noexcept;

// int gtk_alert_dialog_get_cancel_button (GtkAlertDialog* self /*none*/);
// gint gtk_alert_dialog_get_cancel_button (::GtkAlertDialog* self /*none*/);
GI_INLINE_DECL gint get_cancel_button () noexcept;

// int gtk_alert_dialog_get_default_button (GtkAlertDialog* self /*none*/);
// gint gtk_alert_dialog_get_default_button (::GtkAlertDialog* self /*none*/);
GI_INLINE_DECL gint get_default_button () noexcept;

// const char* /*none*/ gtk_alert_dialog_get_detail (GtkAlertDialog* self /*none*/);
// const char* /*none*/ gtk_alert_dialog_get_detail (::GtkAlertDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_detail () noexcept;

// const char* /*none*/ gtk_alert_dialog_get_message (GtkAlertDialog* self /*none*/);
// const char* /*none*/ gtk_alert_dialog_get_message (::GtkAlertDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_message () noexcept;

// gboolean gtk_alert_dialog_get_modal (GtkAlertDialog* self /*none*/);
// gboolean gtk_alert_dialog_get_modal (::GtkAlertDialog* self /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// void gtk_alert_dialog_set_buttons (GtkAlertDialog* self /*none*/, const char* const* labels /*none*/);
// void gtk_alert_dialog_set_buttons (::GtkAlertDialog* self /*none*/, const char** labels /*none*/);
GI_INLINE_DECL void set_buttons (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> labels) noexcept;

// void gtk_alert_dialog_set_cancel_button (GtkAlertDialog* self /*none*/, int button);
// void gtk_alert_dialog_set_cancel_button (::GtkAlertDialog* self /*none*/, gint button);
GI_INLINE_DECL void set_cancel_button (gint button) noexcept;

// void gtk_alert_dialog_set_default_button (GtkAlertDialog* self /*none*/, int button);
// void gtk_alert_dialog_set_default_button (::GtkAlertDialog* self /*none*/, gint button);
GI_INLINE_DECL void set_default_button (gint button) noexcept;

// void gtk_alert_dialog_set_detail (GtkAlertDialog* self /*none*/, const char* detail /*none*/);
// void gtk_alert_dialog_set_detail (::GtkAlertDialog* self /*none*/, const char* detail /*none*/);
GI_INLINE_DECL void set_detail (const gi::cstring_v detail) noexcept;

// void gtk_alert_dialog_set_message (GtkAlertDialog* self /*none*/, const char* message /*none*/);
// void gtk_alert_dialog_set_message (::GtkAlertDialog* self /*none*/, const char* message /*none*/);
GI_INLINE_DECL void set_message (const gi::cstring_v message) noexcept;

// void gtk_alert_dialog_set_modal (GtkAlertDialog* self /*none*/, gboolean modal);
// void gtk_alert_dialog_set_modal (::GtkAlertDialog* self /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_alert_dialog_show (GtkAlertDialog* self /*none*/, GtkWindow* parent /*none,nullable*/);
// void gtk_alert_dialog_show (::GtkAlertDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/);
GI_INLINE_DECL void show (Gtk::Window parent) noexcept;
GI_INLINE_DECL void show () noexcept;

gi::property_proxy<gint, base::AlertDialogBase> property_cancel_button()
{ return gi::property_proxy<gint, base::AlertDialogBase> (*this, "cancel-button"); }
const gi::property_proxy<gint, base::AlertDialogBase> property_cancel_button() const
{ return gi::property_proxy<gint, base::AlertDialogBase> (*this, "cancel-button"); }

gi::property_proxy<gint, base::AlertDialogBase> property_default_button()
{ return gi::property_proxy<gint, base::AlertDialogBase> (*this, "default-button"); }
const gi::property_proxy<gint, base::AlertDialogBase> property_default_button() const
{ return gi::property_proxy<gint, base::AlertDialogBase> (*this, "default-button"); }

gi::property_proxy<gi::cstring, base::AlertDialogBase> property_detail()
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "detail"); }
const gi::property_proxy<gi::cstring, base::AlertDialogBase> property_detail() const
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "detail"); }

gi::property_proxy<gi::cstring, base::AlertDialogBase> property_message()
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "message"); }
const gi::property_proxy<gi::cstring, base::AlertDialogBase> property_message() const
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "message"); }

gi::property_proxy<bool, base::AlertDialogBase> property_modal()
{ return gi::property_proxy<bool, base::AlertDialogBase> (*this, "modal"); }
const gi::property_proxy<bool, base::AlertDialogBase> property_modal() const
{ return gi::property_proxy<bool, base::AlertDialogBase> (*this, "modal"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/alertdialog_extra_def.hpp>)
#include <gtk/alertdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/alertdialog_extra.hpp>)
#include <gtk/alertdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AlertDialog : public GI_GTK_ALERTDIALOG_BASE
{ typedef GI_GTK_ALERTDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAlertDialog>
{ typedef Gtk::AlertDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AlertDialogClassDef
{
typedef AlertDialogClassDef self;
public:
typedef Gtk::AlertDialog instance_type;
typedef ::GtkAlertDialogClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~AlertDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AlertDialogClass: public detail::ClassTemplate<Gtk::impl::internal::AlertDialogClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::AlertDialogClassDef;
typedef AlertDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AlertDialogClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct AlertDialogClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using AlertDialogImpl = detail::ObjectImpl<AlertDialog, internal::AlertDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
