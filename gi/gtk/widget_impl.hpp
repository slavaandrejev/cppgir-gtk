// AUTO-GENERATED

#ifndef _GI_GTK_WIDGET_IMPL_HPP_
#define _GI_GTK_WIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Accessible WidgetBase::interface_ (gi::interface_tag<Gtk::Accessible>)
{ return gi::wrap ((Gtk::Accessible::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WidgetBase::operator Gtk::Accessible ()
{ return interface_ (gi::interface_tag<Gtk::Accessible>()); }

Gtk::Buildable WidgetBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WidgetBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::ConstraintTarget WidgetBase::interface_ (gi::interface_tag<Gtk::ConstraintTarget>)
{ return gi::wrap ((Gtk::ConstraintTarget::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WidgetBase::operator Gtk::ConstraintTarget ()
{ return interface_ (gi::interface_tag<Gtk::ConstraintTarget>()); }

// GtkTextDirection gtk_widget_get_default_direction ();
// ::GtkTextDirection gtk_widget_get_default_direction ();
Gtk::TextDirection base::WidgetBase::get_default_direction () noexcept
{
  typedef ::GtkTextDirection (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_default_direction;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

// void gtk_widget_set_default_direction (GtkTextDirection dir);
// void gtk_widget_set_default_direction (::GtkTextDirection dir);
void base::WidgetBase::set_default_direction (Gtk::TextDirection dir) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextDirection dir);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_default_direction;
  auto dir_to_c = gi::unwrap (dir);
  call_wrap_v ((::GtkTextDirection) (dir_to_c));
}

// void gtk_widget_action_set_enabled (GtkWidget* widget /*none*/, const char* action_name /*none*/, gboolean enabled);
// void gtk_widget_action_set_enabled (::GtkWidget* widget /*none*/, const char* action_name /*none*/, gboolean enabled);
void base::WidgetBase::action_set_enabled (const gi::cstring_v action_name, gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* action_name, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_action_set_enabled;
  auto enabled_to_c = enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (action_name_to_c), (gboolean) (enabled_to_c));
}

// gboolean gtk_widget_activate (GtkWidget* widget /*none*/);
// gboolean gtk_widget_activate (::GtkWidget* widget /*none*/);
bool base::WidgetBase::activate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_activate;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_activate_action (GtkWidget* widget /*none*/, const char* name /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// gboolean gtk_widget_activate_action (::GtkWidget* widget /*none*/, const char* name /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by activate_action_variant, varargs not supported

// gboolean gtk_widget_activate_action_variant (GtkWidget* widget /*none*/, const char* name /*none*/, GVariant* args /*none,nullable*/);
// gboolean gtk_widget_activate_action_variant (::GtkWidget* widget /*none*/, const char* name /*none*/, ::GVariant* args /*none,nullable*/);
bool base::WidgetBase::activate_action (const gi::cstring_v name, GLib::Variant args) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, const char* name, ::GVariant* args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_activate_action_variant;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c), (::GVariant*) (args_to_c));
  return _temp_ret;
}
bool base::WidgetBase::activate_action (const gi::cstring_v name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, const char* name, ::GVariant* args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_activate_action_variant;
  auto args_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c), (::GVariant*) (args_to_c));
  return _temp_ret;
}

// void gtk_widget_activate_default (GtkWidget* widget /*none*/);
// void gtk_widget_activate_default (::GtkWidget* widget /*none*/);
void base::WidgetBase::activate_default () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_activate_default;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_add_controller (GtkWidget* widget /*none*/, GtkEventController* controller /*full*/);
// void gtk_widget_add_controller (::GtkWidget* widget /*none*/, ::GtkEventController* controller /*full*/);
void base::WidgetBase::add_controller (Gtk::EventController controller) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_add_controller;
  auto controller_to_c = gi::unwrap (controller, gi::transfer_full);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkEventController*) (controller_to_c));
}

// void gtk_widget_add_css_class (GtkWidget* widget /*none*/, const char* css_class /*none*/);
// void gtk_widget_add_css_class (::GtkWidget* widget /*none*/, const char* css_class /*none*/);
void base::WidgetBase::add_css_class (const gi::cstring_v css_class) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* css_class);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_add_css_class;
  auto css_class_to_c = gi::unwrap (css_class, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (css_class_to_c));
}

// void gtk_widget_add_mnemonic_label (GtkWidget* widget /*none*/, GtkWidget* label /*none*/);
// void gtk_widget_add_mnemonic_label (::GtkWidget* widget /*none*/, ::GtkWidget* label /*none*/);
void base::WidgetBase::add_mnemonic_label (Gtk::Widget label) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_add_mnemonic_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (label_to_c));
}

// guint gtk_widget_add_tick_callback (GtkWidget* widget /*none*/, GtkTickCallback callback /*none*/, gpointer user_data, GDestroyNotify notify /*none*/);
// guint gtk_widget_add_tick_callback (::GtkWidget* widget /*none*/, Gtk::TickCallback::cfunction_type callback /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type notify /*none*/);
guint base::WidgetBase::add_tick_callback (Gtk::TickCallback callback) noexcept
{
  typedef guint (*call_wrap_t) (::GtkWidget* widget, Gtk::TickCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_add_tick_callback;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (Gtk::TickCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
  return _temp_ret;
}

// void gtk_widget_allocate (GtkWidget* widget /*none*/, int width, int height, int baseline, GskTransform* transform /*full,nullable*/);
// void gtk_widget_allocate (::GtkWidget* widget /*none*/, gint width, gint height, gint baseline, ::GskTransform* transform /*full,nullable*/);
void base::WidgetBase::allocate (gint width, gint height, gint baseline, Gsk::Transform transform) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint height, gint baseline, ::GskTransform* transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_allocate;
  auto transform_to_c = gi::unwrap (std::move(transform), gi::transfer_full);
  auto baseline_to_c = baseline;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c), (gint) (baseline_to_c), (::GskTransform*) (transform_to_c));
}
void base::WidgetBase::allocate (gint width, gint height, gint baseline) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint height, gint baseline, ::GskTransform* transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_allocate;
  auto transform_to_c = nullptr;
  auto baseline_to_c = baseline;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c), (gint) (baseline_to_c), (::GskTransform*) (transform_to_c));
}

// gboolean gtk_widget_child_focus (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean gtk_widget_child_focus (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
bool base::WidgetBase::child_focus (Gtk::DirectionType direction) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_child_focus;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_compute_bounds (GtkWidget* widget /*none*/, GtkWidget* target /*none*/, graphene_rect_t* out_bounds /*none,out,ca*/);
// gboolean gtk_widget_compute_bounds (::GtkWidget* widget /*none*/, ::GtkWidget* target /*none*/, ::graphene_rect_t* out_bounds /*none,out,ca*/);
bool base::WidgetBase::compute_bounds (Gtk::Widget target, Graphene::Rect & out_bounds) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* target, ::graphene_rect_t* out_bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_compute_bounds;
  detail::allocate(out_bounds);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(out_bounds).gobj_()), "");
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (target_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (out_bounds).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Rect> base::WidgetBase::compute_bounds (Gtk::Widget target) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* target, ::graphene_rect_t* out_bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_compute_bounds;
  Graphene::Rect out_bounds_c;
  auto out_bounds = &out_bounds_c;
  detail::allocate(*out_bounds);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*out_bounds).gobj_()), "");
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (target_to_c), (::graphene_rect_t*) (out_bounds ? (::graphene_rect_t*) (*out_bounds).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_bounds_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_widget_compute_expand (GtkWidget* widget /*none*/, GtkOrientation orientation);
// gboolean gtk_widget_compute_expand (::GtkWidget* widget /*none*/, ::GtkOrientation orientation);
bool base::WidgetBase::compute_expand (Gtk::Orientation orientation) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_compute_expand;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkOrientation) (orientation_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_compute_point (GtkWidget* widget /*none*/, GtkWidget* target /*none*/, const graphene_point_t* point /*none*/, graphene_point_t* out_point /*none,out,ca*/);
// gboolean gtk_widget_compute_point (::GtkWidget* widget /*none*/, ::GtkWidget* target /*none*/, const ::graphene_point_t* point /*none*/, ::graphene_point_t* out_point /*none,out,ca*/);
bool base::WidgetBase::compute_point (Gtk::Widget target, const Graphene::Point_Ref point, Graphene::Point & out_point) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* target, const ::graphene_point_t* point, ::graphene_point_t* out_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_compute_point;
  detail::allocate(out_point);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(out_point).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (target_to_c), (const ::graphene_point_t*) (point_to_c), (::graphene_point_t*) ((::graphene_point_t*) (out_point).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Point> base::WidgetBase::compute_point (Gtk::Widget target, const Graphene::Point_Ref point) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* target, const ::graphene_point_t* point, ::graphene_point_t* out_point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_compute_point;
  Graphene::Point out_point_c;
  auto out_point = &out_point_c;
  detail::allocate(*out_point);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*out_point).gobj_()), "");
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (target_to_c), (const ::graphene_point_t*) (point_to_c), (::graphene_point_t*) (out_point ? (::graphene_point_t*) (*out_point).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_point_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_widget_compute_transform (GtkWidget* widget /*none*/, GtkWidget* target /*none*/, graphene_matrix_t* out_transform /*none,out,ca*/);
// gboolean gtk_widget_compute_transform (::GtkWidget* widget /*none*/, ::GtkWidget* target /*none*/, ::graphene_matrix_t* out_transform /*none,out,ca*/);
bool base::WidgetBase::compute_transform (Gtk::Widget target, Graphene::Matrix & out_transform) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* target, ::graphene_matrix_t* out_transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_compute_transform;
  detail::allocate(out_transform);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(out_transform).gobj_()), "");
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (target_to_c), (::graphene_matrix_t*) ((::graphene_matrix_t*) (out_transform).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Matrix> base::WidgetBase::compute_transform (Gtk::Widget target) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* target, ::graphene_matrix_t* out_transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_compute_transform;
  Graphene::Matrix out_transform_c;
  auto out_transform = &out_transform_c;
  detail::allocate(*out_transform);
  static_assert(sizeof(::graphene_matrix_t) == sizeof(*(*out_transform).gobj_()), "");
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (target_to_c), (::graphene_matrix_t*) (out_transform ? (::graphene_matrix_t*) (*out_transform).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_transform_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_widget_contains (GtkWidget* widget /*none*/, double x, double y);
// gboolean gtk_widget_contains (::GtkWidget* widget /*none*/, gdouble x, gdouble y);
bool base::WidgetBase::contains (gdouble x, gdouble y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_contains;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gdouble) (x_to_c), (gdouble) (y_to_c));
  return _temp_ret;
}

