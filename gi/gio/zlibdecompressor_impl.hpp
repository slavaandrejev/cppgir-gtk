// AUTO-GENERATED

#ifndef _GI_GIO_ZLIBDECOMPRESSOR_IMPL_HPP_
#define _GI_GIO_ZLIBDECOMPRESSOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Converter ZlibDecompressorBase::interface_ (gi::interface_tag<Gio::Converter>)
{ return gi::wrap ((Gio::Converter::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ZlibDecompressorBase::operator Gio::Converter ()
{ return interface_ (gi::interface_tag<Gio::Converter>()); }

// GZlibDecompressor* /*full*/ g_zlib_decompressor_new (GZlibCompressorFormat format);
// ::GZlibDecompressor* /*full*/ g_zlib_decompressor_new (::GZlibCompressorFormat format);
Gio::ZlibDecompressor base::ZlibDecompressorBase::new_ (Gio::ZlibCompressorFormat format) noexcept
{
  typedef ::GZlibDecompressor* (*call_wrap_t) (::GZlibCompressorFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) g_zlib_decompressor_new;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GZlibCompressorFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileInfo* /*none,nullable*/ g_zlib_decompressor_get_file_info (GZlibDecompressor* decompressor /*none*/);
// ::GFileInfo* /*none,nullable*/ g_zlib_decompressor_get_file_info (::GZlibDecompressor* decompressor /*none*/);
Gio::FileInfo base::ZlibDecompressorBase::get_file_info () noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GZlibDecompressor* decompressor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_zlib_decompressor_get_file_info;
  auto _temp_ret = call_wrap_v ((::GZlibDecompressor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/zlibdecompressor_extra_def_impl.hpp>)
#include <gio/zlibdecompressor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/zlibdecompressor_extra_impl.hpp>)
#include <gio/zlibdecompressor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ZlibDecompressorClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GZlibDecompressorClass *methods = (::GZlibDecompressorClass *) class_struct;
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
