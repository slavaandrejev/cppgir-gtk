// AUTO-GENERATED

#ifndef _GI_GIO_MOUNTOPERATION_HPP_
#define _GI_GIO_MOUNTOPERATION_HPP_


namespace gi {

namespace repository {

namespace Gio {


class MountOperation;

namespace base {


#define GI_GIO_MOUNTOPERATION_BASE base::MountOperationBase
class MountOperationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMountOperation BaseObjectType;

MountOperationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_mount_operation_get_type(); } 

// GMountOperation* /*full*/ g_mount_operation_new ();
// ::GMountOperation* /*full*/ g_mount_operation_new ();
static GI_INLINE_DECL Gio::MountOperation new_ () noexcept;

// gboolean g_mount_operation_get_anonymous (GMountOperation* op /*none*/);
// gboolean g_mount_operation_get_anonymous (::GMountOperation* op /*none*/);
GI_INLINE_DECL bool get_anonymous () noexcept;

// int g_mount_operation_get_choice (GMountOperation* op /*none*/);
// gint g_mount_operation_get_choice (::GMountOperation* op /*none*/);
GI_INLINE_DECL gint get_choice () noexcept;

// const char* /*none,nullable*/ g_mount_operation_get_domain (GMountOperation* op /*none*/);
// const char* /*none,nullable*/ g_mount_operation_get_domain (::GMountOperation* op /*none*/);
GI_INLINE_DECL gi::cstring_v get_domain () noexcept;

// gboolean g_mount_operation_get_is_tcrypt_hidden_volume (GMountOperation* op /*none*/);
// gboolean g_mount_operation_get_is_tcrypt_hidden_volume (::GMountOperation* op /*none*/);
GI_INLINE_DECL bool get_is_tcrypt_hidden_volume () noexcept;

// gboolean g_mount_operation_get_is_tcrypt_system_volume (GMountOperation* op /*none*/);
// gboolean g_mount_operation_get_is_tcrypt_system_volume (::GMountOperation* op /*none*/);
GI_INLINE_DECL bool get_is_tcrypt_system_volume () noexcept;

// const char* /*none,nullable*/ g_mount_operation_get_password (GMountOperation* op /*none*/);
// const char* /*none,nullable*/ g_mount_operation_get_password (::GMountOperation* op /*none*/);
GI_INLINE_DECL gi::cstring_v get_password () noexcept;

// GPasswordSave g_mount_operation_get_password_save (GMountOperation* op /*none*/);
// ::GPasswordSave g_mount_operation_get_password_save (::GMountOperation* op /*none*/);
GI_INLINE_DECL Gio::PasswordSave get_password_save () noexcept;

// guint g_mount_operation_get_pim (GMountOperation* op /*none*/);
// guint g_mount_operation_get_pim (::GMountOperation* op /*none*/);
GI_INLINE_DECL guint get_pim () noexcept;

// const char* /*none,nullable*/ g_mount_operation_get_username (GMountOperation* op /*none*/);
// const char* /*none,nullable*/ g_mount_operation_get_username (::GMountOperation* op /*none*/);
GI_INLINE_DECL gi::cstring_v get_username () noexcept;

// void g_mount_operation_reply (GMountOperation* op /*none*/, GMountOperationResult result);
// void g_mount_operation_reply (::GMountOperation* op /*none*/, ::GMountOperationResult result);
GI_INLINE_DECL void reply (Gio::MountOperationResult result) noexcept;

// void g_mount_operation_set_anonymous (GMountOperation* op /*none*/, gboolean anonymous);
// void g_mount_operation_set_anonymous (::GMountOperation* op /*none*/, gboolean anonymous);
GI_INLINE_DECL void set_anonymous (gboolean anonymous) noexcept;

// void g_mount_operation_set_choice (GMountOperation* op /*none*/, int choice);
// void g_mount_operation_set_choice (::GMountOperation* op /*none*/, gint choice);
GI_INLINE_DECL void set_choice (gint choice) noexcept;

// void g_mount_operation_set_domain (GMountOperation* op /*none*/, const char* domain /*none,nullable*/);
// void g_mount_operation_set_domain (::GMountOperation* op /*none*/, const char* domain /*none,nullable*/);
GI_INLINE_DECL void set_domain (const gi::cstring_v domain) noexcept;
GI_INLINE_DECL void set_domain () noexcept;

// void g_mount_operation_set_is_tcrypt_hidden_volume (GMountOperation* op /*none*/, gboolean hidden_volume);
// void g_mount_operation_set_is_tcrypt_hidden_volume (::GMountOperation* op /*none*/, gboolean hidden_volume);
GI_INLINE_DECL void set_is_tcrypt_hidden_volume (gboolean hidden_volume) noexcept;

// void g_mount_operation_set_is_tcrypt_system_volume (GMountOperation* op /*none*/, gboolean system_volume);
// void g_mount_operation_set_is_tcrypt_system_volume (::GMountOperation* op /*none*/, gboolean system_volume);
GI_INLINE_DECL void set_is_tcrypt_system_volume (gboolean system_volume) noexcept;

// void g_mount_operation_set_password (GMountOperation* op /*none*/, const char* password /*none,nullable*/);
// void g_mount_operation_set_password (::GMountOperation* op /*none*/, const char* password /*none,nullable*/);
GI_INLINE_DECL void set_password (const gi::cstring_v password) noexcept;
GI_INLINE_DECL void set_password () noexcept;

// void g_mount_operation_set_password_save (GMountOperation* op /*none*/, GPasswordSave save);
// void g_mount_operation_set_password_save (::GMountOperation* op /*none*/, ::GPasswordSave save);
GI_INLINE_DECL void set_password_save (Gio::PasswordSave save) noexcept;

// void g_mount_operation_set_pim (GMountOperation* op /*none*/, guint pim);
// void g_mount_operation_set_pim (::GMountOperation* op /*none*/, guint pim);
GI_INLINE_DECL void set_pim (guint pim) noexcept;

// void g_mount_operation_set_username (GMountOperation* op /*none*/, const char* username /*none,nullable*/);
// void g_mount_operation_set_username (::GMountOperation* op /*none*/, const char* username /*none,nullable*/);
GI_INLINE_DECL void set_username (const gi::cstring_v username) noexcept;
GI_INLINE_DECL void set_username () noexcept;

gi::property_proxy<bool, base::MountOperationBase> property_anonymous()
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "anonymous"); }
const gi::property_proxy<bool, base::MountOperationBase> property_anonymous() const
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "anonymous"); }

