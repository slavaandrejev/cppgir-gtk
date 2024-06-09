// AUTO-GENERATED

#ifndef _GI_GTK_FONTDIALOG_HPP_
#define _GI_GTK_FONTDIALOG_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Filter;
class Window;

class FontDialog;

namespace base {


#define GI_GTK_FONTDIALOG_BASE base::FontDialogBase
class FontDialogBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkFontDialog BaseObjectType;

FontDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_dialog_get_type(); } 

// GtkFontDialog* /*full*/ gtk_font_dialog_new ();
// ::GtkFontDialog* /*full*/ gtk_font_dialog_new ();
static GI_INLINE_DECL Gtk::FontDialog new_ () noexcept;

// void gtk_font_dialog_choose_face (GtkFontDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, PangoFontFace* initial_value /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_font_dialog_choose_face (::GtkFontDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::PangoFontFace* initial_value /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void choose_face (Gtk::Window parent, Pango::FontFace initial_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void choose_face (Gio::AsyncReadyCallback callback) noexcept;

// PangoFontFace* /*full,nullable*/ gtk_font_dialog_choose_face_finish (GtkFontDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::PangoFontFace* /*full,nullable*/ gtk_font_dialog_choose_face_finish (::GtkFontDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Pango::FontFace choose_face_finish (Gio::AsyncResult result);
GI_INLINE_DECL Pango::FontFace choose_face_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_font_dialog_choose_family (GtkFontDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, PangoFontFamily* initial_value /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_font_dialog_choose_family (::GtkFontDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::PangoFontFamily* initial_value /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void choose_family (Gtk::Window parent, Pango::FontFamily initial_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void choose_family (Gio::AsyncReadyCallback callback) noexcept;

// PangoFontFamily* /*full,nullable*/ gtk_font_dialog_choose_family_finish (GtkFontDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::PangoFontFamily* /*full,nullable*/ gtk_font_dialog_choose_family_finish (::GtkFontDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Pango::FontFamily choose_family_finish (Gio::AsyncResult result);
GI_INLINE_DECL Pango::FontFamily choose_family_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_font_dialog_choose_font (GtkFontDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, PangoFontDescription* initial_value /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_font_dialog_choose_font (::GtkFontDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::PangoFontDescription* initial_value /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void choose_font (Gtk::Window parent, Pango::FontDescription_Ref initial_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void choose_font (Gio::AsyncReadyCallback callback) noexcept;

// void gtk_font_dialog_choose_font_and_features (GtkFontDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, PangoFontDescription* initial_value /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_font_dialog_choose_font_and_features (::GtkFontDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::PangoFontDescription* initial_value /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void choose_font_and_features (Gtk::Window parent, Pango::FontDescription_Ref initial_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void choose_font_and_features (Gio::AsyncReadyCallback callback) noexcept;

// gboolean gtk_font_dialog_choose_font_and_features_finish (GtkFontDialog* self /*none*/, GAsyncResult* result /*none*/, PangoFontDescription** font_desc /*full,out*/, char** font_features /*full,out*/, PangoLanguage** language /*full,out*/, GError ** error);
// gboolean gtk_font_dialog_choose_font_and_features_finish (::GtkFontDialog* self /*none*/, ::GAsyncResult* result /*none*/, ::PangoFontDescription** font_desc /*full,out*/, char** font_features /*full,out*/, ::PangoLanguage** language /*full,out*/, GError ** error);
GI_INLINE_DECL bool choose_font_and_features_finish (Gio::AsyncResult result, Pango::FontDescription & font_desc, gi::cstring & font_features, Pango::Language & language);
GI_INLINE_DECL bool choose_font_and_features_finish (Gio::AsyncResult result, Pango::FontDescription & font_desc, gi::cstring & font_features, Pango::Language & language, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Pango::FontDescription, gi::cstring, Pango::Language> choose_font_and_features_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, Pango::FontDescription, gi::cstring, Pango::Language> choose_font_and_features_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// PangoFontDescription* /*full,nullable*/ gtk_font_dialog_choose_font_finish (GtkFontDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::PangoFontDescription* /*full,nullable*/ gtk_font_dialog_choose_font_finish (::GtkFontDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Pango::FontDescription choose_font_finish (Gio::AsyncResult result);
GI_INLINE_DECL Pango::FontDescription choose_font_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GtkFilter* /*none,nullable*/ gtk_font_dialog_get_filter (GtkFontDialog* self /*none*/);
// ::GtkFilter* /*none,nullable*/ gtk_font_dialog_get_filter (::GtkFontDialog* self /*none*/);
GI_INLINE_DECL Gtk::Filter get_filter () noexcept;

// PangoFontMap* /*none,nullable*/ gtk_font_dialog_get_font_map (GtkFontDialog* self /*none*/);
// ::PangoFontMap* /*none,nullable*/ gtk_font_dialog_get_font_map (::GtkFontDialog* self /*none*/);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// PangoLanguage* /*full,nullable*/ gtk_font_dialog_get_language (GtkFontDialog* self /*none*/);
// ::PangoLanguage* /*full,nullable*/ gtk_font_dialog_get_language (::GtkFontDialog* self /*none*/);
GI_INLINE_DECL Pango::Language get_language () noexcept;

// gboolean gtk_font_dialog_get_modal (GtkFontDialog* self /*none*/);
// gboolean gtk_font_dialog_get_modal (::GtkFontDialog* self /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// const char* /*none*/ gtk_font_dialog_get_title (GtkFontDialog* self /*none*/);
// const char* /*none*/ gtk_font_dialog_get_title (::GtkFontDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void gtk_font_dialog_set_filter (GtkFontDialog* self /*none*/, GtkFilter* filter /*none,nullable*/);
// void gtk_font_dialog_set_filter (::GtkFontDialog* self /*none*/, ::GtkFilter* filter /*none,nullable*/);
GI_INLINE_DECL void set_filter (Gtk::Filter filter) noexcept;
GI_INLINE_DECL void set_filter () noexcept;

// void gtk_font_dialog_set_font_map (GtkFontDialog* self /*none*/, PangoFontMap* fontmap /*none,nullable*/);
// void gtk_font_dialog_set_font_map (::GtkFontDialog* self /*none*/, ::PangoFontMap* fontmap /*none,nullable*/);
GI_INLINE_DECL void set_font_map (Pango::FontMap fontmap) noexcept;
GI_INLINE_DECL void set_font_map () noexcept;

// void gtk_font_dialog_set_language (GtkFontDialog* self /*none*/, PangoLanguage* language /*none*/);
// void gtk_font_dialog_set_language (::GtkFontDialog* self /*none*/, ::PangoLanguage* language /*none*/);
GI_INLINE_DECL void set_language (Pango::Language_Ref language) noexcept;

// void gtk_font_dialog_set_modal (GtkFontDialog* self /*none*/, gboolean modal);
// void gtk_font_dialog_set_modal (::GtkFontDialog* self /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_font_dialog_set_title (GtkFontDialog* self /*none*/, const char* title /*none*/);
// void gtk_font_dialog_set_title (::GtkFontDialog* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<Gtk::Filter, base::FontDialogBase> property_filter()
{ return gi::property_proxy<Gtk::Filter, base::FontDialogBase> (*this, "filter"); }
const gi::property_proxy<Gtk::Filter, base::FontDialogBase> property_filter() const
{ return gi::property_proxy<Gtk::Filter, base::FontDialogBase> (*this, "filter"); }

gi::property_proxy<Pango::FontMap, base::FontDialogBase> property_font_map()
{ return gi::property_proxy<Pango::FontMap, base::FontDialogBase> (*this, "font-map"); }
const gi::property_proxy<Pango::FontMap, base::FontDialogBase> property_font_map() const
{ return gi::property_proxy<Pango::FontMap, base::FontDialogBase> (*this, "font-map"); }

gi::property_proxy<Pango::Language, base::FontDialogBase> property_language()
{ return gi::property_proxy<Pango::Language, base::FontDialogBase> (*this, "language"); }
const gi::property_proxy<Pango::Language, base::FontDialogBase> property_language() const
{ return gi::property_proxy<Pango::Language, base::FontDialogBase> (*this, "language"); }

gi::property_proxy<bool, base::FontDialogBase> property_modal()
{ return gi::property_proxy<bool, base::FontDialogBase> (*this, "modal"); }
const gi::property_proxy<bool, base::FontDialogBase> property_modal() const
{ return gi::property_proxy<bool, base::FontDialogBase> (*this, "modal"); }

gi::property_proxy<gi::cstring, base::FontDialogBase> property_title()
{ return gi::property_proxy<gi::cstring, base::FontDialogBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::FontDialogBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::FontDialogBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontdialog_extra_def.hpp>)
#include <gtk/fontdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontdialog_extra.hpp>)
#include <gtk/fontdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontDialog : public GI_GTK_FONTDIALOG_BASE
{ typedef GI_GTK_FONTDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontDialog>
{ typedef Gtk::FontDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FontDialogClassDef
{
typedef FontDialogClassDef self;
public:
typedef Gtk::FontDialog instance_type;
typedef ::GtkFontDialogClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FontDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FontDialogClass: public detail::ClassTemplate<Gtk::impl::internal::FontDialogClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FontDialogClassDef;
typedef FontDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FontDialogClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct FontDialogClassDef::TypeInitData
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

using FontDialogImpl = detail::ObjectImpl<FontDialog, internal::FontDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
