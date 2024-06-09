// AUTO-GENERATED

#ifndef _GI_GTK_EDITABLE_HPP_
#define _GI_GTK_EDITABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Editable;

namespace base {


#define GI_GTK_EDITABLE_BASE base::EditableBase
class EditableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkEditable BaseObjectType;

EditableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_editable_get_type(); } 

// gboolean gtk_editable_delegate_get_property (GObject* object /*none*/, guint prop_id, GValue* value /*none*/, GParamSpec* pspec /*none*/);
// gboolean gtk_editable_delegate_get_property (::GObject* object /*none*/, guint prop_id, ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
static GI_INLINE_DECL bool delegate_get_property (GObject::Object object, guint prop_id, GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept;

// gboolean gtk_editable_delegate_set_property (GObject* object /*none*/, guint prop_id, const GValue* value /*none*/, GParamSpec* pspec /*none*/);
// gboolean gtk_editable_delegate_set_property (::GObject* object /*none*/, guint prop_id, const ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
static GI_INLINE_DECL bool delegate_set_property (GObject::Object object, guint prop_id, const GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept;

// guint gtk_editable_install_properties (GObjectClass* object_class /*none*/, guint first_prop);
// guint gtk_editable_install_properties (::GObjectClass object_class /*none*/, guint first_prop);
// SKIP; object_class type GObject::ObjectClass not supported

// gboolean gtk_editable_delegate_get_accessible_platform_state (GtkEditable* editable /*none*/, GtkAccessiblePlatformState state);
// gboolean gtk_editable_delegate_get_accessible_platform_state (::GtkEditable* editable /*none*/, ::GtkAccessiblePlatformState state);
GI_INLINE_DECL bool delegate_get_accessible_platform_state (Gtk::AccessiblePlatformState state) noexcept;

// void gtk_editable_delete_selection (GtkEditable* editable /*none*/);
// void gtk_editable_delete_selection (::GtkEditable* editable /*none*/);
GI_INLINE_DECL void delete_selection () noexcept;

// void gtk_editable_delete_text (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void gtk_editable_delete_text (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
GI_INLINE_DECL void delete_text (gint start_pos, gint end_pos) noexcept;

// void gtk_editable_finish_delegate (GtkEditable* editable /*none*/);
// void gtk_editable_finish_delegate (::GtkEditable* editable /*none*/);
GI_INLINE_DECL void finish_delegate () noexcept;

// float gtk_editable_get_alignment (GtkEditable* editable /*none*/);
// gfloat gtk_editable_get_alignment (::GtkEditable* editable /*none*/);
GI_INLINE_DECL gfloat get_alignment () noexcept;

// char* /*full*/ gtk_editable_get_chars (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// char* /*full*/ gtk_editable_get_chars (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
GI_INLINE_DECL gi::cstring get_chars (gint start_pos, gint end_pos) noexcept;

// GtkEditable* /*none,nullable*/ gtk_editable_get_delegate (GtkEditable* editable /*none*/);
// ::GtkEditable* /*none,nullable*/ gtk_editable_get_delegate (::GtkEditable* editable /*none*/);
GI_INLINE_DECL Gtk::Editable get_delegate () noexcept;

// gboolean gtk_editable_get_editable (GtkEditable* editable /*none*/);
// gboolean gtk_editable_get_editable (::GtkEditable* editable /*none*/);
GI_INLINE_DECL bool get_editable () noexcept;

// gboolean gtk_editable_get_enable_undo (GtkEditable* editable /*none*/);
// gboolean gtk_editable_get_enable_undo (::GtkEditable* editable /*none*/);
GI_INLINE_DECL bool get_enable_undo () noexcept;

// int gtk_editable_get_max_width_chars (GtkEditable* editable /*none*/);
// gint gtk_editable_get_max_width_chars (::GtkEditable* editable /*none*/);
GI_INLINE_DECL gint get_max_width_chars () noexcept;

// int gtk_editable_get_position (GtkEditable* editable /*none*/);
// gint gtk_editable_get_position (::GtkEditable* editable /*none*/);
GI_INLINE_DECL gint get_position () noexcept;

// gboolean gtk_editable_get_selection_bounds (GtkEditable* editable /*none*/, int* start_pos, int* end_pos);
// gboolean gtk_editable_get_selection_bounds (::GtkEditable* editable /*none*/, gint* start_pos, gint* end_pos);
GI_INLINE_DECL bool get_selection_bounds (gint * start_pos, gint * end_pos) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> get_selection_bounds () noexcept;

// const char* /*none*/ gtk_editable_get_text (GtkEditable* editable /*none*/);
// const char* /*none*/ gtk_editable_get_text (::GtkEditable* editable /*none*/);
GI_INLINE_DECL gi::cstring_v get_text () noexcept;

// int gtk_editable_get_width_chars (GtkEditable* editable /*none*/);
// gint gtk_editable_get_width_chars (::GtkEditable* editable /*none*/);
GI_INLINE_DECL gint get_width_chars () noexcept;

// void gtk_editable_init_delegate (GtkEditable* editable /*none*/);
// void gtk_editable_init_delegate (::GtkEditable* editable /*none*/);
GI_INLINE_DECL void init_delegate () noexcept;

// void gtk_editable_insert_text (GtkEditable* editable /*none*/, const char* text /*none*/, int length, int* position);
// void gtk_editable_insert_text (::GtkEditable* editable /*none*/, const char* text /*none*/, gint length, gint* position);
GI_INLINE_DECL void insert_text (const gi::cstring_v text, gint length, gint & position) noexcept;

// void gtk_editable_select_region (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void gtk_editable_select_region (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
GI_INLINE_DECL void select_region (gint start_pos, gint end_pos) noexcept;

// void gtk_editable_set_alignment (GtkEditable* editable /*none*/, float xalign);
// void gtk_editable_set_alignment (::GtkEditable* editable /*none*/, gfloat xalign);
GI_INLINE_DECL void set_alignment (gfloat xalign) noexcept;

// void gtk_editable_set_editable (GtkEditable* editable /*none*/, gboolean is_editable);
// void gtk_editable_set_editable (::GtkEditable* editable /*none*/, gboolean is_editable);
GI_INLINE_DECL void set_editable (gboolean is_editable) noexcept;

// void gtk_editable_set_enable_undo (GtkEditable* editable /*none*/, gboolean enable_undo);
// void gtk_editable_set_enable_undo (::GtkEditable* editable /*none*/, gboolean enable_undo);
GI_INLINE_DECL void set_enable_undo (gboolean enable_undo) noexcept;

// void gtk_editable_set_max_width_chars (GtkEditable* editable /*none*/, int n_chars);
// void gtk_editable_set_max_width_chars (::GtkEditable* editable /*none*/, gint n_chars);
GI_INLINE_DECL void set_max_width_chars (gint n_chars) noexcept;

// void gtk_editable_set_position (GtkEditable* editable /*none*/, int position);
// void gtk_editable_set_position (::GtkEditable* editable /*none*/, gint position);
GI_INLINE_DECL void set_position (gint position) noexcept;

// void gtk_editable_set_text (GtkEditable* editable /*none*/, const char* text /*none*/);
// void gtk_editable_set_text (::GtkEditable* editable /*none*/, const char* text /*none*/);
GI_INLINE_DECL void set_text (const gi::cstring_v text) noexcept;

// void gtk_editable_set_width_chars (GtkEditable* editable /*none*/, int n_chars);
// void gtk_editable_set_width_chars (::GtkEditable* editable /*none*/, gint n_chars);
GI_INLINE_DECL void set_width_chars (gint n_chars) noexcept;

gi::property_proxy<gint, base::EditableBase> property_cursor_position()
{ return gi::property_proxy<gint, base::EditableBase> (*this, "cursor-position"); }
const gi::property_proxy<gint, base::EditableBase> property_cursor_position() const
{ return gi::property_proxy<gint, base::EditableBase> (*this, "cursor-position"); }

gi::property_proxy<bool, base::EditableBase> property_editable()
{ return gi::property_proxy<bool, base::EditableBase> (*this, "editable"); }
const gi::property_proxy<bool, base::EditableBase> property_editable() const
{ return gi::property_proxy<bool, base::EditableBase> (*this, "editable"); }

gi::property_proxy<bool, base::EditableBase> property_enable_undo()
{ return gi::property_proxy<bool, base::EditableBase> (*this, "enable-undo"); }
const gi::property_proxy<bool, base::EditableBase> property_enable_undo() const
{ return gi::property_proxy<bool, base::EditableBase> (*this, "enable-undo"); }

gi::property_proxy<gint, base::EditableBase> property_max_width_chars()
{ return gi::property_proxy<gint, base::EditableBase> (*this, "max-width-chars"); }
const gi::property_proxy<gint, base::EditableBase> property_max_width_chars() const
{ return gi::property_proxy<gint, base::EditableBase> (*this, "max-width-chars"); }

gi::property_proxy<gint, base::EditableBase> property_selection_bound()
{ return gi::property_proxy<gint, base::EditableBase> (*this, "selection-bound"); }
const gi::property_proxy<gint, base::EditableBase> property_selection_bound() const
{ return gi::property_proxy<gint, base::EditableBase> (*this, "selection-bound"); }

gi::property_proxy<gi::cstring, base::EditableBase> property_text()
{ return gi::property_proxy<gi::cstring, base::EditableBase> (*this, "text"); }
const gi::property_proxy<gi::cstring, base::EditableBase> property_text() const
{ return gi::property_proxy<gi::cstring, base::EditableBase> (*this, "text"); }

gi::property_proxy<gint, base::EditableBase> property_width_chars()
{ return gi::property_proxy<gint, base::EditableBase> (*this, "width-chars"); }
const gi::property_proxy<gint, base::EditableBase> property_width_chars() const
{ return gi::property_proxy<gint, base::EditableBase> (*this, "width-chars"); }

gi::property_proxy<gfloat, base::EditableBase> property_xalign()
{ return gi::property_proxy<gfloat, base::EditableBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::EditableBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::EditableBase> (*this, "xalign"); }

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gtk::Editable)> signal_changed()
{ return gi::signal_proxy<void(Gtk::Editable)> (*this, "changed"); }

// (signal) void delete-text (gint start_pos, gint end_pos);
// (signal) void delete-text (gint start_pos, gint end_pos);
gi::signal_proxy<void(Gtk::Editable, gint start_pos, gint end_pos)> signal_delete_text()
{ return gi::signal_proxy<void(Gtk::Editable, gint start_pos, gint end_pos)> (*this, "delete-text"); }

// (signal) void insert-text (gchar* text /*none*/, gint length, gpointer position);
// (signal) void insert-text (char* text /*none*/, gint length, gint* position);
gi::signal_proxy<void(Gtk::Editable, gi::cstring_v text, gint length, gint & position)> signal_insert_text()
{ return gi::signal_proxy<void(Gtk::Editable, gi::cstring_v text, gint length, gint & position)> (*this, "insert-text"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/editable_extra_def.hpp>)
#include <gtk/editable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/editable_extra.hpp>)
#include <gtk/editable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Editable : public GI_GTK_EDITABLE_BASE
{ typedef GI_GTK_EDITABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEditable>
{ typedef Gtk::Editable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EditableInterfaceDef
{
typedef EditableInterfaceDef self;
public:
typedef Gtk::Editable instance_type;
typedef ::GtkEditableInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(changed) = self;
using GI_MEMBER_CHECK_CONFLICT(delete_text) = self;
using GI_MEMBER_CHECK_CONFLICT(do_delete_text) = self;
using GI_MEMBER_CHECK_CONFLICT(do_insert_text) = self;
using GI_MEMBER_CHECK_CONFLICT(get_delegate) = self;
using GI_MEMBER_CHECK_CONFLICT(get_selection_bounds) = self;
using GI_MEMBER_CHECK_CONFLICT(get_text) = self;
using GI_MEMBER_CHECK_CONFLICT(insert_text) = self;
using GI_MEMBER_CHECK_CONFLICT(set_selection_bounds) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~EditableInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Editable::changed (GtkEditable* editable /*none*/);
// void Editable::changed (::GtkEditable* editable /*none*/);
virtual void changed_ () noexcept = 0;

// void Editable::delete_text (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::delete_text (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
virtual void delete_text_ (gint start_pos, gint end_pos) noexcept = 0;

// void Editable::do_delete_text (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::do_delete_text (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
virtual void do_delete_text_ (gint start_pos, gint end_pos) noexcept = 0;

// void Editable::do_insert_text (GtkEditable* editable /*none*/, const char* text /*none*/, int length, int* position);
// void Editable::do_insert_text (::GtkEditable* editable /*none*/, const char* text /*none*/, gint length, gint* position);
virtual void do_insert_text_ (const gi::cstring_v text, gint length, gint & position) noexcept = 0;

// GtkEditable* /*none,nullable*/ Editable::get_delegate (GtkEditable* editable /*none*/);
// ::GtkEditable* /*none,nullable*/ Editable::get_delegate (::GtkEditable* editable /*none*/);
virtual Gtk::Editable get_delegate_ () noexcept = 0;

// gboolean Editable::get_selection_bounds (GtkEditable* editable /*none*/, int* start_pos, int* end_pos);
// gboolean Editable::get_selection_bounds (::GtkEditable* editable /*none*/, gint* start_pos, gint* end_pos);
virtual bool get_selection_bounds_ (gint & start_pos, gint & end_pos) noexcept = 0;

// const char* /*none*/ Editable::get_text (GtkEditable* editable /*none*/);
// const char* /*none*/ Editable::get_text (::GtkEditable* editable /*none*/);
virtual gi::cstring_v get_text_ () noexcept = 0;

// void Editable::insert_text (GtkEditable* editable /*none*/, const char* text /*none*/, int length, int* position);
// void Editable::insert_text (::GtkEditable* editable /*none*/, const char* text /*none*/, gint length, gint* position);
virtual void insert_text_ (const gi::cstring_v text, gint length, gint & position) noexcept = 0;

// void Editable::set_selection_bounds (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::set_selection_bounds (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
virtual void set_selection_bounds_ (gint start_pos, gint end_pos) noexcept = 0;


};

using EditableImpl = detail::InterfaceImpl<EditableInterfaceDef>;

class EditableInterfaceClassImpl: public detail::InterfaceClassImpl<EditableImpl>
{
friend class internal::EditableInterfaceDef;
typedef EditableInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<EditableImpl> super;

protected:
using super::super;

// void Editable::changed (GtkEditable* editable /*none*/);
// void Editable::changed (::GtkEditable* editable /*none*/);
GI_INLINE_DECL void changed_ () noexcept override;

// void Editable::delete_text (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::delete_text (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
GI_INLINE_DECL void delete_text_ (gint start_pos, gint end_pos) noexcept override;

// void Editable::do_delete_text (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::do_delete_text (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
GI_INLINE_DECL void do_delete_text_ (gint start_pos, gint end_pos) noexcept override;

// void Editable::do_insert_text (GtkEditable* editable /*none*/, const char* text /*none*/, int length, int* position);
// void Editable::do_insert_text (::GtkEditable* editable /*none*/, const char* text /*none*/, gint length, gint* position);
GI_INLINE_DECL void do_insert_text_ (const gi::cstring_v text, gint length, gint & position) noexcept override;

// GtkEditable* /*none,nullable*/ Editable::get_delegate (GtkEditable* editable /*none*/);
// ::GtkEditable* /*none,nullable*/ Editable::get_delegate (::GtkEditable* editable /*none*/);
GI_INLINE_DECL Gtk::Editable get_delegate_ () noexcept override;

// gboolean Editable::get_selection_bounds (GtkEditable* editable /*none*/, int* start_pos, int* end_pos);
// gboolean Editable::get_selection_bounds (::GtkEditable* editable /*none*/, gint* start_pos, gint* end_pos);
GI_INLINE_DECL bool get_selection_bounds_ (gint & start_pos, gint & end_pos) noexcept override;

// const char* /*none*/ Editable::get_text (GtkEditable* editable /*none*/);
// const char* /*none*/ Editable::get_text (::GtkEditable* editable /*none*/);
GI_INLINE_DECL gi::cstring_v get_text_ () noexcept override;

// void Editable::insert_text (GtkEditable* editable /*none*/, const char* text /*none*/, int length, int* position);
// void Editable::insert_text (::GtkEditable* editable /*none*/, const char* text /*none*/, gint length, gint* position);
GI_INLINE_DECL void insert_text_ (const gi::cstring_v text, gint length, gint & position) noexcept override;

// void Editable::set_selection_bounds (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::set_selection_bounds (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
GI_INLINE_DECL void set_selection_bounds_ (gint start_pos, gint end_pos) noexcept override;


};


struct EditableInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, changed)
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, delete_text)
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, do_delete_text)
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, do_insert_text)
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, get_delegate)
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, get_selection_bounds)
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, get_text)
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, insert_text)
  GI_MEMBER_DEFINE(EditableInterfaceClassImpl, set_selection_bounds)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, delete_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, do_delete_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, do_insert_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_delegate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_selection_bounds),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, insert_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_selection_bounds)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
