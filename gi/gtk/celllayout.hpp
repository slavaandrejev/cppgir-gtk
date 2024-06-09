// AUTO-GENERATED

#ifndef _GI_GTK_CELLLAYOUT_HPP_
#define _GI_GTK_CELLLAYOUT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CellArea;
class CellRenderer;

class CellLayout;

namespace base {


#define GI_GTK_CELLLAYOUT_BASE base::CellLayoutBase
class CellLayoutBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkCellLayout BaseObjectType;

CellLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_layout_get_type(); } 

// void gtk_cell_layout_add_attribute (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, int column);
// void gtk_cell_layout_add_attribute (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, gint column);
GI_INLINE_DECL void add_attribute (Gtk::CellRenderer cell, const gi::cstring_v attribute, gint column) noexcept;

// void gtk_cell_layout_clear (GtkCellLayout* cell_layout /*none*/);
// void gtk_cell_layout_clear (::GtkCellLayout* cell_layout /*none*/);
GI_INLINE_DECL void clear () noexcept;

// void gtk_cell_layout_clear_attributes (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/);
// void gtk_cell_layout_clear_attributes (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL void clear_attributes (Gtk::CellRenderer cell) noexcept;

// GtkCellArea* /*none,nullable*/ gtk_cell_layout_get_area (GtkCellLayout* cell_layout /*none*/);
// ::GtkCellArea* /*none,nullable*/ gtk_cell_layout_get_area (::GtkCellLayout* cell_layout /*none*/);
GI_INLINE_DECL Gtk::CellArea get_area () noexcept;

// GList* /*container*/ gtk_cell_layout_get_cells (GtkCellLayout* cell_layout /*none*/);
// ::GList* /*container*/ gtk_cell_layout_get_cells (::GtkCellLayout* cell_layout /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_container_t> get_cells () noexcept;

// void gtk_cell_layout_pack_end (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void gtk_cell_layout_pack_end (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
GI_INLINE_DECL void pack_end (Gtk::CellRenderer cell, gboolean expand) noexcept;

// void gtk_cell_layout_pack_start (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void gtk_cell_layout_pack_start (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
GI_INLINE_DECL void pack_start (Gtk::CellRenderer cell, gboolean expand) noexcept;

// void gtk_cell_layout_reorder (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, int position);
// void gtk_cell_layout_reorder (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gint position);
GI_INLINE_DECL void reorder (Gtk::CellRenderer cell, gint position) noexcept;

