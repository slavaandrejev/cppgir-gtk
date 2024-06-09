// AUTO-GENERATED

#ifndef _GI_GTK_POPOVER_IMPL_HPP_
#define _GI_GTK_POPOVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Native PopoverBase::interface_ (gi::interface_tag<Gtk::Native>)
{ return gi::wrap ((Gtk::Native::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

PopoverBase::operator Gtk::Native ()
{ return interface_ (gi::interface_tag<Gtk::Native>()); }

Gtk::ShortcutManager PopoverBase::interface_ (gi::interface_tag<Gtk::ShortcutManager>)
{ return gi::wrap ((Gtk::ShortcutManager::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

PopoverBase::operator Gtk::ShortcutManager ()
{ return interface_ (gi::interface_tag<Gtk::ShortcutManager>()); }

// GtkWidget* /*none*/ gtk_popover_new ();
// ::GtkPopover* /*none*/ gtk_popover_new ();
Gtk::Popover base::PopoverBase::new_ () noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_popover_get_autohide (GtkPopover* popover /*none*/);
// gboolean gtk_popover_get_autohide (::GtkPopover* popover /*none*/);
bool base::PopoverBase::get_autohide () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_autohide;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_popover_get_cascade_popdown (GtkPopover* popover /*none*/);
// gboolean gtk_popover_get_cascade_popdown (::GtkPopover* popover /*none*/);
bool base::PopoverBase::get_cascade_popdown () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_cascade_popdown;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_popover_get_child (GtkPopover* popover /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_popover_get_child (::GtkPopover* popover /*none*/);
Gtk::Widget base::PopoverBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_child;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_popover_get_has_arrow (GtkPopover* popover /*none*/);
// gboolean gtk_popover_get_has_arrow (::GtkPopover* popover /*none*/);
bool base::PopoverBase::get_has_arrow () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_has_arrow;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_popover_get_mnemonics_visible (GtkPopover* popover /*none*/);
// gboolean gtk_popover_get_mnemonics_visible (::GtkPopover* popover /*none*/);
bool base::PopoverBase::get_mnemonics_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_mnemonics_visible;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return _temp_ret;
}

// void gtk_popover_get_offset (GtkPopover* popover /*none*/, int* x_offset, int* y_offset);
// void gtk_popover_get_offset (::GtkPopover* popover /*none*/, gint* x_offset, gint* y_offset);
void base::PopoverBase::get_offset (gint * x_offset, gint * y_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, gint* x_offset, gint* y_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_offset;
  gint y_offset_o {};
  gint x_offset_o {};
  call_wrap_v ((::GtkPopover*) (gobj_()), (gint*) (x_offset ? &x_offset_o : nullptr), (gint*) (y_offset ? &y_offset_o : nullptr));
  if (y_offset) *y_offset = y_offset_o;
  if (x_offset) *x_offset = x_offset_o;
}
std::tuple<gint, gint> base::PopoverBase::get_offset () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, gint* x_offset, gint* y_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_offset;
  gint y_offset_o {};
  gint x_offset_o {};
  call_wrap_v ((::GtkPopover*) (gobj_()), (gint*) (&x_offset_o), (gint*) (&y_offset_o));
  auto &&tmp_return_1 = x_offset_o;
  auto &&tmp_return_2 = y_offset_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_popover_get_pointing_to (GtkPopover* popover /*none*/, GdkRectangle* rect /*none,out,ca*/);
// gboolean gtk_popover_get_pointing_to (::GtkPopover* popover /*none*/, ::GdkRectangle* rect /*none,out,ca*/);
bool base::PopoverBase::get_pointing_to (Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_pointing_to;
  detail::allocate(rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(rect).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) (rect).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::PopoverBase::get_pointing_to () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_pointing_to;
  Gdk::Rectangle rect_c;
  auto rect = &rect_c;
  detail::allocate(*rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*rect).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()), (::GdkRectangle*) (rect ? (::GdkRectangle*) (*rect).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkPositionType gtk_popover_get_position (GtkPopover* popover /*none*/);
// ::GtkPositionType gtk_popover_get_position (::GtkPopover* popover /*none*/);
Gtk::PositionType base::PopoverBase::get_position () noexcept
{
  typedef ::GtkPositionType (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_get_position;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_popover_popdown (GtkPopover* popover /*none*/);
// void gtk_popover_popdown (::GtkPopover* popover /*none*/);
void base::PopoverBase::popdown () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_popdown;
  call_wrap_v ((::GtkPopover*) (gobj_()));
}

// void gtk_popover_popup (GtkPopover* popover /*none*/);
// void gtk_popover_popup (::GtkPopover* popover /*none*/);
void base::PopoverBase::popup () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_popup;
  call_wrap_v ((::GtkPopover*) (gobj_()));
}

// void gtk_popover_present (GtkPopover* popover /*none*/);
// void gtk_popover_present (::GtkPopover* popover /*none*/);
void base::PopoverBase::present () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_present;
  call_wrap_v ((::GtkPopover*) (gobj_()));
}

// void gtk_popover_set_autohide (GtkPopover* popover /*none*/, gboolean autohide);
// void gtk_popover_set_autohide (::GtkPopover* popover /*none*/, gboolean autohide);
void base::PopoverBase::set_autohide (gboolean autohide) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, gboolean autohide);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_autohide;
  auto autohide_to_c = autohide;
  call_wrap_v ((::GtkPopover*) (gobj_()), (gboolean) (autohide_to_c));
}

// void gtk_popover_set_cascade_popdown (GtkPopover* popover /*none*/, gboolean cascade_popdown);
// void gtk_popover_set_cascade_popdown (::GtkPopover* popover /*none*/, gboolean cascade_popdown);
void base::PopoverBase::set_cascade_popdown (gboolean cascade_popdown) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, gboolean cascade_popdown);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_cascade_popdown;
  auto cascade_popdown_to_c = cascade_popdown;
  call_wrap_v ((::GtkPopover*) (gobj_()), (gboolean) (cascade_popdown_to_c));
}

// void gtk_popover_set_child (GtkPopover* popover /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_popover_set_child (::GtkPopover* popover /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::PopoverBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::PopoverBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_popover_set_default_widget (GtkPopover* popover /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_popover_set_default_widget (::GtkPopover* popover /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::PopoverBase::set_default_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_default_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::PopoverBase::set_default_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_default_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_popover_set_has_arrow (GtkPopover* popover /*none*/, gboolean has_arrow);
// void gtk_popover_set_has_arrow (::GtkPopover* popover /*none*/, gboolean has_arrow);
void base::PopoverBase::set_has_arrow (gboolean has_arrow) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, gboolean has_arrow);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_has_arrow;
  auto has_arrow_to_c = has_arrow;
  call_wrap_v ((::GtkPopover*) (gobj_()), (gboolean) (has_arrow_to_c));
}

