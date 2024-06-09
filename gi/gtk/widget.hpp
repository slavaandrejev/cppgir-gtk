// AUTO-GENERATED

#ifndef _GI_GTK_WIDGET_HPP_
#define _GI_GTK_WIDGET_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Accessible;
class Buildable;
class ConstraintTarget;
class EventController;
class LayoutManager;
class Native;
class Requisition;
class Requisition_Ref;
class Root;
class Settings;
class StyleContext;
class Tooltip;

class Widget;

namespace base {


#define GI_GTK_WIDGET_BASE base::WidgetBase
class WidgetBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkWidget BaseObjectType;

WidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_widget_get_type(); } 

GI_INLINE_DECL Gtk::Accessible interface_ (gi::interface_tag<Gtk::Accessible>);

GI_INLINE_DECL operator Gtk::Accessible ();

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

GI_INLINE_DECL Gtk::ConstraintTarget interface_ (gi::interface_tag<Gtk::ConstraintTarget>);

GI_INLINE_DECL operator Gtk::ConstraintTarget ();

// GtkTextDirection gtk_widget_get_default_direction ();
// ::GtkTextDirection gtk_widget_get_default_direction ();
static GI_INLINE_DECL Gtk::TextDirection get_default_direction () noexcept;

// void gtk_widget_set_default_direction (GtkTextDirection dir);
// void gtk_widget_set_default_direction (::GtkTextDirection dir);
static GI_INLINE_DECL void set_default_direction (Gtk::TextDirection dir) noexcept;

// void gtk_widget_action_set_enabled (GtkWidget* widget /*none*/, const char* action_name /*none*/, gboolean enabled);
// void gtk_widget_action_set_enabled (::GtkWidget* widget /*none*/, const char* action_name /*none*/, gboolean enabled);
GI_INLINE_DECL void action_set_enabled (const gi::cstring_v action_name, gboolean enabled) noexcept;

// gboolean gtk_widget_activate (GtkWidget* widget /*none*/);
// gboolean gtk_widget_activate (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool activate () noexcept;

// gboolean gtk_widget_activate_action (GtkWidget* widget /*none*/, const char* name /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// gboolean gtk_widget_activate_action (::GtkWidget* widget /*none*/, const char* name /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by activate_action_variant, varargs not supported

// gboolean gtk_widget_activate_action_variant (GtkWidget* widget /*none*/, const char* name /*none*/, GVariant* args /*none,nullable*/);
// gboolean gtk_widget_activate_action_variant (::GtkWidget* widget /*none*/, const char* name /*none*/, ::GVariant* args /*none,nullable*/);
GI_INLINE_DECL bool activate_action (const gi::cstring_v name, GLib::Variant args) noexcept;
GI_INLINE_DECL bool activate_action (const gi::cstring_v name) noexcept;

// void gtk_widget_activate_default (GtkWidget* widget /*none*/);
// void gtk_widget_activate_default (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void activate_default () noexcept;

// void gtk_widget_add_controller (GtkWidget* widget /*none*/, GtkEventController* controller /*full*/);
// void gtk_widget_add_controller (::GtkWidget* widget /*none*/, ::GtkEventController* controller /*full*/);
GI_INLINE_DECL void add_controller (Gtk::EventController controller) noexcept;

// void gtk_widget_add_css_class (GtkWidget* widget /*none*/, const char* css_class /*none*/);
// void gtk_widget_add_css_class (::GtkWidget* widget /*none*/, const char* css_class /*none*/);
GI_INLINE_DECL void add_css_class (const gi::cstring_v css_class) noexcept;

// void gtk_widget_add_mnemonic_label (GtkWidget* widget /*none*/, GtkWidget* label /*none*/);
// void gtk_widget_add_mnemonic_label (::GtkWidget* widget /*none*/, ::GtkWidget* label /*none*/);
GI_INLINE_DECL void add_mnemonic_label (Gtk::Widget label) noexcept;

// guint gtk_widget_add_tick_callback (GtkWidget* widget /*none*/, GtkTickCallback callback /*none*/, gpointer user_data, GDestroyNotify notify /*none*/);
// guint gtk_widget_add_tick_callback (::GtkWidget* widget /*none*/, Gtk::TickCallback::cfunction_type callback /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type notify /*none*/);
GI_INLINE_DECL guint add_tick_callback (Gtk::TickCallback callback) noexcept;

// void gtk_widget_allocate (GtkWidget* widget /*none*/, int width, int height, int baseline, GskTransform* transform /*full,nullable*/);
// void gtk_widget_allocate (::GtkWidget* widget /*none*/, gint width, gint height, gint baseline, ::GskTransform* transform /*full,nullable*/);
GI_INLINE_DECL void allocate (gint width, gint height, gint baseline, Gsk::Transform transform) noexcept;
GI_INLINE_DECL void allocate (gint width, gint height, gint baseline) noexcept;

// gboolean gtk_widget_child_focus (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean gtk_widget_child_focus (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
GI_INLINE_DECL bool child_focus (Gtk::DirectionType direction) noexcept;

// gboolean gtk_widget_compute_bounds (GtkWidget* widget /*none*/, GtkWidget* target /*none*/, graphene_rect_t* out_bounds /*none,out,ca*/);
// gboolean gtk_widget_compute_bounds (::GtkWidget* widget /*none*/, ::GtkWidget* target /*none*/, ::graphene_rect_t* out_bounds /*none,out,ca*/);
GI_INLINE_DECL bool compute_bounds (Gtk::Widget target, Graphene::Rect & out_bounds) noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Rect> compute_bounds (Gtk::Widget target) noexcept;

// gboolean gtk_widget_compute_expand (GtkWidget* widget /*none*/, GtkOrientation orientation);
// gboolean gtk_widget_compute_expand (::GtkWidget* widget /*none*/, ::GtkOrientation orientation);
GI_INLINE_DECL bool compute_expand (Gtk::Orientation orientation) noexcept;

// gboolean gtk_widget_compute_point (GtkWidget* widget /*none*/, GtkWidget* target /*none*/, const graphene_point_t* point /*none*/, graphene_point_t* out_point /*none,out,ca*/);
// gboolean gtk_widget_compute_point (::GtkWidget* widget /*none*/, ::GtkWidget* target /*none*/, const ::graphene_point_t* point /*none*/, ::graphene_point_t* out_point /*none,out,ca*/);
GI_INLINE_DECL bool compute_point (Gtk::Widget target, const Graphene::Point_Ref point, Graphene::Point & out_point) noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Point> compute_point (Gtk::Widget target, const Graphene::Point_Ref point) noexcept;

// gboolean gtk_widget_compute_transform (GtkWidget* widget /*none*/, GtkWidget* target /*none*/, graphene_matrix_t* out_transform /*none,out,ca*/);
// gboolean gtk_widget_compute_transform (::GtkWidget* widget /*none*/, ::GtkWidget* target /*none*/, ::graphene_matrix_t* out_transform /*none,out,ca*/);
GI_INLINE_DECL bool compute_transform (Gtk::Widget target, Graphene::Matrix & out_transform) noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Matrix> compute_transform (Gtk::Widget target) noexcept;

// gboolean gtk_widget_contains (GtkWidget* widget /*none*/, double x, double y);
// gboolean gtk_widget_contains (::GtkWidget* widget /*none*/, gdouble x, gdouble y);
GI_INLINE_DECL bool contains (gdouble x, gdouble y) noexcept;

// PangoContext* /*full*/ gtk_widget_create_pango_context (GtkWidget* widget /*none*/);
// ::PangoContext* /*full*/ gtk_widget_create_pango_context (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Pango::Context create_pango_context () noexcept;

// PangoLayout* /*full*/ gtk_widget_create_pango_layout (GtkWidget* widget /*none*/, const char* text /*none,nullable*/);
// ::PangoLayout* /*full*/ gtk_widget_create_pango_layout (::GtkWidget* widget /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL Pango::Layout create_pango_layout (const gi::cstring_v text) noexcept;
GI_INLINE_DECL Pango::Layout create_pango_layout () noexcept;

// void gtk_widget_dispose_template (GtkWidget* widget /*none*/, GType widget_type);
// void gtk_widget_dispose_template (::GtkWidget* widget /*none*/, GType widget_type);
GI_INLINE_DECL void dispose_template (GType widget_type) noexcept;

// gboolean gtk_drag_check_threshold (GtkWidget* widget /*none*/, int start_x, int start_y, int current_x, int current_y);
// gboolean gtk_drag_check_threshold (::GtkWidget* widget /*none*/, gint start_x, gint start_y, gint current_x, gint current_y);
GI_INLINE_DECL bool drag_check_threshold (gint start_x, gint start_y, gint current_x, gint current_y) noexcept;

