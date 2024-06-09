// AUTO-GENERATED

#ifndef _GI_GTK_MEDIACONTROLS_HPP_
#define _GI_GTK_MEDIACONTROLS_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class MediaStream;

class MediaControls;

namespace base {


#define GI_GTK_MEDIACONTROLS_BASE base::MediaControlsBase
class MediaControlsBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkMediaControls BaseObjectType;

MediaControlsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_media_controls_get_type(); } 

// GtkWidget* /*none*/ gtk_media_controls_new (GtkMediaStream* stream /*none,nullable*/);
// ::GtkMediaControls* /*none*/ gtk_media_controls_new (::GtkMediaStream* stream /*none,nullable*/);
static GI_INLINE_DECL Gtk::MediaControls new_ (Gtk::MediaStream stream) noexcept;
static GI_INLINE_DECL Gtk::MediaControls new_ () noexcept;

// GtkMediaStream* /*none,nullable*/ gtk_media_controls_get_media_stream (GtkMediaControls* controls /*none*/);
// ::GtkMediaStream* /*none,nullable*/ gtk_media_controls_get_media_stream (::GtkMediaControls* controls /*none*/);
GI_INLINE_DECL Gtk::MediaStream get_media_stream () noexcept;

// void gtk_media_controls_set_media_stream (GtkMediaControls* controls /*none*/, GtkMediaStream* stream /*none,nullable*/);
// void gtk_media_controls_set_media_stream (::GtkMediaControls* controls /*none*/, ::GtkMediaStream* stream /*none,nullable*/);
GI_INLINE_DECL void set_media_stream (Gtk::MediaStream stream) noexcept;
GI_INLINE_DECL void set_media_stream () noexcept;

gi::property_proxy<Gtk::MediaStream, base::MediaControlsBase> property_media_stream()
{ return gi::property_proxy<Gtk::MediaStream, base::MediaControlsBase> (*this, "media-stream"); }
const gi::property_proxy<Gtk::MediaStream, base::MediaControlsBase> property_media_stream() const
{ return gi::property_proxy<Gtk::MediaStream, base::MediaControlsBase> (*this, "media-stream"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mediacontrols_extra_def.hpp>)
#include <gtk/mediacontrols_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mediacontrols_extra.hpp>)
#include <gtk/mediacontrols_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MediaControls : public GI_GTK_MEDIACONTROLS_BASE
{ typedef GI_GTK_MEDIACONTROLS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMediaControls>
{ typedef Gtk::MediaControls type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MediaControlsClassDef
{
typedef MediaControlsClassDef self;
public:
typedef Gtk::MediaControls instance_type;
typedef ::GtkMediaControlsClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MediaControlsClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MediaControlsClass: public detail::ClassTemplate<Gtk::impl::internal::MediaControlsClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::MediaControlsClassDef;
typedef MediaControlsClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MediaControlsClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct MediaControlsClassDef::TypeInitData
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

using MediaControlsImpl = detail::ObjectImpl<MediaControls, internal::MediaControlsClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
