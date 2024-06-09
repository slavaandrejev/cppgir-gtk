// AUTO-GENERATED

#ifndef _GI_GDK_VULKANCONTEXT_HPP_
#define _GI_GDK_VULKANCONTEXT_HPP_

#include "drawcontext.hpp"

namespace gi {

namespace repository {

namespace Gdk {


class VulkanContext;

namespace base {


#define GI_GDK_VULKANCONTEXT_BASE base::VulkanContextBase
class VulkanContextBase : public Gdk::DrawContext
{
typedef Gdk::DrawContext super_type;
public:
typedef ::GdkVulkanContext BaseObjectType;

VulkanContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_vulkan_context_get_type(); } 

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// (signal) void images-updated ();
// (signal) void images-updated ();
gi::signal_proxy<void(Gdk::VulkanContext)> signal_images_updated()
{ return gi::signal_proxy<void(Gdk::VulkanContext)> (*this, "images-updated"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/vulkancontext_extra_def.hpp>)
#include <gdk/vulkancontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/vulkancontext_extra.hpp>)
#include <gdk/vulkancontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class VulkanContext : public GI_GDK_VULKANCONTEXT_BASE
{ typedef GI_GDK_VULKANCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkVulkanContext>
{ typedef Gdk::VulkanContext type; }; 

} // namespace repository

} // namespace gi

#endif