// void gtk_widget_error_bell (GtkWidget* widget /*none*/);
// void gtk_widget_error_bell (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void error_bell () noexcept;

// int gtk_widget_get_allocated_baseline (GtkWidget* widget /*none*/);
// gint gtk_widget_get_allocated_baseline (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_allocated_baseline () noexcept;

// int gtk_widget_get_allocated_height (GtkWidget* widget /*none*/);
// gint gtk_widget_get_allocated_height (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_allocated_height () noexcept;

// int gtk_widget_get_allocated_width (GtkWidget* widget /*none*/);
// gint gtk_widget_get_allocated_width (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_allocated_width () noexcept;

// void gtk_widget_get_allocation (GtkWidget* widget /*none*/, GtkAllocation* allocation /*none,out,ca*/);
// void gtk_widget_get_allocation (::GtkWidget* widget /*none*/, ::GtkAllocation* allocation /*none,out,ca*/);
GI_INLINE_DECL void get_allocation (Gtk::Allocation & allocation) noexcept;
GI_INLINE_DECL Gtk::Allocation get_allocation () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_get_ancestor (GtkWidget* widget /*none*/, GType widget_type);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_ancestor (::GtkWidget* widget /*none*/, GType widget_type);
GI_INLINE_DECL Gtk::Widget get_ancestor (GType widget_type) noexcept;

// int gtk_widget_get_baseline (GtkWidget* widget /*none*/);
// gint gtk_widget_get_baseline (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_baseline () noexcept;

// gboolean gtk_widget_get_can_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_can_focus (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_can_focus () noexcept;

// gboolean gtk_widget_get_can_target (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_can_target (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_can_target () noexcept;

// gboolean gtk_widget_get_child_visible (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_child_visible (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_child_visible () noexcept;

// GdkClipboard* /*none*/ gtk_widget_get_clipboard (GtkWidget* widget /*none*/);
// ::GdkClipboard* /*none*/ gtk_widget_get_clipboard (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gdk::Clipboard get_clipboard () noexcept;

// void gtk_widget_get_color (GtkWidget* widget /*none*/, GdkRGBA* color /*none,out,ca*/);
// void gtk_widget_get_color (::GtkWidget* widget /*none*/, ::GdkRGBA* color /*none,out,ca*/);
GI_INLINE_DECL void get_color (Gdk::RGBA & color) noexcept;
GI_INLINE_DECL Gdk::RGBA get_color () noexcept;

// char** /*full*/ gtk_widget_get_css_classes (GtkWidget* widget /*none*/);
// char** /*full*/ gtk_widget_get_css_classes (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_css_classes () noexcept;

// const char* /*none*/ gtk_widget_get_css_name (GtkWidget* self /*none*/);
// const char* /*none*/ gtk_widget_get_css_name (::GtkWidget* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_css_name () noexcept;

// GdkCursor* /*none,nullable*/ gtk_widget_get_cursor (GtkWidget* widget /*none*/);
// ::GdkCursor* /*none,nullable*/ gtk_widget_get_cursor (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gdk::Cursor get_cursor () noexcept;

// GtkTextDirection gtk_widget_get_direction (GtkWidget* widget /*none*/);
// ::GtkTextDirection gtk_widget_get_direction (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::TextDirection get_direction () noexcept;

// GdkDisplay* /*none*/ gtk_widget_get_display (GtkWidget* widget /*none*/);
// ::GdkDisplay* /*none*/ gtk_widget_get_display (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_get_first_child (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_first_child (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Widget get_first_child () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_get_focus_child (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_focus_child (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Widget get_focus_child () noexcept;

// gboolean gtk_widget_get_focus_on_click (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_focus_on_click (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_focus_on_click () noexcept;

// gboolean gtk_widget_get_focusable (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_focusable (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_focusable () noexcept;

// PangoFontMap* /*none,nullable*/ gtk_widget_get_font_map (GtkWidget* widget /*none*/);
// ::PangoFontMap* /*none,nullable*/ gtk_widget_get_font_map (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// const cairo_font_options_t* /*none,nullable*/ gtk_widget_get_font_options (GtkWidget* widget /*none*/);
// const ::cairo_font_options_t* /*none,nullable*/ gtk_widget_get_font_options (::GtkWidget* widget /*none*/);
GI_INLINE_DECL cairo::FontOptions_Ref get_font_options () noexcept;

// GdkFrameClock* /*none,nullable*/ gtk_widget_get_frame_clock (GtkWidget* widget /*none*/);
// ::GdkFrameClock* /*none,nullable*/ gtk_widget_get_frame_clock (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gdk::FrameClock get_frame_clock () noexcept;

// GtkAlign gtk_widget_get_halign (GtkWidget* widget /*none*/);
// ::GtkAlign gtk_widget_get_halign (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Align get_halign () noexcept;

// gboolean gtk_widget_get_has_tooltip (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_has_tooltip (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_has_tooltip () noexcept;

// int gtk_widget_get_height (GtkWidget* widget /*none*/);
// gint gtk_widget_get_height (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_height () noexcept;

// gboolean gtk_widget_get_hexpand (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_hexpand (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_hexpand () noexcept;

// gboolean gtk_widget_get_hexpand_set (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_hexpand_set (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_hexpand_set () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_get_last_child (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_last_child (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Widget get_last_child () noexcept;

// GtkLayoutManager* /*none,nullable*/ gtk_widget_get_layout_manager (GtkWidget* widget /*none*/);
// ::GtkLayoutManager* /*none,nullable*/ gtk_widget_get_layout_manager (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::LayoutManager get_layout_manager () noexcept;

// gboolean gtk_widget_get_mapped (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_mapped (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_mapped () noexcept;

// int gtk_widget_get_margin_bottom (GtkWidget* widget /*none*/);
// gint gtk_widget_get_margin_bottom (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_margin_bottom () noexcept;

// int gtk_widget_get_margin_end (GtkWidget* widget /*none*/);
// gint gtk_widget_get_margin_end (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_margin_end () noexcept;

// int gtk_widget_get_margin_start (GtkWidget* widget /*none*/);
// gint gtk_widget_get_margin_start (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_margin_start () noexcept;

// int gtk_widget_get_margin_top (GtkWidget* widget /*none*/);
// gint gtk_widget_get_margin_top (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_margin_top () noexcept;

// const char* /*none*/ gtk_widget_get_name (GtkWidget* widget /*none*/);
// const char* /*none*/ gtk_widget_get_name (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// GtkNative* /*none,nullable*/ gtk_widget_get_native (GtkWidget* widget /*none*/);
// ::GtkNative* /*none,nullable*/ gtk_widget_get_native (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Native get_native () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_get_next_sibling (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_next_sibling (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Widget get_next_sibling () noexcept;

// double gtk_widget_get_opacity (GtkWidget* widget /*none*/);
// gdouble gtk_widget_get_opacity (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gdouble get_opacity () noexcept;

// GtkOverflow gtk_widget_get_overflow (GtkWidget* widget /*none*/);
// ::GtkOverflow gtk_widget_get_overflow (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Overflow get_overflow () noexcept;

// PangoContext* /*none*/ gtk_widget_get_pango_context (GtkWidget* widget /*none*/);
// ::PangoContext* /*none*/ gtk_widget_get_pango_context (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Pango::Context get_pango_context () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_get_parent (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_parent (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Widget get_parent () noexcept;

