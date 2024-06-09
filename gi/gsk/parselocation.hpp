// AUTO-GENERATED

#ifndef _GI_GSK_PARSELOCATION_HPP_
#define _GI_GSK_PARSELOCATION_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class ParseLocation_Ref;

class ParseLocation;

namespace base {


#define GI_GSK_PARSELOCATION_BASE base::ParseLocationBase
class ParseLocationBase : public gi::detail::CBoxedWrapperBase<ParseLocationBase, ::GskParseLocation>
{
typedef gi::detail::CBoxedWrapperBase<ParseLocationBase, ::GskParseLocation> super_type;
public:

ParseLocationBase (std::nullptr_t = nullptr) : super_type() {}

// gsize ParseLocation::bytes (const ::GskParseLocation* obj /*none*/);
// gsize ParseLocation::bytes (const ::GskParseLocation* obj /*none*/);
GI_INLINE_DECL gsize bytes_ () const noexcept;

//  ParseLocation::bytes (::GskParseLocation* obj /*none*/, gsize _value);
// void ParseLocation::bytes (::GskParseLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void bytes_ (gsize _value) noexcept;

// gsize ParseLocation::chars (const ::GskParseLocation* obj /*none*/);
// gsize ParseLocation::chars (const ::GskParseLocation* obj /*none*/);
GI_INLINE_DECL gsize chars_ () const noexcept;

//  ParseLocation::chars (::GskParseLocation* obj /*none*/, gsize _value);
// void ParseLocation::chars (::GskParseLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void chars_ (gsize _value) noexcept;

// gsize ParseLocation::lines (const ::GskParseLocation* obj /*none*/);
// gsize ParseLocation::lines (const ::GskParseLocation* obj /*none*/);
GI_INLINE_DECL gsize lines_ () const noexcept;

//  ParseLocation::lines (::GskParseLocation* obj /*none*/, gsize _value);
// void ParseLocation::lines (::GskParseLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void lines_ (gsize _value) noexcept;

// gsize ParseLocation::line_bytes (const ::GskParseLocation* obj /*none*/);
// gsize ParseLocation::line_bytes (const ::GskParseLocation* obj /*none*/);
GI_INLINE_DECL gsize line_bytes_ () const noexcept;

//  ParseLocation::line_bytes (::GskParseLocation* obj /*none*/, gsize _value);
// void ParseLocation::line_bytes (::GskParseLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void line_bytes_ (gsize _value) noexcept;

// gsize ParseLocation::line_chars (const ::GskParseLocation* obj /*none*/);
// gsize ParseLocation::line_chars (const ::GskParseLocation* obj /*none*/);
GI_INLINE_DECL gsize line_chars_ () const noexcept;

//  ParseLocation::line_chars (::GskParseLocation* obj /*none*/, gsize _value);
// void ParseLocation::line_chars (::GskParseLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void line_chars_ (gsize _value) noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/parselocation_extra_def.hpp>)
#include <gsk/parselocation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/parselocation_extra.hpp>)
#include <gsk/parselocation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class ParseLocation_Ref;

class ParseLocation : public gi::detail::CBoxedWrapper<ParseLocation, ::GskParseLocation, GI_GSK_PARSELOCATION_BASE, ParseLocation_Ref>
{ typedef gi::detail::CBoxedWrapper<ParseLocation, ::GskParseLocation, GI_GSK_PARSELOCATION_BASE, ParseLocation_Ref> super_type; using super_type::super_type; };


class ParseLocation_Ref : public gi::detail::CBoxedRefWrapper<ParseLocation, ::GskParseLocation, GI_GSK_PARSELOCATION_BASE>
{ typedef gi::detail::CBoxedRefWrapper<ParseLocation, ::GskParseLocation, GI_GSK_PARSELOCATION_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskParseLocation>
{ typedef Gsk::ParseLocation type; }; 

} // namespace repository

} // namespace gi

#endif
