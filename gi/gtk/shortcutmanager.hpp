// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTMANAGER_HPP_
#define _GI_GTK_SHORTCUTMANAGER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class ShortcutController;

class ShortcutManager;

namespace base {


#define GI_GTK_SHORTCUTMANAGER_BASE base::ShortcutManagerBase
class ShortcutManagerBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkShortcutManager BaseObjectType;

ShortcutManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcut_manager_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutmanager_extra_def.hpp>)
#include <gtk/shortcutmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutmanager_extra.hpp>)
#include <gtk/shortcutmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutManager : public GI_GTK_SHORTCUTMANAGER_BASE
{ typedef GI_GTK_SHORTCUTMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutManager>
{ typedef Gtk::ShortcutManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ShortcutManagerInterfaceDef
{
typedef ShortcutManagerInterfaceDef self;
public:
typedef Gtk::ShortcutManager instance_type;
typedef ::GtkShortcutManagerInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(add_controller) = self;
using GI_MEMBER_CHECK_CONFLICT(remove_controller) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ShortcutManagerInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ShortcutManager::add_controller (GtkShortcutManager* self /*none*/, GtkShortcutController* controller /*none*/);
// void ShortcutManager::add_controller (::GtkShortcutManager* self /*none*/, ::GtkShortcutController* controller /*none*/);
virtual void add_controller_ (Gtk::ShortcutController controller) noexcept = 0;

// void ShortcutManager::remove_controller (GtkShortcutManager* self /*none*/, GtkShortcutController* controller /*none*/);
// void ShortcutManager::remove_controller (::GtkShortcutManager* self /*none*/, ::GtkShortcutController* controller /*none*/);
virtual void remove_controller_ (Gtk::ShortcutController controller) noexcept = 0;


};

using ShortcutManagerImpl = detail::InterfaceImpl<ShortcutManagerInterfaceDef>;

class ShortcutManagerInterfaceClassImpl: public detail::InterfaceClassImpl<ShortcutManagerImpl>
{
friend class internal::ShortcutManagerInterfaceDef;
typedef ShortcutManagerInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ShortcutManagerImpl> super;

protected:
using super::super;

// void ShortcutManager::add_controller (GtkShortcutManager* self /*none*/, GtkShortcutController* controller /*none*/);
// void ShortcutManager::add_controller (::GtkShortcutManager* self /*none*/, ::GtkShortcutController* controller /*none*/);
GI_INLINE_DECL void add_controller_ (Gtk::ShortcutController controller) noexcept override;

// void ShortcutManager::remove_controller (GtkShortcutManager* self /*none*/, GtkShortcutController* controller /*none*/);
// void ShortcutManager::remove_controller (::GtkShortcutManager* self /*none*/, ::GtkShortcutController* controller /*none*/);
GI_INLINE_DECL void remove_controller_ (Gtk::ShortcutController controller) noexcept override;


};


struct ShortcutManagerInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ShortcutManagerInterfaceClassImpl, add_controller)
  GI_MEMBER_DEFINE(ShortcutManagerInterfaceClassImpl, remove_controller)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, add_controller),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, remove_controller)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
