// AUTO-GENERATED

#ifndef _GI_GTK_TREEDRAGSOURCE_HPP_
#define _GI_GTK_TREEDRAGSOURCE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreePath;
class TreePath_Ref;

class TreeDragSource;

namespace base {


#define GI_GTK_TREEDRAGSOURCE_BASE base::TreeDragSourceBase
class TreeDragSourceBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkTreeDragSource BaseObjectType;

TreeDragSourceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_drag_source_get_type(); } 

// gboolean gtk_tree_drag_source_drag_data_delete (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_drag_source_drag_data_delete (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool drag_data_delete (Gtk::TreePath_Ref path) noexcept;

// GdkContentProvider* /*full,nullable*/ gtk_tree_drag_source_drag_data_get (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// ::GdkContentProvider* /*full,nullable*/ gtk_tree_drag_source_drag_data_get (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL Gdk::ContentProvider drag_data_get (Gtk::TreePath_Ref path) noexcept;

// gboolean gtk_tree_drag_source_row_draggable (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_drag_source_row_draggable (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool row_draggable (Gtk::TreePath_Ref path) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treedragsource_extra_def.hpp>)
#include <gtk/treedragsource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treedragsource_extra.hpp>)
#include <gtk/treedragsource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeDragSource : public GI_GTK_TREEDRAGSOURCE_BASE
{ typedef GI_GTK_TREEDRAGSOURCE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeDragSource>
{ typedef Gtk::TreeDragSource type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeDragSourceIfaceDef
{
typedef TreeDragSourceIfaceDef self;
public:
typedef Gtk::TreeDragSource instance_type;
typedef ::GtkTreeDragSourceIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(drag_data_delete) = self;
using GI_MEMBER_CHECK_CONFLICT(drag_data_get) = self;
using GI_MEMBER_CHECK_CONFLICT(row_draggable) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeDragSourceIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean TreeDragSource::drag_data_delete (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeDragSource::drag_data_delete (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
virtual bool drag_data_delete_ (Gtk::TreePath_Ref path) noexcept = 0;

// GdkContentProvider* /*full,nullable*/ TreeDragSource::drag_data_get (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// ::GdkContentProvider* /*full,nullable*/ TreeDragSource::drag_data_get (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
virtual Gdk::ContentProvider drag_data_get_ (Gtk::TreePath_Ref path) noexcept = 0;

// gboolean TreeDragSource::row_draggable (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeDragSource::row_draggable (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
virtual bool row_draggable_ (Gtk::TreePath_Ref path) noexcept = 0;


};

using TreeDragSourceImpl = detail::InterfaceImpl<TreeDragSourceIfaceDef>;

class TreeDragSourceIfaceClassImpl: public detail::InterfaceClassImpl<TreeDragSourceImpl>
{
friend class internal::TreeDragSourceIfaceDef;
typedef TreeDragSourceIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TreeDragSourceImpl> super;

protected:
using super::super;

// gboolean TreeDragSource::drag_data_delete (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeDragSource::drag_data_delete (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool drag_data_delete_ (Gtk::TreePath_Ref path) noexcept override;

// GdkContentProvider* /*full,nullable*/ TreeDragSource::drag_data_get (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// ::GdkContentProvider* /*full,nullable*/ TreeDragSource::drag_data_get (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL Gdk::ContentProvider drag_data_get_ (Gtk::TreePath_Ref path) noexcept override;

// gboolean TreeDragSource::row_draggable (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeDragSource::row_draggable (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool row_draggable_ (Gtk::TreePath_Ref path) noexcept override;


};


struct TreeDragSourceIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(TreeDragSourceIfaceClassImpl, drag_data_delete)
  GI_MEMBER_DEFINE(TreeDragSourceIfaceClassImpl, drag_data_get)
  GI_MEMBER_DEFINE(TreeDragSourceIfaceClassImpl, row_draggable)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, drag_data_delete),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, drag_data_get),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_draggable)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