// void gtk_widget_get_preferred_size (GtkWidget* widget /*none*/, GtkRequisition* minimum_size /*none,out,opt,ca*/, GtkRequisition* natural_size /*none,out,opt,ca*/);
// void gtk_widget_get_preferred_size (::GtkWidget* widget /*none*/, ::GtkRequisition* minimum_size /*none,out,opt,ca*/, ::GtkRequisition* natural_size /*none,out,opt,ca*/);
GI_INLINE_DECL void get_preferred_size (Gtk::Requisition * minimum_size, Gtk::Requisition * natural_size) noexcept;
GI_INLINE_DECL std::tuple<Gtk::Requisition, Gtk::Requisition> get_preferred_size () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_get_prev_sibling (GtkWidget* widget /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_get_prev_sibling (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Widget get_prev_sibling () noexcept;

// GdkClipboard* /*none*/ gtk_widget_get_primary_clipboard (GtkWidget* widget /*none*/);
// ::GdkClipboard* /*none*/ gtk_widget_get_primary_clipboard (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gdk::Clipboard get_primary_clipboard () noexcept;

// gboolean gtk_widget_get_realized (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_realized (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_realized () noexcept;

// gboolean gtk_widget_get_receives_default (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_receives_default (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_receives_default () noexcept;

// GtkSizeRequestMode gtk_widget_get_request_mode (GtkWidget* widget /*none*/);
// ::GtkSizeRequestMode gtk_widget_get_request_mode (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode () noexcept;

// GtkRoot* /*none,nullable*/ gtk_widget_get_root (GtkWidget* widget /*none*/);
// ::GtkRoot* /*none,nullable*/ gtk_widget_get_root (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Root get_root () noexcept;

// int gtk_widget_get_scale_factor (GtkWidget* widget /*none*/);
// gint gtk_widget_get_scale_factor (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_scale_factor () noexcept;

// gboolean gtk_widget_get_sensitive (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_sensitive (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_sensitive () noexcept;

// GtkSettings* /*none*/ gtk_widget_get_settings (GtkWidget* widget /*none*/);
// ::GtkSettings* /*none*/ gtk_widget_get_settings (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Settings get_settings () noexcept;

// int gtk_widget_get_size (GtkWidget* widget /*none*/, GtkOrientation orientation);
// gint gtk_widget_get_size (::GtkWidget* widget /*none*/, ::GtkOrientation orientation);
GI_INLINE_DECL gint get_size (Gtk::Orientation orientation) noexcept;

// void gtk_widget_get_size_request (GtkWidget* widget /*none*/, int* width, int* height);
// void gtk_widget_get_size_request (::GtkWidget* widget /*none*/, gint* width, gint* height);
GI_INLINE_DECL void get_size_request (gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_size_request () noexcept;

// GtkStateFlags gtk_widget_get_state_flags (GtkWidget* widget /*none*/);
// ::GtkStateFlags gtk_widget_get_state_flags (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::StateFlags get_state_flags () noexcept;

// GtkStyleContext* /*none*/ gtk_widget_get_style_context (GtkWidget* widget /*none*/);
// ::GtkStyleContext* /*none*/ gtk_widget_get_style_context (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::StyleContext get_style_context () noexcept;

// GObject* /*none*/ gtk_widget_get_template_child (GtkWidget* widget /*none*/, GType widget_type, const char* name /*none*/);
// ::GObject* /*none*/ gtk_widget_get_template_child (::GtkWidget* widget /*none*/, GType widget_type, const char* name /*none*/);
GI_INLINE_DECL GObject::Object get_template_child (GType widget_type, const gi::cstring_v name) noexcept;

// const char* /*none,nullable*/ gtk_widget_get_tooltip_markup (GtkWidget* widget /*none*/);
// const char* /*none,nullable*/ gtk_widget_get_tooltip_markup (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gi::cstring_v get_tooltip_markup () noexcept;

// const char* /*none,nullable*/ gtk_widget_get_tooltip_text (GtkWidget* widget /*none*/);
// const char* /*none,nullable*/ gtk_widget_get_tooltip_text (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gi::cstring_v get_tooltip_text () noexcept;

// GtkAlign gtk_widget_get_valign (GtkWidget* widget /*none*/);
// ::GtkAlign gtk_widget_get_valign (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::Align get_valign () noexcept;

// gboolean gtk_widget_get_vexpand (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_vexpand (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_vexpand () noexcept;

// gboolean gtk_widget_get_vexpand_set (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_vexpand_set (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_vexpand_set () noexcept;

// gboolean gtk_widget_get_visible (GtkWidget* widget /*none*/);
// gboolean gtk_widget_get_visible (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_visible () noexcept;

// int gtk_widget_get_width (GtkWidget* widget /*none*/);
// gint gtk_widget_get_width (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// gboolean gtk_widget_grab_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_grab_focus (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool grab_focus () noexcept;

// gboolean gtk_widget_has_css_class (GtkWidget* widget /*none*/, const char* css_class /*none*/);
// gboolean gtk_widget_has_css_class (::GtkWidget* widget /*none*/, const char* css_class /*none*/);
GI_INLINE_DECL bool has_css_class (const gi::cstring_v css_class) noexcept;

// gboolean gtk_widget_has_default (GtkWidget* widget /*none*/);
// gboolean gtk_widget_has_default (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool has_default () noexcept;

// gboolean gtk_widget_has_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_has_focus (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool has_focus () noexcept;

// gboolean gtk_widget_has_visible_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_has_visible_focus (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool has_visible_focus () noexcept;

// void gtk_widget_hide (GtkWidget* widget /*none*/);
// void gtk_widget_hide (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void hide () noexcept;

// gboolean gtk_widget_in_destruction (GtkWidget* widget /*none*/);
// gboolean gtk_widget_in_destruction (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool in_destruction () noexcept;

// void gtk_widget_init_template (GtkWidget* widget /*none*/);
// void gtk_widget_init_template (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void init_template () noexcept;

// void gtk_widget_insert_action_group (GtkWidget* widget /*none*/, const char* name /*none*/, GActionGroup* group /*none,nullable*/);
// void gtk_widget_insert_action_group (::GtkWidget* widget /*none*/, const char* name /*none*/, ::GActionGroup* group /*none,nullable*/);
GI_INLINE_DECL void insert_action_group (const gi::cstring_v name, Gio::ActionGroup group) noexcept;
GI_INLINE_DECL void insert_action_group (const gi::cstring_v name) noexcept;

// void gtk_widget_insert_after (GtkWidget* widget /*none*/, GtkWidget* parent /*none*/, GtkWidget* previous_sibling /*none,nullable*/);
// void gtk_widget_insert_after (::GtkWidget* widget /*none*/, ::GtkWidget* parent /*none*/, ::GtkWidget* previous_sibling /*none,nullable*/);
GI_INLINE_DECL void insert_after (Gtk::Widget parent, Gtk::Widget previous_sibling) noexcept;
GI_INLINE_DECL void insert_after (Gtk::Widget parent) noexcept;

// void gtk_widget_insert_before (GtkWidget* widget /*none*/, GtkWidget* parent /*none*/, GtkWidget* next_sibling /*none,nullable*/);
// void gtk_widget_insert_before (::GtkWidget* widget /*none*/, ::GtkWidget* parent /*none*/, ::GtkWidget* next_sibling /*none,nullable*/);
GI_INLINE_DECL void insert_before (Gtk::Widget parent, Gtk::Widget next_sibling) noexcept;
GI_INLINE_DECL void insert_before (Gtk::Widget parent) noexcept;

// gboolean gtk_widget_is_ancestor (GtkWidget* widget /*none*/, GtkWidget* ancestor /*none*/);
// gboolean gtk_widget_is_ancestor (::GtkWidget* widget /*none*/, ::GtkWidget* ancestor /*none*/);
GI_INLINE_DECL bool is_ancestor (Gtk::Widget ancestor) noexcept;

// gboolean gtk_widget_is_drawable (GtkWidget* widget /*none*/);
// gboolean gtk_widget_is_drawable (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool is_drawable () noexcept;

// gboolean gtk_widget_is_focus (GtkWidget* widget /*none*/);
// gboolean gtk_widget_is_focus (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool is_focus () noexcept;

// gboolean gtk_widget_is_sensitive (GtkWidget* widget /*none*/);
// gboolean gtk_widget_is_sensitive (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool is_sensitive () noexcept;

// gboolean gtk_widget_is_visible (GtkWidget* widget /*none*/);
// gboolean gtk_widget_is_visible (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool is_visible () noexcept;

// gboolean gtk_widget_keynav_failed (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean gtk_widget_keynav_failed (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
GI_INLINE_DECL bool keynav_failed (Gtk::DirectionType direction) noexcept;

// GList* /*container*/ gtk_widget_list_mnemonic_labels (GtkWidget* widget /*none*/);
// ::GList* /*container*/ gtk_widget_list_mnemonic_labels (::GtkWidget* widget /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkWidget*, gi::transfer_container_t> list_mnemonic_labels () noexcept;

// void gtk_widget_map (GtkWidget* widget /*none*/);
// void gtk_widget_map (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void map () noexcept;

// void gtk_widget_measure (GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void gtk_widget_measure (::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
GI_INLINE_DECL void measure (Gtk::Orientation orientation, gint for_size, gint * minimum, gint * natural, gint * minimum_baseline, gint * natural_baseline) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> measure (Gtk::Orientation orientation, gint for_size) noexcept;

// gboolean gtk_widget_mnemonic_activate (GtkWidget* widget /*none*/, gboolean group_cycling);
// gboolean gtk_widget_mnemonic_activate (::GtkWidget* widget /*none*/, gboolean group_cycling);
GI_INLINE_DECL bool mnemonic_activate (gboolean group_cycling) noexcept;

// GListModel* /*full*/ gtk_widget_observe_children (GtkWidget* widget /*none*/);
// ::GListModel* /*full*/ gtk_widget_observe_children (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gio::ListModel observe_children () noexcept;

// GListModel* /*full*/ gtk_widget_observe_controllers (GtkWidget* widget /*none*/);
// ::GListModel* /*full*/ gtk_widget_observe_controllers (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gio::ListModel observe_controllers () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_pick (GtkWidget* widget /*none*/, double x, double y, GtkPickFlags flags);
// ::GtkWidget* /*none,nullable*/ gtk_widget_pick (::GtkWidget* widget /*none*/, gdouble x, gdouble y, ::GtkPickFlags flags);
GI_INLINE_DECL Gtk::Widget pick (gdouble x, gdouble y, Gtk::PickFlags flags) noexcept;

// void gtk_widget_queue_allocate (GtkWidget* widget /*none*/);
// void gtk_widget_queue_allocate (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void queue_allocate () noexcept;

// void gtk_widget_queue_draw (GtkWidget* widget /*none*/);
// void gtk_widget_queue_draw (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void queue_draw () noexcept;

// void gtk_widget_queue_resize (GtkWidget* widget /*none*/);
// void gtk_widget_queue_resize (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void queue_resize () noexcept;

// void gtk_widget_realize (GtkWidget* widget /*none*/);
// void gtk_widget_realize (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void realize () noexcept;

// void gtk_widget_remove_controller (GtkWidget* widget /*none*/, GtkEventController* controller /*none*/);
// void gtk_widget_remove_controller (::GtkWidget* widget /*none*/, ::GtkEventController* controller /*none*/);
GI_INLINE_DECL void remove_controller (Gtk::EventController controller) noexcept;

// void gtk_widget_remove_css_class (GtkWidget* widget /*none*/, const char* css_class /*none*/);
// void gtk_widget_remove_css_class (::GtkWidget* widget /*none*/, const char* css_class /*none*/);
GI_INLINE_DECL void remove_css_class (const gi::cstring_v css_class) noexcept;

// void gtk_widget_remove_mnemonic_label (GtkWidget* widget /*none*/, GtkWidget* label /*none*/);
// void gtk_widget_remove_mnemonic_label (::GtkWidget* widget /*none*/, ::GtkWidget* label /*none*/);
GI_INLINE_DECL void remove_mnemonic_label (Gtk::Widget label) noexcept;

// void gtk_widget_remove_tick_callback (GtkWidget* widget /*none*/, guint id);
// void gtk_widget_remove_tick_callback (::GtkWidget* widget /*none*/, guint id);
GI_INLINE_DECL void remove_tick_callback (guint id) noexcept;

// void gtk_widget_set_can_focus (GtkWidget* widget /*none*/, gboolean can_focus);
// void gtk_widget_set_can_focus (::GtkWidget* widget /*none*/, gboolean can_focus);
GI_INLINE_DECL void set_can_focus (gboolean can_focus) noexcept;

// void gtk_widget_set_can_target (GtkWidget* widget /*none*/, gboolean can_target);
// void gtk_widget_set_can_target (::GtkWidget* widget /*none*/, gboolean can_target);
GI_INLINE_DECL void set_can_target (gboolean can_target) noexcept;

// void gtk_widget_set_child_visible (GtkWidget* widget /*none*/, gboolean child_visible);
// void gtk_widget_set_child_visible (::GtkWidget* widget /*none*/, gboolean child_visible);
GI_INLINE_DECL void set_child_visible (gboolean child_visible) noexcept;

// void gtk_widget_set_css_classes (GtkWidget* widget /*none*/, const char** classes /*none*/);
// void gtk_widget_set_css_classes (::GtkWidget* widget /*none*/, const char** classes /*none*/);
GI_INLINE_DECL void set_css_classes (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> classes) noexcept;

// void gtk_widget_set_cursor (GtkWidget* widget /*none*/, GdkCursor* cursor /*none,nullable*/);
// void gtk_widget_set_cursor (::GtkWidget* widget /*none*/, ::GdkCursor* cursor /*none,nullable*/);
GI_INLINE_DECL void set_cursor (Gdk::Cursor cursor) noexcept;
GI_INLINE_DECL void set_cursor () noexcept;

// void gtk_widget_set_cursor_from_name (GtkWidget* widget /*none*/, const char* name /*none,nullable*/);
// void gtk_widget_set_cursor_from_name (::GtkWidget* widget /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_cursor_from_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_cursor_from_name () noexcept;

// void gtk_widget_set_direction (GtkWidget* widget /*none*/, GtkTextDirection dir);
// void gtk_widget_set_direction (::GtkWidget* widget /*none*/, ::GtkTextDirection dir);
GI_INLINE_DECL void set_direction (Gtk::TextDirection dir) noexcept;

// void gtk_widget_set_focus_child (GtkWidget* widget /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_widget_set_focus_child (::GtkWidget* widget /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_focus_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_focus_child () noexcept;

// void gtk_widget_set_focus_on_click (GtkWidget* widget /*none*/, gboolean focus_on_click);
// void gtk_widget_set_focus_on_click (::GtkWidget* widget /*none*/, gboolean focus_on_click);
GI_INLINE_DECL void set_focus_on_click (gboolean focus_on_click) noexcept;

// void gtk_widget_set_focusable (GtkWidget* widget /*none*/, gboolean focusable);
// void gtk_widget_set_focusable (::GtkWidget* widget /*none*/, gboolean focusable);
GI_INLINE_DECL void set_focusable (gboolean focusable) noexcept;

// void gtk_widget_set_font_map (GtkWidget* widget /*none*/, PangoFontMap* font_map /*none,nullable*/);
// void gtk_widget_set_font_map (::GtkWidget* widget /*none*/, ::PangoFontMap* font_map /*none,nullable*/);
GI_INLINE_DECL void set_font_map (Pango::FontMap font_map) noexcept;
GI_INLINE_DECL void set_font_map () noexcept;

// void gtk_widget_set_font_options (GtkWidget* widget /*none*/, const cairo_font_options_t* options /*none,nullable*/);
// void gtk_widget_set_font_options (::GtkWidget* widget /*none*/, const ::cairo_font_options_t* options /*none,nullable*/);
GI_INLINE_DECL void set_font_options (const cairo::FontOptions_Ref options) noexcept;
GI_INLINE_DECL void set_font_options () noexcept;

// void gtk_widget_set_halign (GtkWidget* widget /*none*/, GtkAlign align);
// void gtk_widget_set_halign (::GtkWidget* widget /*none*/, ::GtkAlign align);
GI_INLINE_DECL void set_halign (Gtk::Align align) noexcept;

// void gtk_widget_set_has_tooltip (GtkWidget* widget /*none*/, gboolean has_tooltip);
// void gtk_widget_set_has_tooltip (::GtkWidget* widget /*none*/, gboolean has_tooltip);
GI_INLINE_DECL void set_has_tooltip (gboolean has_tooltip) noexcept;

// void gtk_widget_set_hexpand (GtkWidget* widget /*none*/, gboolean expand);
// void gtk_widget_set_hexpand (::GtkWidget* widget /*none*/, gboolean expand);
GI_INLINE_DECL void set_hexpand (gboolean expand) noexcept;

// void gtk_widget_set_hexpand_set (GtkWidget* widget /*none*/, gboolean set);
// void gtk_widget_set_hexpand_set (::GtkWidget* widget /*none*/, gboolean set);
GI_INLINE_DECL void set_hexpand_set (gboolean set) noexcept;

// void gtk_widget_set_layout_manager (GtkWidget* widget /*none*/, GtkLayoutManager* layout_manager /*full,nullable*/);
// void gtk_widget_set_layout_manager (::GtkWidget* widget /*none*/, ::GtkLayoutManager* layout_manager /*full,nullable*/);
GI_INLINE_DECL void set_layout_manager (Gtk::LayoutManager layout_manager) noexcept;
GI_INLINE_DECL void set_layout_manager () noexcept;

// void gtk_widget_set_margin_bottom (GtkWidget* widget /*none*/, int margin);
// void gtk_widget_set_margin_bottom (::GtkWidget* widget /*none*/, gint margin);
GI_INLINE_DECL void set_margin_bottom (gint margin) noexcept;

// void gtk_widget_set_margin_end (GtkWidget* widget /*none*/, int margin);
// void gtk_widget_set_margin_end (::GtkWidget* widget /*none*/, gint margin);
GI_INLINE_DECL void set_margin_end (gint margin) noexcept;

// void gtk_widget_set_margin_start (GtkWidget* widget /*none*/, int margin);
// void gtk_widget_set_margin_start (::GtkWidget* widget /*none*/, gint margin);
GI_INLINE_DECL void set_margin_start (gint margin) noexcept;

// void gtk_widget_set_margin_top (GtkWidget* widget /*none*/, int margin);
// void gtk_widget_set_margin_top (::GtkWidget* widget /*none*/, gint margin);
GI_INLINE_DECL void set_margin_top (gint margin) noexcept;

// void gtk_widget_set_name (GtkWidget* widget /*none*/, const char* name /*none*/);
// void gtk_widget_set_name (::GtkWidget* widget /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;

// void gtk_widget_set_opacity (GtkWidget* widget /*none*/, double opacity);
// void gtk_widget_set_opacity (::GtkWidget* widget /*none*/, gdouble opacity);
GI_INLINE_DECL void set_opacity (gdouble opacity) noexcept;

// void gtk_widget_set_overflow (GtkWidget* widget /*none*/, GtkOverflow overflow);
// void gtk_widget_set_overflow (::GtkWidget* widget /*none*/, ::GtkOverflow overflow);
GI_INLINE_DECL void set_overflow (Gtk::Overflow overflow) noexcept;

// void gtk_widget_set_parent (GtkWidget* widget /*none*/, GtkWidget* parent /*none*/);
// void gtk_widget_set_parent (::GtkWidget* widget /*none*/, ::GtkWidget* parent /*none*/);
GI_INLINE_DECL void set_parent (Gtk::Widget parent) noexcept;

// void gtk_widget_set_receives_default (GtkWidget* widget /*none*/, gboolean receives_default);
// void gtk_widget_set_receives_default (::GtkWidget* widget /*none*/, gboolean receives_default);
GI_INLINE_DECL void set_receives_default (gboolean receives_default) noexcept;

// void gtk_widget_set_sensitive (GtkWidget* widget /*none*/, gboolean sensitive);
// void gtk_widget_set_sensitive (::GtkWidget* widget /*none*/, gboolean sensitive);
GI_INLINE_DECL void set_sensitive (gboolean sensitive) noexcept;

// void gtk_widget_set_size_request (GtkWidget* widget /*none*/, int width, int height);
// void gtk_widget_set_size_request (::GtkWidget* widget /*none*/, gint width, gint height);
GI_INLINE_DECL void set_size_request (gint width, gint height) noexcept;

// void gtk_widget_set_state_flags (GtkWidget* widget /*none*/, GtkStateFlags flags, gboolean clear);
// void gtk_widget_set_state_flags (::GtkWidget* widget /*none*/, ::GtkStateFlags flags, gboolean clear);
GI_INLINE_DECL void set_state_flags (Gtk::StateFlags flags, gboolean clear) noexcept;

// void gtk_widget_set_tooltip_markup (GtkWidget* widget /*none*/, const char* markup /*none,nullable*/);
// void gtk_widget_set_tooltip_markup (::GtkWidget* widget /*none*/, const char* markup /*none,nullable*/);
GI_INLINE_DECL void set_tooltip_markup (const gi::cstring_v markup) noexcept;
GI_INLINE_DECL void set_tooltip_markup () noexcept;

// void gtk_widget_set_tooltip_text (GtkWidget* widget /*none*/, const char* text /*none,nullable*/);
// void gtk_widget_set_tooltip_text (::GtkWidget* widget /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL void set_tooltip_text (const gi::cstring_v text) noexcept;
GI_INLINE_DECL void set_tooltip_text () noexcept;

// void gtk_widget_set_valign (GtkWidget* widget /*none*/, GtkAlign align);
// void gtk_widget_set_valign (::GtkWidget* widget /*none*/, ::GtkAlign align);
GI_INLINE_DECL void set_valign (Gtk::Align align) noexcept;

// void gtk_widget_set_vexpand (GtkWidget* widget /*none*/, gboolean expand);
// void gtk_widget_set_vexpand (::GtkWidget* widget /*none*/, gboolean expand);
GI_INLINE_DECL void set_vexpand (gboolean expand) noexcept;

// void gtk_widget_set_vexpand_set (GtkWidget* widget /*none*/, gboolean set);
// void gtk_widget_set_vexpand_set (::GtkWidget* widget /*none*/, gboolean set);
GI_INLINE_DECL void set_vexpand_set (gboolean set) noexcept;

// void gtk_widget_set_visible (GtkWidget* widget /*none*/, gboolean visible);
// void gtk_widget_set_visible (::GtkWidget* widget /*none*/, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

// gboolean gtk_widget_should_layout (GtkWidget* widget /*none*/);
// gboolean gtk_widget_should_layout (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool should_layout () noexcept;

// void gtk_widget_show (GtkWidget* widget /*none*/);
// void gtk_widget_show (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void show () noexcept;

// void gtk_widget_size_allocate (GtkWidget* widget /*none*/, const GtkAllocation* allocation /*none*/, int baseline);
// void gtk_widget_size_allocate (::GtkWidget* widget /*none*/, const ::GtkAllocation* allocation /*none*/, gint baseline);
GI_INLINE_DECL void size_allocate (const Gtk::Allocation_Ref allocation, gint baseline) noexcept;

// void gtk_widget_snapshot_child (GtkWidget* widget /*none*/, GtkWidget* child /*none*/, GtkSnapshot* snapshot /*none*/);
// void gtk_widget_snapshot_child (::GtkWidget* widget /*none*/, ::GtkWidget* child /*none*/,  snapshot /*none*/);
// SKIP; snapshot type  not supported

// gboolean gtk_widget_translate_coordinates (GtkWidget* src_widget /*none*/, GtkWidget* dest_widget /*none*/, double src_x, double src_y, double* dest_x, double* dest_y);
// gboolean gtk_widget_translate_coordinates (::GtkWidget* src_widget /*none*/, ::GtkWidget* dest_widget /*none*/, gdouble src_x, gdouble src_y, gdouble* dest_x, gdouble* dest_y);
GI_INLINE_DECL bool translate_coordinates (Gtk::Widget dest_widget, gdouble src_x, gdouble src_y, gdouble * dest_x, gdouble * dest_y) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> translate_coordinates (Gtk::Widget dest_widget, gdouble src_x, gdouble src_y) noexcept;

// void gtk_widget_trigger_tooltip_query (GtkWidget* widget /*none*/);
// void gtk_widget_trigger_tooltip_query (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void trigger_tooltip_query () noexcept;

// void gtk_widget_unmap (GtkWidget* widget /*none*/);
// void gtk_widget_unmap (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void unmap () noexcept;

// void gtk_widget_unparent (GtkWidget* widget /*none*/);
// void gtk_widget_unparent (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void unparent () noexcept;

// void gtk_widget_unrealize (GtkWidget* widget /*none*/);
// void gtk_widget_unrealize (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void unrealize () noexcept;

// void gtk_widget_unset_state_flags (GtkWidget* widget /*none*/, GtkStateFlags flags);
// void gtk_widget_unset_state_flags (::GtkWidget* widget /*none*/, ::GtkStateFlags flags);
GI_INLINE_DECL void unset_state_flags (Gtk::StateFlags flags) noexcept;

gi::property_proxy<bool, base::WidgetBase> property_can_focus()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "can-focus"); }
const gi::property_proxy<bool, base::WidgetBase> property_can_focus() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "can-focus"); }

