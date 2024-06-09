// AUTO-GENERATED

#ifndef _GI_GIO_MENUMODEL_HPP_
#define _GI_GIO_MENUMODEL_HPP_


namespace gi {

namespace repository {

namespace Gio {

class MenuAttributeIter;
class MenuLinkIter;

class MenuModel;

namespace base {


#define GI_GIO_MENUMODEL_BASE base::MenuModelBase
class MenuModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMenuModel BaseObjectType;

MenuModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_menu_model_get_type(); } 

// gboolean g_menu_model_get_item_attribute (GMenuModel* model /*none*/, gint item_index, const gchar* attribute /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_menu_model_get_item_attribute (::GMenuModel* model /*none*/, gint item_index, const char* attribute /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full,nullable*/ g_menu_model_get_item_attribute_value (GMenuModel* model /*none*/, gint item_index, const gchar* attribute /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ g_menu_model_get_item_attribute_value (::GMenuModel* model /*none*/, gint item_index, const char* attribute /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GI_INLINE_DECL GLib::Variant get_item_attribute_value (gint item_index, const gi::cstring_v attribute, const GLib::VariantType_Ref expected_type) noexcept;
GI_INLINE_DECL GLib::Variant get_item_attribute_value (gint item_index, const gi::cstring_v attribute) noexcept;

// GMenuModel* /*full,nullable*/ g_menu_model_get_item_link (GMenuModel* model /*none*/, gint item_index, const gchar* link /*none*/);
// ::GMenuModel* /*full,nullable*/ g_menu_model_get_item_link (::GMenuModel* model /*none*/, gint item_index, const char* link /*none*/);
GI_INLINE_DECL Gio::MenuModel get_item_link (gint item_index, const gi::cstring_v link) noexcept;

// gint g_menu_model_get_n_items (GMenuModel* model /*none*/);
// gint g_menu_model_get_n_items (::GMenuModel* model /*none*/);
GI_INLINE_DECL gint get_n_items () noexcept;

// gboolean g_menu_model_is_mutable (GMenuModel* model /*none*/);
// gboolean g_menu_model_is_mutable (::GMenuModel* model /*none*/);
GI_INLINE_DECL bool is_mutable () noexcept;

// void g_menu_model_items_changed (GMenuModel* model /*none*/, gint position, gint removed, gint added);
// void g_menu_model_items_changed (::GMenuModel* model /*none*/, gint position, gint removed, gint added);
GI_INLINE_DECL void items_changed (gint position, gint removed, gint added) noexcept;

// GMenuAttributeIter* /*full*/ g_menu_model_iterate_item_attributes (GMenuModel* model /*none*/, gint item_index);
// ::GMenuAttributeIter* /*full*/ g_menu_model_iterate_item_attributes (::GMenuModel* model /*none*/, gint item_index);
GI_INLINE_DECL Gio::MenuAttributeIter iterate_item_attributes (gint item_index) noexcept;

// GMenuLinkIter* /*full*/ g_menu_model_iterate_item_links (GMenuModel* model /*none*/, gint item_index);
// ::GMenuLinkIter* /*full*/ g_menu_model_iterate_item_links (::GMenuModel* model /*none*/, gint item_index);
GI_INLINE_DECL Gio::MenuLinkIter iterate_item_links (gint item_index) noexcept;

// (signal) void items-changed (gint position, gint removed, gint added);
// (signal) void items-changed (gint position, gint removed, gint added);
gi::signal_proxy<void(Gio::MenuModel, gint position, gint removed, gint added)> signal_items_changed()
{ return gi::signal_proxy<void(Gio::MenuModel, gint position, gint removed, gint added)> (*this, "items-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menumodel_extra_def.hpp>)
#include <gio/menumodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menumodel_extra.hpp>)
#include <gio/menumodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MenuModel : public GI_GIO_MENUMODEL_BASE
{ typedef GI_GIO_MENUMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMenuModel>
{ typedef Gio::MenuModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MenuModelClassDef
{
typedef MenuModelClassDef self;
public:
typedef Gio::MenuModel instance_type;
typedef ::GMenuModelClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_item_attribute_value) = self;
using GI_MEMBER_CHECK_CONFLICT(get_item_attributes) = self;
using GI_MEMBER_CHECK_CONFLICT(get_item_link) = self;
using GI_MEMBER_CHECK_CONFLICT(get_item_links) = self;
using GI_MEMBER_CHECK_CONFLICT(get_n_items) = self;
using GI_MEMBER_CHECK_CONFLICT(is_mutable) = self;
using GI_MEMBER_CHECK_CONFLICT(iterate_item_attributes) = self;
using GI_MEMBER_CHECK_CONFLICT(iterate_item_links) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MenuModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GVariant* /*full,nullable*/ MenuModel::get_item_attribute_value (GMenuModel* model /*none*/, gint item_index, const gchar* attribute /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ MenuModel::get_item_attribute_value (::GMenuModel* model /*none*/, gint item_index, const char* attribute /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
virtual GLib::Variant get_item_attribute_value_ (gint item_index, const gi::cstring_v attribute, const GLib::VariantType_Ref expected_type) noexcept = 0;

// void MenuModel::get_item_attributes (GMenuModel* model /*none*/, gint item_index, GHashTable** attributes /*full,out*/);
// void MenuModel::get_item_attributes (::GMenuModel* model /*none*/, gint item_index, ::GHashTable** attributes /*full,out*/);
virtual void get_item_attributes_ (gint item_index, gi::Collection<GHashTable, std::pair<char*, ::GVariant*>, gi::transfer_full_t> & attributes) noexcept = 0;

// GMenuModel* /*full,nullable*/ MenuModel::get_item_link (GMenuModel* model /*none*/, gint item_index, const gchar* link /*none*/);
// ::GMenuModel* /*full,nullable*/ MenuModel::get_item_link (::GMenuModel* model /*none*/, gint item_index, const char* link /*none*/);
virtual Gio::MenuModel get_item_link_ (gint item_index, const gi::cstring_v link) noexcept = 0;

// void MenuModel::get_item_links (GMenuModel* model /*none*/, gint item_index, GHashTable** links /*full,out*/);
// void MenuModel::get_item_links (::GMenuModel* model /*none*/, gint item_index, ::GHashTable** links /*full,out*/);
virtual void get_item_links_ (gint item_index, gi::Collection<GHashTable, std::pair<char*, ::GMenuModel*>, gi::transfer_full_t> & links) noexcept = 0;

// gint MenuModel::get_n_items (GMenuModel* model /*none*/);
// gint MenuModel::get_n_items (::GMenuModel* model /*none*/);
virtual gint get_n_items_ () noexcept = 0;

// gboolean MenuModel::is_mutable (GMenuModel* model /*none*/);
// gboolean MenuModel::is_mutable (::GMenuModel* model /*none*/);
virtual bool is_mutable_ () noexcept = 0;

// GMenuAttributeIter* /*full*/ MenuModel::iterate_item_attributes (GMenuModel* model /*none*/, gint item_index);
// ::GMenuAttributeIter* /*full*/ MenuModel::iterate_item_attributes (::GMenuModel* model /*none*/, gint item_index);
virtual Gio::MenuAttributeIter iterate_item_attributes_ (gint item_index) noexcept = 0;

// GMenuLinkIter* /*full*/ MenuModel::iterate_item_links (GMenuModel* model /*none*/, gint item_index);
// ::GMenuLinkIter* /*full*/ MenuModel::iterate_item_links (::GMenuModel* model /*none*/, gint item_index);
virtual Gio::MenuLinkIter iterate_item_links_ (gint item_index) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MenuModelClass: public detail::ClassTemplate<Gio::impl::internal::MenuModelClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::MenuModelClassDef;
typedef MenuModelClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MenuModelClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GVariant* /*full,nullable*/ MenuModel::get_item_attribute_value (GMenuModel* model /*none*/, gint item_index, const gchar* attribute /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ MenuModel::get_item_attribute_value (::GMenuModel* model /*none*/, gint item_index, const char* attribute /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GI_INLINE_DECL GLib::Variant get_item_attribute_value_ (gint item_index, const gi::cstring_v attribute, const GLib::VariantType_Ref expected_type) noexcept override;

// void MenuModel::get_item_attributes (GMenuModel* model /*none*/, gint item_index, GHashTable** attributes /*full,out*/);
// void MenuModel::get_item_attributes (::GMenuModel* model /*none*/, gint item_index, ::GHashTable** attributes /*full,out*/);
GI_INLINE_DECL void get_item_attributes_ (gint item_index, gi::Collection<GHashTable, std::pair<char*, ::GVariant*>, gi::transfer_full_t> & attributes) noexcept override;

// GMenuModel* /*full,nullable*/ MenuModel::get_item_link (GMenuModel* model /*none*/, gint item_index, const gchar* link /*none*/);
// ::GMenuModel* /*full,nullable*/ MenuModel::get_item_link (::GMenuModel* model /*none*/, gint item_index, const char* link /*none*/);
GI_INLINE_DECL Gio::MenuModel get_item_link_ (gint item_index, const gi::cstring_v link) noexcept override;

// void MenuModel::get_item_links (GMenuModel* model /*none*/, gint item_index, GHashTable** links /*full,out*/);
// void MenuModel::get_item_links (::GMenuModel* model /*none*/, gint item_index, ::GHashTable** links /*full,out*/);
GI_INLINE_DECL void get_item_links_ (gint item_index, gi::Collection<GHashTable, std::pair<char*, ::GMenuModel*>, gi::transfer_full_t> & links) noexcept override;

// gint MenuModel::get_n_items (GMenuModel* model /*none*/);
// gint MenuModel::get_n_items (::GMenuModel* model /*none*/);
GI_INLINE_DECL gint get_n_items_ () noexcept override;

// gboolean MenuModel::is_mutable (GMenuModel* model /*none*/);
// gboolean MenuModel::is_mutable (::GMenuModel* model /*none*/);
GI_INLINE_DECL bool is_mutable_ () noexcept override;

// GMenuAttributeIter* /*full*/ MenuModel::iterate_item_attributes (GMenuModel* model /*none*/, gint item_index);
// ::GMenuAttributeIter* /*full*/ MenuModel::iterate_item_attributes (::GMenuModel* model /*none*/, gint item_index);
GI_INLINE_DECL Gio::MenuAttributeIter iterate_item_attributes_ (gint item_index) noexcept override;

// GMenuLinkIter* /*full*/ MenuModel::iterate_item_links (GMenuModel* model /*none*/, gint item_index);
// ::GMenuLinkIter* /*full*/ MenuModel::iterate_item_links (::GMenuModel* model /*none*/, gint item_index);
GI_INLINE_DECL Gio::MenuLinkIter iterate_item_links_ (gint item_index) noexcept override;


};


struct MenuModelClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(MenuModelClass, get_item_attribute_value)
  GI_MEMBER_DEFINE(MenuModelClass, get_item_attributes)
  GI_MEMBER_DEFINE(MenuModelClass, get_item_link)
  GI_MEMBER_DEFINE(MenuModelClass, get_item_links)
  GI_MEMBER_DEFINE(MenuModelClass, get_n_items)
  GI_MEMBER_DEFINE(MenuModelClass, is_mutable)
  GI_MEMBER_DEFINE(MenuModelClass, iterate_item_attributes)
  GI_MEMBER_DEFINE(MenuModelClass, iterate_item_links)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_item_attribute_value),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_item_attributes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_item_link),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_item_links),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_n_items),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_mutable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iterate_item_attributes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, iterate_item_links)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using MenuModelImpl = detail::ObjectImpl<MenuModel, internal::MenuModelClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
