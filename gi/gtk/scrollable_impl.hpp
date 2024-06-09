// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLABLE_IMPL_HPP_
#define _GI_GTK_SCROLLABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_scrollable_get_border (GtkScrollable* scrollable /*none*/, GtkBorder* border /*none,out,ca*/);
// gboolean gtk_scrollable_get_border (::GtkScrollable* scrollable /*none*/, ::GtkBorder* border /*none,out,ca*/);
bool base::ScrollableBase::get_border (Gtk::Border & border) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_get_border;
  detail::allocate(border);
  static_assert(sizeof(::GtkBorder) == sizeof(*(border).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkBorder*) ((::GtkBorder*) (border).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gtk::Border> base::ScrollableBase::get_border () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_get_border;
  Gtk::Border border_c;
  auto border = &border_c;
  detail::allocate(*border);
  static_assert(sizeof(::GtkBorder) == sizeof(*(*border).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkBorder*) (border ? (::GtkBorder*) (*border).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = border_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkAdjustment* /*none,nullable*/ gtk_scrollable_get_hadjustment (GtkScrollable* scrollable /*none*/);
// ::GtkAdjustment* /*none,nullable*/ gtk_scrollable_get_hadjustment (::GtkScrollable* scrollable /*none*/);
Gtk::Adjustment base::ScrollableBase::get_hadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrollable* scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_get_hadjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkScrollablePolicy gtk_scrollable_get_hscroll_policy (GtkScrollable* scrollable /*none*/);
// ::GtkScrollablePolicy gtk_scrollable_get_hscroll_policy (::GtkScrollable* scrollable /*none*/);
Gtk::ScrollablePolicy base::ScrollableBase::get_hscroll_policy () noexcept
{
  typedef ::GtkScrollablePolicy (*call_wrap_t) (::GtkScrollable* scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_get_hscroll_policy;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkAdjustment* /*none,nullable*/ gtk_scrollable_get_vadjustment (GtkScrollable* scrollable /*none*/);
// ::GtkAdjustment* /*none,nullable*/ gtk_scrollable_get_vadjustment (::GtkScrollable* scrollable /*none*/);
Gtk::Adjustment base::ScrollableBase::get_vadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrollable* scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_get_vadjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkScrollablePolicy gtk_scrollable_get_vscroll_policy (GtkScrollable* scrollable /*none*/);
// ::GtkScrollablePolicy gtk_scrollable_get_vscroll_policy (::GtkScrollable* scrollable /*none*/);
Gtk::ScrollablePolicy base::ScrollableBase::get_vscroll_policy () noexcept
{
  typedef ::GtkScrollablePolicy (*call_wrap_t) (::GtkScrollable* scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_get_vscroll_policy;
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_scrollable_set_hadjustment (GtkScrollable* scrollable /*none*/, GtkAdjustment* hadjustment /*none,nullable*/);
// void gtk_scrollable_set_hadjustment (::GtkScrollable* scrollable /*none*/, ::GtkAdjustment* hadjustment /*none,nullable*/);
void base::ScrollableBase::set_hadjustment (Gtk::Adjustment hadjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkAdjustment* hadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_set_hadjustment;
  auto hadjustment_to_c = gi::unwrap (hadjustment, gi::transfer_none);
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkAdjustment*) (hadjustment_to_c));
}
void base::ScrollableBase::set_hadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkAdjustment* hadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_set_hadjustment;
  auto hadjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkAdjustment*) (hadjustment_to_c));
}

// void gtk_scrollable_set_hscroll_policy (GtkScrollable* scrollable /*none*/, GtkScrollablePolicy policy);
// void gtk_scrollable_set_hscroll_policy (::GtkScrollable* scrollable /*none*/, ::GtkScrollablePolicy policy);
void base::ScrollableBase::set_hscroll_policy (Gtk::ScrollablePolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkScrollablePolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_set_hscroll_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkScrollablePolicy) (policy_to_c));
}

// void gtk_scrollable_set_vadjustment (GtkScrollable* scrollable /*none*/, GtkAdjustment* vadjustment /*none,nullable*/);
// void gtk_scrollable_set_vadjustment (::GtkScrollable* scrollable /*none*/, ::GtkAdjustment* vadjustment /*none,nullable*/);
void base::ScrollableBase::set_vadjustment (Gtk::Adjustment vadjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_set_vadjustment;
  auto vadjustment_to_c = gi::unwrap (vadjustment, gi::transfer_none);
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkAdjustment*) (vadjustment_to_c));
}
void base::ScrollableBase::set_vadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_set_vadjustment;
  auto vadjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkAdjustment*) (vadjustment_to_c));
}

// void gtk_scrollable_set_vscroll_policy (GtkScrollable* scrollable /*none*/, GtkScrollablePolicy policy);
// void gtk_scrollable_set_vscroll_policy (::GtkScrollable* scrollable /*none*/, ::GtkScrollablePolicy policy);
void base::ScrollableBase::set_vscroll_policy (Gtk::ScrollablePolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkScrollablePolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollable_set_vscroll_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkScrollablePolicy) (policy_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollable_extra_def_impl.hpp>)
#include <gtk/scrollable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollable_extra_impl.hpp>)
#include <gtk/scrollable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ScrollableInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkScrollableInterface *methods = (::GtkScrollableInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_border) methods->get_border = (decltype (methods->get_border)) detail::method_wrapper<self, bool (*) (Gtk::Border_Ref border), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_border_>;
}

// gboolean Scrollable::get_border (GtkScrollable* scrollable /*none*/, GtkBorder* border /*none,out,ca*/);
// gboolean Scrollable::get_border (::GtkScrollable* scrollable /*none*/, ::GtkBorder* border /*none,out,ca*/);
bool ScrollableInterfaceClassImpl::get_border_ (Gtk::Border_Ref border) noexcept
{
  if (!get_struct_()->get_border) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkScrollable* scrollable, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_border;
  auto border_to_c = gi::unwrap (border, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkScrollable*) (gobj_()), (::GtkBorder*) (border_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
