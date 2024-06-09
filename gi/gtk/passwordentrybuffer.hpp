// AUTO-GENERATED

#ifndef _GI_GTK_PASSWORDENTRYBUFFER_HPP_
#define _GI_GTK_PASSWORDENTRYBUFFER_HPP_

#include "entrybuffer.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class PasswordEntryBuffer;

namespace base {


#define GI_GTK_PASSWORDENTRYBUFFER_BASE base::PasswordEntryBufferBase
class PasswordEntryBufferBase : public Gtk::EntryBuffer
{
typedef Gtk::EntryBuffer super_type;
public:
typedef ::GtkPasswordEntryBuffer BaseObjectType;

PasswordEntryBufferBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_password_entry_buffer_get_type(); } 

// GtkEntryBuffer* /*full*/ gtk_password_entry_buffer_new ();
// ::GtkPasswordEntryBuffer* /*full*/ gtk_password_entry_buffer_new ();
static GI_INLINE_DECL Gtk::PasswordEntryBuffer new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/passwordentrybuffer_extra_def.hpp>)
#include <gtk/passwordentrybuffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/passwordentrybuffer_extra.hpp>)
#include <gtk/passwordentrybuffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PasswordEntryBuffer : public GI_GTK_PASSWORDENTRYBUFFER_BASE
{ typedef GI_GTK_PASSWORDENTRYBUFFER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPasswordEntryBuffer>
{ typedef Gtk::PasswordEntryBuffer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PasswordEntryBufferClassDef
{
typedef PasswordEntryBufferClassDef self;
public:
typedef Gtk::PasswordEntryBuffer instance_type;
typedef ::GtkPasswordEntryBufferClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PasswordEntryBufferClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PasswordEntryBufferClass: public detail::ClassTemplate<Gtk::impl::internal::PasswordEntryBufferClassDef, Gtk::impl::internal::EntryBufferClass>
{
friend class internal::PasswordEntryBufferClassDef;
typedef PasswordEntryBufferClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PasswordEntryBufferClassDef, Gtk::impl::internal::EntryBufferClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PasswordEntryBufferClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using PasswordEntryBufferImpl = detail::ObjectImpl<PasswordEntryBuffer, internal::PasswordEntryBufferClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
