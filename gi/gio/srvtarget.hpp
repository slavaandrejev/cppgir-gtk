// AUTO-GENERATED

#ifndef _GI_GIO_SRVTARGET_HPP_
#define _GI_GIO_SRVTARGET_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SrvTarget_Ref;

class SrvTarget;

namespace base {


#define GI_GIO_SRVTARGET_BASE base::SrvTargetBase
class SrvTargetBase : public gi::detail::GBoxedWrapperBase<SrvTargetBase, ::GSrvTarget>
{
typedef gi::detail::GBoxedWrapperBase<SrvTargetBase, ::GSrvTarget> super_type;
public:

SrvTargetBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_srv_target_get_type(); } 

// GSrvTarget* /*full*/ g_srv_target_new (const gchar* hostname /*none*/, guint16 port, guint16 priority, guint16 weight);
// ::GSrvTarget* /*full*/ g_srv_target_new (const char* hostname /*none*/, guint16 port, guint16 priority, guint16 weight);
static GI_INLINE_DECL Gio::SrvTarget new_ (const gi::cstring_v hostname, guint16 port, guint16 priority, guint16 weight) noexcept;

// GSrvTarget* /*full*/ g_srv_target_copy (GSrvTarget* target /*none*/);
// ::GSrvTarget* /*full*/ g_srv_target_copy (::GSrvTarget* target /*none*/);
GI_INLINE_DECL Gio::SrvTarget copy () noexcept;

// void g_srv_target_free (GSrvTarget* target /*none*/);
// void g_srv_target_free (::GSrvTarget* target /*none*/);
// IGNORE; marked ignore

// const gchar* /*none*/ g_srv_target_get_hostname (GSrvTarget* target /*none*/);
// const char* /*none*/ g_srv_target_get_hostname (::GSrvTarget* target /*none*/);
GI_INLINE_DECL gi::cstring_v get_hostname () noexcept;

// guint16 g_srv_target_get_port (GSrvTarget* target /*none*/);
// guint16 g_srv_target_get_port (::GSrvTarget* target /*none*/);
GI_INLINE_DECL guint16 get_port () noexcept;

// guint16 g_srv_target_get_priority (GSrvTarget* target /*none*/);
// guint16 g_srv_target_get_priority (::GSrvTarget* target /*none*/);
GI_INLINE_DECL guint16 get_priority () noexcept;

// guint16 g_srv_target_get_weight (GSrvTarget* target /*none*/);
// guint16 g_srv_target_get_weight (::GSrvTarget* target /*none*/);
GI_INLINE_DECL guint16 get_weight () noexcept;

// GList* /*full*/ g_srv_target_list_sort (GList* targets /*none*/);
// ::GList* /*full*/ g_srv_target_list_sort (::GList* targets /*none*/);
static GI_INLINE_DECL gi::Collection<GList, void*, gi::transfer_full_t> list_sort (gi::CollectionParameter<GList, void*, gi::transfer_none_t> targets) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/srvtarget_extra_def.hpp>)
#include <gio/srvtarget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/srvtarget_extra.hpp>)
#include <gio/srvtarget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SrvTarget_Ref;

class SrvTarget : public gi::detail::GBoxedWrapper<SrvTarget, ::GSrvTarget, GI_GIO_SRVTARGET_BASE, SrvTarget_Ref>
{ typedef gi::detail::GBoxedWrapper<SrvTarget, ::GSrvTarget, GI_GIO_SRVTARGET_BASE, SrvTarget_Ref> super_type; using super_type::super_type; };


class SrvTarget_Ref : public gi::detail::GBoxedRefWrapper<SrvTarget, ::GSrvTarget, GI_GIO_SRVTARGET_BASE>
{ typedef gi::detail::GBoxedRefWrapper<SrvTarget, ::GSrvTarget, GI_GIO_SRVTARGET_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSrvTarget>
{ typedef Gio::SrvTarget type; }; 

} // namespace repository

} // namespace gi

#endif