gi::property_proxy<bool, base::WidgetBase> property_can_target()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "can-target"); }
const gi::property_proxy<bool, base::WidgetBase> property_can_target() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "can-target"); }

gi::property_proxy<gi::cstring, base::WidgetBase> property_css_name()
{ return gi::property_proxy<gi::cstring, base::WidgetBase> (*this, "css-name"); }
const gi::property_proxy<gi::cstring, base::WidgetBase> property_css_name() const
{ return gi::property_proxy<gi::cstring, base::WidgetBase> (*this, "css-name"); }

gi::property_proxy<Gdk::Cursor, base::WidgetBase> property_cursor()
{ return gi::property_proxy<Gdk::Cursor, base::WidgetBase> (*this, "cursor"); }
const gi::property_proxy<Gdk::Cursor, base::WidgetBase> property_cursor() const
{ return gi::property_proxy<Gdk::Cursor, base::WidgetBase> (*this, "cursor"); }

gi::property_proxy<bool, base::WidgetBase> property_focus_on_click()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "focus-on-click"); }
const gi::property_proxy<bool, base::WidgetBase> property_focus_on_click() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "focus-on-click"); }

gi::property_proxy<bool, base::WidgetBase> property_focusable()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "focusable"); }
const gi::property_proxy<bool, base::WidgetBase> property_focusable() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "focusable"); }