gi::property_proxy<gint, base::MountOperationBase> property_choice()
{ return gi::property_proxy<gint, base::MountOperationBase> (*this, "choice"); }
const gi::property_proxy<gint, base::MountOperationBase> property_choice() const
{ return gi::property_proxy<gint, base::MountOperationBase> (*this, "choice"); }

gi::property_proxy<gi::cstring, base::MountOperationBase> property_domain()
{ return gi::property_proxy<gi::cstring, base::MountOperationBase> (*this, "domain"); }
const gi::property_proxy<gi::cstring, base::MountOperationBase> property_domain() const
{ return gi::property_proxy<gi::cstring, base::MountOperationBase> (*this, "domain"); }

gi::property_proxy<bool, base::MountOperationBase> property_is_tcrypt_hidden_volume()
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-tcrypt-hidden-volume"); }
const gi::property_proxy<bool, base::MountOperationBase> property_is_tcrypt_hidden_volume() const
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-tcrypt-hidden-volume"); }

gi::property_proxy<bool, base::MountOperationBase> property_is_tcrypt_system_volume()
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-tcrypt-system-volume"); }
const gi::property_proxy<bool, base::MountOperationBase> property_is_tcrypt_system_volume() const
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-tcrypt-system-volume"); }

gi::property_proxy<gi::cstring, base::MountOperationBase> property_password()
{ return gi::property_proxy<gi::cstring, base::MountOperationBase> (*this, "password"); }
const gi::property_proxy<gi::cstring, base::MountOperationBase> property_password() const
{ return gi::property_proxy<gi::cstring, base::MountOperationBase> (*this, "password"); }

gi::property_proxy<Gio::PasswordSave, base::MountOperationBase> property_password_save()
{ return gi::property_proxy<Gio::PasswordSave, base::MountOperationBase> (*this, "password-save"); }
const gi::property_proxy<Gio::PasswordSave, base::MountOperationBase> property_password_save() const
{ return gi::property_proxy<Gio::PasswordSave, base::MountOperationBase> (*this, "password-save"); }

