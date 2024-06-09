// AUTO-GENERATED

#ifndef _GI_GDK_SNAPSHOT_HPP_
#define _GI_GDK_SNAPSHOT_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class Snapshot;

namespace base {


#define GI_GDK_SNAPSHOT_BASE base::SnapshotBase
class SnapshotBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkSnapshot BaseObjectType;

SnapshotBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_snapshot_get_type(); } 

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/snapshot_extra_def.hpp>)
#include <gdk/snapshot_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/snapshot_extra.hpp>)
#include <gdk/snapshot_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Snapshot : public GI_GDK_SNAPSHOT_BASE
{ typedef GI_GDK_SNAPSHOT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkSnapshot>
{ typedef Gdk::Snapshot type; }; 

} // namespace repository

} // namespace gi

#endif
