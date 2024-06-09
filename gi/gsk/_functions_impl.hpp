// AUTO-GENERATED

#ifndef _GI_GSK__FUNCTIONS_IMPL_HPP_
#define _GI_GSK__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace SerializationErrorNS_ {

// GQuark gsk_serialization_error_quark ();
// ::GQuark gsk_serialization_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_serialization_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace SerializationErrorNS_

// GskRenderNode* /*full,nullable*/ gsk_value_dup_render_node (const GValue* value /*none*/);
//  /*full,nullable*/ gsk_value_dup_render_node (const ::GValue* value /*none*/);
// SKIP;  type  not supported

// GskRenderNode* /*none,nullable*/ gsk_value_get_render_node (const GValue* value /*none*/);
//  /*none,nullable*/ gsk_value_get_render_node (const ::GValue* value /*none*/);
// SKIP;  type  not supported

// void gsk_value_set_render_node (GValue* value /*none*/, GskRenderNode* node /*none*/);
// void gsk_value_set_render_node (::GValue* value /*none*/,  node /*none*/);
// SKIP; node type  not supported

// void gsk_value_take_render_node (GValue* value /*none*/, GskRenderNode* node /*full,nullable*/);
// void gsk_value_take_render_node (::GValue* value /*none*/,  node /*full,nullable*/);
// SKIP; node type  not supported

} // namespace Gsk

} // namespace repository

} // namespace gi

#endif
