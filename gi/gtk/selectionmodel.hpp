// AUTO-GENERATED

#ifndef _GI_GTK_SELECTIONMODEL_HPP_
#define _GI_GTK_SELECTIONMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Bitset;
class Bitset_Ref;

class SelectionModel;

namespace base {


#define GI_GTK_SELECTIONMODEL_BASE base::SelectionModelBase
class SelectionModelBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkSelectionModel BaseObjectType;

SelectionModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_selection_model_get_type(); } 

// GtkBitset* /*full*/ gtk_selection_model_get_selection (GtkSelectionModel* model /*none*/);
// ::GtkBitset* /*full*/ gtk_selection_model_get_selection (::GtkSelectionModel* model /*none*/);
GI_INLINE_DECL Gtk::Bitset get_selection () noexcept;

// GtkBitset* /*full*/ gtk_selection_model_get_selection_in_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// ::GtkBitset* /*full*/ gtk_selection_model_get_selection_in_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
GI_INLINE_DECL Gtk::Bitset get_selection_in_range (guint position, guint n_items) noexcept;

// gboolean gtk_selection_model_is_selected (GtkSelectionModel* model /*none*/, guint position);
// gboolean gtk_selection_model_is_selected (::GtkSelectionModel* model /*none*/, guint position);
GI_INLINE_DECL bool is_selected (guint position) noexcept;

// gboolean gtk_selection_model_select_all (GtkSelectionModel* model /*none*/);
// gboolean gtk_selection_model_select_all (::GtkSelectionModel* model /*none*/);
GI_INLINE_DECL bool select_all () noexcept;

// gboolean gtk_selection_model_select_item (GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
// gboolean gtk_selection_model_select_item (::GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
GI_INLINE_DECL bool select_item (guint position, gboolean unselect_rest) noexcept;

// gboolean gtk_selection_model_select_range (GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
// gboolean gtk_selection_model_select_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
GI_INLINE_DECL bool select_range (guint position, guint n_items, gboolean unselect_rest) noexcept;

// void gtk_selection_model_selection_changed (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// void gtk_selection_model_selection_changed (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
GI_INLINE_DECL void selection_changed (guint position, guint n_items) noexcept;

// gboolean gtk_selection_model_set_selection (GtkSelectionModel* model /*none*/, GtkBitset* selected /*none*/, GtkBitset* mask /*none*/);
// gboolean gtk_selection_model_set_selection (::GtkSelectionModel* model /*none*/, ::GtkBitset* selected /*none*/, ::GtkBitset* mask /*none*/);
GI_INLINE_DECL bool set_selection (Gtk::Bitset_Ref selected, Gtk::Bitset_Ref mask) noexcept;

// gboolean gtk_selection_model_unselect_all (GtkSelectionModel* model /*none*/);
// gboolean gtk_selection_model_unselect_all (::GtkSelectionModel* model /*none*/);
GI_INLINE_DECL bool unselect_all () noexcept;

// gboolean gtk_selection_model_unselect_item (GtkSelectionModel* model /*none*/, guint position);
// gboolean gtk_selection_model_unselect_item (::GtkSelectionModel* model /*none*/, guint position);
GI_INLINE_DECL bool unselect_item (guint position) noexcept;

// gboolean gtk_selection_model_unselect_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// gboolean gtk_selection_model_unselect_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
GI_INLINE_DECL bool unselect_range (guint position, guint n_items) noexcept;