gi::property_proxy<Gtk::Align, base::WidgetBase> property_halign()
{ return gi::property_proxy<Gtk::Align, base::WidgetBase> (*this, "halign"); }
const gi::property_proxy<Gtk::Align, base::WidgetBase> property_halign() const
{ return gi::property_proxy<Gtk::Align, base::WidgetBase> (*this, "halign"); }

gi::property_proxy<bool, base::WidgetBase> property_has_default()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-default"); }
const gi::property_proxy<bool, base::WidgetBase> property_has_default() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-default"); }

gi::property_proxy<bool, base::WidgetBase> property_has_focus()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-focus"); }
const gi::property_proxy<bool, base::WidgetBase> property_has_focus() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-focus"); }

gi::property_proxy<bool, base::WidgetBase> property_has_tooltip()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-tooltip"); }
const gi::property_proxy<bool, base::WidgetBase> property_has_tooltip() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-tooltip"); }

gi::property_proxy<gint, base::WidgetBase> property_height_request()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "height-request"); }
const gi::property_proxy<gint, base::WidgetBase> property_height_request() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "height-request"); }

gi::property_proxy<bool, base::WidgetBase> property_hexpand()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "hexpand"); }
const gi::property_proxy<bool, base::WidgetBase> property_hexpand() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "hexpand"); }

