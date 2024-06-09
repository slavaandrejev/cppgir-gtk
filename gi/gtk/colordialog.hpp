// AUTO-GENERATED

#ifndef _GI_GTK_COLORDIALOG_HPP_
#define _GI_GTK_COLORDIALOG_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class ColorDialog;

namespace base {


#define GI_GTK_COLORDIALOG_BASE base::ColorDialogBase
class ColorDialogBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkColorDialog BaseObjectType;

ColorDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_dialog_get_type(); } 

// GtkColorDialog* /*full*/ gtk_color_dialog_new ();
// ::GtkColorDialog* /*full*/ gtk_color_dialog_new ();
static GI_INLINE_DECL Gtk::ColorDialog new_ () noexcept;

// void gtk_color_dialog_choose_rgba (GtkColorDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, const GdkRGBA* initial_color /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_color_dialog_choose_rgba (::GtkColorDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, const ::GdkRGBA* initial_color /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void choose_rgba (Gtk::Window parent, const Gdk::RGBA_Ref initial_color, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void choose_rgba (Gio::AsyncReadyCallback callback) noexcept;

// GdkRGBA* /*full,nullable*/ gtk_color_dialog_choose_rgba_finish (GtkColorDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GdkRGBA* /*full,nullable*/ gtk_color_dialog_choose_rgba_finish (::GtkColorDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gdk::RGBA choose_rgba_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gdk::RGBA choose_rgba_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean gtk_color_dialog_get_modal (GtkColorDialog* self /*none*/);
// gboolean gtk_color_dialog_get_modal (::GtkColorDialog* self /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// const char* /*none*/ gtk_color_dialog_get_title (GtkColorDialog* self /*none*/);
// const char* /*none*/ gtk_color_dialog_get_title (::GtkColorDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean gtk_color_dialog_get_with_alpha (GtkColorDialog* self /*none*/);
// gboolean gtk_color_dialog_get_with_alpha (::GtkColorDialog* self /*none*/);
GI_INLINE_DECL bool get_with_alpha () noexcept;

// void gtk_color_dialog_set_modal (GtkColorDialog* self /*none*/, gboolean modal);
// void gtk_color_dialog_set_modal (::GtkColorDialog* self /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_color_dialog_set_title (GtkColorDialog* self /*none*/, const char* title /*none*/);
// void gtk_color_dialog_set_title (::GtkColorDialog* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void gtk_color_dialog_set_with_alpha (GtkColorDialog* self /*none*/, gboolean with_alpha);
// void gtk_color_dialog_set_with_alpha (::GtkColorDialog* self /*none*/, gboolean with_alpha);
GI_INLINE_DECL void set_with_alpha (gboolean with_alpha) noexcept;

gi::property_proxy<bool, base::ColorDialogBase> property_modal()
{ return gi::property_proxy<bool, base::ColorDialogBase> (*this, "modal"); }
const gi::property_proxy<bool, base::ColorDialogBase> property_modal() const
{ return gi::property_proxy<bool, base::ColorDialogBase> (*this, "modal"); }

gi::property_proxy<gi::cstring, base::ColorDialogBase> property_title()
{ return gi::property_proxy<gi::cstring, base::ColorDialogBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::ColorDialogBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::ColorDialogBase> (*this, "title"); }

gi::property_proxy<bool, base::ColorDialogBase> property_with_alpha()
{ return gi::property_proxy<bool, base::ColorDialogBase> (*this, "with-alpha"); }
const gi::property_proxy<bool, base::ColorDialogBase> property_with_alpha() const
{ return gi::property_proxy<bool, base::ColorDialogBase> (*this, "with-alpha"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colordialog_extra_def.hpp>)
#include <gtk/colordialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colordialog_extra.hpp>)
#include <gtk/colordialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorDialog : public GI_GTK_COLORDIALOG_BASE
{ typedef GI_GTK_COLORDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorDialog>
{ typedef Gtk::ColorDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColorDialogClassDef
{
typedef ColorDialogClassDef self;
public:
typedef Gtk::ColorDialog instance_type;
typedef ::GtkColorDialogClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ColorDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ColorDialogClass: public detail::ClassTemplate<Gtk::impl::internal::ColorDialogClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ColorDialogClassDef;
typedef ColorDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ColorDialogClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ColorDialogClassDef::TypeInitData
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

using ColorDialogImpl = detail::ObjectImpl<ColorDialog, internal::ColorDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