gi::property_proxy<guint, base::MountOperationBase> property_pim()
{ return gi::property_proxy<guint, base::MountOperationBase> (*this, "pim"); }
const gi::property_proxy<guint, base::MountOperationBase> property_pim() const
{ return gi::property_proxy<guint, base::MountOperationBase> (*this, "pim"); }

gi::property_proxy<gi::cstring, base::MountOperationBase> property_username()
{ return gi::property_proxy<gi::cstring, base::MountOperationBase> (*this, "username"); }
const gi::property_proxy<gi::cstring, base::MountOperationBase> property_username() const
{ return gi::property_proxy<gi::cstring, base::MountOperationBase> (*this, "username"); }

// (signal) void aborted ();
// (signal) void aborted ();
gi::signal_proxy<void(Gio::MountOperation)> signal_aborted()
{ return gi::signal_proxy<void(Gio::MountOperation)> (*this, "aborted"); }

// (signal) void ask-password (gchar* message /*none*/, gchar* default_user /*none*/, gchar* default_domain /*none*/,  flags);
// (signal) void ask-password (char* message /*none*/, char* default_user /*none*/, char* default_domain /*none*/, ::GAskPasswordFlags flags);
gi::signal_proxy<void(Gio::MountOperation, gi::cstring_v message, gi::cstring_v default_user, gi::cstring_v default_domain, Gio::AskPasswordFlags flags)> signal_ask_password()
{ return gi::signal_proxy<void(Gio::MountOperation, gi::cstring_v message, gi::cstring_v default_user, gi::cstring_v default_domain, Gio::AskPasswordFlags flags)> (*this, "ask-password"); }

// (signal) void ask-question (gchar* message /*none*/,  choices /*none*/);
// (signal) void ask-question (char* message /*none*/, char** choices /*none*/);
gi::signal_proxy<void(Gio::MountOperation, gi::cstring_v message, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> choices)> signal_ask_question()
{ return gi::signal_proxy<void(Gio::MountOperation, gi::cstring_v message, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> choices)> (*this, "ask-question"); }

// (signal) void reply ( result);
// (signal) void reply (::GMountOperationResult result);
gi::signal_proxy<void(Gio::MountOperation, Gio::MountOperationResult result)> signal_reply()
{ return gi::signal_proxy<void(Gio::MountOperation, Gio::MountOperationResult result)> (*this, "reply"); }

// (signal) void show-processes (gchar* message /*none*/,  processes /*none*/,  choices /*none*/);
// (signal) void show-processes (char* message /*none*/,  processes /*none*/, char** choices /*none*/);
// SKIP; processes type  not supported

