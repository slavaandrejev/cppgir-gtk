// AUTO-GENERATED

#ifndef _GI_GTK_SECTIONMODEL_HPP_
#define _GI_GTK_SECTIONMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class SectionModel;

namespace base {


#define GI_GTK_SECTIONMODEL_BASE base::SectionModelBase
class SectionModelBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkSectionModel BaseObjectType;

SectionModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_section_model_get_type(); } 

// void gtk_section_model_get_section (GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
// void gtk_section_model_get_section (::GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
GI_INLINE_DECL void get_section (guint position, guint & out_start, guint & out_end) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> get_section (guint position) noexcept;

// void gtk_section_model_sections_changed (GtkSectionModel* self /*none*/, guint position, guint n_items);
// void gtk_section_model_sections_changed (::GtkSectionModel* self /*none*/, guint position, guint n_items);
GI_INLINE_DECL void sections_changed (guint position, guint n_items) noexcept;

// (signal) void sections-changed (guint position, guint n_items);
// (signal) void sections-changed (guint position, guint n_items);
gi::signal_proxy<void(Gtk::SectionModel, guint position, guint n_items)> signal_sections_changed()
{ return gi::signal_proxy<void(Gtk::SectionModel, guint position, guint n_items)> (*this, "sections-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/sectionmodel_extra_def.hpp>)
#include <gtk/sectionmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/sectionmodel_extra.hpp>)
#include <gtk/sectionmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SectionModel : public GI_GTK_SECTIONMODEL_BASE
{ typedef GI_GTK_SECTIONMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSectionModel>
{ typedef Gtk::SectionModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SectionModelInterfaceDef
{
typedef SectionModelInterfaceDef self;
public:
typedef Gtk::SectionModel instance_type;
typedef ::GtkSectionModelInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_section) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SectionModelInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void SectionModel::get_section (GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
// void SectionModel::get_section (::GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
virtual void get_section_ (guint position, guint & out_start, guint & out_end) noexcept = 0;


};

using SectionModelImpl = detail::InterfaceImpl<SectionModelInterfaceDef>;

class SectionModelInterfaceClassImpl: public detail::InterfaceClassImpl<SectionModelImpl>
{
friend class internal::SectionModelInterfaceDef;
typedef SectionModelInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<SectionModelImpl> super;

protected:
using super::super;

// void SectionModel::get_section (GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
// void SectionModel::get_section (::GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
GI_INLINE_DECL void get_section_ (guint position, guint & out_start, guint & out_end) noexcept override;


};


struct SectionModelInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(SectionModelInterfaceClassImpl, get_section)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_section)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
