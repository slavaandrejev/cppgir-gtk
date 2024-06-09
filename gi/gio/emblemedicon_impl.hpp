// AUTO-GENERATED

#ifndef _GI_GIO_EMBLEMEDICON_IMPL_HPP_
#define _GI_GIO_EMBLEMEDICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Icon EmblemedIconBase::interface_ (gi::interface_tag<Gio::Icon>)
{ return gi::wrap ((Gio::Icon::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

EmblemedIconBase::operator Gio::Icon ()
{ return interface_ (gi::interface_tag<Gio::Icon>()); }

// GIcon* /*full*/ g_emblemed_icon_new (GIcon* icon /*none*/, GEmblem* emblem /*none,nullable*/);
// ::GEmblemedIcon* /*full*/ g_emblemed_icon_new (::GIcon* icon /*none*/, ::GEmblem* emblem /*none,nullable*/);
Gio::EmblemedIcon base::EmblemedIconBase::new_ (Gio::Icon icon, Gio::Emblem emblem) noexcept
{
  typedef ::GEmblemedIcon* (*call_wrap_t) (::GIcon* icon, ::GEmblem* emblem);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblemed_icon_new;
  auto emblem_to_c = gi::unwrap (emblem, gi::transfer_none);
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GIcon*) (icon_to_c), (::GEmblem*) (emblem_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::EmblemedIcon base::EmblemedIconBase::new_ (Gio::Icon icon) noexcept
{
  typedef ::GEmblemedIcon* (*call_wrap_t) (::GIcon* icon, ::GEmblem* emblem);
  call_wrap_t call_wrap_v = (call_wrap_t) g_emblemed_icon_new;
  auto emblem_to_c = nullptr;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GIcon*) (icon_to_c), (::GEmblem*) (emblem_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_emblemed_icon_add_emblem (GEmblemedIcon* emblemed /*none*/, GEmblem* emblem /*none*/);
// void g_emblemed_icon_add_emblem (::GEmblemedIcon* emblemed /*none*/, ::GEmblem* emblem /*none*/);
void base::EmblemedIconBase::add_emblem (Gio::Emblem emblem) noexcept
{
  typedef void (*call_wrap_t) (::GEmblemedIcon* emblemed, ::GEmblem* emblem);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_emblemed_icon_add_emblem;
  auto emblem_to_c = gi::unwrap (emblem, gi::transfer_none);
  call_wrap_v ((::GEmblemedIcon*) (gobj_()), (::GEmblem*) (emblem_to_c));
}

// void g_emblemed_icon_clear_emblems (GEmblemedIcon* emblemed /*none*/);
// void g_emblemed_icon_clear_emblems (::GEmblemedIcon* emblemed /*none*/);
void base::EmblemedIconBase::clear_emblems () noexcept
{
  typedef void (*call_wrap_t) (::GEmblemedIcon* emblemed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_emblemed_icon_clear_emblems;
  call_wrap_v ((::GEmblemedIcon*) (gobj_()));
}

// GList* /*none*/ g_emblemed_icon_get_emblems (GEmblemedIcon* emblemed /*none*/);
// ::GList* /*none*/ g_emblemed_icon_get_emblems (::GEmblemedIcon* emblemed /*none*/);
gi::Collection<GList, ::GEmblem*, gi::transfer_none_t> base::EmblemedIconBase::get_emblems () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GEmblemedIcon* emblemed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_emblemed_icon_get_emblems;
  auto _temp_ret = call_wrap_v ((::GEmblemedIcon*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GEmblem*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// GIcon* /*none*/ g_emblemed_icon_get_icon (GEmblemedIcon* emblemed /*none*/);
// ::GIcon* /*none*/ g_emblemed_icon_get_icon (::GEmblemedIcon* emblemed /*none*/);
Gio::Icon base::EmblemedIconBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GEmblemedIcon* emblemed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_emblemed_icon_get_icon;
  auto _temp_ret = call_wrap_v ((::GEmblemedIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/emblemedicon_extra_def_impl.hpp>)
#include <gio/emblemedicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/emblemedicon_extra_impl.hpp>)
#include <gio/emblemedicon_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void EmblemedIconClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GEmblemedIconClass *methods = (::GEmblemedIconClass *) class_struct;
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
