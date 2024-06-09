// AUTO-GENERATED

#ifndef _GI_GIO_CANCELLABLE_HPP_
#define _GI_GIO_CANCELLABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {


class Cancellable;

namespace base {


#define GI_GIO_CANCELLABLE_BASE base::CancellableBase
class CancellableBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GCancellable BaseObjectType;

CancellableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_cancellable_get_type(); } 

// GCancellable* /*full*/ g_cancellable_new ();
// ::GCancellable* /*full*/ g_cancellable_new ();
static GI_INLINE_DECL Gio::Cancellable new_ () noexcept;

// GCancellable* /*none,nullable*/ g_cancellable_get_current ();
// ::GCancellable* /*none,nullable*/ g_cancellable_get_current ();
static GI_INLINE_DECL Gio::Cancellable get_current () noexcept;

// void g_cancellable_cancel (GCancellable* cancellable /*none,nullable*/);
// void g_cancellable_cancel (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL void cancel () noexcept;

// gulong g_cancellable_connect (GCancellable* cancellable /*none,nullable*/, GCallback callback /*none*/, gpointer data, GDestroyNotify data_destroy_func /*none,nullable*/);
// gulong g_cancellable_connect (::GCancellable* cancellable /*none,nullable*/,  callback /*none*/, void* data, GLib::DestroyNotify::cfunction_type data_destroy_func /*none,nullable*/);
// SKIP; callback type  not supported

// void g_cancellable_disconnect (GCancellable* cancellable /*none,nullable*/, gulong handler_id);
// void g_cancellable_disconnect (::GCancellable* cancellable /*none,nullable*/, gulong handler_id);
GI_INLINE_DECL void disconnect (gulong handler_id) noexcept;

// int g_cancellable_get_fd (GCancellable* cancellable /*none,nullable*/);
// gint g_cancellable_get_fd (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL gint get_fd () noexcept;

// gboolean g_cancellable_is_cancelled (GCancellable* cancellable /*none,nullable*/);
// gboolean g_cancellable_is_cancelled (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL bool is_cancelled () noexcept;

// gboolean g_cancellable_make_pollfd (GCancellable* cancellable /*none,nullable*/, GPollFD* pollfd /*none*/);
// gboolean g_cancellable_make_pollfd (::GCancellable* cancellable /*none,nullable*/, ::GPollFD* pollfd /*none*/);
GI_INLINE_DECL bool make_pollfd (GLib::PollFD_Ref pollfd) noexcept;

// void g_cancellable_pop_current (GCancellable* cancellable /*none,nullable*/);
// void g_cancellable_pop_current (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL void pop_current () noexcept;

// void g_cancellable_push_current (GCancellable* cancellable /*none,nullable*/);
// void g_cancellable_push_current (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL void push_current () noexcept;

// void g_cancellable_release_fd (GCancellable* cancellable /*none,nullable*/);
// void g_cancellable_release_fd (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL void release_fd () noexcept;

// void g_cancellable_reset (GCancellable* cancellable /*none,nullable*/);
// void g_cancellable_reset (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL void reset () noexcept;

// gboolean g_cancellable_set_error_if_cancelled (GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_cancellable_set_error_if_cancelled (::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_error_if_cancelled ();
GI_INLINE_DECL bool set_error_if_cancelled (GLib::Error * _error) noexcept;

// GSource* /*full*/ g_cancellable_source_new (GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_cancellable_source_new (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source source_new () noexcept;

// (signal) void cancelled ();
// (signal) void cancelled ();
gi::signal_proxy<void(Gio::Cancellable)> signal_cancelled()
{ return gi::signal_proxy<void(Gio::Cancellable)> (*this, "cancelled"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/cancellable_extra_def.hpp>)
#include <gio/cancellable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/cancellable_extra.hpp>)
#include <gio/cancellable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Cancellable : public GI_GIO_CANCELLABLE_BASE
{ typedef GI_GIO_CANCELLABLE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GCancellable>
{ typedef Gio::Cancellable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class CancellableClassDef
{
typedef CancellableClassDef self;
public:
typedef Gio::Cancellable instance_type;
typedef ::GCancellableClass class_type;

using GI_MEMBER_CHECK_CONFLICT(cancelled) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~CancellableClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Cancellable::cancelled (GCancellable* cancellable /*none,nullable*/);
// void Cancellable::cancelled (::GCancellable* cancellable /*none,nullable*/);
virtual void cancelled_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CancellableClass: public detail::ClassTemplate<Gio::impl::internal::CancellableClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::CancellableClassDef;
typedef CancellableClass self;
typedef detail::ClassTemplate<Gio::impl::internal::CancellableClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Cancellable::cancelled (GCancellable* cancellable /*none,nullable*/);
// void Cancellable::cancelled (::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL void cancelled_ () noexcept override;


};


struct CancellableClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(CancellableClass, cancelled)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, cancelled)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using CancellableImpl = detail::ObjectImpl<Cancellable, internal::CancellableClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
