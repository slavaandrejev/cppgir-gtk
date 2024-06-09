// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUT_HPP_
#define _GI_GTK_SHORTCUT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class ShortcutAction;
class ShortcutTrigger;

class Shortcut;

namespace base {


#define GI_GTK_SHORTCUT_BASE base::ShortcutBase
class ShortcutBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkShortcut BaseObjectType;

ShortcutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcut_get_type(); } 

// GtkShortcut* /*full*/ gtk_shortcut_new (GtkShortcutTrigger* trigger /*full,nullable*/, GtkShortcutAction* action /*full,nullable*/);
// ::GtkShortcut* /*full*/ gtk_shortcut_new (::GtkShortcutTrigger* trigger /*full,nullable*/, ::GtkShortcutAction* action /*full,nullable*/);
static GI_INLINE_DECL Gtk::Shortcut new_ (Gtk::ShortcutTrigger trigger, Gtk::ShortcutAction action) noexcept;
static GI_INLINE_DECL Gtk::Shortcut new_ () noexcept;

// GtkShortcut* /*full*/ gtk_shortcut_new_with_arguments (GtkShortcutTrigger* trigger /*full,nullable*/, GtkShortcutAction* action /*full,nullable*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// ::GtkShortcut* /*full*/ gtk_shortcut_new_with_arguments (::GtkShortcutTrigger* trigger /*full,nullable*/, ::GtkShortcutAction* action /*full,nullable*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GtkShortcutAction* /*none,nullable*/ gtk_shortcut_get_action (GtkShortcut* self /*none*/);
// ::GtkShortcutAction* /*none,nullable*/ gtk_shortcut_get_action (::GtkShortcut* self /*none*/);
GI_INLINE_DECL Gtk::ShortcutAction get_action () noexcept;

// GVariant* /*none,nullable*/ gtk_shortcut_get_arguments (GtkShortcut* self /*none*/);
// ::GVariant* /*none,nullable*/ gtk_shortcut_get_arguments (::GtkShortcut* self /*none*/);
GI_INLINE_DECL GLib::Variant get_arguments () noexcept;

// GtkShortcutTrigger* /*none,nullable*/ gtk_shortcut_get_trigger (GtkShortcut* self /*none*/);
// ::GtkShortcutTrigger* /*none,nullable*/ gtk_shortcut_get_trigger (::GtkShortcut* self /*none*/);
GI_INLINE_DECL Gtk::ShortcutTrigger get_trigger () noexcept;

// void gtk_shortcut_set_action (GtkShortcut* self /*none*/, GtkShortcutAction* action /*full,nullable*/);
// void gtk_shortcut_set_action (::GtkShortcut* self /*none*/, ::GtkShortcutAction* action /*full,nullable*/);
GI_INLINE_DECL void set_action (Gtk::ShortcutAction action) noexcept;
GI_INLINE_DECL void set_action () noexcept;

// void gtk_shortcut_set_arguments (GtkShortcut* self /*none*/, GVariant* args /*none,nullable*/);
// void gtk_shortcut_set_arguments (::GtkShortcut* self /*none*/, ::GVariant* args /*none,nullable*/);
GI_INLINE_DECL void set_arguments (GLib::Variant args) noexcept;
GI_INLINE_DECL void set_arguments () noexcept;

// void gtk_shortcut_set_trigger (GtkShortcut* self /*none*/, GtkShortcutTrigger* trigger /*full,nullable*/);
// void gtk_shortcut_set_trigger (::GtkShortcut* self /*none*/, ::GtkShortcutTrigger* trigger /*full,nullable*/);
GI_INLINE_DECL void set_trigger (Gtk::ShortcutTrigger trigger) noexcept;
GI_INLINE_DECL void set_trigger () noexcept;

gi::property_proxy<Gtk::ShortcutAction, base::ShortcutBase> property_action()
{ return gi::property_proxy<Gtk::ShortcutAction, base::ShortcutBase> (*this, "action"); }
const gi::property_proxy<Gtk::ShortcutAction, base::ShortcutBase> property_action() const
{ return gi::property_proxy<Gtk::ShortcutAction, base::ShortcutBase> (*this, "action"); }

gi::property_proxy<GLib::Variant, base::ShortcutBase> property_arguments()
{ return gi::property_proxy<GLib::Variant, base::ShortcutBase> (*this, "arguments"); }
const gi::property_proxy<GLib::Variant, base::ShortcutBase> property_arguments() const
{ return gi::property_proxy<GLib::Variant, base::ShortcutBase> (*this, "arguments"); }

gi::property_proxy<Gtk::ShortcutTrigger, base::ShortcutBase> property_trigger()
{ return gi::property_proxy<Gtk::ShortcutTrigger, base::ShortcutBase> (*this, "trigger"); }
const gi::property_proxy<Gtk::ShortcutTrigger, base::ShortcutBase> property_trigger() const
{ return gi::property_proxy<Gtk::ShortcutTrigger, base::ShortcutBase> (*this, "trigger"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcut_extra_def.hpp>)
#include <gtk/shortcut_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcut_extra.hpp>)
#include <gtk/shortcut_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Shortcut : public GI_GTK_SHORTCUT_BASE
{ typedef GI_GTK_SHORTCUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcut>
{ typedef Gtk::Shortcut type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ShortcutClassDef
{
typedef ShortcutClassDef self;
public:
typedef Gtk::Shortcut instance_type;
typedef ::GtkShortcutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ShortcutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ShortcutClass: public detail::ClassTemplate<Gtk::impl::internal::ShortcutClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ShortcutClassDef;
typedef ShortcutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ShortcutClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ShortcutClassDef::TypeInitData
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

using ShortcutImpl = detail::ObjectImpl<Shortcut, internal::ShortcutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
