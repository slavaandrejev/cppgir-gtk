// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFMODULE_HPP_
#define _GI_GDKPIXBUF_PIXBUFMODULE_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufFormat;
class PixbufFormat_Ref;
class PixbufModule_Ref;

class PixbufModule;

namespace base {


#define GI_GDKPIXBUF_PIXBUFMODULE_BASE base::PixbufModuleBase
class PixbufModuleBase : public gi::detail::CBoxedWrapperBase<PixbufModuleBase, ::GdkPixbufModule>
{
typedef gi::detail::CBoxedWrapperBase<PixbufModuleBase, ::GdkPixbufModule> super_type;
public:

PixbufModuleBase (std::nullptr_t = nullptr) : super_type() {}

// char* /*none*/ PixbufModule::module_name (const ::GdkPixbufModule* obj /*none*/);
// char* /*none*/ PixbufModule::module_name (const ::GdkPixbufModule* obj /*none*/);
GI_INLINE_DECL gi::cstring_v module_name_ () const noexcept;

// char* /*none*/ PixbufModule::module_path (const ::GdkPixbufModule* obj /*none*/);
// char* /*none*/ PixbufModule::module_path (const ::GdkPixbufModule* obj /*none*/);
GI_INLINE_DECL gi::cstring_v module_path_ () const noexcept;

// ::GdkPixbufFormat* /*none*/ PixbufModule::info (const ::GdkPixbufModule* obj /*none*/);
// ::GdkPixbufFormat* /*none*/ PixbufModule::info (const ::GdkPixbufModule* obj /*none*/);
GI_INLINE_DECL GdkPixbuf::PixbufFormat_Ref info_ () const noexcept;

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodule_extra_def.hpp>)
#include <gdkpixbuf/pixbufmodule_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodule_extra.hpp>)
#include <gdkpixbuf/pixbufmodule_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufModule_Ref;

class PixbufModule : public gi::detail::CBoxedWrapper<PixbufModule, ::GdkPixbufModule, GI_GDKPIXBUF_PIXBUFMODULE_BASE, PixbufModule_Ref>
{ typedef gi::detail::CBoxedWrapper<PixbufModule, ::GdkPixbufModule, GI_GDKPIXBUF_PIXBUFMODULE_BASE, PixbufModule_Ref> super_type; using super_type::super_type; };


class PixbufModule_Ref : public gi::detail::CBoxedRefWrapper<PixbufModule, ::GdkPixbufModule, GI_GDKPIXBUF_PIXBUFMODULE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<PixbufModule, ::GdkPixbufModule, GI_GDKPIXBUF_PIXBUFMODULE_BASE> super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufModule>
{ typedef GdkPixbuf::PixbufModule type; }; 

} // namespace repository

} // namespace gi

#endif
