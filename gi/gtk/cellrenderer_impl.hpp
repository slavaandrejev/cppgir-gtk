// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERER_IMPL_HPP_
#define _GI_GTK_CELLRENDERER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_cell_renderer_activate (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gboolean gtk_cell_renderer_activate (::GtkCellRenderer* cell /*none*/,  event /*none*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_renderer_get_aligned_area (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, GtkCellRendererState flags, const GdkRectangle* cell_area /*none*/, GdkRectangle* aligned_area /*none,out,ca*/);
// void gtk_cell_renderer_get_aligned_area (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* aligned_area /*none,out,ca*/);
void base::CellRendererBase::get_aligned_area (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle & aligned_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_aligned_area;
  detail::allocate(aligned_area);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(aligned_area).gobj_()), "");
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (flags_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) (aligned_area).gobj_()));
}
Gdk::Rectangle base::CellRendererBase::get_aligned_area (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle_Ref cell_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_aligned_area;
  Gdk::Rectangle aligned_area_c;
  auto aligned_area = &aligned_area_c;
  detail::allocate(*aligned_area);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*aligned_area).gobj_()), "");
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (flags_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) (aligned_area ? (::GdkRectangle*) (*aligned_area).gobj_() : nullptr));
  return aligned_area_c;
}

// void gtk_cell_renderer_get_alignment (GtkCellRenderer* cell /*none*/, float* xalign, float* yalign);
// void gtk_cell_renderer_get_alignment (::GtkCellRenderer* cell /*none*/, gfloat* xalign, gfloat* yalign);
void base::CellRendererBase::get_alignment (gfloat * xalign, gfloat * yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_alignment;
  gfloat yalign_o {};
  gfloat xalign_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gfloat*) (xalign ? &xalign_o : nullptr), (gfloat*) (yalign ? &yalign_o : nullptr));
  if (yalign) *yalign = yalign_o;
  if (xalign) *xalign = xalign_o;
}
std::tuple<gfloat, gfloat> base::CellRendererBase::get_alignment () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_alignment;
  gfloat yalign_o {};
  gfloat xalign_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gfloat*) (&xalign_o), (gfloat*) (&yalign_o));
  auto &&tmp_return_1 = xalign_o;
  auto &&tmp_return_2 = yalign_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_renderer_get_fixed_size (GtkCellRenderer* cell /*none*/, int* width, int* height);
// void gtk_cell_renderer_get_fixed_size (::GtkCellRenderer* cell /*none*/, gint* width, gint* height);
void base::CellRendererBase::get_fixed_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_fixed_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_fixed_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_fixed_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_cell_renderer_get_is_expanded (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_get_is_expanded (::GtkCellRenderer* cell /*none*/);
bool base::CellRendererBase::get_is_expanded () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_is_expanded;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_renderer_get_is_expander (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_get_is_expander (::GtkCellRenderer* cell /*none*/);
bool base::CellRendererBase::get_is_expander () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_is_expander;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return _temp_ret;
}

// void gtk_cell_renderer_get_padding (GtkCellRenderer* cell /*none*/, int* xpad, int* ypad);
// void gtk_cell_renderer_get_padding (::GtkCellRenderer* cell /*none*/, gint* xpad, gint* ypad);
void base::CellRendererBase::get_padding (gint * xpad, gint * ypad) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint* xpad, gint* ypad);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_padding;
  gint ypad_o {};
  gint xpad_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint*) (xpad ? &xpad_o : nullptr), (gint*) (ypad ? &ypad_o : nullptr));
  if (ypad) *ypad = ypad_o;
  if (xpad) *xpad = xpad_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_padding () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint* xpad, gint* ypad);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_padding;
  gint ypad_o {};
  gint xpad_o {};
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint*) (&xpad_o), (gint*) (&ypad_o));
  auto &&tmp_return_1 = xpad_o;
  auto &&tmp_return_2 = ypad_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_renderer_get_preferred_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void gtk_cell_renderer_get_preferred_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
