// AUTO-GENERATED

#ifndef _GI_GIO_IOMODULE_IMPL_HPP_
#define _GI_GIO_IOMODULE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GIOModule* /*full*/ g_io_module_new (const gchar* filename /*none*/);
// ::GIOModule* /*full*/ g_io_module_new (const char* filename /*none*/);
Gio::IOModule base::IOModuleBase::new_ (const gi::cstring_v filename) noexcept
{
  typedef ::GIOModule* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_module_new;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char** /*full*/ g_io_module_query ();
// char** /*full*/ g_io_module_query ();
// IGNORE; marked ignore

// void g_io_module_load (GIOModule* module_ /*none*/);
// void g_io_module_load (::GIOModule* module_ /*none*/);
// IGNORE; marked ignore

// void g_io_module_unload (GIOModule* module_ /*none*/);
// void g_io_module_unload (::GIOModule* module_ /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/iomodule_extra_def_impl.hpp>)
#include <gio/iomodule_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/iomodule_extra_impl.hpp>)
#include <gio/iomodule_extra_impl.hpp>
#endif
#endif

#endif
