// AUTO-GENERATED

#ifndef _GI_GSK__CALLBACKS_HPP_
#define _GI_GSK__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gsk {

class ParseLocation;
class ParseLocation_Ref;

// typedef void (*GskParseErrorFunc) (const GskParseLocation* start /*none*/, const GskParseLocation* end /*none*/, const GError* error /*none*/, gpointer user_data);
// typedef void (*GskParseErrorFunc) (const ::GskParseLocation* start /*none*/, const ::GskParseLocation* end /*none*/, const ::GError* error /*none*/, void* user_data);
namespace internal {

typedef void (*ParseErrorFunc_CF_CType) (const ::GskParseLocation* start, const ::GskParseLocation* end, const ::GError* error, void* user_data);
GI_INLINE_DECL void ParseErrorFunc_CF (const Gsk::ParseLocation_Ref start, const Gsk::ParseLocation_Ref end, const GLib::Error_Ref error, ParseErrorFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ParseErrorFunc_CB_Trait, ParseErrorFunc_CF_CType, ParseErrorFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(const Gsk::ParseLocation_Ref start, const Gsk::ParseLocation_Ref end, const GLib::Error_Ref error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> ParseErrorFunc;

} // namespace Gsk

} // namespace repository

} // namespace gi

#endif
