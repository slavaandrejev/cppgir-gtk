// AUTO-GENERATED

#ifndef _GI_GIO_LOADABLEICON_HPP_
#define _GI_GIO_LOADABLEICON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;

class LoadableIcon;

namespace base {


#define GI_GIO_LOADABLEICON_BASE base::LoadableIconBase
class LoadableIconBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GLoadableIcon BaseObjectType;

LoadableIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_loadable_icon_get_type(); } 

// GInputStream* /*full*/ g_loadable_icon_load (GLoadableIcon* icon /*none*/, int size, char** type /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GInputStream* /*full*/ g_loadable_icon_load (::GLoadableIcon* icon /*none*/, gint size, char** type /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::InputStream load (gint size, gi::cstring * type, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::InputStream load (gint size, gi::cstring * type);
GI_INLINE_DECL Gio::InputStream load (gint size, gi::cstring * type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::InputStream load (gint size, gi::cstring * type, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring> load (gint size, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring> load (gint size);
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring> load (gint size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring> load (gint size, GLib::Error * _error) noexcept;

// void g_loadable_icon_load_async (GLoadableIcon* icon /*none*/, int size, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_loadable_icon_load_async (::GLoadableIcon* icon /*none*/, gint size, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void load_async (gint size, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_async (gint size, Gio::AsyncReadyCallback callback) noexcept;

// GInputStream* /*full*/ g_loadable_icon_load_finish (GLoadableIcon* icon /*none*/, GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
// ::GInputStream* /*full*/ g_loadable_icon_load_finish (::GLoadableIcon* icon /*none*/, ::GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
GI_INLINE_DECL Gio::InputStream load_finish (Gio::AsyncResult res, gi::cstring * type);
GI_INLINE_DECL Gio::InputStream load_finish (Gio::AsyncResult res, gi::cstring * type, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring> load_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring> load_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/loadableicon_extra_def.hpp>)
#include <gio/loadableicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/loadableicon_extra.hpp>)
#include <gio/loadableicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class LoadableIcon : public GI_GIO_LOADABLEICON_BASE
{ typedef GI_GIO_LOADABLEICON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GLoadableIcon>
{ typedef Gio::LoadableIcon type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class LoadableIconIfaceDef
{
typedef LoadableIconIfaceDef self;
public:
typedef Gio::LoadableIcon instance_type;
typedef ::GLoadableIconIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(load) = self;
using GI_MEMBER_CHECK_CONFLICT(load_async) = self;
using GI_MEMBER_CHECK_CONFLICT(load_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~LoadableIconIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GInputStream* /*full*/ LoadableIcon::load (GLoadableIcon* icon /*none*/, int size, char** type /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GInputStream* /*full*/ LoadableIcon::load (::GLoadableIcon* icon /*none*/, gint size, char** type /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::InputStream load_ (gint size, gi::cstring & type, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void LoadableIcon::load_async (GLoadableIcon* icon /*none*/, int size, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void LoadableIcon::load_async (::GLoadableIcon* icon /*none*/, gint size, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void load_async_ (gint size, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GInputStream* /*full*/ LoadableIcon::load_finish (GLoadableIcon* icon /*none*/, GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
// ::GInputStream* /*full*/ LoadableIcon::load_finish (::GLoadableIcon* icon /*none*/, ::GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
virtual Gio::InputStream load_finish_ (Gio::AsyncResult res, gi::cstring & type, GLib::Error * _error) = 0;


};

using LoadableIconImpl = detail::InterfaceImpl<LoadableIconIfaceDef>;

class LoadableIconIfaceClassImpl: public detail::InterfaceClassImpl<LoadableIconImpl>
{
friend class internal::LoadableIconIfaceDef;
typedef LoadableIconIfaceClassImpl self;
typedef detail::InterfaceClassImpl<LoadableIconImpl> super;

protected:
using super::super;

// GInputStream* /*full*/ LoadableIcon::load (GLoadableIcon* icon /*none*/, int size, char** type /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GInputStream* /*full*/ LoadableIcon::load (::GLoadableIcon* icon /*none*/, gint size, char** type /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::InputStream load_ (gint size, gi::cstring & type, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void LoadableIcon::load_async (GLoadableIcon* icon /*none*/, int size, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void LoadableIcon::load_async (::GLoadableIcon* icon /*none*/, gint size, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void load_async_ (gint size, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GInputStream* /*full*/ LoadableIcon::load_finish (GLoadableIcon* icon /*none*/, GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
// ::GInputStream* /*full*/ LoadableIcon::load_finish (::GLoadableIcon* icon /*none*/, ::GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
GI_INLINE_DECL Gio::InputStream load_finish_ (Gio::AsyncResult res, gi::cstring & type, GLib::Error * _error) override;


};


struct LoadableIconIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(LoadableIconIfaceClassImpl, load)
  GI_MEMBER_DEFINE(LoadableIconIfaceClassImpl, load_async)
  GI_MEMBER_DEFINE(LoadableIconIfaceClassImpl, load_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, load),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, load_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, load_finish)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
