// AUTO-GENERATED

#ifndef _GI_GIO_SEEKABLE_HPP_
#define _GI_GIO_SEEKABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;

class Seekable;

namespace base {


#define GI_GIO_SEEKABLE_BASE base::SeekableBase
class SeekableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GSeekable BaseObjectType;

SeekableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_seekable_get_type(); } 

// gboolean g_seekable_can_seek (GSeekable* seekable /*none*/);
// gboolean g_seekable_can_seek (::GSeekable* seekable /*none*/);
GI_INLINE_DECL bool can_seek () noexcept;

// gboolean g_seekable_can_truncate (GSeekable* seekable /*none*/);
// gboolean g_seekable_can_truncate (::GSeekable* seekable /*none*/);
GI_INLINE_DECL bool can_truncate () noexcept;

// gboolean g_seekable_seek (GSeekable* seekable /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_seekable_seek (::GSeekable* seekable /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool seek (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable);
GI_INLINE_DECL bool seek (gint64 offset, GLib::SeekType type);
GI_INLINE_DECL bool seek (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool seek (gint64 offset, GLib::SeekType type, GLib::Error * _error) noexcept;

// goffset g_seekable_tell (GSeekable* seekable /*none*/);
// gint64 g_seekable_tell (::GSeekable* seekable /*none*/);
GI_INLINE_DECL gint64 tell () noexcept;

// gboolean g_seekable_truncate (GSeekable* seekable /*none*/, goffset offset, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_seekable_truncate (::GSeekable* seekable /*none*/, gint64 offset, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool truncate (gint64 offset, Gio::Cancellable cancellable);
GI_INLINE_DECL bool truncate (gint64 offset);
GI_INLINE_DECL bool truncate (gint64 offset, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool truncate (gint64 offset, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/seekable_extra_def.hpp>)
#include <gio/seekable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/seekable_extra.hpp>)
#include <gio/seekable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Seekable : public GI_GIO_SEEKABLE_BASE
{ typedef GI_GIO_SEEKABLE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSeekable>
{ typedef Gio::Seekable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SeekableIfaceDef
{
typedef SeekableIfaceDef self;
public:
typedef Gio::Seekable instance_type;
typedef ::GSeekableIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(can_seek) = self;
using GI_MEMBER_CHECK_CONFLICT(can_truncate) = self;
using GI_MEMBER_CHECK_CONFLICT(seek) = self;
using GI_MEMBER_CHECK_CONFLICT(tell) = self;
using GI_MEMBER_CHECK_CONFLICT(truncate_fn) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SeekableIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Seekable::can_seek (GSeekable* seekable /*none*/);
// gboolean Seekable::can_seek (::GSeekable* seekable /*none*/);
virtual bool can_seek_ () noexcept = 0;

// gboolean Seekable::can_truncate (GSeekable* seekable /*none*/);
// gboolean Seekable::can_truncate (::GSeekable* seekable /*none*/);
virtual bool can_truncate_ () noexcept = 0;

// gboolean Seekable::seek (GSeekable* seekable /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Seekable::seek (::GSeekable* seekable /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool seek_ (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// goffset Seekable::tell (GSeekable* seekable /*none*/);
// gint64 Seekable::tell (::GSeekable* seekable /*none*/);
virtual gint64 tell_ () noexcept = 0;

// gboolean Seekable::truncate_fn (GSeekable* seekable /*none*/, goffset offset, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Seekable::truncate_fn (::GSeekable* seekable /*none*/, gint64 offset, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool truncate_fn_ (gint64 offset, Gio::Cancellable cancellable, GLib::Error * _error) = 0;


};

using SeekableImpl = detail::InterfaceImpl<SeekableIfaceDef>;

class SeekableIfaceClassImpl: public detail::InterfaceClassImpl<SeekableImpl>
{
friend class internal::SeekableIfaceDef;
typedef SeekableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<SeekableImpl> super;

protected:
using super::super;

// gboolean Seekable::can_seek (GSeekable* seekable /*none*/);
// gboolean Seekable::can_seek (::GSeekable* seekable /*none*/);
GI_INLINE_DECL bool can_seek_ () noexcept override;

// gboolean Seekable::can_truncate (GSeekable* seekable /*none*/);
// gboolean Seekable::can_truncate (::GSeekable* seekable /*none*/);
GI_INLINE_DECL bool can_truncate_ () noexcept override;

// gboolean Seekable::seek (GSeekable* seekable /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Seekable::seek (::GSeekable* seekable /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool seek_ (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) override;

// goffset Seekable::tell (GSeekable* seekable /*none*/);
// gint64 Seekable::tell (::GSeekable* seekable /*none*/);
GI_INLINE_DECL gint64 tell_ () noexcept override;

// gboolean Seekable::truncate_fn (GSeekable* seekable /*none*/, goffset offset, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Seekable::truncate_fn (::GSeekable* seekable /*none*/, gint64 offset, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool truncate_fn_ (gint64 offset, Gio::Cancellable cancellable, GLib::Error * _error) override;


};


struct SeekableIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(SeekableIfaceClassImpl, can_seek)
  GI_MEMBER_DEFINE(SeekableIfaceClassImpl, can_truncate)
  GI_MEMBER_DEFINE(SeekableIfaceClassImpl, seek)
  GI_MEMBER_DEFINE(SeekableIfaceClassImpl, tell)
  GI_MEMBER_DEFINE(SeekableIfaceClassImpl, truncate_fn)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_seek),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_truncate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, seek),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, tell),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, truncate_fn)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