// PangoContext* /*full*/ gtk_widget_create_pango_context (GtkWidget* widget /*none*/);
// ::PangoContext* /*full*/ gtk_widget_create_pango_context (::GtkWidget* widget /*none*/);
Pango::Context base::WidgetBase::create_pango_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_create_pango_context;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoLayout* /*full*/ gtk_widget_create_pango_layout (GtkWidget* widget /*none*/, const char* text /*none,nullable*/);
// ::PangoLayout* /*full*/ gtk_widget_create_pango_layout (::GtkWidget* widget /*none*/, const char* text /*none,nullable*/);
Pango::Layout base::WidgetBase::create_pango_layout (const gi::cstring_v text) noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkWidget* widget, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_create_pango_layout;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Pango::Layout base::WidgetBase::create_pango_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkWidget* widget, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_create_pango_layout;
  auto text_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_widget_dispose_template (GtkWidget* widget /*none*/, GType widget_type);
// void gtk_widget_dispose_template (::GtkWidget* widget /*none*/, GType widget_type);
void base::WidgetBase::dispose_template (GType widget_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, GType widget_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_dispose_template;
  auto widget_type_to_c = widget_type;
  call_wrap_v ((::GtkWidget*) (gobj_()), (GType) (widget_type_to_c));
}

// gboolean gtk_drag_check_threshold (GtkWidget* widget /*none*/, int start_x, int start_y, int current_x, int current_y);
// gboolean gtk_drag_check_threshold (::GtkWidget* widget /*none*/, gint start_x, gint start_y, gint current_x, gint current_y);
bool base::WidgetBase::drag_check_threshold (gint start_x, gint start_y, gint current_x, gint current_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gint start_x, gint start_y, gint current_x, gint current_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_check_threshold;
  auto current_y_to_c = current_y;
  auto current_x_to_c = current_x;
  auto start_y_to_c = start_y;
  auto start_x_to_c = start_x;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (start_x_to_c), (gint) (start_y_to_c), (gint) (current_x_to_c), (gint) (current_y_to_c));
  return _temp_ret;
}

// void gtk_widget_error_bell (GtkWidget* widget /*none*/);
// void gtk_widget_error_bell (::GtkWidget* widget /*none*/);
void base::WidgetBase::error_bell () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_error_bell;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// int gtk_widget_get_allocated_baseline (GtkWidget* widget /*none*/);
// gint gtk_widget_get_allocated_baseline (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_allocated_baseline () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_allocated_baseline;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_allocated_height (GtkWidget* widget /*none*/);
// gint gtk_widget_get_allocated_height (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_allocated_height () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_allocated_height;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_allocated_width (GtkWidget* widget /*none*/);
// gint gtk_widget_get_allocated_width (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_allocated_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_allocated_width;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_get_allocation (GtkWidget* widget /*none*/, GtkAllocation* allocation /*none,out,ca*/);
// void gtk_widget_get_allocation (::GtkWidget* widget /*none*/, ::GtkAllocation* allocation /*none,out,ca*/);
void base::WidgetBase::get_allocation (Gtk::Allocation & allocation) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_allocation;
  detail::allocate(allocation);
  static_assert(sizeof(::GtkAllocation) == sizeof(*(allocation).gobj_()), "");
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) ((::GtkAllocation*) (allocation).gobj_()));
}
Gtk::Allocation base::WidgetBase::get_allocation () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_allocation;
  Gtk::Allocation allocation_c;
  auto allocation = &allocation_c;
  detail::allocate(*allocation);
  static_assert(sizeof(::GtkAllocation) == sizeof(*(*allocation).gobj_()), "");
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) (allocation ? (::GtkAllocation*) (*allocation).gobj_() : nullptr));
  return allocation_c;
}

// GtkWidget* /*none,nullable*/ gtk_widget_get_ancestor (GtkWidget* widget /*none*/, GType widget_type);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_ancestor (::GtkWidget* widget /*none*/, GType widget_type);
Gtk::Widget base::WidgetBase::get_ancestor (GType widget_type) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget, GType widget_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_ancestor;
  auto widget_type_to_c = widget_type;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (GType) (widget_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_widget_get_baseline (GtkWidget* widget /*none*/);
// gint gtk_widget_get_baseline (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_baseline () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_baseline;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_can_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_can_focus (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_can_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_can_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_can_target (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_can_target (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_can_target () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_can_target;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_child_visible (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_child_visible (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_child_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_child_visible;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GdkClipboard* /*none*/ gtk_widget_get_clipboard (GtkWidget* widget /*none*/);
// ::GdkClipboard* /*none*/ gtk_widget_get_clipboard (::GtkWidget* widget /*none*/);
Gdk::Clipboard base::WidgetBase::get_clipboard () noexcept
{
  typedef ::GdkClipboard* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_clipboard;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_widget_get_color (GtkWidget* widget /*none*/, GdkRGBA* color /*none,out,ca*/);
// void gtk_widget_get_color (::GtkWidget* widget /*none*/, ::GdkRGBA* color /*none,out,ca*/);
void base::WidgetBase::get_color (Gdk::RGBA & color) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_color;
  detail::allocate(color);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(color).gobj_()), "");
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) (color).gobj_()));
}
Gdk::RGBA base::WidgetBase::get_color () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_color;
  Gdk::RGBA color_c;
  auto color = &color_c;
  detail::allocate(*color);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(*color).gobj_()), "");
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkRGBA*) (color ? (::GdkRGBA*) (*color).gobj_() : nullptr));
  return color_c;
}

