// AUTO-GENERATED

#ifndef _GI_GLIB_ONCE_HPP_
#define _GI_GLIB_ONCE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Once_Ref;

class Once;

namespace base {


#define GI_GLIB_ONCE_BASE base::OnceBase
class OnceBase : public gi::detail::CBoxedWrapperBase<OnceBase, ::GOnce>
{
typedef gi::detail::CBoxedWrapperBase<OnceBase, ::GOnce> super_type;
public:

OnceBase (std::nullptr_t = nullptr) : super_type() {}

// gpointer g_once_impl (GOnce* once /*none*/, GThreadFunc func /*none*/, gpointer arg);
// void* g_once_impl (::GOnce* once /*none*/, GLib::ThreadFunc::cfunction_type func /*none*/, void* arg);
// IGNORE; not introspectable, callback misses closure info

// gboolean g_once_init_enter (void* location);
// gboolean g_once_init_enter (void** location);
// SKIP; inconsistent location inout pointer depth (1 vs 2)

// gboolean g_once_init_enter_impl (volatile gsize* location);
// gboolean g_once_init_enter_impl (gsize location);
// SKIP; inconsistent location in pointer depth (1 vs 0)

// gboolean g_once_init_enter_pointer (void* location);
// gboolean g_once_init_enter_pointer (void* location);
static GI_INLINE_DECL bool init_enter_pointer (void* location) noexcept;

// void g_once_init_leave (void* location, gsize result);
// void g_once_init_leave (void** location, gsize result);
// SKIP; inconsistent location inout pointer depth (1 vs 2)

// void g_once_init_leave_pointer (void* location, gpointer result);
// void g_once_init_leave_pointer (void* location, void* result);
static GI_INLINE_DECL void init_leave_pointer (void* location, void* result) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/once_extra_def.hpp>)
#include <glib/once_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/once_extra.hpp>)
#include <glib/once_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Once_Ref;

class Once : public gi::detail::CBoxedWrapper<Once, ::GOnce, GI_GLIB_ONCE_BASE, Once_Ref>
{ typedef gi::detail::CBoxedWrapper<Once, ::GOnce, GI_GLIB_ONCE_BASE, Once_Ref> super_type; using super_type::super_type; };


class Once_Ref : public gi::detail::CBoxedRefWrapper<Once, ::GOnce, GI_GLIB_ONCE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Once, ::GOnce, GI_GLIB_ONCE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GOnce>
{ typedef GLib::Once type; }; 

} // namespace repository

} // namespace gi

#endif