gi::property_proxy<bool, base::WidgetBase> property_hexpand_set()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "hexpand-set"); }
const gi::property_proxy<bool, base::WidgetBase> property_hexpand_set() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "hexpand-set"); }

gi::property_proxy<Gtk::LayoutManager, base::WidgetBase> property_layout_manager()
{ return gi::property_proxy<Gtk::LayoutManager, base::WidgetBase> (*this, "layout-manager"); }
const gi::property_proxy<Gtk::LayoutManager, base::WidgetBase> property_layout_manager() const
{ return gi::property_proxy<Gtk::LayoutManager, base::WidgetBase> (*this, "layout-manager"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_bottom()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-bottom"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_bottom() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-bottom"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_end()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-end"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_end() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-end"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_start()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-start"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_start() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-start"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_top()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-top"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_top() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-top"); }

gi::property_proxy<gi::cstring, base::WidgetBase> property_name()
{ return gi::property_proxy<gi::cstring, base::WidgetBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::WidgetBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::WidgetBase> (*this, "name"); }

gi::property_proxy<gdouble, base::WidgetBase> property_opacity()
{ return gi::property_proxy<gdouble, base::WidgetBase> (*this, "opacity"); }
const gi::property_proxy<gdouble, base::WidgetBase> property_opacity() const
{ return gi::property_proxy<gdouble, base::WidgetBase> (*this, "opacity"); }

gi::property_proxy<Gtk::Overflow, base::WidgetBase> property_overflow()
{ return gi::property_proxy<Gtk::Overflow, base::WidgetBase> (*this, "overflow"); }
const gi::property_proxy<Gtk::Overflow, base::WidgetBase> property_overflow() const
{ return gi::property_proxy<Gtk::Overflow, base::WidgetBase> (*this, "overflow"); }

gi::property_proxy<Gtk::Widget, base::WidgetBase> property_parent()
{ return gi::property_proxy<Gtk::Widget, base::WidgetBase> (*this, "parent"); }
const gi::property_proxy<Gtk::Widget, base::WidgetBase> property_parent() const
{ return gi::property_proxy<Gtk::Widget, base::WidgetBase> (*this, "parent"); }

gi::property_proxy<bool, base::WidgetBase> property_receives_default()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "receives-default"); }
const gi::property_proxy<bool, base::WidgetBase> property_receives_default() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "receives-default"); }

gi::property_proxy<Gtk::Root, base::WidgetBase> property_root()
{ return gi::property_proxy<Gtk::Root, base::WidgetBase> (*this, "root"); }
const gi::property_proxy<Gtk::Root, base::WidgetBase> property_root() const
{ return gi::property_proxy<Gtk::Root, base::WidgetBase> (*this, "root"); }

gi::property_proxy<gint, base::WidgetBase> property_scale_factor()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "scale-factor"); }
const gi::property_proxy<gint, base::WidgetBase> property_scale_factor() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "scale-factor"); }

gi::property_proxy<bool, base::WidgetBase> property_sensitive()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "sensitive"); }
const gi::property_proxy<bool, base::WidgetBase> property_sensitive() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "sensitive"); }

gi::property_proxy<gi::cstring, base::WidgetBase> property_tooltip_markup()
{ return gi::property_proxy<gi::cstring, base::WidgetBase> (*this, "tooltip-markup"); }
const gi::property_proxy<gi::cstring, base::WidgetBase> property_tooltip_markup() const
{ return gi::property_proxy<gi::cstring, base::WidgetBase> (*this, "tooltip-markup"); }

gi::property_proxy<gi::cstring, base::WidgetBase> property_tooltip_text()
{ return gi::property_proxy<gi::cstring, base::WidgetBase> (*this, "tooltip-text"); }
const gi::property_proxy<gi::cstring, base::WidgetBase> property_tooltip_text() const
{ return gi::property_proxy<gi::cstring, base::WidgetBase> (*this, "tooltip-text"); }

gi::property_proxy<Gtk::Align, base::WidgetBase> property_valign()
{ return gi::property_proxy<Gtk::Align, base::WidgetBase> (*this, "valign"); }
const gi::property_proxy<Gtk::Align, base::WidgetBase> property_valign() const
{ return gi::property_proxy<Gtk::Align, base::WidgetBase> (*this, "valign"); }

gi::property_proxy<bool, base::WidgetBase> property_vexpand()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "vexpand"); }
const gi::property_proxy<bool, base::WidgetBase> property_vexpand() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "vexpand"); }

gi::property_proxy<bool, base::WidgetBase> property_vexpand_set()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "vexpand-set"); }
const gi::property_proxy<bool, base::WidgetBase> property_vexpand_set() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "vexpand-set"); }

gi::property_proxy<bool, base::WidgetBase> property_visible()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "visible"); }
const gi::property_proxy<bool, base::WidgetBase> property_visible() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "visible"); }

gi::property_proxy<gint, base::WidgetBase> property_width_request()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "width-request"); }
const gi::property_proxy<gint, base::WidgetBase> property_width_request() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "width-request"); }

// (signal) void destroy ();
// (signal) void destroy ();
gi::signal_proxy<void(Gtk::Widget)> signal_destroy()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "destroy"); }

// (signal) void direction-changed ( previous_direction);
// (signal) void direction-changed (::GtkTextDirection previous_direction);
gi::signal_proxy<void(Gtk::Widget, Gtk::TextDirection previous_direction)> signal_direction_changed()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::TextDirection previous_direction)> (*this, "direction-changed"); }

// (signal) void hide ();
// (signal) void hide ();
gi::signal_proxy<void(Gtk::Widget)> signal_hide()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "hide"); }

// (signal) gboolean keynav-failed ( direction);
// (signal) gboolean keynav-failed (::GtkDirectionType direction);
gi::signal_proxy<bool(Gtk::Widget, Gtk::DirectionType direction)> signal_keynav_failed()
{ return gi::signal_proxy<bool(Gtk::Widget, Gtk::DirectionType direction)> (*this, "keynav-failed"); }

// (signal) void map ();
// (signal) void map ();
gi::signal_proxy<void(Gtk::Widget)> signal_map()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "map"); }

// (signal) gboolean mnemonic-activate (gboolean group_cycling);
// (signal) gboolean mnemonic-activate (gboolean group_cycling);
gi::signal_proxy<bool(Gtk::Widget, gboolean group_cycling)> signal_mnemonic_activate()
{ return gi::signal_proxy<bool(Gtk::Widget, gboolean group_cycling)> (*this, "mnemonic-activate"); }

// (signal) void move-focus ( direction);
// (signal) void move-focus (::GtkDirectionType direction);
gi::signal_proxy<void(Gtk::Widget, Gtk::DirectionType direction)> signal_move_focus()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::DirectionType direction)> (*this, "move-focus"); }

// (signal) gboolean query-tooltip (gint x, gint y, gboolean keyboard_mode,  tooltip /*none*/);
// (signal) gboolean query-tooltip (gint x, gint y, gboolean keyboard_mode, ::GtkTooltip* tooltip /*none*/);
gi::signal_proxy<bool(Gtk::Widget, gint x, gint y, gboolean keyboard_mode, Gtk::Tooltip tooltip)> signal_query_tooltip()
{ return gi::signal_proxy<bool(Gtk::Widget, gint x, gint y, gboolean keyboard_mode, Gtk::Tooltip tooltip)> (*this, "query-tooltip"); }

