// AUTO-GENERATED

#ifndef _GI_GIO_LISTMODEL_HPP_
#define _GI_GIO_LISTMODEL_HPP_


namespace gi {

namespace repository {

namespace Gio {


class ListModel;

namespace base {


#define GI_GIO_LISTMODEL_BASE base::ListModelBase
class ListModelBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GListModel BaseObjectType;

ListModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_list_model_get_type(); } 

// gpointer g_list_model_get_item (GListModel* list /*none*/, guint position);
// void* g_list_model_get_item (::GListModel* list /*none*/, guint position);
// IGNORE; not introspectable; shadowed-by get_object

// GType g_list_model_get_item_type (GListModel* list /*none*/);
// GType g_list_model_get_item_type (::GListModel* list /*none*/);
GI_INLINE_DECL GType get_item_type () noexcept;

// guint g_list_model_get_n_items (GListModel* list /*none*/);
// guint g_list_model_get_n_items (::GListModel* list /*none*/);
GI_INLINE_DECL guint get_n_items () noexcept;

// GObject* /*full,nullable*/ g_list_model_get_object (GListModel* list /*none*/, guint position);
// ::GObject* /*full,nullable*/ g_list_model_get_object (::GListModel* list /*none*/, guint position);
GI_INLINE_DECL GObject::Object get_item (guint position) noexcept;

// void g_list_model_items_changed (GListModel* list /*none*/, guint position, guint removed, guint added);
// void g_list_model_items_changed (::GListModel* list /*none*/, guint position, guint removed, guint added);
GI_INLINE_DECL void items_changed (guint position, guint removed, guint added) noexcept;

// (signal) void items-changed (guint position, guint removed, guint added);
// (signal) void items-changed (guint position, guint removed, guint added);
gi::signal_proxy<void(Gio::ListModel, guint position, guint removed, guint added)> signal_items_changed()
{ return gi::signal_proxy<void(Gio::ListModel, guint position, guint removed, guint added)> (*this, "items-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/listmodel_extra_def.hpp>)
#include <gio/listmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/listmodel_extra.hpp>)
#include <gio/listmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ListModel : public GI_GIO_LISTMODEL_BASE
{ typedef GI_GIO_LISTMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GListModel>
{ typedef Gio::ListModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ListModelInterfaceDef
{
typedef ListModelInterfaceDef self;
public:
typedef Gio::ListModel instance_type;
typedef ::GListModelInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_item) = self;
using GI_MEMBER_CHECK_CONFLICT(get_item_type) = self;
using GI_MEMBER_CHECK_CONFLICT(get_n_items) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ListModelInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gpointer /*full,nullable*/ ListModel::get_item (GListModel* list /*none*/, guint position);
// ::GObject* /*full,nullable*/ ListModel::get_item (::GListModel* list /*none*/, guint position);
virtual GObject::Object get_item_ (guint position) noexcept = 0;

// GType ListModel::get_item_type (GListModel* list /*none*/);
// GType ListModel::get_item_type (::GListModel* list /*none*/);
virtual GType get_item_type_ () noexcept = 0;

// guint ListModel::get_n_items (GListModel* list /*none*/);
// guint ListModel::get_n_items (::GListModel* list /*none*/);
virtual guint get_n_items_ () noexcept = 0;


};

using ListModelImpl = detail::InterfaceImpl<ListModelInterfaceDef>;

class ListModelInterfaceClassImpl: public detail::InterfaceClassImpl<ListModelImpl>
{
friend class internal::ListModelInterfaceDef;
typedef ListModelInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ListModelImpl> super;

protected:
using super::super;

// gpointer /*full,nullable*/ ListModel::get_item (GListModel* list /*none*/, guint position);
// ::GObject* /*full,nullable*/ ListModel::get_item (::GListModel* list /*none*/, guint position);
GI_INLINE_DECL GObject::Object get_item_ (guint position) noexcept override;

// GType ListModel::get_item_type (GListModel* list /*none*/);
// GType ListModel::get_item_type (::GListModel* list /*none*/);
GI_INLINE_DECL GType get_item_type_ () noexcept override;

// guint ListModel::get_n_items (GListModel* list /*none*/);
// guint ListModel::get_n_items (::GListModel* list /*none*/);
GI_INLINE_DECL guint get_n_items_ () noexcept override;


};


struct ListModelInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ListModelInterfaceClassImpl, get_item)
  GI_MEMBER_DEFINE(ListModelInterfaceClassImpl, get_item_type)
  GI_MEMBER_DEFINE(ListModelInterfaceClassImpl, get_n_items)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_item),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_item_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_n_items)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