// (signal) void show-unmount-progress (gchar* message /*none*/, gint64 time_left, gint64 bytes_left);
// (signal) void show-unmount-progress (char* message /*none*/, gint64 time_left, gint64 bytes_left);
gi::signal_proxy<void(Gio::MountOperation, gi::cstring_v message, long long time_left, long long bytes_left)> signal_show_unmount_progress()
{ return gi::signal_proxy<void(Gio::MountOperation, gi::cstring_v message, long long time_left, long long bytes_left)> (*this, "show-unmount-progress"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/mountoperation_extra_def.hpp>)
#include <gio/mountoperation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/mountoperation_extra.hpp>)
#include <gio/mountoperation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MountOperation : public GI_GIO_MOUNTOPERATION_BASE
{ typedef GI_GIO_MOUNTOPERATION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMountOperation>
{ typedef Gio::MountOperation type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MountOperationClassDef
{
typedef MountOperationClassDef self;
public:
typedef Gio::MountOperation instance_type;
typedef ::GMountOperationClass class_type;

using GI_MEMBER_CHECK_CONFLICT(aborted) = self;
using GI_MEMBER_CHECK_CONFLICT(ask_password) = self;
using GI_MEMBER_CHECK_CONFLICT(reply) = self;
using GI_MEMBER_CHECK_CONFLICT(show_unmount_progress) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MountOperationClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void MountOperation::aborted (GMountOperation* op /*none*/);
// void MountOperation::aborted (::GMountOperation* op /*none*/);
virtual void aborted_ () noexcept = 0;

// void MountOperation::ask_password (GMountOperation* op /*none*/, const char* message /*none*/, const char* default_user /*none*/, const char* default_domain /*none*/, GAskPasswordFlags flags);
// void MountOperation::ask_password (::GMountOperation* op /*none*/, const char* message /*none*/, const char* default_user /*none*/, const char* default_domain /*none*/, ::GAskPasswordFlags flags);
virtual void ask_password_ (const gi::cstring_v message, const gi::cstring_v default_user, const gi::cstring_v default_domain, Gio::AskPasswordFlags flags) noexcept = 0;

// void MountOperation::ask_question (GMountOperation* op /*none*/, const char* message /*none*/, const char** choices /*none*/);
// void MountOperation::ask_question (::GMountOperation* op /*none*/, const char* message /*none*/, const char** choices /*none*/);
// IGNORE; marked ignore

// void MountOperation::reply (GMountOperation* op /*none*/, GMountOperationResult result);
// void MountOperation::reply (::GMountOperation* op /*none*/, ::GMountOperationResult result);
virtual void reply_ (Gio::MountOperationResult result) noexcept = 0;

// void MountOperation::show_processes (GMountOperation* op /*none*/, const gchar* message /*none*/, GArray* processes /*none*/, const gchar** choices /*none*/);
// void MountOperation::show_processes (::GMountOperation* op /*none*/, const char* message /*none*/,  processes /*none*/, const char** choices /*none*/);
// SKIP; processes type  not supported

// void MountOperation::show_unmount_progress (GMountOperation* op /*none*/, const gchar* message /*none*/, gint64 time_left, gint64 bytes_left);
// void MountOperation::show_unmount_progress (::GMountOperation* op /*none*/, const char* message /*none*/, gint64 time_left, gint64 bytes_left);
virtual void show_unmount_progress_ (const gi::cstring_v message, gint64 time_left, gint64 bytes_left) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MountOperationClass: public detail::ClassTemplate<Gio::impl::internal::MountOperationClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::MountOperationClassDef;
typedef MountOperationClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MountOperationClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void MountOperation::aborted (GMountOperation* op /*none*/);
// void MountOperation::aborted (::GMountOperation* op /*none*/);
GI_INLINE_DECL void aborted_ () noexcept override;

// void MountOperation::ask_password (GMountOperation* op /*none*/, const char* message /*none*/, const char* default_user /*none*/, const char* default_domain /*none*/, GAskPasswordFlags flags);
// void MountOperation::ask_password (::GMountOperation* op /*none*/, const char* message /*none*/, const char* default_user /*none*/, const char* default_domain /*none*/, ::GAskPasswordFlags flags);
GI_INLINE_DECL void ask_password_ (const gi::cstring_v message, const gi::cstring_v default_user, const gi::cstring_v default_domain, Gio::AskPasswordFlags flags) noexcept override;

// void MountOperation::ask_question (GMountOperation* op /*none*/, const char* message /*none*/, const char** choices /*none*/);
// void MountOperation::ask_question (::GMountOperation* op /*none*/, const char* message /*none*/, const char** choices /*none*/);
// IGNORE; marked ignore

// void MountOperation::reply (GMountOperation* op /*none*/, GMountOperationResult result);
// void MountOperation::reply (::GMountOperation* op /*none*/, ::GMountOperationResult result);
GI_INLINE_DECL void reply_ (Gio::MountOperationResult result) noexcept override;

// void MountOperation::show_processes (GMountOperation* op /*none*/, const gchar* message /*none*/, GArray* processes /*none*/, const gchar** choices /*none*/);
// void MountOperation::show_processes (::GMountOperation* op /*none*/, const char* message /*none*/,  processes /*none*/, const char** choices /*none*/);
// SKIP; processes type  not supported

// void MountOperation::show_unmount_progress (GMountOperation* op /*none*/, const gchar* message /*none*/, gint64 time_left, gint64 bytes_left);
// void MountOperation::show_unmount_progress (::GMountOperation* op /*none*/, const char* message /*none*/, gint64 time_left, gint64 bytes_left);
GI_INLINE_DECL void show_unmount_progress_ (const gi::cstring_v message, gint64 time_left, gint64 bytes_left) noexcept override;


};


struct MountOperationClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(MountOperationClass, aborted)
  GI_MEMBER_DEFINE(MountOperationClass, ask_password)
  GI_MEMBER_DEFINE(MountOperationClass, reply)
  GI_MEMBER_DEFINE(MountOperationClass, show_unmount_progress)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, aborted),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, ask_password),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, reply),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, show_unmount_progress)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using MountOperationImpl = detail::ObjectImpl<MountOperation, internal::MountOperationClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