void base::CellRendererBase::get_preferred_height (Gtk::Widget widget, gint * minimum_size, gint * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_height;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (minimum_size ? &minimum_size_o : nullptr), (gint*) (natural_size ? &natural_size_o : nullptr));
  if (natural_size) *natural_size = natural_size_o;
  if (minimum_size) *minimum_size = minimum_size_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_preferred_height (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_height;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_size_o), (gint*) (&natural_size_o));
  auto &&tmp_return_1 = minimum_size_o;
  auto &&tmp_return_2 = natural_size_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_renderer_get_preferred_height_for_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void gtk_cell_renderer_get_preferred_height_for_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
void base::CellRendererBase::get_preferred_height_for_width (Gtk::Widget widget, gint width, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_preferred_height_for_width (Gtk::Widget widget, gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  auto &&tmp_return_1 = minimum_height_o;
  auto &&tmp_return_2 = natural_height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_renderer_get_preferred_size (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, GtkRequisition* minimum_size /*none,out,opt,ca*/, GtkRequisition* natural_size /*none,out,opt,ca*/);
// void gtk_cell_renderer_get_preferred_size (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, ::GtkRequisition* minimum_size /*none,out,opt,ca*/, ::GtkRequisition* natural_size /*none,out,opt,ca*/);
void base::CellRendererBase::get_preferred_size (Gtk::Widget widget, Gtk::Requisition * minimum_size, Gtk::Requisition * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_size;
  static_assert(sizeof(::GtkRequisition) == sizeof(*(*natural_size).gobj_()), "");
  static_assert(sizeof(::GtkRequisition) == sizeof(*(*minimum_size).gobj_()), "");
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkRequisition*) (minimum_size ? (::GtkRequisition*) (*minimum_size).gobj_() : nullptr), (::GtkRequisition*) (natural_size ? (::GtkRequisition*) (*natural_size).gobj_() : nullptr));
}
std::tuple<Gtk::Requisition, Gtk::Requisition> base::CellRendererBase::get_preferred_size (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_size;
  Gtk::Requisition natural_size_c;
  auto natural_size = &natural_size_c;
  static_assert(sizeof(::GtkRequisition) == sizeof(*(*natural_size).gobj_()), "");
  Gtk::Requisition minimum_size_c;
  auto minimum_size = &minimum_size_c;
  static_assert(sizeof(::GtkRequisition) == sizeof(*(*minimum_size).gobj_()), "");
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkRequisition*) (minimum_size ? (::GtkRequisition*) (*minimum_size).gobj_() : nullptr), (::GtkRequisition*) (natural_size ? (::GtkRequisition*) (*natural_size).gobj_() : nullptr));
  auto &&tmp_return_1 = minimum_size_c;
  auto &&tmp_return_2 = natural_size_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_renderer_get_preferred_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void gtk_cell_renderer_get_preferred_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
void base::CellRendererBase::get_preferred_width (Gtk::Widget widget, gint * minimum_size, gint * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_width;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (minimum_size ? &minimum_size_o : nullptr), (gint*) (natural_size ? &natural_size_o : nullptr));
  if (natural_size) *natural_size = natural_size_o;
  if (minimum_size) *minimum_size = minimum_size_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_preferred_width (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_width;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_size_o), (gint*) (&natural_size_o));
  auto &&tmp_return_1 = minimum_size_o;
  auto &&tmp_return_2 = natural_size_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_renderer_get_preferred_width_for_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void gtk_cell_renderer_get_preferred_width_for_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
