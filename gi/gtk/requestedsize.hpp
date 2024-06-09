// AUTO-GENERATED

#ifndef _GI_GTK_REQUESTEDSIZE_HPP_
#define _GI_GTK_REQUESTEDSIZE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class RequestedSize_Ref;

class RequestedSize;

namespace base {


#define GI_GTK_REQUESTEDSIZE_BASE base::RequestedSizeBase
class RequestedSizeBase : public gi::detail::CBoxedWrapperBase<RequestedSizeBase, ::GtkRequestedSize>
{
typedef gi::detail::CBoxedWrapperBase<RequestedSizeBase, ::GtkRequestedSize> super_type;
public:

RequestedSizeBase (std::nullptr_t = nullptr) : super_type() {}

// gint RequestedSize::minimum_size (const ::GtkRequestedSize* obj /*none*/);
// gint RequestedSize::minimum_size (const ::GtkRequestedSize* obj /*none*/);
GI_INLINE_DECL gint minimum_size_ () const noexcept;

//  RequestedSize::minimum_size (::GtkRequestedSize* obj /*none*/, gint _value);
// void RequestedSize::minimum_size (::GtkRequestedSize* obj /*none*/, gint _value);
GI_INLINE_DECL void minimum_size_ (gint _value) noexcept;

// gint RequestedSize::natural_size (const ::GtkRequestedSize* obj /*none*/);
// gint RequestedSize::natural_size (const ::GtkRequestedSize* obj /*none*/);
GI_INLINE_DECL gint natural_size_ () const noexcept;

//  RequestedSize::natural_size (::GtkRequestedSize* obj /*none*/, gint _value);
// void RequestedSize::natural_size (::GtkRequestedSize* obj /*none*/, gint _value);
GI_INLINE_DECL void natural_size_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/requestedsize_extra_def.hpp>)
#include <gtk/requestedsize_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/requestedsize_extra.hpp>)
#include <gtk/requestedsize_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RequestedSize_Ref;

class RequestedSize : public gi::detail::CBoxedWrapper<RequestedSize, ::GtkRequestedSize, GI_GTK_REQUESTEDSIZE_BASE, RequestedSize_Ref>
{ typedef gi::detail::CBoxedWrapper<RequestedSize, ::GtkRequestedSize, GI_GTK_REQUESTEDSIZE_BASE, RequestedSize_Ref> super_type; using super_type::super_type; };


class RequestedSize_Ref : public gi::detail::CBoxedRefWrapper<RequestedSize, ::GtkRequestedSize, GI_GTK_REQUESTEDSIZE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<RequestedSize, ::GtkRequestedSize, GI_GTK_REQUESTEDSIZE_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRequestedSize>
{ typedef Gtk::RequestedSize type; }; 

} // namespace repository

} // namespace gi

#endif
