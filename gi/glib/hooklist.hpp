// AUTO-GENERATED

#ifndef _GI_GLIB_HOOKLIST_HPP_
#define _GI_GLIB_HOOKLIST_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Hook;
class HookList_Ref;
class Hook_Ref;

class HookList;

namespace base {


#define GI_GLIB_HOOKLIST_BASE base::HookListBase
class HookListBase : public gi::detail::CBoxedWrapperBase<HookListBase, ::GHookList>
{
typedef gi::detail::CBoxedWrapperBase<HookListBase, ::GHookList> super_type;
public:

HookListBase (std::nullptr_t = nullptr) : super_type() {}

// gulong HookList::seq_id (const ::GHookList* obj /*none*/);
// gulong HookList::seq_id (const ::GHookList* obj /*none*/);
GI_INLINE_DECL gulong seq_id_ () const noexcept;

//  HookList::seq_id (::GHookList* obj /*none*/, gulong _value);
// void HookList::seq_id (::GHookList* obj /*none*/, gulong _value);
GI_INLINE_DECL void seq_id_ (gulong _value) noexcept;

// guint HookList::hook_size (const ::GHookList* obj /*none*/);
// guint HookList::hook_size (const ::GHookList* obj /*none*/);
GI_INLINE_DECL guint hook_size_ () const noexcept;

//  HookList::hook_size (::GHookList* obj /*none*/, guint _value);
// void HookList::hook_size (::GHookList* obj /*none*/, guint _value);
GI_INLINE_DECL void hook_size_ (guint _value) noexcept;

// guint HookList::is_setup (const ::GHookList* obj /*none*/);
// guint HookList::is_setup (const ::GHookList* obj /*none*/);
GI_INLINE_DECL guint is_setup_ () const noexcept;

//  HookList::is_setup (::GHookList* obj /*none*/, guint _value);
// void HookList::is_setup (::GHookList* obj /*none*/, guint _value);
GI_INLINE_DECL void is_setup_ (guint _value) noexcept;

// ::GHook* /*none*/ HookList::hooks (const ::GHookList* obj /*none*/);
// ::GHook* /*none*/ HookList::hooks (const ::GHookList* obj /*none*/);
GI_INLINE_DECL GLib::Hook_Ref hooks_ () const noexcept;

// void g_hook_list_clear (GHookList* hook_list /*none*/);
// void g_hook_list_clear (::GHookList* hook_list /*none*/);
GI_INLINE_DECL void clear () noexcept;

// void g_hook_list_init (GHookList* hook_list /*none*/, guint hook_size);
// void g_hook_list_init (::GHookList* hook_list /*none*/, guint hook_size);
GI_INLINE_DECL void init (guint hook_size) noexcept;

// void g_hook_list_invoke (GHookList* hook_list /*none*/, gboolean may_recurse);
// void g_hook_list_invoke (::GHookList* hook_list /*none*/, gboolean may_recurse);
GI_INLINE_DECL void invoke (gboolean may_recurse) noexcept;

// void g_hook_list_invoke_check (GHookList* hook_list /*none*/, gboolean may_recurse);
// void g_hook_list_invoke_check (::GHookList* hook_list /*none*/, gboolean may_recurse);
GI_INLINE_DECL void invoke_check (gboolean may_recurse) noexcept;

// void g_hook_list_marshal (GHookList* hook_list /*none*/, gboolean may_recurse, GHookMarshaller marshaller /*none*/, gpointer marshal_data);
// void g_hook_list_marshal (::GHookList* hook_list /*none*/, gboolean may_recurse, GLib::HookMarshaller::cfunction_type marshaller /*none*/, void* marshal_data);
GI_INLINE_DECL void marshal (gboolean may_recurse, GLib::HookMarshaller marshaller) noexcept;

// void g_hook_list_marshal_check (GHookList* hook_list /*none*/, gboolean may_recurse, GHookCheckMarshaller marshaller /*none*/, gpointer marshal_data);
// void g_hook_list_marshal_check (::GHookList* hook_list /*none*/, gboolean may_recurse, GLib::HookCheckMarshaller::cfunction_type marshaller /*none*/, void* marshal_data);
GI_INLINE_DECL void marshal_check (gboolean may_recurse, GLib::HookCheckMarshaller marshaller) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/hooklist_extra_def.hpp>)
#include <glib/hooklist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/hooklist_extra.hpp>)
#include <glib/hooklist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class HookList_Ref;

class HookList : public gi::detail::CBoxedWrapper<HookList, ::GHookList, GI_GLIB_HOOKLIST_BASE, HookList_Ref>
{ typedef gi::detail::CBoxedWrapper<HookList, ::GHookList, GI_GLIB_HOOKLIST_BASE, HookList_Ref> super_type; using super_type::super_type; };


class HookList_Ref : public gi::detail::CBoxedRefWrapper<HookList, ::GHookList, GI_GLIB_HOOKLIST_BASE>
{ typedef gi::detail::CBoxedRefWrapper<HookList, ::GHookList, GI_GLIB_HOOKLIST_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GHookList>
{ typedef GLib::HookList type; }; 

} // namespace repository

} // namespace gi

#endif