void base::CellRendererBase::get_preferred_width_for_height (Gtk::Widget widget, gint height, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellRendererBase::get_preferred_width_for_height (Gtk::Widget widget, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  auto &&tmp_return_1 = minimum_width_o;
  auto &&tmp_return_2 = natural_width_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkSizeRequestMode gtk_cell_renderer_get_request_mode (GtkCellRenderer* cell /*none*/);
// ::GtkSizeRequestMode gtk_cell_renderer_get_request_mode (::GtkCellRenderer* cell /*none*/);
Gtk::SizeRequestMode base::CellRendererBase::get_request_mode () noexcept
{
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_cell_renderer_get_sensitive (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_get_sensitive (::GtkCellRenderer* cell /*none*/);
bool base::CellRendererBase::get_sensitive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_sensitive;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return _temp_ret;
}

// GtkStateFlags gtk_cell_renderer_get_state (GtkCellRenderer* cell /*none,nullable*/, GtkWidget* widget /*none,nullable*/, GtkCellRendererState cell_state);
// ::GtkStateFlags gtk_cell_renderer_get_state (::GtkCellRenderer* cell /*none,nullable*/, ::GtkWidget* widget /*none,nullable*/, ::GtkCellRendererState cell_state);
Gtk::StateFlags base::CellRendererBase::get_state (Gtk::Widget widget, Gtk::CellRendererState cell_state) noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState cell_state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_state;
  auto cell_state_to_c = gi::unwrap (cell_state);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (cell_state_to_c));
  return gi::wrap (_temp_ret);
}
Gtk::StateFlags base::CellRendererBase::get_state (Gtk::CellRendererState cell_state) noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState cell_state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_state;
  auto cell_state_to_c = gi::unwrap (cell_state);
  auto widget_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (cell_state_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_cell_renderer_get_visible (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_get_visible (::GtkCellRenderer* cell /*none*/);
bool base::CellRendererBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_renderer_is_activatable (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_is_activatable (::GtkCellRenderer* cell /*none*/);
bool base::CellRendererBase::is_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_is_activatable;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return _temp_ret;
}

// void gtk_cell_renderer_set_alignment (GtkCellRenderer* cell /*none*/, float xalign, float yalign);
// void gtk_cell_renderer_set_alignment (::GtkCellRenderer* cell /*none*/, gfloat xalign, gfloat yalign);
void base::CellRendererBase::set_alignment (gfloat xalign, gfloat yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gfloat xalign, gfloat yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_set_alignment;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gfloat) (xalign_to_c), (gfloat) (yalign_to_c));
}

// void gtk_cell_renderer_set_fixed_size (GtkCellRenderer* cell /*none*/, int width, int height);
// void gtk_cell_renderer_set_fixed_size (::GtkCellRenderer* cell /*none*/, gint width, gint height);
void base::CellRendererBase::set_fixed_size (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_set_fixed_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_cell_renderer_set_is_expanded (GtkCellRenderer* cell /*none*/, gboolean is_expanded);
// void gtk_cell_renderer_set_is_expanded (::GtkCellRenderer* cell /*none*/, gboolean is_expanded);
void base::CellRendererBase::set_is_expanded (gboolean is_expanded) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gboolean is_expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_set_is_expanded;
  auto is_expanded_to_c = is_expanded;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gboolean) (is_expanded_to_c));
}

// void gtk_cell_renderer_set_is_expander (GtkCellRenderer* cell /*none*/, gboolean is_expander);
// void gtk_cell_renderer_set_is_expander (::GtkCellRenderer* cell /*none*/, gboolean is_expander);
void base::CellRendererBase::set_is_expander (gboolean is_expander) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gboolean is_expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_set_is_expander;
  auto is_expander_to_c = is_expander;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gboolean) (is_expander_to_c));
}

// void gtk_cell_renderer_set_padding (GtkCellRenderer* cell /*none*/, int xpad, int ypad);
// void gtk_cell_renderer_set_padding (::GtkCellRenderer* cell /*none*/, gint xpad, gint ypad);
void base::CellRendererBase::set_padding (gint xpad, gint ypad) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gint xpad, gint ypad);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_set_padding;
  auto ypad_to_c = ypad;
  auto xpad_to_c = xpad;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gint) (xpad_to_c), (gint) (ypad_to_c));
}