// char** /*full*/ gtk_widget_get_css_classes (GtkWidget* widget /*none*/);
// char** /*full*/ gtk_widget_get_css_classes (::GtkWidget* widget /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::WidgetBase::get_css_classes () noexcept
{
  typedef char** (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_css_classes;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_widget_get_css_name (GtkWidget* self /*none*/);
// const char* /*none*/ gtk_widget_get_css_name (::GtkWidget* self /*none*/);
gi::cstring_v base::WidgetBase::get_css_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_css_name;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkCursor* /*none,nullable*/ gtk_widget_get_cursor (GtkWidget* widget /*none*/);
// ::GdkCursor* /*none,nullable*/ gtk_widget_get_cursor (::GtkWidget* widget /*none*/);
Gdk::Cursor base::WidgetBase::get_cursor () noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_cursor;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkTextDirection gtk_widget_get_direction (GtkWidget* widget /*none*/);
// ::GtkTextDirection gtk_widget_get_direction (::GtkWidget* widget /*none*/);
Gtk::TextDirection base::WidgetBase::get_direction () noexcept
{
  typedef ::GtkTextDirection (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_direction;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDisplay* /*none*/ gtk_widget_get_display (GtkWidget* widget /*none*/);
// ::GdkDisplay* /*none*/ gtk_widget_get_display (::GtkWidget* widget /*none*/);
Gdk::Display base::WidgetBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_display;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_widget_get_first_child (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_first_child (::GtkWidget* widget /*none*/);
Gtk::Widget base::WidgetBase::get_first_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_first_child;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_widget_get_focus_child (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_focus_child (::GtkWidget* widget /*none*/);
Gtk::Widget base::WidgetBase::get_focus_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_focus_child;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_widget_get_focus_on_click (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_focus_on_click (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_focus_on_click () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_focus_on_click;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_focusable (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_focusable (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_focusable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_focusable;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// PangoFontMap* /*none,nullable*/ gtk_widget_get_font_map (GtkWidget* widget /*none*/);
// ::PangoFontMap* /*none,nullable*/ gtk_widget_get_font_map (::GtkWidget* widget /*none*/);
Pango::FontMap base::WidgetBase::get_font_map () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_font_map;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const cairo_font_options_t* /*none,nullable*/ gtk_widget_get_font_options (GtkWidget* widget /*none*/);
// const ::cairo_font_options_t* /*none,nullable*/ gtk_widget_get_font_options (::GtkWidget* widget /*none*/);
cairo::FontOptions_Ref base::WidgetBase::get_font_options () noexcept
{
  typedef const ::cairo_font_options_t* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_font_options;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkFrameClock* /*none,nullable*/ gtk_widget_get_frame_clock (GtkWidget* widget /*none*/);
// ::GdkFrameClock* /*none,nullable*/ gtk_widget_get_frame_clock (::GtkWidget* widget /*none*/);
Gdk::FrameClock base::WidgetBase::get_frame_clock () noexcept
{
  typedef ::GdkFrameClock* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_frame_clock;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkAlign gtk_widget_get_halign (GtkWidget* widget /*none*/);
// ::GtkAlign gtk_widget_get_halign (::GtkWidget* widget /*none*/);
Gtk::Align base::WidgetBase::get_halign () noexcept
{
  typedef ::GtkAlign (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_halign;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_widget_get_has_tooltip (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_has_tooltip (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_has_tooltip () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_has_tooltip;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_height (GtkWidget* widget /*none*/);
// gint gtk_widget_get_height (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_height;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_hexpand (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_hexpand (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_hexpand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_hexpand;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_hexpand_set (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_hexpand_set (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_hexpand_set () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_hexpand_set;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_widget_get_last_child (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_last_child (::GtkWidget* widget /*none*/);
Gtk::Widget base::WidgetBase::get_last_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_last_child;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkLayoutManager* /*none,nullable*/ gtk_widget_get_layout_manager (GtkWidget* widget /*none*/);
// ::GtkLayoutManager* /*none,nullable*/ gtk_widget_get_layout_manager (::GtkWidget* widget /*none*/);
Gtk::LayoutManager base::WidgetBase::get_layout_manager () noexcept
{
  typedef ::GtkLayoutManager* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_layout_manager;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_widget_get_mapped (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_mapped (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_mapped () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_mapped;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_margin_bottom (GtkWidget* widget /*none*/);
// gint gtk_widget_get_margin_bottom (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_margin_bottom () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_margin_bottom;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_margin_end (GtkWidget* widget /*none*/);
// gint gtk_widget_get_margin_end (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_margin_end () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_margin_end;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_margin_start (GtkWidget* widget /*none*/);
// gint gtk_widget_get_margin_start (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_margin_start () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_margin_start;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_margin_top (GtkWidget* widget /*none*/);
// gint gtk_widget_get_margin_top (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_margin_top () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_margin_top;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gtk_widget_get_name (GtkWidget* widget /*none*/);
// const char* /*none*/ gtk_widget_get_name (::GtkWidget* widget /*none*/);
gi::cstring_v base::WidgetBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_name;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkNative* /*none,nullable*/ gtk_widget_get_native (GtkWidget* widget /*none*/);
// ::GtkNative* /*none,nullable*/ gtk_widget_get_native (::GtkWidget* widget /*none*/);
Gtk::Native base::WidgetBase::get_native () noexcept
{
  typedef ::GtkNative* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_native;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_widget_get_next_sibling (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_next_sibling (::GtkWidget* widget /*none*/);
Gtk::Widget base::WidgetBase::get_next_sibling () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_next_sibling;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_widget_get_opacity (GtkWidget* widget /*none*/);
// gdouble gtk_widget_get_opacity (::GtkWidget* widget /*none*/);
gdouble base::WidgetBase::get_opacity () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_opacity;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GtkOverflow gtk_widget_get_overflow (GtkWidget* widget /*none*/);
// ::GtkOverflow gtk_widget_get_overflow (::GtkWidget* widget /*none*/);
Gtk::Overflow base::WidgetBase::get_overflow () noexcept
{
  typedef ::GtkOverflow (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_overflow;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoContext* /*none*/ gtk_widget_get_pango_context (GtkWidget* widget /*none*/);
// ::PangoContext* /*none*/ gtk_widget_get_pango_context (::GtkWidget* widget /*none*/);
Pango::Context base::WidgetBase::get_pango_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_pango_context;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_widget_get_parent (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_parent (::GtkWidget* widget /*none*/);
Gtk::Widget base::WidgetBase::get_parent () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_parent;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_widget_get_preferred_size (GtkWidget* widget /*none*/, GtkRequisition* minimum_size /*none,out,opt,ca*/, GtkRequisition* natural_size /*none,out,opt,ca*/);
// void gtk_widget_get_preferred_size (::GtkWidget* widget /*none*/, ::GtkRequisition* minimum_size /*none,out,opt,ca*/, ::GtkRequisition* natural_size /*none,out,opt,ca*/);
void base::WidgetBase::get_preferred_size (Gtk::Requisition * minimum_size, Gtk::Requisition * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_preferred_size;
  static_assert(sizeof(::GtkRequisition) == sizeof(*(*natural_size).gobj_()), "");
  static_assert(sizeof(::GtkRequisition) == sizeof(*(*minimum_size).gobj_()), "");
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkRequisition*) (minimum_size ? (::GtkRequisition*) (*minimum_size).gobj_() : nullptr), (::GtkRequisition*) (natural_size ? (::GtkRequisition*) (*natural_size).gobj_() : nullptr));
}
std::tuple<Gtk::Requisition, Gtk::Requisition> base::WidgetBase::get_preferred_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_preferred_size;
  Gtk::Requisition natural_size_c;
  auto natural_size = &natural_size_c;
  static_assert(sizeof(::GtkRequisition) == sizeof(*(*natural_size).gobj_()), "");
  Gtk::Requisition minimum_size_c;
  auto minimum_size = &minimum_size_c;
  static_assert(sizeof(::GtkRequisition) == sizeof(*(*minimum_size).gobj_()), "");
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkRequisition*) (minimum_size ? (::GtkRequisition*) (*minimum_size).gobj_() : nullptr), (::GtkRequisition*) (natural_size ? (::GtkRequisition*) (*natural_size).gobj_() : nullptr));
  auto &&tmp_return_1 = minimum_size_c;
  auto &&tmp_return_2 = natural_size_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkWidget* /*none,nullable*/ gtk_widget_get_prev_sibling (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_prev_sibling (::GtkWidget* widget /*none*/);
Gtk::Widget base::WidgetBase::get_prev_sibling () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_prev_sibling;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkClipboard* /*none*/ gtk_widget_get_primary_clipboard (GtkWidget* widget /*none*/);
// ::GdkClipboard* /*none*/ gtk_widget_get_primary_clipboard (::GtkWidget* widget /*none*/);
Gdk::Clipboard base::WidgetBase::get_primary_clipboard () noexcept
{
  typedef ::GdkClipboard* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_primary_clipboard;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_widget_get_realized (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_realized (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_realized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_realized;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_receives_default (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_receives_default (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_receives_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_receives_default;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GtkSizeRequestMode gtk_widget_get_request_mode (GtkWidget* widget /*none*/);
// ::GtkSizeRequestMode gtk_widget_get_request_mode (::GtkWidget* widget /*none*/);
Gtk::SizeRequestMode base::WidgetBase::get_request_mode () noexcept
{
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkRoot* /*none,nullable*/ gtk_widget_get_root (GtkWidget* widget /*none*/);
// ::GtkRoot* /*none,nullable*/ gtk_widget_get_root (::GtkWidget* widget /*none*/);
Gtk::Root base::WidgetBase::get_root () noexcept
{
  typedef ::GtkRoot* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_root;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_widget_get_scale_factor (GtkWidget* widget /*none*/);
// gint gtk_widget_get_scale_factor (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_scale_factor () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_scale_factor;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_sensitive (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_sensitive (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_sensitive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_sensitive;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GtkSettings* /*none*/ gtk_widget_get_settings (GtkWidget* widget /*none*/);
// ::GtkSettings* /*none*/ gtk_widget_get_settings (::GtkWidget* widget /*none*/);
Gtk::Settings base::WidgetBase::get_settings () noexcept
{
  typedef ::GtkSettings* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_settings;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_widget_get_size (GtkWidget* widget /*none*/, GtkOrientation orientation);
// gint gtk_widget_get_size (::GtkWidget* widget /*none*/, ::GtkOrientation orientation);
gint base::WidgetBase::get_size (Gtk::Orientation orientation) noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_size;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkOrientation) (orientation_to_c));
  return _temp_ret;
}

// void gtk_widget_get_size_request (GtkWidget* widget /*none*/, int* width, int* height);
// void gtk_widget_get_size_request (::GtkWidget* widget /*none*/, gint* width, gint* height);
void base::WidgetBase::get_size_request (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_size_request;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::WidgetBase::get_size_request () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_size_request;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkStateFlags gtk_widget_get_state_flags (GtkWidget* widget /*none*/);
// ::GtkStateFlags gtk_widget_get_state_flags (::GtkWidget* widget /*none*/);
Gtk::StateFlags base::WidgetBase::get_state_flags () noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_state_flags;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkStyleContext* /*none*/ gtk_widget_get_style_context (GtkWidget* widget /*none*/);
// ::GtkStyleContext* /*none*/ gtk_widget_get_style_context (::GtkWidget* widget /*none*/);
Gtk::StyleContext base::WidgetBase::get_style_context () noexcept
{
  typedef ::GtkStyleContext* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_style_context;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GObject* /*none*/ gtk_widget_get_template_child (GtkWidget* widget /*none*/, GType widget_type, const char* name /*none*/);
// ::GObject* /*none*/ gtk_widget_get_template_child (::GtkWidget* widget /*none*/, GType widget_type, const char* name /*none*/);
GObject::Object base::WidgetBase::get_template_child (GType widget_type, const gi::cstring_v name) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkWidget* widget, GType widget_type, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_template_child;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto widget_type_to_c = widget_type;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (GType) (widget_type_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_widget_get_tooltip_markup (GtkWidget* widget /*none*/);
// const char* /*none,nullable*/ gtk_widget_get_tooltip_markup (::GtkWidget* widget /*none*/);
gi::cstring_v base::WidgetBase::get_tooltip_markup () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_tooltip_markup;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_widget_get_tooltip_text (GtkWidget* widget /*none*/);
// const char* /*none,nullable*/ gtk_widget_get_tooltip_text (::GtkWidget* widget /*none*/);
gi::cstring_v base::WidgetBase::get_tooltip_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_tooltip_text;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkAlign gtk_widget_get_valign (GtkWidget* widget /*none*/);
// ::GtkAlign gtk_widget_get_valign (::GtkWidget* widget /*none*/);
Gtk::Align base::WidgetBase::get_valign () noexcept
{
  typedef ::GtkAlign (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_valign;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_widget_get_vexpand (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_vexpand (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_vexpand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_vexpand;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_vexpand_set (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_vexpand_set (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_vexpand_set () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_vexpand_set;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_visible (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_visible (::GtkWidget* widget /*none*/);
bool base::WidgetBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_width (GtkWidget* widget /*none*/);
// gint gtk_widget_get_width (::GtkWidget* widget /*none*/);
gint base::WidgetBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_get_width;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_grab_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_grab_focus (::GtkWidget* widget /*none*/);
bool base::WidgetBase::grab_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_grab_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_has_css_class (GtkWidget* widget /*none*/, const char* css_class /*none*/);
// gboolean gtk_widget_has_css_class (::GtkWidget* widget /*none*/, const char* css_class /*none*/);
bool base::WidgetBase::has_css_class (const gi::cstring_v css_class) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, const char* css_class);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_has_css_class;
  auto css_class_to_c = gi::unwrap (css_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (css_class_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_has_default (GtkWidget* widget /*none*/);
// gboolean gtk_widget_has_default (::GtkWidget* widget /*none*/);
bool base::WidgetBase::has_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_has_default;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_has_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_has_focus (::GtkWidget* widget /*none*/);
bool base::WidgetBase::has_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_has_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_has_visible_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_has_visible_focus (::GtkWidget* widget /*none*/);
bool base::WidgetBase::has_visible_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_has_visible_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_hide (GtkWidget* widget /*none*/);
// void gtk_widget_hide (::GtkWidget* widget /*none*/);
void base::WidgetBase::hide () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_hide;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean gtk_widget_in_destruction (GtkWidget* widget /*none*/);
// gboolean gtk_widget_in_destruction (::GtkWidget* widget /*none*/);
bool base::WidgetBase::in_destruction () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_in_destruction;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_init_template (GtkWidget* widget /*none*/);
// void gtk_widget_init_template (::GtkWidget* widget /*none*/);
void base::WidgetBase::init_template () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_init_template;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_insert_action_group (GtkWidget* widget /*none*/, const char* name /*none*/, GActionGroup* group /*none,nullable*/);
// void gtk_widget_insert_action_group (::GtkWidget* widget /*none*/, const char* name /*none*/, ::GActionGroup* group /*none,nullable*/);
void base::WidgetBase::insert_action_group (const gi::cstring_v name, Gio::ActionGroup group) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* name, ::GActionGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_insert_action_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c), (::GActionGroup*) (group_to_c));
}
void base::WidgetBase::insert_action_group (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* name, ::GActionGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_insert_action_group;
  auto group_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c), (::GActionGroup*) (group_to_c));
}

// void gtk_widget_insert_after (GtkWidget* widget /*none*/, GtkWidget* parent /*none*/, GtkWidget* previous_sibling /*none,nullable*/);
// void gtk_widget_insert_after (::GtkWidget* widget /*none*/, ::GtkWidget* parent /*none*/, ::GtkWidget* previous_sibling /*none,nullable*/);
void base::WidgetBase::insert_after (Gtk::Widget parent, Gtk::Widget previous_sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* parent, ::GtkWidget* previous_sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_insert_after;
  auto previous_sibling_to_c = gi::unwrap (previous_sibling, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (parent_to_c), (::GtkWidget*) (previous_sibling_to_c));
}
void base::WidgetBase::insert_after (Gtk::Widget parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* parent, ::GtkWidget* previous_sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_insert_after;
  auto previous_sibling_to_c = nullptr;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (parent_to_c), (::GtkWidget*) (previous_sibling_to_c));
}

// void gtk_widget_insert_before (GtkWidget* widget /*none*/, GtkWidget* parent /*none*/, GtkWidget* next_sibling /*none,nullable*/);
// void gtk_widget_insert_before (::GtkWidget* widget /*none*/, ::GtkWidget* parent /*none*/, ::GtkWidget* next_sibling /*none,nullable*/);
void base::WidgetBase::insert_before (Gtk::Widget parent, Gtk::Widget next_sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* parent, ::GtkWidget* next_sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_insert_before;
  auto next_sibling_to_c = gi::unwrap (next_sibling, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (parent_to_c), (::GtkWidget*) (next_sibling_to_c));
}
void base::WidgetBase::insert_before (Gtk::Widget parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* parent, ::GtkWidget* next_sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_insert_before;
  auto next_sibling_to_c = nullptr;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (parent_to_c), (::GtkWidget*) (next_sibling_to_c));
}

// gboolean gtk_widget_is_ancestor (GtkWidget* widget /*none*/, GtkWidget* ancestor /*none*/);
// gboolean gtk_widget_is_ancestor (::GtkWidget* widget /*none*/, ::GtkWidget* ancestor /*none*/);
bool base::WidgetBase::is_ancestor (Gtk::Widget ancestor) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* ancestor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_is_ancestor;
  auto ancestor_to_c = gi::unwrap (ancestor, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (ancestor_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_is_drawable (GtkWidget* widget /*none*/);
// gboolean gtk_widget_is_drawable (::GtkWidget* widget /*none*/);
bool base::WidgetBase::is_drawable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_is_drawable;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_is_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_is_focus (::GtkWidget* widget /*none*/);
bool base::WidgetBase::is_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_is_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_is_sensitive (GtkWidget* widget /*none*/);
// gboolean gtk_widget_is_sensitive (::GtkWidget* widget /*none*/);
bool base::WidgetBase::is_sensitive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_is_sensitive;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_is_visible (GtkWidget* widget /*none*/);
// gboolean gtk_widget_is_visible (::GtkWidget* widget /*none*/);
bool base::WidgetBase::is_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_is_visible;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_keynav_failed (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean gtk_widget_keynav_failed (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
bool base::WidgetBase::keynav_failed (Gtk::DirectionType direction) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_keynav_failed;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// GList* /*container*/ gtk_widget_list_mnemonic_labels (GtkWidget* widget /*none*/);
// ::GList* /*container*/ gtk_widget_list_mnemonic_labels (::GtkWidget* widget /*none*/);
gi::Collection<GList, ::GtkWidget*, gi::transfer_container_t> base::WidgetBase::list_mnemonic_labels () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_list_mnemonic_labels;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkWidget*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// void gtk_widget_map (GtkWidget* widget /*none*/);
// void gtk_widget_map (::GtkWidget* widget /*none*/);
void base::WidgetBase::map () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_map;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_measure (GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void gtk_widget_measure (::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
void base::WidgetBase::measure (Gtk::Orientation orientation, gint for_size, gint * minimum, gint * natural, gint * minimum_baseline, gint * natural_baseline) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_measure;
  gint natural_baseline_o {};
  gint minimum_baseline_o {};
  gint natural_o {};
  gint minimum_o {};
  auto for_size_to_c = for_size;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkOrientation) (orientation_to_c), (gint) (for_size_to_c), (gint*) (minimum ? &minimum_o : nullptr), (gint*) (natural ? &natural_o : nullptr), (gint*) (minimum_baseline ? &minimum_baseline_o : nullptr), (gint*) (natural_baseline ? &natural_baseline_o : nullptr));
  if (natural_baseline) *natural_baseline = natural_baseline_o;
  if (minimum_baseline) *minimum_baseline = minimum_baseline_o;
  if (natural) *natural = natural_o;
  if (minimum) *minimum = minimum_o;
}
std::tuple<gint, gint, gint, gint> base::WidgetBase::measure (Gtk::Orientation orientation, gint for_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_measure;
  gint natural_baseline_o {};
  gint minimum_baseline_o {};
  gint natural_o {};
  gint minimum_o {};
  auto for_size_to_c = for_size;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkOrientation) (orientation_to_c), (gint) (for_size_to_c), (gint*) (&minimum_o), (gint*) (&natural_o), (gint*) (&minimum_baseline_o), (gint*) (&natural_baseline_o));
  auto &&tmp_return_1 = minimum_o;
  auto &&tmp_return_2 = natural_o;
  auto &&tmp_return_3 = minimum_baseline_o;
  auto &&tmp_return_4 = natural_baseline_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// gboolean gtk_widget_mnemonic_activate (GtkWidget* widget /*none*/, gboolean group_cycling);
// gboolean gtk_widget_mnemonic_activate (::GtkWidget* widget /*none*/, gboolean group_cycling);
bool base::WidgetBase::mnemonic_activate (gboolean group_cycling) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gboolean group_cycling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_mnemonic_activate;
  auto group_cycling_to_c = group_cycling;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (group_cycling_to_c));
  return _temp_ret;
}

// GListModel* /*full*/ gtk_widget_observe_children (GtkWidget* widget /*none*/);
// ::GListModel* /*full*/ gtk_widget_observe_children (::GtkWidget* widget /*none*/);
Gio::ListModel base::WidgetBase::observe_children () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_observe_children;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*full*/ gtk_widget_observe_controllers (GtkWidget* widget /*none*/);
// ::GListModel* /*full*/ gtk_widget_observe_controllers (::GtkWidget* widget /*none*/);
Gio::ListModel base::WidgetBase::observe_controllers () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_observe_controllers;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkWidget* /*none,nullable*/ gtk_widget_pick (GtkWidget* widget /*none*/, double x, double y, GtkPickFlags flags);
// ::GtkWidget* /*none,nullable*/ gtk_widget_pick (::GtkWidget* widget /*none*/, gdouble x, gdouble y, ::GtkPickFlags flags);
Gtk::Widget base::WidgetBase::pick (gdouble x, gdouble y, Gtk::PickFlags flags) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget, gdouble x, gdouble y, ::GtkPickFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_pick;
  auto flags_to_c = gi::unwrap (flags);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gdouble) (x_to_c), (gdouble) (y_to_c), (::GtkPickFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_widget_queue_allocate (GtkWidget* widget /*none*/);
// void gtk_widget_queue_allocate (::GtkWidget* widget /*none*/);
void base::WidgetBase::queue_allocate () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_queue_allocate;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_queue_draw (GtkWidget* widget /*none*/);
// void gtk_widget_queue_draw (::GtkWidget* widget /*none*/);
void base::WidgetBase::queue_draw () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_queue_draw;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_queue_resize (GtkWidget* widget /*none*/);
// void gtk_widget_queue_resize (::GtkWidget* widget /*none*/);
void base::WidgetBase::queue_resize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_queue_resize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_realize (GtkWidget* widget /*none*/);
// void gtk_widget_realize (::GtkWidget* widget /*none*/);
void base::WidgetBase::realize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_realize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_remove_controller (GtkWidget* widget /*none*/, GtkEventController* controller /*none*/);
// void gtk_widget_remove_controller (::GtkWidget* widget /*none*/, ::GtkEventController* controller /*none*/);
void base::WidgetBase::remove_controller (Gtk::EventController controller) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_remove_controller;
  auto controller_to_c = gi::unwrap (controller, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkEventController*) (controller_to_c));
}

// void gtk_widget_remove_css_class (GtkWidget* widget /*none*/, const char* css_class /*none*/);
// void gtk_widget_remove_css_class (::GtkWidget* widget /*none*/, const char* css_class /*none*/);
void base::WidgetBase::remove_css_class (const gi::cstring_v css_class) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* css_class);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_remove_css_class;
  auto css_class_to_c = gi::unwrap (css_class, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (css_class_to_c));
}

// void gtk_widget_remove_mnemonic_label (GtkWidget* widget /*none*/, GtkWidget* label /*none*/);
// void gtk_widget_remove_mnemonic_label (::GtkWidget* widget /*none*/, ::GtkWidget* label /*none*/);
void base::WidgetBase::remove_mnemonic_label (Gtk::Widget label) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_remove_mnemonic_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (label_to_c));
}

// void gtk_widget_remove_tick_callback (GtkWidget* widget /*none*/, guint id);
// void gtk_widget_remove_tick_callback (::GtkWidget* widget /*none*/, guint id);
void base::WidgetBase::remove_tick_callback (guint id) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, guint id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_remove_tick_callback;
  auto id_to_c = id;
  call_wrap_v ((::GtkWidget*) (gobj_()), (guint) (id_to_c));
}

// void gtk_widget_set_can_focus (GtkWidget* widget /*none*/, gboolean can_focus);
// void gtk_widget_set_can_focus (::GtkWidget* widget /*none*/, gboolean can_focus);
void base::WidgetBase::set_can_focus (gboolean can_focus) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean can_focus);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_can_focus;
  auto can_focus_to_c = can_focus;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (can_focus_to_c));
}

// void gtk_widget_set_can_target (GtkWidget* widget /*none*/, gboolean can_target);
// void gtk_widget_set_can_target (::GtkWidget* widget /*none*/, gboolean can_target);
void base::WidgetBase::set_can_target (gboolean can_target) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean can_target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_can_target;
  auto can_target_to_c = can_target;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (can_target_to_c));
}

// void gtk_widget_set_child_visible (GtkWidget* widget /*none*/, gboolean child_visible);
// void gtk_widget_set_child_visible (::GtkWidget* widget /*none*/, gboolean child_visible);
void base::WidgetBase::set_child_visible (gboolean child_visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean child_visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_child_visible;
  auto child_visible_to_c = child_visible;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (child_visible_to_c));
}

// void gtk_widget_set_css_classes (GtkWidget* widget /*none*/, const char** classes /*none*/);
// void gtk_widget_set_css_classes (::GtkWidget* widget /*none*/, const char** classes /*none*/);
void base::WidgetBase::set_css_classes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> classes) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char** classes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_css_classes;
  auto classes_w = unwrap (std::move(classes), gi::transfer_none);
  auto classes_to_c = classes_w;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char**) (classes_to_c));
}

// void gtk_widget_set_cursor (GtkWidget* widget /*none*/, GdkCursor* cursor /*none,nullable*/);
// void gtk_widget_set_cursor (::GtkWidget* widget /*none*/, ::GdkCursor* cursor /*none,nullable*/);
void base::WidgetBase::set_cursor (Gdk::Cursor cursor) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_cursor;
  auto cursor_to_c = gi::unwrap (cursor, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkCursor*) (cursor_to_c));
}
void base::WidgetBase::set_cursor () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_cursor;
  auto cursor_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkCursor*) (cursor_to_c));
}

// void gtk_widget_set_cursor_from_name (GtkWidget* widget /*none*/, const char* name /*none,nullable*/);
// void gtk_widget_set_cursor_from_name (::GtkWidget* widget /*none*/, const char* name /*none,nullable*/);
void base::WidgetBase::set_cursor_from_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_cursor_from_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c));
}
void base::WidgetBase::set_cursor_from_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_cursor_from_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_widget_set_direction (GtkWidget* widget /*none*/, GtkTextDirection dir);
// void gtk_widget_set_direction (::GtkWidget* widget /*none*/, ::GtkTextDirection dir);
void base::WidgetBase::set_direction (Gtk::TextDirection dir) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkTextDirection dir);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_direction;
  auto dir_to_c = gi::unwrap (dir);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkTextDirection) (dir_to_c));
}

// void gtk_widget_set_focus_child (GtkWidget* widget /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_widget_set_focus_child (::GtkWidget* widget /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::WidgetBase::set_focus_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_focus_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::WidgetBase::set_focus_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_focus_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_widget_set_focus_on_click (GtkWidget* widget /*none*/, gboolean focus_on_click);
// void gtk_widget_set_focus_on_click (::GtkWidget* widget /*none*/, gboolean focus_on_click);
void base::WidgetBase::set_focus_on_click (gboolean focus_on_click) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean focus_on_click);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_focus_on_click;
  auto focus_on_click_to_c = focus_on_click;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (focus_on_click_to_c));
}

