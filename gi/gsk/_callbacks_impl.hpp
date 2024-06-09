// AUTO-GENERATED

#ifndef _GI_GSK__CALLBACKS_IMPL_HPP_
#define _GI_GSK__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

// typedef void (*GskParseErrorFunc) (const GskParseLocation* start /*none*/, const GskParseLocation* end /*none*/, const GError* error /*none*/, gpointer user_data);
// typedef void (*GskParseErrorFunc) (const ::GskParseLocation* start /*none*/, const ::GskParseLocation* end /*none*/, const ::GError* error /*none*/, void* user_data);
namespace internal {

void ParseErrorFunc_CF (const Gsk::ParseLocation_Ref start, const Gsk::ParseLocation_Ref end, const GLib::Error_Ref error, ParseErrorFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  _call ((const ::GskParseLocation*) (start_to_c), (const ::GskParseLocation*) (end_to_c), (const ::GError*) (error_to_c), (void*) (user_data_to_c));
}
} // namespace internal


} // namespace Gsk

} // namespace repository

} // namespace gi

#endif