// void gtk_cell_renderer_set_sensitive (GtkCellRenderer* cell /*none*/, gboolean sensitive);
// void gtk_cell_renderer_set_sensitive (::GtkCellRenderer* cell /*none*/, gboolean sensitive);
void base::CellRendererBase::set_sensitive (gboolean sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gboolean sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_set_sensitive;
  auto sensitive_to_c = sensitive;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gboolean) (sensitive_to_c));
}

// void gtk_cell_renderer_set_visible (GtkCellRenderer* cell /*none*/, gboolean visible);
// void gtk_cell_renderer_set_visible (::GtkCellRenderer* cell /*none*/, gboolean visible);
void base::CellRendererBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gboolean) (visible_to_c));
}

// void gtk_cell_renderer_snapshot (GtkCellRenderer* cell /*none*/, GtkSnapshot* snapshot /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// void gtk_cell_renderer_snapshot (::GtkCellRenderer* cell /*none*/,  snapshot /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; snapshot type  not supported

// GtkCellEditable* /*none,nullable*/ gtk_cell_renderer_start_editing (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none,nullable*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// ::GtkCellEditable* /*none,nullable*/ gtk_cell_renderer_start_editing (::GtkCellRenderer* cell /*none*/,  event /*none,nullable*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_renderer_stop_editing (GtkCellRenderer* cell /*none*/, gboolean canceled);
// void gtk_cell_renderer_stop_editing (::GtkCellRenderer* cell /*none*/, gboolean canceled);
void base::CellRendererBase::stop_editing (gboolean canceled) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, gboolean canceled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_stop_editing;
  auto canceled_to_c = canceled;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (gboolean) (canceled_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderer_extra_def_impl.hpp>)
#include <gtk/cellrenderer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderer_extra_impl.hpp>)
#include <gtk/cellrenderer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCellRendererClass *methods = (::GtkCellRendererClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.editing_canceled) methods->editing_canceled = (decltype (methods->editing_canceled)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::editing_canceled_>;
  if (init_data.editing_started) methods->editing_started = (decltype (methods->editing_started)) detail::method_wrapper<self, void (*) (Gtk::CellEditable editable, const gi::cstring_v path), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::editing_started_>;
  if (init_data.get_aligned_area) methods->get_aligned_area = (decltype (methods->get_aligned_area)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle_Ref aligned_area), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_aligned_area_>;
  if (init_data.get_preferred_height) methods->get_preferred_height = (decltype (methods->get_preferred_height)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, gint & minimum_size, gint & natural_size), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_height_>;
  if (init_data.get_preferred_height_for_width) methods->get_preferred_height_for_width = (decltype (methods->get_preferred_height_for_width)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, gint width, gint & minimum_height, gint & natural_height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_height_for_width_>;
  if (init_data.get_preferred_width) methods->get_preferred_width = (decltype (methods->get_preferred_width)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, gint & minimum_size, gint & natural_size), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_width_>;
  if (init_data.get_preferred_width_for_height) methods->get_preferred_width_for_height = (decltype (methods->get_preferred_width_for_height)) detail::method_wrapper<self, void (*) (Gtk::Widget widget, gint height, gint & minimum_width, gint & natural_width), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_width_for_height_>;
  if (init_data.get_request_mode) methods->get_request_mode = (decltype (methods->get_request_mode)) detail::method_wrapper<self, Gtk::SizeRequestMode (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_request_mode_>;
}

// gboolean CellRenderer::activate (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gboolean CellRenderer::activate (::GtkCellRenderer* cell /*none*/,  event /*none*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void CellRenderer::editing_canceled (GtkCellRenderer* cell /*none*/);
// void CellRenderer::editing_canceled (::GtkCellRenderer* cell /*none*/);
void CellRendererClass::editing_canceled_ () noexcept
{
  if (!get_struct_()->editing_canceled) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->editing_canceled;
  call_wrap_v ((::GtkCellRenderer*) (gobj_()));
}

// void CellRenderer::editing_started (GtkCellRenderer* cell /*none*/, GtkCellEditable* editable /*none*/, const char* path /*none*/);
// void CellRenderer::editing_started (::GtkCellRenderer* cell /*none*/, ::GtkCellEditable* editable /*none*/, const char* path /*none*/);
void CellRendererClass::editing_started_ (Gtk::CellEditable editable, const gi::cstring_v path) noexcept
{
  if (!get_struct_()->editing_started) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkCellEditable* editable, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->editing_started;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto editable_to_c = gi::unwrap (editable, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkCellEditable*) (editable_to_c), (const char*) (path_to_c));
}

