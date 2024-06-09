// AUTO-GENERATED

#ifndef _GI_GLIB_POLLFD_HPP_
#define _GI_GLIB_POLLFD_HPP_


namespace gi {

namespace repository {

namespace GLib {

class PollFD_Ref;

class PollFD;

namespace base {


#define GI_GLIB_POLLFD_BASE base::PollFDBase
class PollFDBase : public gi::detail::GBoxedWrapperBase<PollFDBase, ::GPollFD>
{
typedef gi::detail::GBoxedWrapperBase<PollFDBase, ::GPollFD> super_type;
public:

PollFDBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_pollfd_get_type(); } 

// gint PollFD::fd (const ::GPollFD* obj /*none*/);
// gint PollFD::fd (const ::GPollFD* obj /*none*/);
GI_INLINE_DECL gint fd_ () const noexcept;

//  PollFD::fd (::GPollFD* obj /*none*/, gint _value);
// void PollFD::fd (::GPollFD* obj /*none*/, gint _value);
GI_INLINE_DECL void fd_ (gint _value) noexcept;

// gushort PollFD::events (const ::GPollFD* obj /*none*/);
// gushort PollFD::events (const ::GPollFD* obj /*none*/);
GI_INLINE_DECL gushort events_ () const noexcept;

//  PollFD::events (::GPollFD* obj /*none*/, gushort _value);
// void PollFD::events (::GPollFD* obj /*none*/, gushort _value);
GI_INLINE_DECL void events_ (gushort _value) noexcept;

// gushort PollFD::revents (const ::GPollFD* obj /*none*/);
// gushort PollFD::revents (const ::GPollFD* obj /*none*/);
GI_INLINE_DECL gushort revents_ () const noexcept;

//  PollFD::revents (::GPollFD* obj /*none*/, gushort _value);
// void PollFD::revents (::GPollFD* obj /*none*/, gushort _value);
GI_INLINE_DECL void revents_ (gushort _value) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/pollfd_extra_def.hpp>)
#include <glib/pollfd_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/pollfd_extra.hpp>)
#include <glib/pollfd_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class PollFD_Ref;

class PollFD : public gi::detail::GBoxedWrapper<PollFD, ::GPollFD, GI_GLIB_POLLFD_BASE, PollFD_Ref>
{ typedef gi::detail::GBoxedWrapper<PollFD, ::GPollFD, GI_GLIB_POLLFD_BASE, PollFD_Ref> super_type; using super_type::super_type; };


class PollFD_Ref : public gi::detail::GBoxedRefWrapper<PollFD, ::GPollFD, GI_GLIB_POLLFD_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PollFD, ::GPollFD, GI_GLIB_POLLFD_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GPollFD>
{ typedef GLib::PollFD type; }; 

} // namespace repository

} // namespace gi

#endif