// void gtk_widget_set_focusable (GtkWidget* widget /*none*/, gboolean focusable);
// void gtk_widget_set_focusable (::GtkWidget* widget /*none*/, gboolean focusable);
void base::WidgetBase::set_focusable (gboolean focusable) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean focusable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_focusable;
  auto focusable_to_c = focusable;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (focusable_to_c));
}

// void gtk_widget_set_font_map (GtkWidget* widget /*none*/, PangoFontMap* font_map /*none,nullable*/);
// void gtk_widget_set_font_map (::GtkWidget* widget /*none*/, ::PangoFontMap* font_map /*none,nullable*/);
void base::WidgetBase::set_font_map (Pango::FontMap font_map) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::PangoFontMap* font_map);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_font_map;
  auto font_map_to_c = gi::unwrap (font_map, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::PangoFontMap*) (font_map_to_c));
}
void base::WidgetBase::set_font_map () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::PangoFontMap* font_map);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_font_map;
  auto font_map_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::PangoFontMap*) (font_map_to_c));
}

// void gtk_widget_set_font_options (GtkWidget* widget /*none*/, const cairo_font_options_t* options /*none,nullable*/);
// void gtk_widget_set_font_options (::GtkWidget* widget /*none*/, const ::cairo_font_options_t* options /*none,nullable*/);
void base::WidgetBase::set_font_options (const cairo::FontOptions_Ref options) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::cairo_font_options_t* options);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_font_options;
  auto options_to_c = gi::unwrap (options, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::cairo_font_options_t*) (options_to_c));
}
void base::WidgetBase::set_font_options () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::cairo_font_options_t* options);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_font_options;
  auto options_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::cairo_font_options_t*) (options_to_c));
}

