// AUTO-GENERATED

#ifndef _GI_GTK_PICTURE_HPP_
#define _GI_GTK_PICTURE_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Picture;

namespace base {


#define GI_GTK_PICTURE_BASE base::PictureBase
class PictureBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkPicture BaseObjectType;

PictureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_picture_get_type(); } 

// GtkWidget* /*none*/ gtk_picture_new ();
// ::GtkPicture* /*none*/ gtk_picture_new ();
static GI_INLINE_DECL Gtk::Picture new_ () noexcept;

// GtkWidget* /*none*/ gtk_picture_new_for_file (GFile* file /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_file (::GFile* file /*none,nullable*/);
static GI_INLINE_DECL Gtk::Picture new_for_file (Gio::File file) noexcept;
static GI_INLINE_DECL Gtk::Picture new_for_file () noexcept;

// GtkWidget* /*none*/ gtk_picture_new_for_filename (const char* filename /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_filename (const char* filename /*none,nullable*/);
static GI_INLINE_DECL Gtk::Picture new_for_filename (const gi::cstring_v filename) noexcept;
static GI_INLINE_DECL Gtk::Picture new_for_filename () noexcept;

// GtkWidget* /*none*/ gtk_picture_new_for_paintable (GdkPaintable* paintable /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_paintable (::GdkPaintable* paintable /*none,nullable*/);
static GI_INLINE_DECL Gtk::Picture new_for_paintable (Gdk::Paintable paintable) noexcept;
static GI_INLINE_DECL Gtk::Picture new_for_paintable () noexcept;

// GtkWidget* /*none*/ gtk_picture_new_for_pixbuf (GdkPixbuf* pixbuf /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_pixbuf (::GdkPixbuf* pixbuf /*none,nullable*/);
static GI_INLINE_DECL Gtk::Picture new_for_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;
static GI_INLINE_DECL Gtk::Picture new_for_pixbuf () noexcept;

// GtkWidget* /*none*/ gtk_picture_new_for_resource (const char* resource_path /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_resource (const char* resource_path /*none,nullable*/);
static GI_INLINE_DECL Gtk::Picture new_for_resource (const gi::cstring_v resource_path) noexcept;
static GI_INLINE_DECL Gtk::Picture new_for_resource () noexcept;

// const char* /*none,nullable*/ gtk_picture_get_alternative_text (GtkPicture* self /*none*/);
// const char* /*none,nullable*/ gtk_picture_get_alternative_text (::GtkPicture* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_alternative_text () noexcept;

// gboolean gtk_picture_get_can_shrink (GtkPicture* self /*none*/);
// gboolean gtk_picture_get_can_shrink (::GtkPicture* self /*none*/);
GI_INLINE_DECL bool get_can_shrink () noexcept;

// GtkContentFit gtk_picture_get_content_fit (GtkPicture* self /*none*/);
// ::GtkContentFit gtk_picture_get_content_fit (::GtkPicture* self /*none*/);
GI_INLINE_DECL Gtk::ContentFit get_content_fit () noexcept;

// GFile* /*none,nullable*/ gtk_picture_get_file (GtkPicture* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_picture_get_file (::GtkPicture* self /*none*/);
GI_INLINE_DECL Gio::File get_file () noexcept;

// gboolean gtk_picture_get_keep_aspect_ratio (GtkPicture* self /*none*/);
// gboolean gtk_picture_get_keep_aspect_ratio (::GtkPicture* self /*none*/);
GI_INLINE_DECL bool get_keep_aspect_ratio () noexcept;

// GdkPaintable* /*none,nullable*/ gtk_picture_get_paintable (GtkPicture* self /*none*/);
// ::GdkPaintable* /*none,nullable*/ gtk_picture_get_paintable (::GtkPicture* self /*none*/);
GI_INLINE_DECL Gdk::Paintable get_paintable () noexcept;

// void gtk_picture_set_alternative_text (GtkPicture* self /*none*/, const char* alternative_text /*none,nullable*/);
// void gtk_picture_set_alternative_text (::GtkPicture* self /*none*/, const char* alternative_text /*none,nullable*/);
GI_INLINE_DECL void set_alternative_text (const gi::cstring_v alternative_text) noexcept;
GI_INLINE_DECL void set_alternative_text () noexcept;

// void gtk_picture_set_can_shrink (GtkPicture* self /*none*/, gboolean can_shrink);
// void gtk_picture_set_can_shrink (::GtkPicture* self /*none*/, gboolean can_shrink);
GI_INLINE_DECL void set_can_shrink (gboolean can_shrink) noexcept;

// void gtk_picture_set_content_fit (GtkPicture* self /*none*/, GtkContentFit content_fit);
// void gtk_picture_set_content_fit (::GtkPicture* self /*none*/, ::GtkContentFit content_fit);
GI_INLINE_DECL void set_content_fit (Gtk::ContentFit content_fit) noexcept;

