// AUTO-GENERATED

#ifndef _GI_GTK_LAYOUTMANAGER_IMPL_HPP_
#define _GI_GTK_LAYOUTMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_layout_manager_allocate (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, int width, int height, int baseline);
// void gtk_layout_manager_allocate (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
void base::LayoutManagerBase::allocate (Gtk::Widget widget, gint width, gint height, gint baseline) noexcept
{
  typedef void (*call_wrap_t) (::GtkLayoutManager* manager, ::GtkWidget* widget, gint width, gint height, gint baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_manager_allocate;
  auto baseline_to_c = baseline;
  auto height_to_c = height;
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkLayoutManager*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint) (height_to_c), (gint) (baseline_to_c));
}

// GtkLayoutChild* /*none*/ gtk_layout_manager_get_layout_child (GtkLayoutManager* manager /*none*/, GtkWidget* child /*none*/);
// ::GtkLayoutChild* /*none*/ gtk_layout_manager_get_layout_child (::GtkLayoutManager* manager /*none*/, ::GtkWidget* child /*none*/);
Gtk::LayoutChild base::LayoutManagerBase::get_layout_child (Gtk::Widget child) noexcept
{
  typedef ::GtkLayoutChild* (*call_wrap_t) (::GtkLayoutManager* manager, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_manager_get_layout_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkLayoutManager*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSizeRequestMode gtk_layout_manager_get_request_mode (GtkLayoutManager* manager /*none*/);
// ::GtkSizeRequestMode gtk_layout_manager_get_request_mode (::GtkLayoutManager* manager /*none*/);
Gtk::SizeRequestMode base::LayoutManagerBase::get_request_mode () noexcept
{
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkLayoutManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_manager_get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkLayoutManager*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* /*none,nullable*/ gtk_layout_manager_get_widget (GtkLayoutManager* manager /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_layout_manager_get_widget (::GtkLayoutManager* manager /*none*/);
Gtk::Widget base::LayoutManagerBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkLayoutManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_manager_get_widget;
  auto _temp_ret = call_wrap_v ((::GtkLayoutManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_layout_manager_layout_changed (GtkLayoutManager* manager /*none*/);
// void gtk_layout_manager_layout_changed (::GtkLayoutManager* manager /*none*/);
void base::LayoutManagerBase::layout_changed () noexcept
{
  typedef void (*call_wrap_t) (::GtkLayoutManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_manager_layout_changed;
  call_wrap_v ((::GtkLayoutManager*) (gobj_()));
}

// void gtk_layout_manager_measure (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void gtk_layout_manager_measure (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
void base::LayoutManagerBase::measure (Gtk::Widget widget, Gtk::Orientation orientation, gint for_size, gint * minimum, gint * natural, gint * minimum_baseline, gint * natural_baseline) noexcept
{
  typedef void (*call_wrap_t) (::GtkLayoutManager* manager, ::GtkWidget* widget, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_manager_measure;
  gint natural_baseline_o {};
  gint minimum_baseline_o {};
  gint natural_o {};
  gint minimum_o {};
  auto for_size_to_c = for_size;
  auto orientation_to_c = gi::unwrap (orientation);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkLayoutManager*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkOrientation) (orientation_to_c), (gint) (for_size_to_c), (gint*) (minimum ? &minimum_o : nullptr), (gint*) (natural ? &natural_o : nullptr), (gint*) (minimum_baseline ? &minimum_baseline_o : nullptr), (gint*) (natural_baseline ? &natural_baseline_o : nullptr));
  if (natural_baseline) *natural_baseline = natural_baseline_o;
  if (minimum_baseline) *minimum_baseline = minimum_baseline_o;
  if (natural) *natural = natural_o;
  if (minimum) *minimum = minimum_o;
}
std::tuple<gint, gint, gint, gint> base::LayoutManagerBase::measure (Gtk::Widget widget, Gtk::Orientation orientation, gint for_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkLayoutManager* manager, ::GtkWidget* widget, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_manager_measure;
  gint natural_baseline_o {};
  gint minimum_baseline_o {};
  gint natural_o {};
  gint minimum_o {};
  auto for_size_to_c = for_size;
  auto orientation_to_c = gi::unwrap (orientation);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkLayoutManager*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkOrientation) (orientation_to_c), (gint) (for_size_to_c), (gint*) (&minimum_o), (gint*) (&natural_o), (gint*) (&minimum_baseline_o), (gint*) (&natural_baseline_o));
  auto &&tmp_return_1 = minimum_o;
  auto &&tmp_return_2 = natural_o;
  auto &&tmp_return_3 = minimum_baseline_o;
  auto &&tmp_return_4 = natural_baseline_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/layoutmanager_extra_def_impl.hpp>)
#include <gtk/layoutmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/layoutmanager_extra_impl.hpp>)
#include <gtk/layoutmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void LayoutManagerClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkLayoutManagerClass *methods = (::GtkLayoutManagerClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.allocate) methods->allocate = (decltype (methods->allocate)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, gint width, gint height, gint baseline), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::allocate_>;
  if (init_data.create_layout_child) methods->create_layout_child = (decltype (methods->create_layout_child)) detail::method_wrapper<self, Gtk::LayoutChild (*) (Gtk::Widget widget, Gtk::Widget for_child), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::create_layout_child_>;
  if (init_data.get_request_mode) methods->get_request_mode = (decltype (methods->get_request_mode)) detail::method_wrapper<self, Gtk::SizeRequestMode (*) (Gtk::Widget widget), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_request_mode_>;
  if (init_data.measure) methods->measure = (decltype (methods->measure)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, Gtk::Orientation orientation, gint for_size, gint & minimum, gint & natural, gint & minimum_baseline, gint & natural_baseline), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::measure_>;
  if (init_data.root) methods->root = (decltype (methods->root)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::root_>;
  if (init_data.unroot) methods->unroot = (decltype (methods->unroot)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::unroot_>;
}

// void LayoutManager::allocate (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, int width, int height, int baseline);
// void LayoutManager::allocate (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
void LayoutManagerClass::allocate_ (Gtk::Widget widget, gint width, gint height, gint baseline) noexcept
{
  if (!get_struct_()->allocate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkLayoutManager* manager, ::GtkWidget* widget, gint width, gint height, gint baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->allocate;
  auto baseline_to_c = baseline;
  auto height_to_c = height;
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkLayoutManager*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint) (height_to_c), (gint) (baseline_to_c));
}

// GtkLayoutChild* /*full*/ LayoutManager::create_layout_child (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, GtkWidget* for_child /*none*/);
// ::GtkLayoutChild* /*full*/ LayoutManager::create_layout_child (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, ::GtkWidget* for_child /*none*/);
Gtk::LayoutChild LayoutManagerClass::create_layout_child_ (Gtk::Widget widget, Gtk::Widget for_child) noexcept
{
  if (!get_struct_()->create_layout_child) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkLayoutChild* (*call_wrap_t) (::GtkLayoutManager* manager, ::GtkWidget* widget, ::GtkWidget* for_child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_layout_child;
  auto for_child_to_c = gi::unwrap (for_child, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkLayoutManager*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkWidget*) (for_child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkSizeRequestMode LayoutManager::get_request_mode (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/);
// ::GtkSizeRequestMode LayoutManager::get_request_mode (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/);
Gtk::SizeRequestMode LayoutManagerClass::get_request_mode_ (Gtk::Widget widget) noexcept
{
  if (!get_struct_()->get_request_mode) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkLayoutManager* manager, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_request_mode;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkLayoutManager*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret);
}

// void LayoutManager::measure (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void LayoutManager::measure (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
void LayoutManagerClass::measure_ (Gtk::Widget widget, Gtk::Orientation orientation, gint for_size, gint & minimum, gint & natural, gint & minimum_baseline, gint & natural_baseline) noexcept
{
  if (!get_struct_()->measure) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkLayoutManager* manager, ::GtkWidget* widget, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->measure;
  gint natural_baseline_o {};
  gint minimum_baseline_o {};
  gint natural_o {};
  gint minimum_o {};
  auto for_size_to_c = for_size;
  auto orientation_to_c = gi::unwrap (orientation);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkLayoutManager*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkOrientation) (orientation_to_c), (gint) (for_size_to_c), (gint*) (&minimum_o), (gint*) (&natural_o), (gint*) (&minimum_baseline_o), (gint*) (&natural_baseline_o));
  natural_baseline = natural_baseline_o;
  minimum_baseline = minimum_baseline_o;
  natural = natural_o;
  minimum = minimum_o;
}

// void LayoutManager::root (GtkLayoutManager* manager /*none*/);
// void LayoutManager::root (::GtkLayoutManager* manager /*none*/);
void LayoutManagerClass::root_ () noexcept
{
  if (!get_struct_()->root) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkLayoutManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->root;
  call_wrap_v ((::GtkLayoutManager*) (gobj_()));
}

// void LayoutManager::unroot (GtkLayoutManager* manager /*none*/);
// void LayoutManager::unroot (::GtkLayoutManager* manager /*none*/);
void LayoutManagerClass::unroot_ () noexcept
{
  if (!get_struct_()->unroot) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkLayoutManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unroot;
  call_wrap_v ((::GtkLayoutManager*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