// void gtk_widget_set_halign (GtkWidget* widget /*none*/, GtkAlign align);
// void gtk_widget_set_halign (::GtkWidget* widget /*none*/, ::GtkAlign align);
void base::WidgetBase::set_halign (Gtk::Align align) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAlign align);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_halign;
  auto align_to_c = gi::unwrap (align);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAlign) (align_to_c));
}

// void gtk_widget_set_has_tooltip (GtkWidget* widget /*none*/, gboolean has_tooltip);
// void gtk_widget_set_has_tooltip (::GtkWidget* widget /*none*/, gboolean has_tooltip);
void base::WidgetBase::set_has_tooltip (gboolean has_tooltip) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean has_tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_has_tooltip;
  auto has_tooltip_to_c = has_tooltip;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (has_tooltip_to_c));
}

// void gtk_widget_set_hexpand (GtkWidget* widget /*none*/, gboolean expand);
// void gtk_widget_set_hexpand (::GtkWidget* widget /*none*/, gboolean expand);
void base::WidgetBase::set_hexpand (gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_hexpand;
  auto expand_to_c = expand;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (expand_to_c));
}

// void gtk_widget_set_hexpand_set (GtkWidget* widget /*none*/, gboolean set);
// void gtk_widget_set_hexpand_set (::GtkWidget* widget /*none*/, gboolean set);
void base::WidgetBase::set_hexpand_set (gboolean set) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean set);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_hexpand_set;
  auto set_to_c = set;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (set_to_c));
}

