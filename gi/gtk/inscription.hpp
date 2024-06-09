// AUTO-GENERATED

#ifndef _GI_GTK_INSCRIPTION_HPP_
#define _GI_GTK_INSCRIPTION_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Inscription;

namespace base {


#define GI_GTK_INSCRIPTION_BASE base::InscriptionBase
class InscriptionBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkInscription BaseObjectType;

InscriptionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_inscription_get_type(); } 

// GtkWidget* /*none*/ gtk_inscription_new (const char* text /*none,nullable*/);
// ::GtkInscription* /*none*/ gtk_inscription_new (const char* text /*none,nullable*/);
static GI_INLINE_DECL Gtk::Inscription new_ (const gi::cstring_v text) noexcept;
static GI_INLINE_DECL Gtk::Inscription new_ () noexcept;

// PangoAttrList* /*none,nullable*/ gtk_inscription_get_attributes (GtkInscription* self /*none*/);
// ::PangoAttrList* /*none,nullable*/ gtk_inscription_get_attributes (::GtkInscription* self /*none*/);
GI_INLINE_DECL Pango::AttrList_Ref get_attributes () noexcept;

// guint gtk_inscription_get_min_chars (GtkInscription* self /*none*/);
// guint gtk_inscription_get_min_chars (::GtkInscription* self /*none*/);
GI_INLINE_DECL guint get_min_chars () noexcept;

// guint gtk_inscription_get_min_lines (GtkInscription* self /*none*/);
// guint gtk_inscription_get_min_lines (::GtkInscription* self /*none*/);
GI_INLINE_DECL guint get_min_lines () noexcept;

// guint gtk_inscription_get_nat_chars (GtkInscription* self /*none*/);
// guint gtk_inscription_get_nat_chars (::GtkInscription* self /*none*/);
GI_INLINE_DECL guint get_nat_chars () noexcept;

// guint gtk_inscription_get_nat_lines (GtkInscription* self /*none*/);
// guint gtk_inscription_get_nat_lines (::GtkInscription* self /*none*/);
GI_INLINE_DECL guint get_nat_lines () noexcept;

// const char* /*none,nullable*/ gtk_inscription_get_text (GtkInscription* self /*none*/);
// const char* /*none,nullable*/ gtk_inscription_get_text (::GtkInscription* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_text () noexcept;

// GtkInscriptionOverflow gtk_inscription_get_text_overflow (GtkInscription* self /*none*/);
// ::GtkInscriptionOverflow gtk_inscription_get_text_overflow (::GtkInscription* self /*none*/);
GI_INLINE_DECL Gtk::InscriptionOverflow get_text_overflow () noexcept;

// PangoWrapMode gtk_inscription_get_wrap_mode (GtkInscription* self /*none*/);
// ::PangoWrapMode gtk_inscription_get_wrap_mode (::GtkInscription* self /*none*/);
GI_INLINE_DECL Pango::WrapMode get_wrap_mode () noexcept;

// float gtk_inscription_get_xalign (GtkInscription* self /*none*/);
// gfloat gtk_inscription_get_xalign (::GtkInscription* self /*none*/);
GI_INLINE_DECL gfloat get_xalign () noexcept;

// float gtk_inscription_get_yalign (GtkInscription* self /*none*/);
// gfloat gtk_inscription_get_yalign (::GtkInscription* self /*none*/);
GI_INLINE_DECL gfloat get_yalign () noexcept;

// void gtk_inscription_set_attributes (GtkInscription* self /*none*/, PangoAttrList* attrs /*none,nullable*/);
// void gtk_inscription_set_attributes (::GtkInscription* self /*none*/, ::PangoAttrList* attrs /*none,nullable*/);
GI_INLINE_DECL void set_attributes (Pango::AttrList_Ref attrs) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void gtk_inscription_set_markup (GtkInscription* self /*none*/, const char* markup /*none,nullable*/);
// void gtk_inscription_set_markup (::GtkInscription* self /*none*/, const char* markup /*none,nullable*/);
GI_INLINE_DECL void set_markup (const gi::cstring_v markup) noexcept;
GI_INLINE_DECL void set_markup () noexcept;

// void gtk_inscription_set_min_chars (GtkInscription* self /*none*/, guint min_chars);
// void gtk_inscription_set_min_chars (::GtkInscription* self /*none*/, guint min_chars);
GI_INLINE_DECL void set_min_chars (guint min_chars) noexcept;

// void gtk_inscription_set_min_lines (GtkInscription* self /*none*/, guint min_lines);
// void gtk_inscription_set_min_lines (::GtkInscription* self /*none*/, guint min_lines);
GI_INLINE_DECL void set_min_lines (guint min_lines) noexcept;

// void gtk_inscription_set_nat_chars (GtkInscription* self /*none*/, guint nat_chars);
// void gtk_inscription_set_nat_chars (::GtkInscription* self /*none*/, guint nat_chars);
GI_INLINE_DECL void set_nat_chars (guint nat_chars) noexcept;

// void gtk_inscription_set_nat_lines (GtkInscription* self /*none*/, guint nat_lines);
// void gtk_inscription_set_nat_lines (::GtkInscription* self /*none*/, guint nat_lines);
GI_INLINE_DECL void set_nat_lines (guint nat_lines) noexcept;

// void gtk_inscription_set_text (GtkInscription* self /*none*/, const char* text /*none,nullable*/);
// void gtk_inscription_set_text (::GtkInscription* self /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL void set_text (const gi::cstring_v text) noexcept;
GI_INLINE_DECL void set_text () noexcept;

