// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSBACKEND_HPP_
#define _GI_GIO_SETTINGSBACKEND_HPP_


namespace gi {

namespace repository {

namespace Gio {


class SettingsBackend;

namespace base {


#define GI_GIO_SETTINGSBACKEND_BASE base::SettingsBackendBase
class SettingsBackendBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSettingsBackend BaseObjectType;

SettingsBackendBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_settings_backend_get_type(); } 

// void g_settings_backend_flatten_tree (GTree* tree /*none*/, gchar** path /*full,out*/, const gchar*** keys /*container,out*/, GVariant*** values /*container,out,opt*/);
// void g_settings_backend_flatten_tree (::GTree* tree /*none*/, char** path /*full,out*/, const char*** keys /*container,out*/, ::GVariant*** values /*container,out,opt*/);
static GI_INLINE_DECL void flatten_tree (GLib::Tree_Ref tree, gi::cstring & path, gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t> & keys, gi::Collection<gi::ZTSpan, ::GVariant*, gi::transfer_container_t> * values) noexcept;
static GI_INLINE_DECL std::tuple<gi::cstring, gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>, gi::Collection<gi::ZTSpan, ::GVariant*, gi::transfer_container_t>> flatten_tree (GLib::Tree_Ref tree) noexcept;

// GSettingsBackend* /*full*/ g_settings_backend_get_default ();
// ::GSettingsBackend* /*full*/ g_settings_backend_get_default ();
static GI_INLINE_DECL Gio::SettingsBackend get_default () noexcept;

// void g_settings_backend_changed (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, gpointer origin_tag);
// void g_settings_backend_changed (::GSettingsBackend* backend /*none*/, const char* key /*none*/, void* origin_tag);
GI_INLINE_DECL void changed (const gi::cstring_v key, void* origin_tag) noexcept;

// void g_settings_backend_changed_tree (GSettingsBackend* backend /*none*/, GTree* tree /*none*/, gpointer origin_tag);
// void g_settings_backend_changed_tree (::GSettingsBackend* backend /*none*/, ::GTree* tree /*none*/, void* origin_tag);
GI_INLINE_DECL void changed_tree (GLib::Tree_Ref tree, void* origin_tag) noexcept;

// void g_settings_backend_keys_changed (GSettingsBackend* backend /*none*/, const gchar* path /*none*/, const gchar* const* items /*none*/, gpointer origin_tag);
// void g_settings_backend_keys_changed (::GSettingsBackend* backend /*none*/, const char* path /*none*/, const char** items /*none*/, void* origin_tag);
GI_INLINE_DECL void keys_changed (const gi::cstring_v path, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> items, void* origin_tag) noexcept;

// void g_settings_backend_path_changed (GSettingsBackend* backend /*none*/, const gchar* path /*none*/, gpointer origin_tag);
// void g_settings_backend_path_changed (::GSettingsBackend* backend /*none*/, const char* path /*none*/, void* origin_tag);
GI_INLINE_DECL void path_changed (const gi::cstring_v path, void* origin_tag) noexcept;

// void g_settings_backend_path_writable_changed (GSettingsBackend* backend /*none*/, const gchar* path /*none*/);
// void g_settings_backend_path_writable_changed (::GSettingsBackend* backend /*none*/, const char* path /*none*/);
GI_INLINE_DECL void path_writable_changed (const gi::cstring_v path) noexcept;

// void g_settings_backend_writable_changed (GSettingsBackend* backend /*none*/, const gchar* key /*none*/);
// void g_settings_backend_writable_changed (::GSettingsBackend* backend /*none*/, const char* key /*none*/);
GI_INLINE_DECL void writable_changed (const gi::cstring_v key) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsbackend_extra_def.hpp>)
#include <gio/settingsbackend_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsbackend_extra.hpp>)
#include <gio/settingsbackend_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SettingsBackend : public GI_GIO_SETTINGSBACKEND_BASE
{ typedef GI_GIO_SETTINGSBACKEND_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSettingsBackend>
{ typedef Gio::SettingsBackend type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SettingsBackendClassDef
{
typedef SettingsBackendClassDef self;
public:
typedef Gio::SettingsBackend instance_type;
typedef ::GSettingsBackendClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_writable) = self;
using GI_MEMBER_CHECK_CONFLICT(read) = self;
using GI_MEMBER_CHECK_CONFLICT(read_user_value) = self;
using GI_MEMBER_CHECK_CONFLICT(reset) = self;
using GI_MEMBER_CHECK_CONFLICT(subscribe) = self;
using GI_MEMBER_CHECK_CONFLICT(sync) = self;
using GI_MEMBER_CHECK_CONFLICT(unsubscribe) = self;
using GI_MEMBER_CHECK_CONFLICT(write) = self;
using GI_MEMBER_CHECK_CONFLICT(write_tree) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SettingsBackendClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean SettingsBackend::get_writable (GSettingsBackend* backend /*none*/, const gchar* key /*none*/);
// gboolean SettingsBackend::get_writable (::GSettingsBackend* backend /*none*/, const char* key /*none*/);
virtual bool get_writable_ (const gi::cstring_v key) noexcept = 0;

// GVariant* /*full*/ SettingsBackend::read (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none*/, gboolean default_value);
// ::GVariant* /*full*/ SettingsBackend::read (::GSettingsBackend* backend /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none*/, gboolean default_value);
virtual GLib::Variant read_ (const gi::cstring_v key, const GLib::VariantType_Ref expected_type, gboolean default_value) noexcept = 0;

// GVariant* /*full*/ SettingsBackend::read_user_value (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none*/);
// ::GVariant* /*full*/ SettingsBackend::read_user_value (::GSettingsBackend* backend /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none*/);
virtual GLib::Variant read_user_value_ (const gi::cstring_v key, const GLib::VariantType_Ref expected_type) noexcept = 0;

// void SettingsBackend::reset (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, gpointer origin_tag);
// void SettingsBackend::reset (::GSettingsBackend* backend /*none*/, const char* key /*none*/, void* origin_tag);
virtual void reset_ (const gi::cstring_v key, void* origin_tag) noexcept = 0;

// void SettingsBackend::subscribe (GSettingsBackend* backend /*none*/, const gchar* name /*none*/);
// void SettingsBackend::subscribe (::GSettingsBackend* backend /*none*/, const char* name /*none*/);
virtual void subscribe_ (const gi::cstring_v name) noexcept = 0;

// void SettingsBackend::sync (GSettingsBackend* backend /*none*/);
// void SettingsBackend::sync (::GSettingsBackend* backend /*none*/);
virtual void sync_ () noexcept = 0;

// void SettingsBackend::unsubscribe (GSettingsBackend* backend /*none*/, const gchar* name /*none*/);
// void SettingsBackend::unsubscribe (::GSettingsBackend* backend /*none*/, const char* name /*none*/);
virtual void unsubscribe_ (const gi::cstring_v name) noexcept = 0;

// gboolean SettingsBackend::write (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, GVariant* value /*none*/, gpointer origin_tag);
// gboolean SettingsBackend::write (::GSettingsBackend* backend /*none*/, const char* key /*none*/, ::GVariant* value /*none*/, void* origin_tag);
virtual bool write_ (const gi::cstring_v key, GLib::Variant value, void* origin_tag) noexcept = 0;

// gboolean SettingsBackend::write_tree (GSettingsBackend* backend /*none*/, GTree* tree /*none*/, gpointer origin_tag);
// gboolean SettingsBackend::write_tree (::GSettingsBackend* backend /*none*/, ::GTree* tree /*none*/, void* origin_tag);
virtual bool write_tree_ (GLib::Tree_Ref tree, void* origin_tag) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SettingsBackendClass: public detail::ClassTemplate<Gio::impl::internal::SettingsBackendClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::SettingsBackendClassDef;
typedef SettingsBackendClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SettingsBackendClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean SettingsBackend::get_writable (GSettingsBackend* backend /*none*/, const gchar* key /*none*/);
// gboolean SettingsBackend::get_writable (::GSettingsBackend* backend /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool get_writable_ (const gi::cstring_v key) noexcept override;

// GVariant* /*full*/ SettingsBackend::read (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none*/, gboolean default_value);
// ::GVariant* /*full*/ SettingsBackend::read (::GSettingsBackend* backend /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none*/, gboolean default_value);
GI_INLINE_DECL GLib::Variant read_ (const gi::cstring_v key, const GLib::VariantType_Ref expected_type, gboolean default_value) noexcept override;

// GVariant* /*full*/ SettingsBackend::read_user_value (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none*/);
// ::GVariant* /*full*/ SettingsBackend::read_user_value (::GSettingsBackend* backend /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none*/);
GI_INLINE_DECL GLib::Variant read_user_value_ (const gi::cstring_v key, const GLib::VariantType_Ref expected_type) noexcept override;

// void SettingsBackend::reset (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, gpointer origin_tag);
// void SettingsBackend::reset (::GSettingsBackend* backend /*none*/, const char* key /*none*/, void* origin_tag);
GI_INLINE_DECL void reset_ (const gi::cstring_v key, void* origin_tag) noexcept override;

// void SettingsBackend::subscribe (GSettingsBackend* backend /*none*/, const gchar* name /*none*/);
// void SettingsBackend::subscribe (::GSettingsBackend* backend /*none*/, const char* name /*none*/);
GI_INLINE_DECL void subscribe_ (const gi::cstring_v name) noexcept override;

// void SettingsBackend::sync (GSettingsBackend* backend /*none*/);
// void SettingsBackend::sync (::GSettingsBackend* backend /*none*/);
GI_INLINE_DECL void sync_ () noexcept override;

// void SettingsBackend::unsubscribe (GSettingsBackend* backend /*none*/, const gchar* name /*none*/);
// void SettingsBackend::unsubscribe (::GSettingsBackend* backend /*none*/, const char* name /*none*/);
GI_INLINE_DECL void unsubscribe_ (const gi::cstring_v name) noexcept override;

// gboolean SettingsBackend::write (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, GVariant* value /*none*/, gpointer origin_tag);
// gboolean SettingsBackend::write (::GSettingsBackend* backend /*none*/, const char* key /*none*/, ::GVariant* value /*none*/, void* origin_tag);
GI_INLINE_DECL bool write_ (const gi::cstring_v key, GLib::Variant value, void* origin_tag) noexcept override;

// gboolean SettingsBackend::write_tree (GSettingsBackend* backend /*none*/, GTree* tree /*none*/, gpointer origin_tag);
// gboolean SettingsBackend::write_tree (::GSettingsBackend* backend /*none*/, ::GTree* tree /*none*/, void* origin_tag);
GI_INLINE_DECL bool write_tree_ (GLib::Tree_Ref tree, void* origin_tag) noexcept override;


};


struct SettingsBackendClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(SettingsBackendClass, get_writable)
  GI_MEMBER_DEFINE(SettingsBackendClass, read)
  GI_MEMBER_DEFINE(SettingsBackendClass, read_user_value)
  GI_MEMBER_DEFINE(SettingsBackendClass, reset)
  GI_MEMBER_DEFINE(SettingsBackendClass, subscribe)
  GI_MEMBER_DEFINE(SettingsBackendClass, sync)
  GI_MEMBER_DEFINE(SettingsBackendClass, unsubscribe)
  GI_MEMBER_DEFINE(SettingsBackendClass, write)
  GI_MEMBER_DEFINE(SettingsBackendClass, write_tree)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_writable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read_user_value),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, reset),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, subscribe),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, sync),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unsubscribe),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, write),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, write_tree)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SettingsBackendImpl = detail::ObjectImpl<SettingsBackend, internal::SettingsBackendClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