// void gtk_widget_set_layout_manager (GtkWidget* widget /*none*/, GtkLayoutManager* layout_manager /*full,nullable*/);
// void gtk_widget_set_layout_manager (::GtkWidget* widget /*none*/, ::GtkLayoutManager* layout_manager /*full,nullable*/);
void base::WidgetBase::set_layout_manager (Gtk::LayoutManager layout_manager) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkLayoutManager* layout_manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_layout_manager;
  auto layout_manager_to_c = gi::unwrap (layout_manager, gi::transfer_full);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkLayoutManager*) (layout_manager_to_c));
}
void base::WidgetBase::set_layout_manager () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkLayoutManager* layout_manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_layout_manager;
  auto layout_manager_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkLayoutManager*) (layout_manager_to_c));
}

// void gtk_widget_set_margin_bottom (GtkWidget* widget /*none*/, int margin);
// void gtk_widget_set_margin_bottom (::GtkWidget* widget /*none*/, gint margin);
void base::WidgetBase::set_margin_bottom (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_margin_bottom;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_widget_set_margin_end (GtkWidget* widget /*none*/, int margin);
// void gtk_widget_set_margin_end (::GtkWidget* widget /*none*/, gint margin);
void base::WidgetBase::set_margin_end (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_margin_end;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_widget_set_margin_start (GtkWidget* widget /*none*/, int margin);
// void gtk_widget_set_margin_start (::GtkWidget* widget /*none*/, gint margin);
void base::WidgetBase::set_margin_start (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_margin_start;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_widget_set_margin_top (GtkWidget* widget /*none*/, int margin);
// void gtk_widget_set_margin_top (::GtkWidget* widget /*none*/, gint margin);
void base::WidgetBase::set_margin_top (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_margin_top;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_widget_set_name (GtkWidget* widget /*none*/, const char* name /*none*/);
// void gtk_widget_set_name (::GtkWidget* widget /*none*/, const char* name /*none*/);
void base::WidgetBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_widget_set_opacity (GtkWidget* widget /*none*/, double opacity);
// void gtk_widget_set_opacity (::GtkWidget* widget /*none*/, gdouble opacity);
void base::WidgetBase::set_opacity (gdouble opacity) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gdouble opacity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_opacity;
  auto opacity_to_c = opacity;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gdouble) (opacity_to_c));
}

// void gtk_widget_set_overflow (GtkWidget* widget /*none*/, GtkOverflow overflow);
// void gtk_widget_set_overflow (::GtkWidget* widget /*none*/, ::GtkOverflow overflow);
void base::WidgetBase::set_overflow (Gtk::Overflow overflow) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkOverflow overflow);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_overflow;
  auto overflow_to_c = gi::unwrap (overflow);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkOverflow) (overflow_to_c));
}

// void gtk_widget_set_parent (GtkWidget* widget /*none*/, GtkWidget* parent /*none*/);
// void gtk_widget_set_parent (::GtkWidget* widget /*none*/, ::GtkWidget* parent /*none*/);
void base::WidgetBase::set_parent (Gtk::Widget parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (parent_to_c));
}

// void gtk_widget_set_receives_default (GtkWidget* widget /*none*/, gboolean receives_default);
// void gtk_widget_set_receives_default (::GtkWidget* widget /*none*/, gboolean receives_default);
void base::WidgetBase::set_receives_default (gboolean receives_default) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean receives_default);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_receives_default;
  auto receives_default_to_c = receives_default;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (receives_default_to_c));
}

// void gtk_widget_set_sensitive (GtkWidget* widget /*none*/, gboolean sensitive);
// void gtk_widget_set_sensitive (::GtkWidget* widget /*none*/, gboolean sensitive);
void base::WidgetBase::set_sensitive (gboolean sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_sensitive;
  auto sensitive_to_c = sensitive;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (sensitive_to_c));
}

// void gtk_widget_set_size_request (GtkWidget* widget /*none*/, int width, int height);
// void gtk_widget_set_size_request (::GtkWidget* widget /*none*/, gint width, gint height);
void base::WidgetBase::set_size_request (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_size_request;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_widget_set_state_flags (GtkWidget* widget /*none*/, GtkStateFlags flags, gboolean clear);
// void gtk_widget_set_state_flags (::GtkWidget* widget /*none*/, ::GtkStateFlags flags, gboolean clear);
void base::WidgetBase::set_state_flags (Gtk::StateFlags flags, gboolean clear) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkStateFlags flags, gboolean clear);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_state_flags;
  auto clear_to_c = clear;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkStateFlags) (flags_to_c), (gboolean) (clear_to_c));
}

// void gtk_widget_set_tooltip_markup (GtkWidget* widget /*none*/, const char* markup /*none,nullable*/);
// void gtk_widget_set_tooltip_markup (::GtkWidget* widget /*none*/, const char* markup /*none,nullable*/);
void base::WidgetBase::set_tooltip_markup (const gi::cstring_v markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_tooltip_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (markup_to_c));
}
void base::WidgetBase::set_tooltip_markup () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_tooltip_markup;
  auto markup_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (markup_to_c));
}

// void gtk_widget_set_tooltip_text (GtkWidget* widget /*none*/, const char* text /*none,nullable*/);
// void gtk_widget_set_tooltip_text (::GtkWidget* widget /*none*/, const char* text /*none,nullable*/);
void base::WidgetBase::set_tooltip_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_tooltip_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (text_to_c));
}
void base::WidgetBase::set_tooltip_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_tooltip_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_widget_set_valign (GtkWidget* widget /*none*/, GtkAlign align);
// void gtk_widget_set_valign (::GtkWidget* widget /*none*/, ::GtkAlign align);
void base::WidgetBase::set_valign (Gtk::Align align) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAlign align);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_valign;
  auto align_to_c = gi::unwrap (align);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAlign) (align_to_c));
}