// void gtk_popover_set_mnemonics_visible (GtkPopover* popover /*none*/, gboolean mnemonics_visible);
// void gtk_popover_set_mnemonics_visible (::GtkPopover* popover /*none*/, gboolean mnemonics_visible);
void base::PopoverBase::set_mnemonics_visible (gboolean mnemonics_visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, gboolean mnemonics_visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_mnemonics_visible;
  auto mnemonics_visible_to_c = mnemonics_visible;
  call_wrap_v ((::GtkPopover*) (gobj_()), (gboolean) (mnemonics_visible_to_c));
}

// void gtk_popover_set_offset (GtkPopover* popover /*none*/, int x_offset, int y_offset);
// void gtk_popover_set_offset (::GtkPopover* popover /*none*/, gint x_offset, gint y_offset);
void base::PopoverBase::set_offset (gint x_offset, gint y_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, gint x_offset, gint y_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_offset;
  auto y_offset_to_c = y_offset;
  auto x_offset_to_c = x_offset;
  call_wrap_v ((::GtkPopover*) (gobj_()), (gint) (x_offset_to_c), (gint) (y_offset_to_c));
}

// void gtk_popover_set_pointing_to (GtkPopover* popover /*none*/, const GdkRectangle* rect /*none,nullable*/);
// void gtk_popover_set_pointing_to (::GtkPopover* popover /*none*/, const ::GdkRectangle* rect /*none,nullable*/);
void base::PopoverBase::set_pointing_to (const Gdk::Rectangle_Ref rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, const ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_pointing_to;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  call_wrap_v ((::GtkPopover*) (gobj_()), (const ::GdkRectangle*) (rect_to_c));
}
void base::PopoverBase::set_pointing_to () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, const ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_pointing_to;
  auto rect_to_c = nullptr;
  call_wrap_v ((::GtkPopover*) (gobj_()), (const ::GdkRectangle*) (rect_to_c));
}

// void gtk_popover_set_position (GtkPopover* popover /*none*/, GtkPositionType position);
// void gtk_popover_set_position (::GtkPopover* popover /*none*/, ::GtkPositionType position);
void base::PopoverBase::set_position (Gtk::PositionType position) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkPositionType position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_set_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkPositionType) (position_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popover_extra_def_impl.hpp>)
#include <gtk/popover_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popover_extra_impl.hpp>)
#include <gtk/popover_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PopoverClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkPopoverClass *methods = (::GtkPopoverClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate_default) methods->activate_default = (decltype (methods->activate_default)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_default_>;
  if (init_data.closed) methods->closed = (decltype (methods->closed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::closed_>;
}

// void Popover::activate_default (GtkPopover* popover /*none*/);
// void Popover::activate_default (::GtkPopover* popover /*none*/);
void PopoverClass::activate_default_ () noexcept
{
  if (!get_struct_()->activate_default) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_default;
  call_wrap_v ((::GtkPopover*) (gobj_()));
}

// void Popover::closed (GtkPopover* popover /*none*/);
// void Popover::closed (::GtkPopover* popover /*none*/);
void PopoverClass::closed_ () noexcept
{
  if (!get_struct_()->closed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->closed;
  call_wrap_v ((::GtkPopover*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
