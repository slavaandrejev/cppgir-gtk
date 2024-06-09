// AUTO-GENERATED

#ifndef _GI_GLIB_HOOK_HPP_
#define _GI_GLIB_HOOK_HPP_


namespace gi {

namespace repository {

namespace GLib {

class HookList;
class HookList_Ref;
class Hook_Ref;

class Hook;

namespace base {


#define GI_GLIB_HOOK_BASE base::HookBase
class HookBase : public gi::detail::CBoxedWrapperBase<HookBase, ::GHook>
{
typedef gi::detail::CBoxedWrapperBase<HookBase, ::GHook> super_type;
public:

HookBase (std::nullptr_t = nullptr) : super_type() {}

// ::GHook* /*none*/ Hook::next (const ::GHook* obj /*none*/);
// ::GHook* /*none*/ Hook::next (const ::GHook* obj /*none*/);
GI_INLINE_DECL GLib::Hook_Ref next_ () const noexcept;

// ::GHook* /*none*/ Hook::prev (const ::GHook* obj /*none*/);
// ::GHook* /*none*/ Hook::prev (const ::GHook* obj /*none*/);
GI_INLINE_DECL GLib::Hook_Ref prev_ () const noexcept;

// guint Hook::ref_count (const ::GHook* obj /*none*/);
// guint Hook::ref_count (const ::GHook* obj /*none*/);
GI_INLINE_DECL guint ref_count_ () const noexcept;

//  Hook::ref_count (::GHook* obj /*none*/, guint _value);
// void Hook::ref_count (::GHook* obj /*none*/, guint _value);
GI_INLINE_DECL void ref_count_ (guint _value) noexcept;

// gulong Hook::hook_id (const ::GHook* obj /*none*/);
// gulong Hook::hook_id (const ::GHook* obj /*none*/);
GI_INLINE_DECL gulong hook_id_ () const noexcept;

//  Hook::hook_id (::GHook* obj /*none*/, gulong _value);
// void Hook::hook_id (::GHook* obj /*none*/, gulong _value);
GI_INLINE_DECL void hook_id_ (gulong _value) noexcept;

// guint Hook::flags (const ::GHook* obj /*none*/);
// guint Hook::flags (const ::GHook* obj /*none*/);
GI_INLINE_DECL guint flags_ () const noexcept;

//  Hook::flags (::GHook* obj /*none*/, guint _value);
// void Hook::flags (::GHook* obj /*none*/, guint _value);
GI_INLINE_DECL void flags_ (guint _value) noexcept;

// gint g_hook_compare_ids (GHook* new_hook /*none*/, GHook* sibling /*none*/);
// gint g_hook_compare_ids (::GHook* new_hook /*none*/, ::GHook* sibling /*none*/);
GI_INLINE_DECL gint compare_ids (GLib::Hook_Ref sibling) noexcept;

// FAILURE on g_hook_alloc; No such node (<xmlattr>.transfer-ownership)
// gboolean g_hook_destroy (GHookList* hook_list /*none*/, gulong hook_id);
// gboolean g_hook_destroy (::GHookList* hook_list /*none*/, gulong hook_id);
static GI_INLINE_DECL bool destroy (GLib::HookList_Ref hook_list, gulong hook_id) noexcept;

// void g_hook_destroy_link (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// void g_hook_destroy_link (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
static GI_INLINE_DECL void destroy_link (GLib::HookList_Ref hook_list, GLib::Hook_Ref hook) noexcept;

// FAILURE on g_hook_find; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_data; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_func; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_func_data; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_first_valid; No such node (<xmlattr>.transfer-ownership)
// void g_hook_free (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// void g_hook_free (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
// IGNORE; marked ignore

// FAILURE on g_hook_get; No such node (<xmlattr>.transfer-ownership)
// void g_hook_insert_before (GHookList* hook_list /*none*/, GHook* sibling /*none,nullable*/, GHook* hook /*none*/);
// void g_hook_insert_before (::GHookList* hook_list /*none*/, ::GHook* sibling /*none,nullable*/, ::GHook* hook /*none*/);
static GI_INLINE_DECL void insert_before (GLib::HookList_Ref hook_list, GLib::Hook_Ref sibling, GLib::Hook_Ref hook) noexcept;
static GI_INLINE_DECL void insert_before (GLib::HookList_Ref hook_list, GLib::Hook_Ref hook) noexcept;

// void g_hook_insert_sorted (GHookList* hook_list /*none*/, GHook* hook /*none*/, GHookCompareFunc func /*none*/);
// void g_hook_insert_sorted (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/,  func /*none*/);
// SKIP; func type  not supported

// FAILURE on g_hook_next_valid; No such node (<xmlattr>.transfer-ownership)
// void g_hook_prepend (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// void g_hook_prepend (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
static GI_INLINE_DECL void prepend (GLib::HookList_Ref hook_list, GLib::Hook_Ref hook) noexcept;

// FAILURE on g_hook_ref; No such node (<xmlattr>.transfer-ownership)
// void g_hook_unref (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// void g_hook_unref (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/hook_extra_def.hpp>)
#include <glib/hook_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/hook_extra.hpp>)
#include <glib/hook_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Hook_Ref;

class Hook : public gi::detail::CBoxedWrapper<Hook, ::GHook, GI_GLIB_HOOK_BASE, Hook_Ref>
{ typedef gi::detail::CBoxedWrapper<Hook, ::GHook, GI_GLIB_HOOK_BASE, Hook_Ref> super_type; using super_type::super_type; };


class Hook_Ref : public gi::detail::CBoxedRefWrapper<Hook, ::GHook, GI_GLIB_HOOK_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Hook, ::GHook, GI_GLIB_HOOK_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GHook>
{ typedef GLib::Hook type; }; 

} // namespace repository

} // namespace gi

#endif