// void gtk_widget_set_vexpand (GtkWidget* widget /*none*/, gboolean expand);
// void gtk_widget_set_vexpand (::GtkWidget* widget /*none*/, gboolean expand);
void base::WidgetBase::set_vexpand (gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_vexpand;
  auto expand_to_c = expand;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (expand_to_c));
}

// void gtk_widget_set_vexpand_set (GtkWidget* widget /*none*/, gboolean set);
// void gtk_widget_set_vexpand_set (::GtkWidget* widget /*none*/, gboolean set);
void base::WidgetBase::set_vexpand_set (gboolean set) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean set);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_vexpand_set;
  auto set_to_c = set;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (set_to_c));
}

// void gtk_widget_set_visible (GtkWidget* widget /*none*/, gboolean visible);
// void gtk_widget_set_visible (::GtkWidget* widget /*none*/, gboolean visible);
void base::WidgetBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (visible_to_c));
}

// gboolean gtk_widget_should_layout (GtkWidget* widget /*none*/);
// gboolean gtk_widget_should_layout (::GtkWidget* widget /*none*/);
bool base::WidgetBase::should_layout () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_should_layout;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_show (GtkWidget* widget /*none*/);
// void gtk_widget_show (::GtkWidget* widget /*none*/);
void base::WidgetBase::show () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_show;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_size_allocate (GtkWidget* widget /*none*/, const GtkAllocation* allocation /*none*/, int baseline);
// void gtk_widget_size_allocate (::GtkWidget* widget /*none*/, const ::GtkAllocation* allocation /*none*/, gint baseline);
void base::WidgetBase::size_allocate (const Gtk::Allocation_Ref allocation, gint baseline) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::GtkAllocation* allocation, gint baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_size_allocate;
  auto baseline_to_c = baseline;
  auto allocation_to_c = gi::unwrap (allocation, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::GtkAllocation*) (allocation_to_c), (gint) (baseline_to_c));
}

// void gtk_widget_snapshot_child (GtkWidget* widget /*none*/, GtkWidget* child /*none*/, GtkSnapshot* snapshot /*none*/);
// void gtk_widget_snapshot_child (::GtkWidget* widget /*none*/, ::GtkWidget* child /*none*/,  snapshot /*none*/);
// SKIP; snapshot type  not supported

