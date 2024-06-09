// AUTO-GENERATED

#ifndef _GI_GIO_FILTERINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_FILTERINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GInputStream* /*none*/ g_filter_input_stream_get_base_stream (GFilterInputStream* stream /*none*/);
// ::GInputStream* /*none*/ g_filter_input_stream_get_base_stream (::GFilterInputStream* stream /*none*/);
Gio::InputStream base::FilterInputStreamBase::get_base_stream () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GFilterInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filter_input_stream_get_base_stream;
  auto _temp_ret = call_wrap_v ((::GFilterInputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_filter_input_stream_get_close_base_stream (GFilterInputStream* stream /*none*/);
// gboolean g_filter_input_stream_get_close_base_stream (::GFilterInputStream* stream /*none*/);
bool base::FilterInputStreamBase::get_close_base_stream () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFilterInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filter_input_stream_get_close_base_stream;
  auto _temp_ret = call_wrap_v ((::GFilterInputStream*) (gobj_()));
  return _temp_ret;
}

// void g_filter_input_stream_set_close_base_stream (GFilterInputStream* stream /*none*/, gboolean close_base);
// void g_filter_input_stream_set_close_base_stream (::GFilterInputStream* stream /*none*/, gboolean close_base);
void base::FilterInputStreamBase::set_close_base_stream (gboolean close_base) noexcept
{
  typedef void (*call_wrap_t) (::GFilterInputStream* stream, gboolean close_base);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_filter_input_stream_set_close_base_stream;
  auto close_base_to_c = close_base;
  call_wrap_v ((::GFilterInputStream*) (gobj_()), (gboolean) (close_base_to_c));
}

static ::GInputStream* _field_base_stream_get (const ::GFilterInputStream* obj) { return (::GInputStream*) obj->base_stream; }
// ::GInputStream* /*none*/ FilterInputStream::base_stream (const ::GFilterInputStream* obj /*none*/);
// ::GInputStream* /*none*/ FilterInputStream::base_stream (const ::GFilterInputStream* obj /*none*/);
Gio::InputStream base::FilterInputStreamBase::base_stream_ () const noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (const ::GFilterInputStream* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_base_stream_get;
  auto _temp_ret = call_wrap_v ((const ::GFilterInputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filterinputstream_extra_def_impl.hpp>)
#include <gio/filterinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filterinputstream_extra_impl.hpp>)
#include <gio/filterinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FilterInputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GFilterInputStreamClass *methods = (::GFilterInputStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
