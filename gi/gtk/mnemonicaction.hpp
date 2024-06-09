// AUTO-GENERATED

#ifndef _GI_GTK_MNEMONICACTION_HPP_
#define _GI_GTK_MNEMONICACTION_HPP_

#include "shortcutaction.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class MnemonicAction;

namespace base {


#define GI_GTK_MNEMONICACTION_BASE base::MnemonicActionBase
class MnemonicActionBase : public Gtk::ShortcutAction
{
typedef Gtk::ShortcutAction super_type;
public:
typedef ::GtkMnemonicAction BaseObjectType;

MnemonicActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_mnemonic_action_get_type(); } 

// GtkShortcutAction* /*none*/ gtk_mnemonic_action_get ();
// ::GtkMnemonicAction* /*none*/ gtk_mnemonic_action_get ();
static GI_INLINE_DECL Gtk::MnemonicAction get () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mnemonicaction_extra_def.hpp>)
#include <gtk/mnemonicaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mnemonicaction_extra.hpp>)
#include <gtk/mnemonicaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MnemonicAction : public GI_GTK_MNEMONICACTION_BASE
{ typedef GI_GTK_MNEMONICACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMnemonicAction>
{ typedef Gtk::MnemonicAction type; }; 

} // namespace repository

} // namespace gi

#endif
