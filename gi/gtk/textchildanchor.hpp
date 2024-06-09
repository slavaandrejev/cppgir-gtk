// AUTO-GENERATED

#ifndef _GI_GTK_TEXTCHILDANCHOR_HPP_
#define _GI_GTK_TEXTCHILDANCHOR_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class TextChildAnchor;

namespace base {


#define GI_GTK_TEXTCHILDANCHOR_BASE base::TextChildAnchorBase
class TextChildAnchorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTextChildAnchor BaseObjectType;

TextChildAnchorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_child_anchor_get_type(); } 

// GtkTextChildAnchor* /*full*/ gtk_text_child_anchor_new ();
// ::GtkTextChildAnchor* /*full*/ gtk_text_child_anchor_new ();
static GI_INLINE_DECL Gtk::TextChildAnchor new_ () noexcept;

// GtkTextChildAnchor* /*full*/ gtk_text_child_anchor_new_with_replacement (const char* character /*none*/);
// ::GtkTextChildAnchor* /*full*/ gtk_text_child_anchor_new_with_replacement (const char* character /*none*/);
static GI_INLINE_DECL Gtk::TextChildAnchor new_with_replacement (const gi::cstring_v character) noexcept;

// gboolean gtk_text_child_anchor_get_deleted (GtkTextChildAnchor* anchor /*none*/);
// gboolean gtk_text_child_anchor_get_deleted (::GtkTextChildAnchor* anchor /*none*/);
GI_INLINE_DECL bool get_deleted () noexcept;

// GtkWidget** /*container*/ gtk_text_child_anchor_get_widgets (GtkTextChildAnchor* anchor /*none*/, guint* out_len);
// ::GtkWidget** /*container*/ gtk_text_child_anchor_get_widgets (::GtkTextChildAnchor* anchor /*none*/, guint* out_len);
GI_INLINE_DECL gi::Collection<gi::DSpan, ::GtkWidget*, gi::transfer_container_t> get_widgets () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textchildanchor_extra_def.hpp>)
#include <gtk/textchildanchor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textchildanchor_extra.hpp>)
#include <gtk/textchildanchor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextChildAnchor : public GI_GTK_TEXTCHILDANCHOR_BASE
{ typedef GI_GTK_TEXTCHILDANCHOR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextChildAnchor>
{ typedef Gtk::TextChildAnchor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextChildAnchorClassDef
{
typedef TextChildAnchorClassDef self;
public:
typedef Gtk::TextChildAnchor instance_type;
typedef ::GtkTextChildAnchorClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TextChildAnchorClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TextChildAnchorClass: public detail::ClassTemplate<Gtk::impl::internal::TextChildAnchorClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TextChildAnchorClassDef;
typedef TextChildAnchorClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextChildAnchorClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct TextChildAnchorClassDef::TypeInitData
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

using TextChildAnchorImpl = detail::ObjectImpl<TextChildAnchor, internal::TextChildAnchorClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
