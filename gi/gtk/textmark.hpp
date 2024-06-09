// AUTO-GENERATED

#ifndef _GI_GTK_TEXTMARK_HPP_
#define _GI_GTK_TEXTMARK_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TextBuffer;

class TextMark;

namespace base {


#define GI_GTK_TEXTMARK_BASE base::TextMarkBase
class TextMarkBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTextMark BaseObjectType;

TextMarkBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_mark_get_type(); } 

// GtkTextMark* /*full*/ gtk_text_mark_new (const char* name /*none,nullable*/, gboolean left_gravity);
// ::GtkTextMark* /*full*/ gtk_text_mark_new (const char* name /*none,nullable*/, gboolean left_gravity);
static GI_INLINE_DECL Gtk::TextMark new_ (const gi::cstring_v name, gboolean left_gravity) noexcept;
static GI_INLINE_DECL Gtk::TextMark new_ (gboolean left_gravity) noexcept;

// GtkTextBuffer* /*none,nullable*/ gtk_text_mark_get_buffer (GtkTextMark* mark /*none*/);
// ::GtkTextBuffer* /*none,nullable*/ gtk_text_mark_get_buffer (::GtkTextMark* mark /*none*/);
GI_INLINE_DECL Gtk::TextBuffer get_buffer () noexcept;

// gboolean gtk_text_mark_get_deleted (GtkTextMark* mark /*none*/);
// gboolean gtk_text_mark_get_deleted (::GtkTextMark* mark /*none*/);
GI_INLINE_DECL bool get_deleted () noexcept;

// gboolean gtk_text_mark_get_left_gravity (GtkTextMark* mark /*none*/);
// gboolean gtk_text_mark_get_left_gravity (::GtkTextMark* mark /*none*/);
GI_INLINE_DECL bool get_left_gravity () noexcept;

// const char* /*none,nullable*/ gtk_text_mark_get_name (GtkTextMark* mark /*none*/);
// const char* /*none,nullable*/ gtk_text_mark_get_name (::GtkTextMark* mark /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gboolean gtk_text_mark_get_visible (GtkTextMark* mark /*none*/);
// gboolean gtk_text_mark_get_visible (::GtkTextMark* mark /*none*/);
GI_INLINE_DECL bool get_visible () noexcept;

// void gtk_text_mark_set_visible (GtkTextMark* mark /*none*/, gboolean setting);
// void gtk_text_mark_set_visible (::GtkTextMark* mark /*none*/, gboolean setting);
GI_INLINE_DECL void set_visible (gboolean setting) noexcept;

gi::property_proxy<bool, base::TextMarkBase> property_left_gravity()
{ return gi::property_proxy<bool, base::TextMarkBase> (*this, "left-gravity"); }
const gi::property_proxy<bool, base::TextMarkBase> property_left_gravity() const
{ return gi::property_proxy<bool, base::TextMarkBase> (*this, "left-gravity"); }

gi::property_proxy<gi::cstring, base::TextMarkBase> property_name()
{ return gi::property_proxy<gi::cstring, base::TextMarkBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::TextMarkBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::TextMarkBase> (*this, "name"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textmark_extra_def.hpp>)
#include <gtk/textmark_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textmark_extra.hpp>)
#include <gtk/textmark_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextMark : public GI_GTK_TEXTMARK_BASE
{ typedef GI_GTK_TEXTMARK_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextMark>
{ typedef Gtk::TextMark type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextMarkClassDef
{
typedef TextMarkClassDef self;
public:
typedef Gtk::TextMark instance_type;
typedef ::GtkTextMarkClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TextMarkClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TextMarkClass: public detail::ClassTemplate<Gtk::impl::internal::TextMarkClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TextMarkClassDef;
typedef TextMarkClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextMarkClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct TextMarkClassDef::TypeInitData
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

using TextMarkImpl = detail::ObjectImpl<TextMark, internal::TextMarkClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
