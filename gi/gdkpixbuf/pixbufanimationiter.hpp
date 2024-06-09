// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFANIMATIONITER_HPP_
#define _GI_GDKPIXBUF_PIXBUFANIMATIONITER_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;

class PixbufAnimationIter;

namespace base {


#define GI_GDKPIXBUF_PIXBUFANIMATIONITER_BASE base::PixbufAnimationIterBase
class PixbufAnimationIterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkPixbufAnimationIter BaseObjectType;

PixbufAnimationIterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_animation_iter_get_type(); } 

// gboolean gdk_pixbuf_animation_iter_advance (GdkPixbufAnimationIter* iter /*none*/, const GTimeVal* current_time /*none,nullable*/);
// gboolean gdk_pixbuf_animation_iter_advance (::GdkPixbufAnimationIter* iter /*none*/, const  current_time /*none,nullable*/);
// SKIP; current_time type  not supported

// int gdk_pixbuf_animation_iter_get_delay_time (GdkPixbufAnimationIter* iter /*none*/);
// gint gdk_pixbuf_animation_iter_get_delay_time (::GdkPixbufAnimationIter* iter /*none*/);
GI_INLINE_DECL gint get_delay_time () noexcept;

// GdkPixbuf* /*none*/ gdk_pixbuf_animation_iter_get_pixbuf (GdkPixbufAnimationIter* iter /*none*/);
// ::GdkPixbuf* /*none*/ gdk_pixbuf_animation_iter_get_pixbuf (::GdkPixbufAnimationIter* iter /*none*/);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf () noexcept;

// gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame (GdkPixbufAnimationIter* iter /*none*/);
// gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame (::GdkPixbufAnimationIter* iter /*none*/);
GI_INLINE_DECL bool on_currently_loading_frame () noexcept;

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimationiter_extra_def.hpp>)
#include <gdkpixbuf/pixbufanimationiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimationiter_extra.hpp>)
#include <gdkpixbuf/pixbufanimationiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufAnimationIter : public GI_GDKPIXBUF_PIXBUFANIMATIONITER_BASE
{ typedef GI_GDKPIXBUF_PIXBUFANIMATIONITER_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufAnimationIter>
{ typedef GdkPixbuf::PixbufAnimationIter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {


class PixbufAnimationIterClassDef
{
typedef PixbufAnimationIterClassDef self;
public:
typedef GdkPixbuf::PixbufAnimationIter instance_type;
typedef ::GdkPixbufAnimationIterClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_delay_time) = self;
using GI_MEMBER_CHECK_CONFLICT(get_pixbuf) = self;
using GI_MEMBER_CHECK_CONFLICT(on_currently_loading_frame) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PixbufAnimationIterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean PixbufAnimationIter::advance (GdkPixbufAnimationIter* iter /*none*/, const GTimeVal* current_time /*none,nullable*/);
// gboolean PixbufAnimationIter::advance (::GdkPixbufAnimationIter* iter /*none*/, const  current_time /*none,nullable*/);
// SKIP; current_time type  not supported

// int PixbufAnimationIter::get_delay_time (GdkPixbufAnimationIter* iter /*none*/);
// gint PixbufAnimationIter::get_delay_time (::GdkPixbufAnimationIter* iter /*none*/);
virtual gint get_delay_time_ () noexcept = 0;

// GdkPixbuf* /*none*/ PixbufAnimationIter::get_pixbuf (GdkPixbufAnimationIter* iter /*none*/);
// ::GdkPixbuf* /*none*/ PixbufAnimationIter::get_pixbuf (::GdkPixbufAnimationIter* iter /*none*/);
virtual GdkPixbuf::Pixbuf get_pixbuf_ () noexcept = 0;

// gboolean PixbufAnimationIter::on_currently_loading_frame (GdkPixbufAnimationIter* iter /*none*/);
// gboolean PixbufAnimationIter::on_currently_loading_frame (::GdkPixbufAnimationIter* iter /*none*/);
virtual bool on_currently_loading_frame_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PixbufAnimationIterClass: public detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufAnimationIterClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::PixbufAnimationIterClassDef;
typedef PixbufAnimationIterClass self;
typedef detail::ClassTemplate<GdkPixbuf::impl::internal::PixbufAnimationIterClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean PixbufAnimationIter::advance (GdkPixbufAnimationIter* iter /*none*/, const GTimeVal* current_time /*none,nullable*/);
// gboolean PixbufAnimationIter::advance (::GdkPixbufAnimationIter* iter /*none*/, const  current_time /*none,nullable*/);
// SKIP; current_time type  not supported

// int PixbufAnimationIter::get_delay_time (GdkPixbufAnimationIter* iter /*none*/);
// gint PixbufAnimationIter::get_delay_time (::GdkPixbufAnimationIter* iter /*none*/);
GI_INLINE_DECL gint get_delay_time_ () noexcept override;

// GdkPixbuf* /*none*/ PixbufAnimationIter::get_pixbuf (GdkPixbufAnimationIter* iter /*none*/);
// ::GdkPixbuf* /*none*/ PixbufAnimationIter::get_pixbuf (::GdkPixbufAnimationIter* iter /*none*/);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf_ () noexcept override;

// gboolean PixbufAnimationIter::on_currently_loading_frame (GdkPixbufAnimationIter* iter /*none*/);
// gboolean PixbufAnimationIter::on_currently_loading_frame (::GdkPixbufAnimationIter* iter /*none*/);
GI_INLINE_DECL bool on_currently_loading_frame_ () noexcept override;


};


struct PixbufAnimationIterClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(PixbufAnimationIterClass, get_delay_time)
  GI_MEMBER_DEFINE(PixbufAnimationIterClass, get_pixbuf)
  GI_MEMBER_DEFINE(PixbufAnimationIterClass, on_currently_loading_frame)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_delay_time),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_pixbuf),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, on_currently_loading_frame)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using PixbufAnimationIterImpl = detail::ObjectImpl<PixbufAnimationIter, internal::PixbufAnimationIterClass>;

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
