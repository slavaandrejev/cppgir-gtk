// AUTO-GENERATED

#ifndef _GI_GTK_VOLUMEBUTTON_HPP_
#define _GI_GTK_VOLUMEBUTTON_HPP_

#include "scalebutton.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class VolumeButton;

namespace base {


#define GI_GTK_VOLUMEBUTTON_BASE base::VolumeButtonBase
class VolumeButtonBase : public Gtk::ScaleButton
{
typedef Gtk::ScaleButton super_type;
public:
typedef ::GtkVolumeButton BaseObjectType;

VolumeButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_volume_button_get_type(); } 

// GtkWidget* /*none*/ gtk_volume_button_new ();
// ::GtkVolumeButton* /*none*/ gtk_volume_button_new ();
static GI_INLINE_DECL Gtk::VolumeButton new_ () noexcept;

gi::property_proxy<bool, base::VolumeButtonBase> property_use_symbolic()
{ return gi::property_proxy<bool, base::VolumeButtonBase> (*this, "use-symbolic"); }
const gi::property_proxy<bool, base::VolumeButtonBase> property_use_symbolic() const
{ return gi::property_proxy<bool, base::VolumeButtonBase> (*this, "use-symbolic"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/volumebutton_extra_def.hpp>)
#include <gtk/volumebutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/volumebutton_extra.hpp>)
#include <gtk/volumebutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class VolumeButton : public GI_GTK_VOLUMEBUTTON_BASE
{ typedef GI_GTK_VOLUMEBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkVolumeButton>
{ typedef Gtk::VolumeButton type; }; 

} // namespace repository

} // namespace gi

#endif