// void gtk_picture_set_file (GtkPicture* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_picture_set_file (::GtkPicture* self /*none*/, ::GFile* file /*none,nullable*/);
GI_INLINE_DECL void set_file (Gio::File file) noexcept;
GI_INLINE_DECL void set_file () noexcept;

// void gtk_picture_set_filename (GtkPicture* self /*none*/, const char* filename /*none,nullable*/);
// void gtk_picture_set_filename (::GtkPicture* self /*none*/, const char* filename /*none,nullable*/);
GI_INLINE_DECL void set_filename (const gi::cstring_v filename) noexcept;
GI_INLINE_DECL void set_filename () noexcept;

// void gtk_picture_set_keep_aspect_ratio (GtkPicture* self /*none*/, gboolean keep_aspect_ratio);
// void gtk_picture_set_keep_aspect_ratio (::GtkPicture* self /*none*/, gboolean keep_aspect_ratio);
GI_INLINE_DECL void set_keep_aspect_ratio (gboolean keep_aspect_ratio) noexcept;

// void gtk_picture_set_paintable (GtkPicture* self /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void gtk_picture_set_paintable (::GtkPicture* self /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
GI_INLINE_DECL void set_paintable (Gdk::Paintable paintable) noexcept;
GI_INLINE_DECL void set_paintable () noexcept;

// void gtk_picture_set_pixbuf (GtkPicture* self /*none*/, GdkPixbuf* pixbuf /*none,nullable*/);
// void gtk_picture_set_pixbuf (::GtkPicture* self /*none*/, ::GdkPixbuf* pixbuf /*none,nullable*/);
GI_INLINE_DECL void set_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;
GI_INLINE_DECL void set_pixbuf () noexcept;

// void gtk_picture_set_resource (GtkPicture* self /*none*/, const char* resource_path /*none,nullable*/);
// void gtk_picture_set_resource (::GtkPicture* self /*none*/, const char* resource_path /*none,nullable*/);
GI_INLINE_DECL void set_resource (const gi::cstring_v resource_path) noexcept;
GI_INLINE_DECL void set_resource () noexcept;

gi::property_proxy<gi::cstring, base::PictureBase> property_alternative_text()
{ return gi::property_proxy<gi::cstring, base::PictureBase> (*this, "alternative-text"); }
const gi::property_proxy<gi::cstring, base::PictureBase> property_alternative_text() const
{ return gi::property_proxy<gi::cstring, base::PictureBase> (*this, "alternative-text"); }

gi::property_proxy<bool, base::PictureBase> property_can_shrink()
{ return gi::property_proxy<bool, base::PictureBase> (*this, "can-shrink"); }
const gi::property_proxy<bool, base::PictureBase> property_can_shrink() const
{ return gi::property_proxy<bool, base::PictureBase> (*this, "can-shrink"); }

gi::property_proxy<Gtk::ContentFit, base::PictureBase> property_content_fit()
{ return gi::property_proxy<Gtk::ContentFit, base::PictureBase> (*this, "content-fit"); }
const gi::property_proxy<Gtk::ContentFit, base::PictureBase> property_content_fit() const
{ return gi::property_proxy<Gtk::ContentFit, base::PictureBase> (*this, "content-fit"); }

gi::property_proxy<Gio::File, base::PictureBase> property_file()
{ return gi::property_proxy<Gio::File, base::PictureBase> (*this, "file"); }
const gi::property_proxy<Gio::File, base::PictureBase> property_file() const
{ return gi::property_proxy<Gio::File, base::PictureBase> (*this, "file"); }

gi::property_proxy<bool, base::PictureBase> property_keep_aspect_ratio()
{ return gi::property_proxy<bool, base::PictureBase> (*this, "keep-aspect-ratio"); }
const gi::property_proxy<bool, base::PictureBase> property_keep_aspect_ratio() const
{ return gi::property_proxy<bool, base::PictureBase> (*this, "keep-aspect-ratio"); }

gi::property_proxy<Gdk::Paintable, base::PictureBase> property_paintable()
{ return gi::property_proxy<Gdk::Paintable, base::PictureBase> (*this, "paintable"); }
const gi::property_proxy<Gdk::Paintable, base::PictureBase> property_paintable() const
{ return gi::property_proxy<Gdk::Paintable, base::PictureBase> (*this, "paintable"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/picture_extra_def.hpp>)
#include <gtk/picture_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/picture_extra.hpp>)
#include <gtk/picture_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Picture : public GI_GTK_PICTURE_BASE
{ typedef GI_GTK_PICTURE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPicture>
{ typedef Gtk::Picture type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PictureClassDef
{
typedef PictureClassDef self;
public:
typedef Gtk::Picture instance_type;
typedef ::GtkPictureClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PictureClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PictureClass: public detail::ClassTemplate<Gtk::impl::internal::PictureClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::PictureClassDef;
typedef PictureClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PictureClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PictureClassDef::TypeInitData
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

using PictureImpl = detail::ObjectImpl<Picture, internal::PictureClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
