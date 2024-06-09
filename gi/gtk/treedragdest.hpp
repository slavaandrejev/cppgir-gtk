// AUTO-GENERATED

#ifndef _GI_GTK_TREEDRAGDEST_HPP_
#define _GI_GTK_TREEDRAGDEST_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreePath;
class TreePath_Ref;

class TreeDragDest;

namespace base {


#define GI_GTK_TREEDRAGDEST_BASE base::TreeDragDestBase
class TreeDragDestBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkTreeDragDest BaseObjectType;

TreeDragDestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_drag_dest_get_type(); } 

// gboolean gtk_tree_drag_dest_drag_data_received (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest /*none*/, const GValue* value /*none*/);
// gboolean gtk_tree_drag_dest_drag_data_received (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL bool drag_data_received (Gtk::TreePath_Ref dest, const GObject::Value_Ref value) noexcept;

// gboolean gtk_tree_drag_dest_row_drop_possible (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest_path /*none*/, const GValue* value /*none*/);
// gboolean gtk_tree_drag_dest_row_drop_possible (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest_path /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL bool row_drop_possible (Gtk::TreePath_Ref dest_path, const GObject::Value_Ref value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treedragdest_extra_def.hpp>)
#include <gtk/treedragdest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treedragdest_extra.hpp>)
#include <gtk/treedragdest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeDragDest : public GI_GTK_TREEDRAGDEST_BASE
{ typedef GI_GTK_TREEDRAGDEST_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeDragDest>
{ typedef Gtk::TreeDragDest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeDragDestIfaceDef
{
typedef TreeDragDestIfaceDef self;
public:
typedef Gtk::TreeDragDest instance_type;
typedef ::GtkTreeDragDestIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(drag_data_received) = self;
using GI_MEMBER_CHECK_CONFLICT(row_drop_possible) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeDragDestIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean TreeDragDest::drag_data_received (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest /*none*/, const GValue* value /*none*/);
// gboolean TreeDragDest::drag_data_received (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest /*none*/, const ::GValue* value /*none*/);
virtual bool drag_data_received_ (Gtk::TreePath_Ref dest, const GObject::Value_Ref value) noexcept = 0;

// gboolean TreeDragDest::row_drop_possible (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest_path /*none*/, const GValue* value /*none*/);
// gboolean TreeDragDest::row_drop_possible (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest_path /*none*/, const ::GValue* value /*none*/);
virtual bool row_drop_possible_ (Gtk::TreePath_Ref dest_path, const GObject::Value_Ref value) noexcept = 0;


};

using TreeDragDestImpl = detail::InterfaceImpl<TreeDragDestIfaceDef>;

class TreeDragDestIfaceClassImpl: public detail::InterfaceClassImpl<TreeDragDestImpl>
{
friend class internal::TreeDragDestIfaceDef;
typedef TreeDragDestIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TreeDragDestImpl> super;

protected:
using super::super;

// gboolean TreeDragDest::drag_data_received (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest /*none*/, const GValue* value /*none*/);
// gboolean TreeDragDest::drag_data_received (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL bool drag_data_received_ (Gtk::TreePath_Ref dest, const GObject::Value_Ref value) noexcept override;

// gboolean TreeDragDest::row_drop_possible (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest_path /*none*/, const GValue* value /*none*/);
// gboolean TreeDragDest::row_drop_possible (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest_path /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL bool row_drop_possible_ (Gtk::TreePath_Ref dest_path, const GObject::Value_Ref value) noexcept override;


};


struct TreeDragDestIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(TreeDragDestIfaceClassImpl, drag_data_received)
  GI_MEMBER_DEFINE(TreeDragDestIfaceClassImpl, row_drop_possible)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, drag_data_received),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_drop_possible)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