// (signal) void selection-changed (guint position, guint n_items);
// (signal) void selection-changed (guint position, guint n_items);
gi::signal_proxy<void(Gtk::SelectionModel, guint position, guint n_items)> signal_selection_changed()
{ return gi::signal_proxy<void(Gtk::SelectionModel, guint position, guint n_items)> (*this, "selection-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/selectionmodel_extra_def.hpp>)
#include <gtk/selectionmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/selectionmodel_extra.hpp>)
#include <gtk/selectionmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SelectionModel : public GI_GTK_SELECTIONMODEL_BASE
{ typedef GI_GTK_SELECTIONMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSelectionModel>
{ typedef Gtk::SelectionModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SelectionModelInterfaceDef
{
typedef SelectionModelInterfaceDef self;
public:
typedef Gtk::SelectionModel instance_type;
typedef ::GtkSelectionModelInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_selection_in_range) = self;
using GI_MEMBER_CHECK_CONFLICT(is_selected) = self;
using GI_MEMBER_CHECK_CONFLICT(select_all) = self;
using GI_MEMBER_CHECK_CONFLICT(select_item) = self;
using GI_MEMBER_CHECK_CONFLICT(select_range) = self;
using GI_MEMBER_CHECK_CONFLICT(set_selection) = self;
using GI_MEMBER_CHECK_CONFLICT(unselect_all) = self;
using GI_MEMBER_CHECK_CONFLICT(unselect_item) = self;
using GI_MEMBER_CHECK_CONFLICT(unselect_range) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SelectionModelInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GtkBitset* /*full*/ SelectionModel::get_selection_in_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// ::GtkBitset* /*full*/ SelectionModel::get_selection_in_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
virtual Gtk::Bitset get_selection_in_range_ (guint position, guint n_items) noexcept = 0;

// gboolean SelectionModel::is_selected (GtkSelectionModel* model /*none*/, guint position);
// gboolean SelectionModel::is_selected (::GtkSelectionModel* model /*none*/, guint position);
virtual bool is_selected_ (guint position) noexcept = 0;

// gboolean SelectionModel::select_all (GtkSelectionModel* model /*none*/);
// gboolean SelectionModel::select_all (::GtkSelectionModel* model /*none*/);
virtual bool select_all_ () noexcept = 0;

// gboolean SelectionModel::select_item (GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
// gboolean SelectionModel::select_item (::GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
virtual bool select_item_ (guint position, gboolean unselect_rest) noexcept = 0;

// gboolean SelectionModel::select_range (GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
// gboolean SelectionModel::select_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
virtual bool select_range_ (guint position, guint n_items, gboolean unselect_rest) noexcept = 0;

// gboolean SelectionModel::set_selection (GtkSelectionModel* model /*none*/, GtkBitset* selected /*none*/, GtkBitset* mask /*none*/);
// gboolean SelectionModel::set_selection (::GtkSelectionModel* model /*none*/, ::GtkBitset* selected /*none*/, ::GtkBitset* mask /*none*/);
virtual bool set_selection_ (Gtk::Bitset_Ref selected, Gtk::Bitset_Ref mask) noexcept = 0;

// gboolean SelectionModel::unselect_all (GtkSelectionModel* model /*none*/);
// gboolean SelectionModel::unselect_all (::GtkSelectionModel* model /*none*/);
virtual bool unselect_all_ () noexcept = 0;

// gboolean SelectionModel::unselect_item (GtkSelectionModel* model /*none*/, guint position);
// gboolean SelectionModel::unselect_item (::GtkSelectionModel* model /*none*/, guint position);
virtual bool unselect_item_ (guint position) noexcept = 0;

// gboolean SelectionModel::unselect_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// gboolean SelectionModel::unselect_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
virtual bool unselect_range_ (guint position, guint n_items) noexcept = 0;


};

using SelectionModelImpl = detail::InterfaceImpl<SelectionModelInterfaceDef>;

class SelectionModelInterfaceClassImpl: public detail::InterfaceClassImpl<SelectionModelImpl>
{
friend class internal::SelectionModelInterfaceDef;
typedef SelectionModelInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<SelectionModelImpl> super;

protected:
using super::super;

// GtkBitset* /*full*/ SelectionModel::get_selection_in_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// ::GtkBitset* /*full*/ SelectionModel::get_selection_in_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
GI_INLINE_DECL Gtk::Bitset get_selection_in_range_ (guint position, guint n_items) noexcept override;

// gboolean SelectionModel::is_selected (GtkSelectionModel* model /*none*/, guint position);
// gboolean SelectionModel::is_selected (::GtkSelectionModel* model /*none*/, guint position);
GI_INLINE_DECL bool is_selected_ (guint position) noexcept override;

// gboolean SelectionModel::select_all (GtkSelectionModel* model /*none*/);
// gboolean SelectionModel::select_all (::GtkSelectionModel* model /*none*/);
GI_INLINE_DECL bool select_all_ () noexcept override;

// gboolean SelectionModel::select_item (GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
// gboolean SelectionModel::select_item (::GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
GI_INLINE_DECL bool select_item_ (guint position, gboolean unselect_rest) noexcept override;

// gboolean SelectionModel::select_range (GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
// gboolean SelectionModel::select_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
GI_INLINE_DECL bool select_range_ (guint position, guint n_items, gboolean unselect_rest) noexcept override;

// gboolean SelectionModel::set_selection (GtkSelectionModel* model /*none*/, GtkBitset* selected /*none*/, GtkBitset* mask /*none*/);
// gboolean SelectionModel::set_selection (::GtkSelectionModel* model /*none*/, ::GtkBitset* selected /*none*/, ::GtkBitset* mask /*none*/);
GI_INLINE_DECL bool set_selection_ (Gtk::Bitset_Ref selected, Gtk::Bitset_Ref mask) noexcept override;

// gboolean SelectionModel::unselect_all (GtkSelectionModel* model /*none*/);
// gboolean SelectionModel::unselect_all (::GtkSelectionModel* model /*none*/);
GI_INLINE_DECL bool unselect_all_ () noexcept override;

// gboolean SelectionModel::unselect_item (GtkSelectionModel* model /*none*/, guint position);
// gboolean SelectionModel::unselect_item (::GtkSelectionModel* model /*none*/, guint position);
GI_INLINE_DECL bool unselect_item_ (guint position) noexcept override;

// gboolean SelectionModel::unselect_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// gboolean SelectionModel::unselect_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
GI_INLINE_DECL bool unselect_range_ (guint position, guint n_items) noexcept override;


};


struct SelectionModelInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, get_selection_in_range)
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, is_selected)
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, select_all)
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, select_item)
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, select_range)
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, set_selection)
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, unselect_all)
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, unselect_item)
  GI_MEMBER_DEFINE(SelectionModelInterfaceClassImpl, unselect_range)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_selection_in_range),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_selected),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, select_all),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, select_item),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, select_range),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_selection),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unselect_all),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unselect_item),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unselect_range)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
