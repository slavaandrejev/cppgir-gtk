// AUTO-GENERATED

#ifndef _GI_GIO_ICON_HPP_
#define _GI_GIO_ICON_HPP_


namespace gi {

namespace repository {

namespace Gio {


class Icon;

namespace base {


#define GI_GIO_ICON_BASE base::IconBase
class IconBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GIcon BaseObjectType;

IconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_icon_get_type(); } 

// GIcon* /*full,nullable*/ g_icon_deserialize (GVariant* value /*none*/);
// ::GIcon* /*full,nullable*/ g_icon_deserialize (::GVariant* value /*none*/);
static GI_INLINE_DECL Gio::Icon deserialize (GLib::Variant value) noexcept;

// GIcon* /*full*/ g_icon_new_for_string (const gchar* str /*none*/, GError ** error);
// ::GIcon* /*full*/ g_icon_new_for_string (const char* str /*none*/, GError ** error);
static GI_INLINE_DECL Gio::Icon new_for_string (const gi::cstring_v str);
static GI_INLINE_DECL Gio::Icon new_for_string (const gi::cstring_v str, GLib::Error * _error) noexcept;

// gboolean g_icon_equal (GIcon* icon1 /*none,nullable*/, GIcon* icon2 /*none,nullable*/);
// gboolean g_icon_equal (::GIcon* icon1 /*none,nullable*/, ::GIcon* icon2 /*none,nullable*/);
GI_INLINE_DECL bool equal (Gio::Icon icon2) noexcept;
GI_INLINE_DECL bool equal () noexcept;

// guint g_icon_hash (gconstpointer icon /*none*/);
// guint g_icon_hash (const ::GIcon* icon /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// GVariant* /*full,nullable*/ g_icon_serialize (GIcon* icon /*none*/);
// ::GVariant* /*full,nullable*/ g_icon_serialize (::GIcon* icon /*none*/);
GI_INLINE_DECL GLib::Variant serialize () noexcept;

// gchar* /*full,nullable*/ g_icon_to_string (GIcon* icon /*none*/);
// char* /*full,nullable*/ g_icon_to_string (::GIcon* icon /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/icon_extra_def.hpp>)
#include <gio/icon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/icon_extra.hpp>)
#include <gio/icon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Icon : public GI_GIO_ICON_BASE
{ typedef GI_GIO_ICON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GIcon>
{ typedef Gio::Icon type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class IconIfaceDef
{
typedef IconIfaceDef self;
public:
typedef Gio::Icon instance_type;
typedef ::GIconIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(equal) = self;
using GI_MEMBER_CHECK_CONFLICT(hash) = self;
using GI_MEMBER_CHECK_CONFLICT(serialize) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~IconIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Icon::equal (GIcon* icon1 /*none,nullable*/, GIcon* icon2 /*none,nullable*/);
// gboolean Icon::equal (::GIcon* icon1 /*none,nullable*/, ::GIcon* icon2 /*none,nullable*/);
virtual bool equal_ (Gio::Icon icon2) noexcept = 0;

// guint Icon::hash (GIcon* icon /*none*/);
// guint Icon::hash (::GIcon* icon /*none*/);
virtual guint hash_ () noexcept = 0;

// GVariant* /*full,nullable*/ Icon::serialize (GIcon* icon /*none*/);
// ::GVariant* /*full,nullable*/ Icon::serialize (::GIcon* icon /*none*/);
virtual GLib::Variant serialize_ () noexcept = 0;

// gboolean Icon::to_tokens (GIcon* icon /*none*/, GPtrArray* tokens /*none,out,ca*/, gint* out_version);
// gboolean Icon::to_tokens (::GIcon* icon /*none*/,  tokens /*none,out,ca*/, gint* out_version);
// SKIP; tokens type  not supported


};

using IconImpl = detail::InterfaceImpl<IconIfaceDef>;

class IconIfaceClassImpl: public detail::InterfaceClassImpl<IconImpl>
{
friend class internal::IconIfaceDef;
typedef IconIfaceClassImpl self;
typedef detail::InterfaceClassImpl<IconImpl> super;

protected:
using super::super;

// gboolean Icon::equal (GIcon* icon1 /*none,nullable*/, GIcon* icon2 /*none,nullable*/);
// gboolean Icon::equal (::GIcon* icon1 /*none,nullable*/, ::GIcon* icon2 /*none,nullable*/);
GI_INLINE_DECL bool equal_ (Gio::Icon icon2) noexcept override;

// guint Icon::hash (GIcon* icon /*none*/);
// guint Icon::hash (::GIcon* icon /*none*/);
GI_INLINE_DECL guint hash_ () noexcept override;

// GVariant* /*full,nullable*/ Icon::serialize (GIcon* icon /*none*/);
// ::GVariant* /*full,nullable*/ Icon::serialize (::GIcon* icon /*none*/);
GI_INLINE_DECL GLib::Variant serialize_ () noexcept override;

// gboolean Icon::to_tokens (GIcon* icon /*none*/, GPtrArray* tokens /*none,out,ca*/, gint* out_version);
// gboolean Icon::to_tokens (::GIcon* icon /*none*/,  tokens /*none,out,ca*/, gint* out_version);
// SKIP; tokens type  not supported


};


struct IconIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(IconIfaceClassImpl, equal)
  GI_MEMBER_DEFINE(IconIfaceClassImpl, hash)
  GI_MEMBER_DEFINE(IconIfaceClassImpl, serialize)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, equal),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, hash),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, serialize)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