// void gtk_cell_layout_set_attributes (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/,  ..._ /*none*/);
// void gtk_cell_layout_set_attributes (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_layout_set_cell_data_func (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, GtkCellLayoutDataFunc func /*none,nullable*/, gpointer func_data, GDestroyNotify destroy /*none*/);
// void gtk_cell_layout_set_cell_data_func (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, Gtk::CellLayoutDataFunc::cfunction_type func /*none,nullable*/, void* func_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_cell_data_func (Gtk::CellRenderer cell, Gtk::CellLayoutDataFunc func) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/celllayout_extra_def.hpp>)
#include <gtk/celllayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/celllayout_extra.hpp>)
#include <gtk/celllayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellLayout : public GI_GTK_CELLLAYOUT_BASE
{ typedef GI_GTK_CELLLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellLayout>
{ typedef Gtk::CellLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellLayoutIfaceDef
{
typedef CellLayoutIfaceDef self;
public:
typedef Gtk::CellLayout instance_type;
typedef ::GtkCellLayoutIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(add_attribute) = self;
using GI_MEMBER_CHECK_CONFLICT(clear) = self;
using GI_MEMBER_CHECK_CONFLICT(clear_attributes) = self;
using GI_MEMBER_CHECK_CONFLICT(get_area) = self;
using GI_MEMBER_CHECK_CONFLICT(get_cells) = self;
using GI_MEMBER_CHECK_CONFLICT(pack_end) = self;
using GI_MEMBER_CHECK_CONFLICT(pack_start) = self;
using GI_MEMBER_CHECK_CONFLICT(reorder) = self;
using GI_MEMBER_CHECK_CONFLICT(set_cell_data_func) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~CellLayoutIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void CellLayout::add_attribute (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, int column);
// void CellLayout::add_attribute (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, gint column);
virtual void add_attribute_ (Gtk::CellRenderer cell, const gi::cstring_v attribute, gint column) noexcept = 0;

// void CellLayout::clear (GtkCellLayout* cell_layout /*none*/);
// void CellLayout::clear (::GtkCellLayout* cell_layout /*none*/);
virtual void clear_ () noexcept = 0;

// void CellLayout::clear_attributes (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/);
// void CellLayout::clear_attributes (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/);
virtual void clear_attributes_ (Gtk::CellRenderer cell) noexcept = 0;

// GtkCellArea* /*none,nullable*/ CellLayout::get_area (GtkCellLayout* cell_layout /*none*/);
// ::GtkCellArea* /*none,nullable*/ CellLayout::get_area (::GtkCellLayout* cell_layout /*none*/);
virtual Gtk::CellArea get_area_ () noexcept = 0;

// GList* /*container*/ CellLayout::get_cells (GtkCellLayout* cell_layout /*none*/);
// ::GList* /*container*/ CellLayout::get_cells (::GtkCellLayout* cell_layout /*none*/);
virtual gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_container_t> get_cells_ () noexcept = 0;

// void CellLayout::pack_end (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void CellLayout::pack_end (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
virtual void pack_end_ (Gtk::CellRenderer cell, gboolean expand) noexcept = 0;

// void CellLayout::pack_start (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void CellLayout::pack_start (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
virtual void pack_start_ (Gtk::CellRenderer cell, gboolean expand) noexcept = 0;

// void CellLayout::reorder (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, int position);
// void CellLayout::reorder (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gint position);
virtual void reorder_ (Gtk::CellRenderer cell, gint position) noexcept = 0;

// void CellLayout::set_cell_data_func (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, GtkCellLayoutDataFunc func /*none,nullable*/, gpointer func_data, GDestroyNotify destroy /*none*/);
// void CellLayout::set_cell_data_func (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, Gtk::CellLayoutDataFunc::cfunction_type func /*none,nullable*/, void* func_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
virtual void set_cell_data_func_ (Gtk::CellRenderer cell, Gtk::CellLayoutDataFunc func) noexcept = 0;


};

using CellLayoutImpl = detail::InterfaceImpl<CellLayoutIfaceDef>;

class CellLayoutIfaceClassImpl: public detail::InterfaceClassImpl<CellLayoutImpl>
{
friend class internal::CellLayoutIfaceDef;
typedef CellLayoutIfaceClassImpl self;
typedef detail::InterfaceClassImpl<CellLayoutImpl> super;

protected:
using super::super;

// void CellLayout::add_attribute (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, int column);
// void CellLayout::add_attribute (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, gint column);
GI_INLINE_DECL void add_attribute_ (Gtk::CellRenderer cell, const gi::cstring_v attribute, gint column) noexcept override;

// void CellLayout::clear (GtkCellLayout* cell_layout /*none*/);
// void CellLayout::clear (::GtkCellLayout* cell_layout /*none*/);
GI_INLINE_DECL void clear_ () noexcept override;

// void CellLayout::clear_attributes (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/);
// void CellLayout::clear_attributes (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL void clear_attributes_ (Gtk::CellRenderer cell) noexcept override;

// GtkCellArea* /*none,nullable*/ CellLayout::get_area (GtkCellLayout* cell_layout /*none*/);
// ::GtkCellArea* /*none,nullable*/ CellLayout::get_area (::GtkCellLayout* cell_layout /*none*/);
GI_INLINE_DECL Gtk::CellArea get_area_ () noexcept override;

// GList* /*container*/ CellLayout::get_cells (GtkCellLayout* cell_layout /*none*/);
// ::GList* /*container*/ CellLayout::get_cells (::GtkCellLayout* cell_layout /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_container_t> get_cells_ () noexcept override;

// void CellLayout::pack_end (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void CellLayout::pack_end (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
GI_INLINE_DECL void pack_end_ (Gtk::CellRenderer cell, gboolean expand) noexcept override;

// void CellLayout::pack_start (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void CellLayout::pack_start (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
GI_INLINE_DECL void pack_start_ (Gtk::CellRenderer cell, gboolean expand) noexcept override;

// void CellLayout::reorder (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, int position);
// void CellLayout::reorder (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gint position);
GI_INLINE_DECL void reorder_ (Gtk::CellRenderer cell, gint position) noexcept override;

// void CellLayout::set_cell_data_func (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, GtkCellLayoutDataFunc func /*none,nullable*/, gpointer func_data, GDestroyNotify destroy /*none*/);
// void CellLayout::set_cell_data_func (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, Gtk::CellLayoutDataFunc::cfunction_type func /*none,nullable*/, void* func_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_cell_data_func_ (Gtk::CellRenderer cell, Gtk::CellLayoutDataFunc func) noexcept override;


};


struct CellLayoutIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, add_attribute)
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, clear)
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, clear_attributes)
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, get_area)
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, get_cells)
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, pack_end)
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, pack_start)
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, reorder)
  GI_MEMBER_DEFINE(CellLayoutIfaceClassImpl, set_cell_data_func)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, add_attribute),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, clear),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, clear_attributes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_area),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_cells),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, pack_end),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, pack_start),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, reorder),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_cell_data_func)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