// (signal) void realize ();
// (signal) void realize ();
gi::signal_proxy<void(Gtk::Widget)> signal_realize()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "realize"); }

// (signal) void show ();
// (signal) void show ();
gi::signal_proxy<void(Gtk::Widget)> signal_show()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "show"); }

// (signal) void state-flags-changed ( flags);
// (signal) void state-flags-changed (::GtkStateFlags flags);
gi::signal_proxy<void(Gtk::Widget, Gtk::StateFlags flags)> signal_state_flags_changed()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::StateFlags flags)> (*this, "state-flags-changed"); }

// (signal) void unmap ();
// (signal) void unmap ();
gi::signal_proxy<void(Gtk::Widget)> signal_unmap()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "unmap"); }

// (signal) void unrealize ();
// (signal) void unrealize ();
gi::signal_proxy<void(Gtk::Widget)> signal_unrealize()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "unrealize"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widget_extra_def.hpp>)
#include <gtk/widget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widget_extra.hpp>)
#include <gtk/widget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Widget : public GI_GTK_WIDGET_BASE
{ typedef GI_GTK_WIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWidget>
{ typedef Gtk::Widget type; }; 

} // namespace repository

} // namespace gi

#include "accessible.hpp"
#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WidgetClassDef
{
typedef WidgetClassDef self;
public:
typedef Gtk::Widget instance_type;
typedef ::GtkWidgetClass class_type;

using GI_MEMBER_CHECK_CONFLICT(contains) = self;
using GI_MEMBER_CHECK_CONFLICT(direction_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(focus) = self;
using GI_MEMBER_CHECK_CONFLICT(get_request_mode) = self;
using GI_MEMBER_CHECK_CONFLICT(grab_focus) = self;
using GI_MEMBER_CHECK_CONFLICT(hide) = self;
using GI_MEMBER_CHECK_CONFLICT(keynav_failed) = self;
using GI_MEMBER_CHECK_CONFLICT(map) = self;
using GI_MEMBER_CHECK_CONFLICT(measure) = self;
using GI_MEMBER_CHECK_CONFLICT(mnemonic_activate) = self;
using GI_MEMBER_CHECK_CONFLICT(move_focus) = self;
using GI_MEMBER_CHECK_CONFLICT(query_tooltip) = self;
using GI_MEMBER_CHECK_CONFLICT(realize) = self;
using GI_MEMBER_CHECK_CONFLICT(root) = self;
using GI_MEMBER_CHECK_CONFLICT(set_focus_child) = self;
using GI_MEMBER_CHECK_CONFLICT(show) = self;
using GI_MEMBER_CHECK_CONFLICT(size_allocate) = self;
using GI_MEMBER_CHECK_CONFLICT(state_flags_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(system_setting_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(unmap) = self;
using GI_MEMBER_CHECK_CONFLICT(unrealize) = self;
using GI_MEMBER_CHECK_CONFLICT(unroot) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~WidgetClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Widget::compute_expand (GtkWidget* widget /*none*/, gboolean* hexpand_p, gboolean* vexpand_p);
// void Widget::compute_expand (::GtkWidget* widget /*none*/, gboolean hexpand_p, gboolean vexpand_p);
// SKIP; inconsistent vexpand_p in pointer depth (1 vs 0), inconsistent hexpand_p in pointer depth (1 vs 0)

// gboolean Widget::contains (GtkWidget* widget /*none*/, double x, double y);
// gboolean Widget::contains (::GtkWidget* widget /*none*/, gdouble x, gdouble y);
virtual bool contains_ (gdouble x, gdouble y) noexcept = 0;

// void Widget::css_changed (GtkWidget* widget /*none*/, GtkCssStyleChange* change /*none*/);
// void Widget::css_changed (::GtkWidget* widget /*none*/,  change /*none*/);
// SKIP; change type  not supported

// void Widget::direction_changed (GtkWidget* widget /*none*/, GtkTextDirection previous_direction);
// void Widget::direction_changed (::GtkWidget* widget /*none*/, ::GtkTextDirection previous_direction);
virtual void direction_changed_ (Gtk::TextDirection previous_direction) noexcept = 0;

// gboolean Widget::focus (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean Widget::focus (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
virtual bool focus_ (Gtk::DirectionType direction) noexcept = 0;

// GtkSizeRequestMode Widget::get_request_mode (GtkWidget* widget /*none*/);
// ::GtkSizeRequestMode Widget::get_request_mode (::GtkWidget* widget /*none*/);
virtual Gtk::SizeRequestMode get_request_mode_ () noexcept = 0;

// gboolean Widget::grab_focus (GtkWidget* widget /*none*/);
// gboolean Widget::grab_focus (::GtkWidget* widget /*none*/);
virtual bool grab_focus_ () noexcept = 0;

// void Widget::hide (GtkWidget* widget /*none*/);
// void Widget::hide (::GtkWidget* widget /*none*/);
virtual void hide_ () noexcept = 0;

// gboolean Widget::keynav_failed (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean Widget::keynav_failed (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
virtual bool keynav_failed_ (Gtk::DirectionType direction) noexcept = 0;

// void Widget::map (GtkWidget* widget /*none*/);
// void Widget::map (::GtkWidget* widget /*none*/);
virtual void map_ () noexcept = 0;

// void Widget::measure (GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void Widget::measure (::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
virtual void measure_ (Gtk::Orientation orientation, gint for_size, gint & minimum, gint & natural, gint & minimum_baseline, gint & natural_baseline) noexcept = 0;

// gboolean Widget::mnemonic_activate (GtkWidget* widget /*none*/, gboolean group_cycling);
// gboolean Widget::mnemonic_activate (::GtkWidget* widget /*none*/, gboolean group_cycling);
virtual bool mnemonic_activate_ (gboolean group_cycling) noexcept = 0;

// void Widget::move_focus (GtkWidget* widget /*none*/, GtkDirectionType direction);
// void Widget::move_focus (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
virtual void move_focus_ (Gtk::DirectionType direction) noexcept = 0;

// gboolean Widget::query_tooltip (GtkWidget* widget /*none*/, int x, int y, gboolean keyboard_tooltip, GtkTooltip* tooltip /*none*/);
// gboolean Widget::query_tooltip (::GtkWidget* widget /*none*/, gint x, gint y, gboolean keyboard_tooltip, ::GtkTooltip* tooltip /*none*/);
virtual bool query_tooltip_ (gint x, gint y, gboolean keyboard_tooltip, Gtk::Tooltip tooltip) noexcept = 0;

// void Widget::realize (GtkWidget* widget /*none*/);
// void Widget::realize (::GtkWidget* widget /*none*/);
virtual void realize_ () noexcept = 0;

// void Widget::root (GtkWidget* widget /*none*/);
// void Widget::root (::GtkWidget* widget /*none*/);
virtual void root_ () noexcept = 0;

// void Widget::set_focus_child (GtkWidget* widget /*none*/, GtkWidget* child /*none,nullable*/);
// void Widget::set_focus_child (::GtkWidget* widget /*none*/, ::GtkWidget* child /*none,nullable*/);
virtual void set_focus_child_ (Gtk::Widget child) noexcept = 0;

// void Widget::show (GtkWidget* widget /*none*/);
// void Widget::show (::GtkWidget* widget /*none*/);
virtual void show_ () noexcept = 0;

// void Widget::size_allocate (GtkWidget* widget /*none*/, int width, int height, int baseline);
// void Widget::size_allocate (::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
virtual void size_allocate_ (gint width, gint height, gint baseline) noexcept = 0;

// void Widget::snapshot (GtkWidget* widget /*none*/, GtkSnapshot* snapshot /*none*/);
// void Widget::snapshot (::GtkWidget* widget /*none*/,  snapshot /*none*/);
// SKIP; snapshot type  not supported

// void Widget::state_flags_changed (GtkWidget* widget /*none*/, GtkStateFlags previous_state_flags);
// void Widget::state_flags_changed (::GtkWidget* widget /*none*/, ::GtkStateFlags previous_state_flags);
virtual void state_flags_changed_ (Gtk::StateFlags previous_state_flags) noexcept = 0;

// void Widget::system_setting_changed (GtkWidget* widget /*none*/, GtkSystemSetting settings);
// void Widget::system_setting_changed (::GtkWidget* widget /*none*/, ::GtkSystemSetting settings);
virtual void system_setting_changed_ (Gtk::SystemSetting settings) noexcept = 0;

// void Widget::unmap (GtkWidget* widget /*none*/);
// void Widget::unmap (::GtkWidget* widget /*none*/);
virtual void unmap_ () noexcept = 0;

// void Widget::unrealize (GtkWidget* widget /*none*/);
// void Widget::unrealize (::GtkWidget* widget /*none*/);
virtual void unrealize_ () noexcept = 0;

// void Widget::unroot (GtkWidget* widget /*none*/);
// void Widget::unroot (::GtkWidget* widget /*none*/);
virtual void unroot_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class WidgetClass: public detail::ClassTemplate<Gtk::impl::internal::WidgetClassDef, GObject::impl::internal::InitiallyUnownedClass, Gtk::impl::internal::AccessibleInterfaceClassImpl, Gtk::impl::internal::BuildableIfaceClassImpl>
{
friend class internal::WidgetClassDef;
typedef WidgetClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WidgetClassDef, GObject::impl::internal::InitiallyUnownedClass, Gtk::impl::internal::AccessibleInterfaceClassImpl, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::AccessibleInterfaceClassImpl GtkAccessibleInterface_type;
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;


// void Widget::compute_expand (GtkWidget* widget /*none*/, gboolean* hexpand_p, gboolean* vexpand_p);
// void Widget::compute_expand (::GtkWidget* widget /*none*/, gboolean hexpand_p, gboolean vexpand_p);
// SKIP; inconsistent vexpand_p in pointer depth (1 vs 0), inconsistent hexpand_p in pointer depth (1 vs 0)

// gboolean Widget::contains (GtkWidget* widget /*none*/, double x, double y);
// gboolean Widget::contains (::GtkWidget* widget /*none*/, gdouble x, gdouble y);
GI_INLINE_DECL bool contains_ (gdouble x, gdouble y) noexcept override;

// void Widget::css_changed (GtkWidget* widget /*none*/, GtkCssStyleChange* change /*none*/);
// void Widget::css_changed (::GtkWidget* widget /*none*/,  change /*none*/);
// SKIP; change type  not supported

// void Widget::direction_changed (GtkWidget* widget /*none*/, GtkTextDirection previous_direction);
// void Widget::direction_changed (::GtkWidget* widget /*none*/, ::GtkTextDirection previous_direction);
GI_INLINE_DECL void direction_changed_ (Gtk::TextDirection previous_direction) noexcept override;

// gboolean Widget::focus (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean Widget::focus (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
GI_INLINE_DECL bool focus_ (Gtk::DirectionType direction) noexcept override;

// GtkSizeRequestMode Widget::get_request_mode (GtkWidget* widget /*none*/);
// ::GtkSizeRequestMode Widget::get_request_mode (::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode_ () noexcept override;

// gboolean Widget::grab_focus (GtkWidget* widget /*none*/);
// gboolean Widget::grab_focus (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool grab_focus_ () noexcept override;

// void Widget::hide (GtkWidget* widget /*none*/);
// void Widget::hide (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void hide_ () noexcept override;

// gboolean Widget::keynav_failed (GtkWidget* widget /*none*/, GtkDirectionType direction);
// gboolean Widget::keynav_failed (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
GI_INLINE_DECL bool keynav_failed_ (Gtk::DirectionType direction) noexcept override;

// void Widget::map (GtkWidget* widget /*none*/);
// void Widget::map (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void map_ () noexcept override;

// void Widget::measure (GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void Widget::measure (::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
GI_INLINE_DECL void measure_ (Gtk::Orientation orientation, gint for_size, gint & minimum, gint & natural, gint & minimum_baseline, gint & natural_baseline) noexcept override;

// gboolean Widget::mnemonic_activate (GtkWidget* widget /*none*/, gboolean group_cycling);
// gboolean Widget::mnemonic_activate (::GtkWidget* widget /*none*/, gboolean group_cycling);
GI_INLINE_DECL bool mnemonic_activate_ (gboolean group_cycling) noexcept override;

// void Widget::move_focus (GtkWidget* widget /*none*/, GtkDirectionType direction);
// void Widget::move_focus (::GtkWidget* widget /*none*/, ::GtkDirectionType direction);
GI_INLINE_DECL void move_focus_ (Gtk::DirectionType direction) noexcept override;

// gboolean Widget::query_tooltip (GtkWidget* widget /*none*/, int x, int y, gboolean keyboard_tooltip, GtkTooltip* tooltip /*none*/);
// gboolean Widget::query_tooltip (::GtkWidget* widget /*none*/, gint x, gint y, gboolean keyboard_tooltip, ::GtkTooltip* tooltip /*none*/);
GI_INLINE_DECL bool query_tooltip_ (gint x, gint y, gboolean keyboard_tooltip, Gtk::Tooltip tooltip) noexcept override;

// void Widget::realize (GtkWidget* widget /*none*/);
// void Widget::realize (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void realize_ () noexcept override;

// void Widget::root (GtkWidget* widget /*none*/);
// void Widget::root (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void root_ () noexcept override;

// void Widget::set_focus_child (GtkWidget* widget /*none*/, GtkWidget* child /*none,nullable*/);
// void Widget::set_focus_child (::GtkWidget* widget /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_focus_child_ (Gtk::Widget child) noexcept override;

// void Widget::show (GtkWidget* widget /*none*/);
// void Widget::show (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void show_ () noexcept override;

// void Widget::size_allocate (GtkWidget* widget /*none*/, int width, int height, int baseline);
// void Widget::size_allocate (::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
GI_INLINE_DECL void size_allocate_ (gint width, gint height, gint baseline) noexcept override;

// void Widget::snapshot (GtkWidget* widget /*none*/, GtkSnapshot* snapshot /*none*/);
// void Widget::snapshot (::GtkWidget* widget /*none*/,  snapshot /*none*/);
// SKIP; snapshot type  not supported

// void Widget::state_flags_changed (GtkWidget* widget /*none*/, GtkStateFlags previous_state_flags);
// void Widget::state_flags_changed (::GtkWidget* widget /*none*/, ::GtkStateFlags previous_state_flags);
GI_INLINE_DECL void state_flags_changed_ (Gtk::StateFlags previous_state_flags) noexcept override;

// void Widget::system_setting_changed (GtkWidget* widget /*none*/, GtkSystemSetting settings);
// void Widget::system_setting_changed (::GtkWidget* widget /*none*/, ::GtkSystemSetting settings);
GI_INLINE_DECL void system_setting_changed_ (Gtk::SystemSetting settings) noexcept override;

// void Widget::unmap (GtkWidget* widget /*none*/);
// void Widget::unmap (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void unmap_ () noexcept override;

// void Widget::unrealize (GtkWidget* widget /*none*/);
// void Widget::unrealize (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void unrealize_ () noexcept override;

// void Widget::unroot (GtkWidget* widget /*none*/);
// void Widget::unroot (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void unroot_ () noexcept override;


};


struct WidgetClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(WidgetClass, contains)
  GI_MEMBER_DEFINE(WidgetClass, direction_changed)
  GI_MEMBER_DEFINE(WidgetClass, focus)
  GI_MEMBER_DEFINE(WidgetClass, get_request_mode)
  GI_MEMBER_DEFINE(WidgetClass, grab_focus)
  GI_MEMBER_DEFINE(WidgetClass, hide)
  GI_MEMBER_DEFINE(WidgetClass, keynav_failed)
  GI_MEMBER_DEFINE(WidgetClass, map)
  GI_MEMBER_DEFINE(WidgetClass, measure)
  GI_MEMBER_DEFINE(WidgetClass, mnemonic_activate)
  GI_MEMBER_DEFINE(WidgetClass, move_focus)
  GI_MEMBER_DEFINE(WidgetClass, query_tooltip)
  GI_MEMBER_DEFINE(WidgetClass, realize)
  GI_MEMBER_DEFINE(WidgetClass, root)
  GI_MEMBER_DEFINE(WidgetClass, set_focus_child)
  GI_MEMBER_DEFINE(WidgetClass, show)
  GI_MEMBER_DEFINE(WidgetClass, size_allocate)
  GI_MEMBER_DEFINE(WidgetClass, state_flags_changed)
  GI_MEMBER_DEFINE(WidgetClass, system_setting_changed)
  GI_MEMBER_DEFINE(WidgetClass, unmap)
  GI_MEMBER_DEFINE(WidgetClass, unrealize)
  GI_MEMBER_DEFINE(WidgetClass, unroot)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, contains),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, direction_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, focus),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_request_mode),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, grab_focus),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, hide),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, keynav_failed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, map),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, measure),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mnemonic_activate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, move_focus),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_tooltip),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, realize),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, root),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_focus_child),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, show),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, size_allocate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, state_flags_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, system_setting_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unmap),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unrealize),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unroot)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using WidgetImpl = detail::ObjectImpl<Widget, internal::WidgetClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
