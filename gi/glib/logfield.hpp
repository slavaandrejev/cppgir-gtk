// AUTO-GENERATED

#ifndef _GI_GLIB_LOGFIELD_HPP_
#define _GI_GLIB_LOGFIELD_HPP_


namespace gi {

namespace repository {

namespace GLib {

class LogField_Ref;

class LogField;

namespace base {


#define GI_GLIB_LOGFIELD_BASE base::LogFieldBase
class LogFieldBase : public gi::detail::CBoxedWrapperBase<LogFieldBase, ::GLogField>
{
typedef gi::detail::CBoxedWrapperBase<LogFieldBase, ::GLogField> super_type;
public:

LogFieldBase (std::nullptr_t = nullptr) : super_type() {}

// const char* /*none*/ LogField::key (const ::GLogField* obj /*none*/);
// const char* /*none*/ LogField::key (const ::GLogField* obj /*none*/);
GI_INLINE_DECL gi::cstring_v key_ () const noexcept;

// gssize LogField::length (const ::GLogField* obj /*none*/);
// gssize LogField::length (const ::GLogField* obj /*none*/);
GI_INLINE_DECL gssize length_ () const noexcept;

//  LogField::length (::GLogField* obj /*none*/, gssize _value);
// void LogField::length (::GLogField* obj /*none*/, gssize _value);
GI_INLINE_DECL void length_ (gssize _value) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/logfield_extra_def.hpp>)
#include <glib/logfield_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/logfield_extra.hpp>)
#include <glib/logfield_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class LogField_Ref;

class LogField : public gi::detail::CBoxedWrapper<LogField, ::GLogField, GI_GLIB_LOGFIELD_BASE, LogField_Ref>
{ typedef gi::detail::CBoxedWrapper<LogField, ::GLogField, GI_GLIB_LOGFIELD_BASE, LogField_Ref> super_type; using super_type::super_type; };


class LogField_Ref : public gi::detail::CBoxedRefWrapper<LogField, ::GLogField, GI_GLIB_LOGFIELD_BASE>
{ typedef gi::detail::CBoxedRefWrapper<LogField, ::GLogField, GI_GLIB_LOGFIELD_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GLogField>
{ typedef GLib::LogField type; }; 

} // namespace repository

} // namespace gi

#endif
