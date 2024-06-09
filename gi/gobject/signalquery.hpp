// AUTO-GENERATED

#ifndef _GI_GOBJECT_SIGNALQUERY_HPP_
#define _GI_GOBJECT_SIGNALQUERY_HPP_


namespace gi {

namespace repository {

namespace GObject {

class SignalQuery_Ref;

class SignalQuery;

namespace base {


#define GI_GOBJECT_SIGNALQUERY_BASE base::SignalQueryBase
class SignalQueryBase : public gi::detail::CBoxedWrapperBase<SignalQueryBase, ::GSignalQuery>
{
typedef gi::detail::CBoxedWrapperBase<SignalQueryBase, ::GSignalQuery> super_type;
public:

SignalQueryBase (std::nullptr_t = nullptr) : super_type() {}

// guint SignalQuery::signal_id (const ::GSignalQuery* obj /*none*/);
// guint SignalQuery::signal_id (const ::GSignalQuery* obj /*none*/);
GI_INLINE_DECL guint signal_id_ () const noexcept;

//  SignalQuery::signal_id (::GSignalQuery* obj /*none*/, guint _value);
// void SignalQuery::signal_id (::GSignalQuery* obj /*none*/, guint _value);
GI_INLINE_DECL void signal_id_ (guint _value) noexcept;

// const char* /*none*/ SignalQuery::signal_name (const ::GSignalQuery* obj /*none*/);
// const char* /*none*/ SignalQuery::signal_name (const ::GSignalQuery* obj /*none*/);
GI_INLINE_DECL gi::cstring_v signal_name_ () const noexcept;

// GType SignalQuery::itype (const ::GSignalQuery* obj /*none*/);
// GType SignalQuery::itype (const ::GSignalQuery* obj /*none*/);
GI_INLINE_DECL GType itype_ () const noexcept;

//  SignalQuery::itype (::GSignalQuery* obj /*none*/, GType _value);
// void SignalQuery::itype (::GSignalQuery* obj /*none*/, GType _value);
GI_INLINE_DECL void itype_ (GType _value) noexcept;

// ::GSignalFlags SignalQuery::signal_flags (const ::GSignalQuery* obj /*none*/);
// ::GSignalFlags SignalQuery::signal_flags (const ::GSignalQuery* obj /*none*/);
GI_INLINE_DECL GObject::SignalFlags signal_flags_ () const noexcept;

//  SignalQuery::signal_flags (::GSignalQuery* obj /*none*/, ::GSignalFlags _value);
// void SignalQuery::signal_flags (::GSignalQuery* obj /*none*/, ::GSignalFlags _value);
GI_INLINE_DECL void signal_flags_ (GObject::SignalFlags _value) noexcept;

// GType SignalQuery::return_type (const ::GSignalQuery* obj /*none*/);
// GType SignalQuery::return_type (const ::GSignalQuery* obj /*none*/);
GI_INLINE_DECL GType return_type_ () const noexcept;

//  SignalQuery::return_type (::GSignalQuery* obj /*none*/, GType _value);
// void SignalQuery::return_type (::GSignalQuery* obj /*none*/, GType _value);
GI_INLINE_DECL void return_type_ (GType _value) noexcept;

// guint SignalQuery::n_params (const ::GSignalQuery* obj /*none*/);
// guint SignalQuery::n_params (const ::GSignalQuery* obj /*none*/);
GI_INLINE_DECL guint n_params_ () const noexcept;

//  SignalQuery::n_params (::GSignalQuery* obj /*none*/, guint _value);
// void SignalQuery::n_params (::GSignalQuery* obj /*none*/, guint _value);
GI_INLINE_DECL void n_params_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/signalquery_extra_def.hpp>)
#include <gobject/signalquery_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/signalquery_extra.hpp>)
#include <gobject/signalquery_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class SignalQuery_Ref;

class SignalQuery : public gi::detail::CBoxedWrapper<SignalQuery, ::GSignalQuery, GI_GOBJECT_SIGNALQUERY_BASE, SignalQuery_Ref>
{ typedef gi::detail::CBoxedWrapper<SignalQuery, ::GSignalQuery, GI_GOBJECT_SIGNALQUERY_BASE, SignalQuery_Ref> super_type; using super_type::super_type; };


class SignalQuery_Ref : public gi::detail::CBoxedRefWrapper<SignalQuery, ::GSignalQuery, GI_GOBJECT_SIGNALQUERY_BASE>
{ typedef gi::detail::CBoxedRefWrapper<SignalQuery, ::GSignalQuery, GI_GOBJECT_SIGNALQUERY_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GSignalQuery>
{ typedef GObject::SignalQuery type; }; 

} // namespace repository

} // namespace gi

#endif