// void gtk_inscription_set_text_overflow (GtkInscription* self /*none*/, GtkInscriptionOverflow overflow);
// void gtk_inscription_set_text_overflow (::GtkInscription* self /*none*/, ::GtkInscriptionOverflow overflow);
GI_INLINE_DECL void set_text_overflow (Gtk::InscriptionOverflow overflow) noexcept;

// void gtk_inscription_set_wrap_mode (GtkInscription* self /*none*/, PangoWrapMode wrap_mode);
// void gtk_inscription_set_wrap_mode (::GtkInscription* self /*none*/, ::PangoWrapMode wrap_mode);
GI_INLINE_DECL void set_wrap_mode (Pango::WrapMode wrap_mode) noexcept;

// void gtk_inscription_set_xalign (GtkInscription* self /*none*/, float xalign);
// void gtk_inscription_set_xalign (::GtkInscription* self /*none*/, gfloat xalign);
GI_INLINE_DECL void set_xalign (gfloat xalign) noexcept;

// void gtk_inscription_set_yalign (GtkInscription* self /*none*/, float yalign);
// void gtk_inscription_set_yalign (::GtkInscription* self /*none*/, gfloat yalign);
GI_INLINE_DECL void set_yalign (gfloat yalign) noexcept;

gi::property_proxy<Pango::AttrList, base::InscriptionBase> property_attributes()
{ return gi::property_proxy<Pango::AttrList, base::InscriptionBase> (*this, "attributes"); }
const gi::property_proxy<Pango::AttrList, base::InscriptionBase> property_attributes() const
{ return gi::property_proxy<Pango::AttrList, base::InscriptionBase> (*this, "attributes"); }

gi::property_proxy_write<gi::cstring, base::InscriptionBase> property_markup()
{ return gi::property_proxy_write<gi::cstring, base::InscriptionBase> (*this, "markup"); }

gi::property_proxy<guint, base::InscriptionBase> property_min_chars()
{ return gi::property_proxy<guint, base::InscriptionBase> (*this, "min-chars"); }
const gi::property_proxy<guint, base::InscriptionBase> property_min_chars() const
{ return gi::property_proxy<guint, base::InscriptionBase> (*this, "min-chars"); }

gi::property_proxy<guint, base::InscriptionBase> property_min_lines()
{ return gi::property_proxy<guint, base::InscriptionBase> (*this, "min-lines"); }
const gi::property_proxy<guint, base::InscriptionBase> property_min_lines() const
{ return gi::property_proxy<guint, base::InscriptionBase> (*this, "min-lines"); }

gi::property_proxy<guint, base::InscriptionBase> property_nat_chars()
{ return gi::property_proxy<guint, base::InscriptionBase> (*this, "nat-chars"); }
const gi::property_proxy<guint, base::InscriptionBase> property_nat_chars() const
{ return gi::property_proxy<guint, base::InscriptionBase> (*this, "nat-chars"); }

gi::property_proxy<guint, base::InscriptionBase> property_nat_lines()
{ return gi::property_proxy<guint, base::InscriptionBase> (*this, "nat-lines"); }
const gi::property_proxy<guint, base::InscriptionBase> property_nat_lines() const
{ return gi::property_proxy<guint, base::InscriptionBase> (*this, "nat-lines"); }

gi::property_proxy<gi::cstring, base::InscriptionBase> property_text()
{ return gi::property_proxy<gi::cstring, base::InscriptionBase> (*this, "text"); }
const gi::property_proxy<gi::cstring, base::InscriptionBase> property_text() const
{ return gi::property_proxy<gi::cstring, base::InscriptionBase> (*this, "text"); }

gi::property_proxy<Gtk::InscriptionOverflow, base::InscriptionBase> property_text_overflow()
{ return gi::property_proxy<Gtk::InscriptionOverflow, base::InscriptionBase> (*this, "text-overflow"); }
const gi::property_proxy<Gtk::InscriptionOverflow, base::InscriptionBase> property_text_overflow() const
{ return gi::property_proxy<Gtk::InscriptionOverflow, base::InscriptionBase> (*this, "text-overflow"); }

gi::property_proxy<Pango::WrapMode, base::InscriptionBase> property_wrap_mode()
{ return gi::property_proxy<Pango::WrapMode, base::InscriptionBase> (*this, "wrap-mode"); }
const gi::property_proxy<Pango::WrapMode, base::InscriptionBase> property_wrap_mode() const
{ return gi::property_proxy<Pango::WrapMode, base::InscriptionBase> (*this, "wrap-mode"); }

gi::property_proxy<gfloat, base::InscriptionBase> property_xalign()
{ return gi::property_proxy<gfloat, base::InscriptionBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::InscriptionBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::InscriptionBase> (*this, "xalign"); }

gi::property_proxy<gfloat, base::InscriptionBase> property_yalign()
{ return gi::property_proxy<gfloat, base::InscriptionBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::InscriptionBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::InscriptionBase> (*this, "yalign"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/inscription_extra_def.hpp>)
#include <gtk/inscription_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/inscription_extra.hpp>)
#include <gtk/inscription_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Inscription : public GI_GTK_INSCRIPTION_BASE
{ typedef GI_GTK_INSCRIPTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkInscription>
{ typedef Gtk::Inscription type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class InscriptionClassDef
{
typedef InscriptionClassDef self;
public:
typedef Gtk::Inscription instance_type;
typedef ::GtkInscriptionClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~InscriptionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class InscriptionClass: public detail::ClassTemplate<Gtk::impl::internal::InscriptionClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::InscriptionClassDef;
typedef InscriptionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::InscriptionClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct InscriptionClassDef::TypeInitData
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

using InscriptionImpl = detail::ObjectImpl<Inscription, internal::InscriptionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