// void CellRenderer::get_aligned_area (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, GtkCellRendererState flags, const GdkRectangle* cell_area /*none*/, GdkRectangle* aligned_area /*none,out,ca*/);
// void CellRenderer::get_aligned_area (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* aligned_area /*none,out,ca*/);
void CellRendererClass::get_aligned_area_ (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle_Ref aligned_area) noexcept
{
  if (!get_struct_()->get_aligned_area) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area, ::GdkRectangle* aligned_area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_aligned_area;
  auto aligned_area_to_c = gi::unwrap (aligned_area, gi::transfer_none);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkCellRendererState) (flags_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) (aligned_area_to_c));
}

// void CellRenderer::get_preferred_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void CellRenderer::get_preferred_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
void CellRendererClass::get_preferred_height_ (Gtk::Widget widget, gint & minimum_size, gint & natural_size) noexcept
{
  if (!get_struct_()->get_preferred_height) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_height;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_size_o), (gint*) (&natural_size_o));
  natural_size = natural_size_o;
  minimum_size = minimum_size_o;
}

// void CellRenderer::get_preferred_height_for_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void CellRenderer::get_preferred_height_for_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
void CellRendererClass::get_preferred_height_for_width_ (Gtk::Widget widget, gint width, gint & minimum_height, gint & natural_height) noexcept
{
  if (!get_struct_()->get_preferred_height_for_width) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  natural_height = natural_height_o;
  minimum_height = minimum_height_o;
}

// void CellRenderer::get_preferred_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void CellRenderer::get_preferred_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
void CellRendererClass::get_preferred_width_ (Gtk::Widget widget, gint & minimum_size, gint & natural_size) noexcept
{
  if (!get_struct_()->get_preferred_width) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_width;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_size_o), (gint*) (&natural_size_o));
  natural_size = natural_size_o;
  minimum_size = minimum_size_o;
}

// void CellRenderer::get_preferred_width_for_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void CellRenderer::get_preferred_width_for_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
void CellRendererClass::get_preferred_width_for_height_ (Gtk::Widget widget, gint height, gint & minimum_width, gint & natural_width) noexcept
{
  if (!get_struct_()->get_preferred_width_for_height) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellRenderer* cell, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellRenderer*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  natural_width = natural_width_o;
  minimum_width = minimum_width_o;
}

// GtkSizeRequestMode CellRenderer::get_request_mode (GtkCellRenderer* cell /*none*/);
// ::GtkSizeRequestMode CellRenderer::get_request_mode (::GtkCellRenderer* cell /*none*/);
Gtk::SizeRequestMode CellRendererClass::get_request_mode_ () noexcept
{
  if (!get_struct_()->get_request_mode) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void CellRenderer::snapshot (GtkCellRenderer* cell /*none*/, GtkSnapshot* snapshot /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// void CellRenderer::snapshot (::GtkCellRenderer* cell /*none*/,  snapshot /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; snapshot type  not supported

// GtkCellEditable* /*none,nullable*/ CellRenderer::start_editing (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none,nullable*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// ::GtkCellEditable* /*none,nullable*/ CellRenderer::start_editing (::GtkCellRenderer* cell /*none*/,  event /*none,nullable*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