// gboolean gtk_widget_translate_coordinates (GtkWidget* src_widget /*none*/, GtkWidget* dest_widget /*none*/, double src_x, double src_y, double* dest_x, double* dest_y);
// gboolean gtk_widget_translate_coordinates (::GtkWidget* src_widget /*none*/, ::GtkWidget* dest_widget /*none*/, gdouble src_x, gdouble src_y, gdouble* dest_x, gdouble* dest_y);
bool base::WidgetBase::translate_coordinates (Gtk::Widget dest_widget, gdouble src_x, gdouble src_y, gdouble * dest_x, gdouble * dest_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* src_widget, ::GtkWidget* dest_widget, gdouble src_x, gdouble src_y, gdouble* dest_x, gdouble* dest_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_translate_coordinates;
  gdouble dest_y_o {};
  gdouble dest_x_o {};
  auto src_y_to_c = src_y;
  auto src_x_to_c = src_x;
  auto dest_widget_to_c = gi::unwrap (dest_widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (dest_widget_to_c), (gdouble) (src_x_to_c), (gdouble) (src_y_to_c), (gdouble*) (dest_x ? &dest_x_o : nullptr), (gdouble*) (dest_y ? &dest_y_o : nullptr));
  if (dest_y) *dest_y = dest_y_o;
  if (dest_x) *dest_x = dest_x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::WidgetBase::translate_coordinates (Gtk::Widget dest_widget, gdouble src_x, gdouble src_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* src_widget, ::GtkWidget* dest_widget, gdouble src_x, gdouble src_y, gdouble* dest_x, gdouble* dest_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_translate_coordinates;
  gdouble dest_y_o {};
  gdouble dest_x_o {};
  auto src_y_to_c = src_y;
  auto src_x_to_c = src_x;
  auto dest_widget_to_c = gi::unwrap (dest_widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (dest_widget_to_c), (gdouble) (src_x_to_c), (gdouble) (src_y_to_c), (gdouble*) (&dest_x_o), (gdouble*) (&dest_y_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = dest_x_o;
  auto &&tmp_return_3 = dest_y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void gtk_widget_trigger_tooltip_query (GtkWidget* widget /*none*/);
// void gtk_widget_trigger_tooltip_query (::GtkWidget* widget /*none*/);
void base::WidgetBase::trigger_tooltip_query () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_trigger_tooltip_query;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_unmap (GtkWidget* widget /*none*/);
// void gtk_widget_unmap (::GtkWidget* widget /*none*/);
void base::WidgetBase::unmap () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_unmap;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_unparent (GtkWidget* widget /*none*/);
// void gtk_widget_unparent (::GtkWidget* widget /*none*/);
void base::WidgetBase::unparent () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_unparent;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_unrealize (GtkWidget* widget /*none*/);
// void gtk_widget_unrealize (::GtkWidget* widget /*none*/);
void base::WidgetBase::unrealize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_unrealize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_unset_state_flags (GtkWidget* widget /*none*/, GtkStateFlags flags);
// void gtk_widget_unset_state_flags (::GtkWidget* widget /*none*/, ::GtkStateFlags flags);
void base::WidgetBase::unset_state_flags (Gtk::StateFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkStateFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_unset_state_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkStateFlags) (flags_to_c));
}















} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widget_extra_def_impl.hpp>)
#include <gtk/widget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widget_extra_impl.hpp>)
#include <gtk/widget_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WidgetClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkWidgetClass *methods = (::GtkWidgetClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.contains) methods->contains = (decltype (methods->contains)) detail::method_wrapper<self, bool (*) (gdouble x, gdouble y), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::contains_>;
  if (init_data.direction_changed) methods->direction_changed = (decltype (methods->direction_changed)) detail::method_wrapper<self, void (*) (Gtk::TextDirection previous_direction), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::direction_changed_>;
  if (init_data.focus) methods->focus = (decltype (methods->focus)) detail::method_wrapper<self, bool (*) (Gtk::DirectionType direction), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::focus_>;
  if (init_data.get_request_mode) methods->get_request_mode = (decltype (methods->get_request_mode)) detail::method_wrapper<self, Gtk::SizeRequestMode (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_request_mode_>;
  if (init_data.grab_focus) methods->grab_focus = (decltype (methods->grab_focus)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::grab_focus_>;
  if (init_data.hide) methods->hide = (decltype (methods->hide)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::hide_>;
  if (init_data.keynav_failed) methods->keynav_failed = (decltype (methods->keynav_failed)) detail::method_wrapper<self, bool (*) (Gtk::DirectionType direction), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::keynav_failed_>;
  if (init_data.map) methods->map = (decltype (methods->map)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::map_>;
  if (init_data.measure) methods->measure = (decltype (methods->measure)) detail::method_wrapper<self, void (*) (Gtk::Orientation orientation, gint for_size, gint & minimum, gint & natural, gint & minimum_baseline, gint & natural_baseline), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::measure_>;
  if (init_data.mnemonic_activate) methods->mnemonic_activate = (decltype (methods->mnemonic_activate)) detail::method_wrapper<self, bool (*) (gboolean group_cycling), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::mnemonic_activate_>;
  if (init_data.move_focus) methods->move_focus = (decltype (methods->move_focus)) detail::method_wrapper<self, void (*) (Gtk::DirectionType direction), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::move_focus_>;
  if (init_data.query_tooltip) methods->query_tooltip = (decltype (methods->query_tooltip)) detail::method_wrapper<self, bool (*) (gint x, gint y, gboolean keyboard_tooltip, Gtk::Tooltip tooltip), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::query_tooltip_>;
  if (init_data.realize) methods->realize = (decltype (methods->realize)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::realize_>;
  if (init_data.root) methods->root = (decltype (methods->root)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::root_>;
  if (init_data.set_focus_child) methods->set_focus_child = (decltype (methods->set_focus_child)) detail::method_wrapper<self, void (*) (Gtk::Widget child), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_focus_child_>;
  if (init_data.show) methods->show = (decltype (methods->show)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::show_>;
  if (init_data.size_allocate) methods->size_allocate = (decltype (methods->size_allocate)) detail::method_wrapper<self, void (*) (gint width, gint height, gint baseline), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::size_allocate_>;
  if (init_data.state_flags_changed) methods->state_flags_changed = (decltype (methods->state_flags_changed)) detail::method_wrapper<self, void (*) (Gtk::StateFlags previous_state_flags), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::state_flags_changed_>;
  if (init_data.system_setting_changed) methods->system_setting_changed = (decltype (methods->system_setting_changed)) detail::method_wrapper<self, void (*) (Gtk::SystemSetting settings), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::system_setting_changed_>;
  if (init_data.unmap) methods->unmap = (decltype (methods->unmap)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::unmap_>;
  if (init_data.unrealize) methods->unrealize = (decltype (methods->unrealize)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::unrealize_>;
  if (init_data.unroot) methods->unroot = (decltype (methods->unroot)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::unroot_>;
}

// void Widget::compute_expand (GtkWidget* widget /*none*/, gboolean* hexpand_p, gboolean* vexpand_p);
// void Widget::compute_expand (::GtkWidget* widget /*none*/, gboolean hexpand_p, gboolean vexpand_p);
// SKIP; inconsistent vexpand_p in pointer depth (1 vs 0), inconsistent hexpand_p in pointer depth (1 vs 0)

// gboolean Widget::contains (GtkWidget* widget /*none*/, double x, double y);
// gboolean Widget::contains (::GtkWidget* widget /*none*/, gdouble x, gdouble y);
bool WidgetClass::contains_ (gdouble x, gdouble y) noexcept
{
  if (!get_struct_()->contains) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->contains;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gdouble) (x_to_c), (gdouble) (y_to_c));
  return _temp_ret;
}

// void Widget::css_changed (GtkWidget* widget /*none*/, GtkCssStyleChange* change /*none*/);
// void Widget::css_changed (::GtkWidget* widget /*none*/,  change /*none*/);
// SKIP; change type  not supported

// void Widget::direction_changed (GtkWidget* widget /*none*/, GtkTextDirection previous_direction);
// void Widget::direction_changed (::GtkWidget* widget /*none*/, ::GtkTextDirection previous_direction);
void WidgetClass::direction_changed_ (Gtk::TextDirection previous_direction) noexcept
{
  if (!get_struct_()->direction_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkTextDirection previous_direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->direction_changed;
  auto previous_direction_to_c = gi::unwrap (previous_direction);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkTextDirection) (previous_direction_to_c));
}

// gboolean Widget::focus (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean Widget::focus (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
bool WidgetClass::focus_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->focus) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// GtkSizeRequestMode Widget::get_request_mode (GtkWidget* widget /*none*/);
// ::GtkSizeRequestMode Widget::get_request_mode (::GtkWidget* widget /*none*/);
Gtk::SizeRequestMode WidgetClass::get_request_mode_ () noexcept
{
  if (!get_struct_()->get_request_mode) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean Widget::grab_focus (GtkWidget* widget /*none*/);
// gboolean Widget::grab_focus (::GtkWidget* widget /*none*/);
bool WidgetClass::grab_focus_ () noexcept
{
  if (!get_struct_()->grab_focus) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->grab_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void Widget::hide (GtkWidget* widget /*none*/);
// void Widget::hide (::GtkWidget* widget /*none*/);
void WidgetClass::hide_ () noexcept
{
  if (!get_struct_()->hide) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hide;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean Widget::keynav_failed (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean Widget::keynav_failed (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
bool WidgetClass::keynav_failed_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->keynav_failed) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->keynav_failed;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// void Widget::map (GtkWidget* widget /*none*/);
// void Widget::map (::GtkWidget* widget /*none*/);
void WidgetClass::map_ () noexcept
{
  if (!get_struct_()->map) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->map;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::measure (GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void Widget::measure (::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
void WidgetClass::measure_ (Gtk::Orientation orientation, gint for_size, gint & minimum, gint & natural, gint & minimum_baseline, gint & natural_baseline) noexcept
{
  if (!get_struct_()->measure) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->measure;
  gint natural_baseline_o {};
  gint minimum_baseline_o {};
  gint natural_o {};
  gint minimum_o {};
  auto for_size_to_c = for_size;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkOrientation) (orientation_to_c), (gint) (for_size_to_c), (gint*) (&minimum_o), (gint*) (&natural_o), (gint*) (&minimum_baseline_o), (gint*) (&natural_baseline_o));
  natural_baseline = natural_baseline_o;
  minimum_baseline = minimum_baseline_o;
  natural = natural_o;
  minimum = minimum_o;
}

// gboolean Widget::mnemonic_activate (GtkWidget* widget /*none*/, gboolean group_cycling);
// gboolean Widget::mnemonic_activate (::GtkWidget* widget /*none*/, gboolean group_cycling);
bool WidgetClass::mnemonic_activate_ (gboolean group_cycling) noexcept
{
  if (!get_struct_()->mnemonic_activate) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gboolean group_cycling);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mnemonic_activate;
  auto group_cycling_to_c = group_cycling;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (group_cycling_to_c));
  return _temp_ret;
}

// void Widget::move_focus (GtkWidget* widget /*none*/, GtkDirectionType direction);
// void Widget::move_focus (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
void WidgetClass::move_focus_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->move_focus) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_focus;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
}

// gboolean Widget::query_tooltip (GtkWidget* widget /*none*/, int x, int y, gboolean keyboard_tooltip, GtkTooltip* tooltip /*none*/);
// gboolean Widget::query_tooltip (::GtkWidget* widget /*none*/, gint x, gint y, gboolean keyboard_tooltip, ::GtkTooltip* tooltip /*none*/);
bool WidgetClass::query_tooltip_ (gint x, gint y, gboolean keyboard_tooltip, Gtk::Tooltip tooltip) noexcept
{
  if (!get_struct_()->query_tooltip) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gint x, gint y, gboolean keyboard_tooltip, ::GtkTooltip* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_tooltip;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  auto keyboard_tooltip_to_c = keyboard_tooltip;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gboolean) (keyboard_tooltip_to_c), (::GtkTooltip*) (tooltip_to_c));
  return _temp_ret;
}

// void Widget::realize (GtkWidget* widget /*none*/);
// void Widget::realize (::GtkWidget* widget /*none*/);
void WidgetClass::realize_ () noexcept
{
  if (!get_struct_()->realize) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->realize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::root (GtkWidget* widget /*none*/);
// void Widget::root (::GtkWidget* widget /*none*/);
void WidgetClass::root_ () noexcept
{
  if (!get_struct_()->root) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->root;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::set_focus_child (GtkWidget* widget /*none*/, GtkWidget* child /*none,nullable*/);
// void Widget::set_focus_child (::GtkWidget* widget /*none*/, ::GtkWidget* child /*none,nullable*/);
void WidgetClass::set_focus_child_ (Gtk::Widget child) noexcept
{
  if (!get_struct_()->set_focus_child) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_focus_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void Widget::show (GtkWidget* widget /*none*/);
// void Widget::show (::GtkWidget* widget /*none*/);
void WidgetClass::show_ () noexcept
{
  if (!get_struct_()->show) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::size_allocate (GtkWidget* widget /*none*/, int width, int height, int baseline);
// void Widget::size_allocate (::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
void WidgetClass::size_allocate_ (gint width, gint height, gint baseline) noexcept
{
  if (!get_struct_()->size_allocate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint height, gint baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->size_allocate;
  auto baseline_to_c = baseline;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c), (gint) (baseline_to_c));
}

// void Widget::snapshot (GtkWidget* widget /*none*/, GtkSnapshot* snapshot /*none*/);
// void Widget::snapshot (::GtkWidget* widget /*none*/,  snapshot /*none*/);
// SKIP; snapshot type  not supported

// void Widget::state_flags_changed (GtkWidget* widget /*none*/, GtkStateFlags previous_state_flags);
// void Widget::state_flags_changed (::GtkWidget* widget /*none*/, ::GtkStateFlags previous_state_flags);
void WidgetClass::state_flags_changed_ (Gtk::StateFlags previous_state_flags) noexcept
{
  if (!get_struct_()->state_flags_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkStateFlags previous_state_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->state_flags_changed;
  auto previous_state_flags_to_c = gi::unwrap (previous_state_flags);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkStateFlags) (previous_state_flags_to_c));
}

// void Widget::system_setting_changed (GtkWidget* widget /*none*/, GtkSystemSetting settings);
// void Widget::system_setting_changed (::GtkWidget* widget /*none*/, ::GtkSystemSetting settings);
void WidgetClass::system_setting_changed_ (Gtk::SystemSetting settings) noexcept
{
  if (!get_struct_()->system_setting_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkSystemSetting settings);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->system_setting_changed;
  auto settings_to_c = gi::unwrap (settings);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkSystemSetting) (settings_to_c));
}

// void Widget::unmap (GtkWidget* widget /*none*/);
// void Widget::unmap (::GtkWidget* widget /*none*/);
void WidgetClass::unmap_ () noexcept
{
  if (!get_struct_()->unmap) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmap;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::unrealize (GtkWidget* widget /*none*/);
// void Widget::unrealize (::GtkWidget* widget /*none*/);
void WidgetClass::unrealize_ () noexcept
{
  if (!get_struct_()->unrealize) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unrealize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::unroot (GtkWidget* widget /*none*/);
// void Widget::unroot (::GtkWidget* widget /*none*/);
void WidgetClass::unroot_ () noexcept
{
  if (!get_struct_()->unroot) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unroot;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
