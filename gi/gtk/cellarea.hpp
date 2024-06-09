// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREA_HPP_
#define _GI_GTK_CELLAREA_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class CellAreaContext;
class CellEditable;
class CellLayout;
class CellRenderer;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class Widget;

class CellArea;

namespace base {


#define GI_GTK_CELLAREA_BASE base::CellAreaBase
class CellAreaBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkCellArea BaseObjectType;

CellAreaBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_area_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

// gboolean gtk_cell_area_activate (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean edit_only);
// gboolean gtk_cell_area_activate (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean edit_only);
GI_INLINE_DECL bool activate (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept;

// gboolean gtk_cell_area_activate_cell (GtkCellArea* area /*none*/, GtkWidget* widget /*none*/, GtkCellRenderer* renderer /*none*/, GdkEvent* event /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gboolean gtk_cell_area_activate_cell (::GtkCellArea* area /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRenderer* renderer /*none*/,  event /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_area_add (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void gtk_cell_area_add (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
GI_INLINE_DECL void add (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_add_focus_sibling (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, GtkCellRenderer* sibling /*none*/);
// void gtk_cell_area_add_focus_sibling (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, ::GtkCellRenderer* sibling /*none*/);
GI_INLINE_DECL void add_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept;

// void gtk_cell_area_add_with_properties (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// void gtk_cell_area_add_with_properties (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_apply_attributes (GtkCellArea* area /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
// void gtk_cell_area_apply_attributes (::GtkCellArea* area /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
GI_INLINE_DECL void apply_attributes (Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded) noexcept;

// void gtk_cell_area_attribute_connect (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/, int column);
// void gtk_cell_area_attribute_connect (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/, gint column);
GI_INLINE_DECL void attribute_connect (Gtk::CellRenderer renderer, const gi::cstring_v attribute, gint column) noexcept;

// void gtk_cell_area_attribute_disconnect (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/);
// void gtk_cell_area_attribute_disconnect (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL void attribute_disconnect (Gtk::CellRenderer renderer, const gi::cstring_v attribute) noexcept;

// int gtk_cell_area_attribute_get_column (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/);
// gint gtk_cell_area_attribute_get_column (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL gint attribute_get_column (Gtk::CellRenderer renderer, const gi::cstring_v attribute) noexcept;

// void gtk_cell_area_cell_get (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// void gtk_cell_area_cell_get (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_cell_get_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* property_name /*none*/, GValue* value /*none*/);
// void gtk_cell_area_cell_get_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* property_name /*none*/, ::GValue* value /*none*/);
GI_INLINE_DECL void cell_get_property (Gtk::CellRenderer renderer, const gi::cstring_v property_name, GObject::Value_Ref value) noexcept;

// void gtk_cell_area_cell_get_valist (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_property_name /*none*/, va_list var_args /*none*/);
// void gtk_cell_area_cell_get_valist (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_property_name /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_cell_area_cell_set (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// void gtk_cell_area_cell_set (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_cell_set_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* property_name /*none*/, const GValue* value /*none*/);
// void gtk_cell_area_cell_set_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* property_name /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL void cell_set_property (Gtk::CellRenderer renderer, const gi::cstring_v property_name, const GObject::Value_Ref value) noexcept;

// void gtk_cell_area_cell_set_valist (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_property_name /*none*/, va_list var_args /*none*/);
// void gtk_cell_area_cell_set_valist (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_property_name /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// GtkCellAreaContext* /*full*/ gtk_cell_area_copy_context (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/);
// ::GtkCellAreaContext* /*full*/ gtk_cell_area_copy_context (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/);
GI_INLINE_DECL Gtk::CellAreaContext copy_context (Gtk::CellAreaContext context) noexcept;

// GtkCellAreaContext* /*full*/ gtk_cell_area_create_context (GtkCellArea* area /*none*/);
// ::GtkCellAreaContext* /*full*/ gtk_cell_area_create_context (::GtkCellArea* area /*none*/);
GI_INLINE_DECL Gtk::CellAreaContext create_context () noexcept;

// int gtk_cell_area_event (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GdkEvent* event /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gint gtk_cell_area_event (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  event /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean gtk_cell_area_focus (GtkCellArea* area /*none*/, GtkDirectionType direction);
// gboolean gtk_cell_area_focus (::GtkCellArea* area /*none*/, ::GtkDirectionType direction);
GI_INLINE_DECL bool focus (Gtk::DirectionType direction) noexcept;

// void gtk_cell_area_foreach (GtkCellArea* area /*none*/, GtkCellCallback callback /*none*/, gpointer callback_data);
// void gtk_cell_area_foreach (::GtkCellArea* area /*none*/, Gtk::CellCallback::cfunction_type callback /*none*/, void* callback_data);
GI_INLINE_DECL void foreach (Gtk::CellCallback callback) noexcept;

// void gtk_cell_area_foreach_alloc (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, const GdkRectangle* background_area /*none*/, GtkCellAllocCallback callback /*none*/, gpointer callback_data);
// void gtk_cell_area_foreach_alloc (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, const ::GdkRectangle* background_area /*none*/, Gtk::CellAllocCallback::cfunction_type callback /*none*/, void* callback_data);
GI_INLINE_DECL void foreach_alloc (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref background_area, Gtk::CellAllocCallback callback) noexcept;

// void gtk_cell_area_get_cell_allocation (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GtkCellRenderer* renderer /*none*/, const GdkRectangle* cell_area /*none*/, GdkRectangle* allocation /*none,out,ca*/);
// void gtk_cell_area_get_cell_allocation (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRenderer* renderer /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* allocation /*none,out,ca*/);
GI_INLINE_DECL void get_cell_allocation (Gtk::CellAreaContext context, Gtk::Widget widget, Gtk::CellRenderer renderer, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle & allocation) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_cell_allocation (Gtk::CellAreaContext context, Gtk::Widget widget, Gtk::CellRenderer renderer, const Gdk::Rectangle_Ref cell_area) noexcept;

// GtkCellRenderer* /*none*/ gtk_cell_area_get_cell_at_position (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, int x, int y, GdkRectangle* alloc_area /*none,out,opt,ca*/);
// ::GtkCellRenderer* /*none*/ gtk_cell_area_get_cell_at_position (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, gint x, gint y, ::GdkRectangle* alloc_area /*none,out,opt,ca*/);
GI_INLINE_DECL Gtk::CellRenderer get_cell_at_position (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, gint x, gint y, Gdk::Rectangle * alloc_area) noexcept;
GI_INLINE_DECL std::tuple<Gtk::CellRenderer, Gdk::Rectangle> get_cell_at_position (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, gint x, gint y) noexcept;

// const char* /*none*/ gtk_cell_area_get_current_path_string (GtkCellArea* area /*none*/);
// const char* /*none*/ gtk_cell_area_get_current_path_string (::GtkCellArea* area /*none*/);
GI_INLINE_DECL gi::cstring_v get_current_path_string () noexcept;

// GtkCellEditable* /*none,nullable*/ gtk_cell_area_get_edit_widget (GtkCellArea* area /*none*/);
// ::GtkCellEditable* /*none,nullable*/ gtk_cell_area_get_edit_widget (::GtkCellArea* area /*none*/);
GI_INLINE_DECL Gtk::CellEditable get_edit_widget () noexcept;

// GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_edited_cell (GtkCellArea* area /*none*/);
// ::GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_edited_cell (::GtkCellArea* area /*none*/);
GI_INLINE_DECL Gtk::CellRenderer get_edited_cell () noexcept;

// GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_focus_cell (GtkCellArea* area /*none*/);
// ::GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_focus_cell (::GtkCellArea* area /*none*/);
GI_INLINE_DECL Gtk::CellRenderer get_focus_cell () noexcept;

// GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_focus_from_sibling (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// ::GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_focus_from_sibling (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
GI_INLINE_DECL Gtk::CellRenderer get_focus_from_sibling (Gtk::CellRenderer renderer) noexcept;

// const GList* /*none*/ gtk_cell_area_get_focus_siblings (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// const ::GList* /*none*/ gtk_cell_area_get_focus_siblings (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_none_t> get_focus_siblings (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_get_preferred_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_height, int* natural_height);
// void gtk_cell_area_get_preferred_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint * minimum_height, gint * natural_height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height (Gtk::CellAreaContext context, Gtk::Widget widget) noexcept;

// void gtk_cell_area_get_preferred_height_for_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void gtk_cell_area_get_preferred_height_for_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_for_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint width, gint * minimum_height, gint * natural_height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height_for_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint width) noexcept;

// void gtk_cell_area_get_preferred_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_width, int* natural_width);
// void gtk_cell_area_get_preferred_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint * minimum_width, gint * natural_width) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width (Gtk::CellAreaContext context, Gtk::Widget widget) noexcept;

// void gtk_cell_area_get_preferred_width_for_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void gtk_cell_area_get_preferred_width_for_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_for_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint height, gint * minimum_width, gint * natural_width) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width_for_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint height) noexcept;

// GtkSizeRequestMode gtk_cell_area_get_request_mode (GtkCellArea* area /*none*/);
// ::GtkSizeRequestMode gtk_cell_area_get_request_mode (::GtkCellArea* area /*none*/);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode () noexcept;

// gboolean gtk_cell_area_has_renderer (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// gboolean gtk_cell_area_has_renderer (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
GI_INLINE_DECL bool has_renderer (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_inner_cell_area (GtkCellArea* area /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, GdkRectangle* inner_area /*none,out,ca*/);
// void gtk_cell_area_inner_cell_area (::GtkCellArea* area /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* inner_area /*none,out,ca*/);
GI_INLINE_DECL void inner_cell_area (Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle & inner_area) noexcept;
GI_INLINE_DECL Gdk::Rectangle inner_cell_area (Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area) noexcept;

// gboolean gtk_cell_area_is_activatable (GtkCellArea* area /*none*/);
// gboolean gtk_cell_area_is_activatable (::GtkCellArea* area /*none*/);
GI_INLINE_DECL bool is_activatable () noexcept;

// gboolean gtk_cell_area_is_focus_sibling (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, GtkCellRenderer* sibling /*none*/);
// gboolean gtk_cell_area_is_focus_sibling (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, ::GtkCellRenderer* sibling /*none*/);
GI_INLINE_DECL bool is_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept;

// void gtk_cell_area_remove (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void gtk_cell_area_remove (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
GI_INLINE_DECL void remove (Gtk::CellRenderer renderer) noexcept;

// void gtk_cell_area_remove_focus_sibling (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, GtkCellRenderer* sibling /*none*/);
// void gtk_cell_area_remove_focus_sibling (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, ::GtkCellRenderer* sibling /*none*/);
GI_INLINE_DECL void remove_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept;

// void gtk_cell_area_request_renderer (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, GtkOrientation orientation, GtkWidget* widget /*none*/, int for_size, int* minimum_size, int* natural_size);
// void gtk_cell_area_request_renderer (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, ::GtkOrientation orientation, ::GtkWidget* widget /*none*/, gint for_size, gint* minimum_size, gint* natural_size);
GI_INLINE_DECL void request_renderer (Gtk::CellRenderer renderer, Gtk::Orientation orientation, Gtk::Widget widget, gint for_size, gint * minimum_size, gint * natural_size) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> request_renderer (Gtk::CellRenderer renderer, Gtk::Orientation orientation, Gtk::Widget widget, gint for_size) noexcept;

// void gtk_cell_area_set_focus_cell (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none,nullable*/);
// void gtk_cell_area_set_focus_cell (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none,nullable*/);
GI_INLINE_DECL void set_focus_cell (Gtk::CellRenderer renderer) noexcept;
GI_INLINE_DECL void set_focus_cell () noexcept;

// void gtk_cell_area_snapshot (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GtkSnapshot* snapshot /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean paint_focus);
// void gtk_cell_area_snapshot (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  snapshot /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean paint_focus);
// SKIP; snapshot type  not supported

// void gtk_cell_area_stop_editing (GtkCellArea* area /*none*/, gboolean canceled);
// void gtk_cell_area_stop_editing (::GtkCellArea* area /*none*/, gboolean canceled);
GI_INLINE_DECL void stop_editing (gboolean canceled) noexcept;

gi::property_proxy<Gtk::CellEditable, base::CellAreaBase> property_edit_widget()
{ return gi::property_proxy<Gtk::CellEditable, base::CellAreaBase> (*this, "edit-widget"); }
const gi::property_proxy<Gtk::CellEditable, base::CellAreaBase> property_edit_widget() const
{ return gi::property_proxy<Gtk::CellEditable, base::CellAreaBase> (*this, "edit-widget"); }

gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> property_edited_cell()
{ return gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> (*this, "edited-cell"); }
const gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> property_edited_cell() const
{ return gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> (*this, "edited-cell"); }

gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> property_focus_cell()
{ return gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> (*this, "focus-cell"); }
const gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> property_focus_cell() const
{ return gi::property_proxy<Gtk::CellRenderer, base::CellAreaBase> (*this, "focus-cell"); }

// (signal) void add-editable ( renderer /*none*/,  editable /*none*/,  cell_area /*none*/, gchar* path /*none*/);
// (signal) void add-editable (::GtkCellRenderer* renderer /*none*/, ::GtkCellEditable* editable /*none*/, ::GdkRectangle* cell_area /*none*/, char* path /*none*/);
gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, Gtk::CellEditable editable, Gdk::Rectangle_Ref cell_area, gi::cstring_v path)> signal_add_editable()
{ return gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, Gtk::CellEditable editable, Gdk::Rectangle_Ref cell_area, gi::cstring_v path)> (*this, "add-editable"); }

// (signal) void apply-attributes ( model /*none*/,  iter /*none*/, gboolean is_expander, gboolean is_expanded);
// (signal) void apply-attributes (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
gi::signal_proxy<void(Gtk::CellArea, Gtk::TreeModel model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded)> signal_apply_attributes()
{ return gi::signal_proxy<void(Gtk::CellArea, Gtk::TreeModel model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded)> (*this, "apply-attributes"); }

// (signal) void focus-changed ( renderer /*none*/, gchar* path /*none*/);
// (signal) void focus-changed (::GtkCellRenderer* renderer /*none*/, char* path /*none*/);
gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, gi::cstring_v path)> signal_focus_changed()
{ return gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, gi::cstring_v path)> (*this, "focus-changed"); }

// (signal) void remove-editable ( renderer /*none*/,  editable /*none*/);
// (signal) void remove-editable (::GtkCellRenderer* renderer /*none*/, ::GtkCellEditable* editable /*none*/);
gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, Gtk::CellEditable editable)> signal_remove_editable()
{ return gi::signal_proxy<void(Gtk::CellArea, Gtk::CellRenderer renderer, Gtk::CellEditable editable)> (*this, "remove-editable"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellarea_extra_def.hpp>)
#include <gtk/cellarea_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellarea_extra.hpp>)
#include <gtk/cellarea_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellArea : public GI_GTK_CELLAREA_BASE
{ typedef GI_GTK_CELLAREA_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellArea>
{ typedef Gtk::CellArea type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"
#include "celllayout.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellAreaClassDef
{
typedef CellAreaClassDef self;
public:
typedef Gtk::CellArea instance_type;
typedef ::GtkCellAreaClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;
using GI_MEMBER_CHECK_CONFLICT(add) = self;
using GI_MEMBER_CHECK_CONFLICT(apply_attributes) = self;
using GI_MEMBER_CHECK_CONFLICT(copy_context) = self;
using GI_MEMBER_CHECK_CONFLICT(create_context) = self;
using GI_MEMBER_CHECK_CONFLICT(focus) = self;
using GI_MEMBER_CHECK_CONFLICT(foreach) = self;
using GI_MEMBER_CHECK_CONFLICT(foreach_alloc) = self;
using GI_MEMBER_CHECK_CONFLICT(get_cell_property) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preferred_height) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preferred_height_for_width) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preferred_width) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preferred_width_for_height) = self;
using GI_MEMBER_CHECK_CONFLICT(get_request_mode) = self;
using GI_MEMBER_CHECK_CONFLICT(is_activatable) = self;
using GI_MEMBER_CHECK_CONFLICT(remove) = self;
using GI_MEMBER_CHECK_CONFLICT(set_cell_property) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~CellAreaClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean CellArea::activate (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean edit_only);
// gboolean CellArea::activate (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean edit_only);
virtual bool activate_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept = 0;

// void CellArea::add (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void CellArea::add (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
virtual void add_ (Gtk::CellRenderer renderer) noexcept = 0;

// void CellArea::apply_attributes (GtkCellArea* area /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
// void CellArea::apply_attributes (::GtkCellArea* area /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
virtual void apply_attributes_ (Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded) noexcept = 0;

// GtkCellAreaContext* /*full*/ CellArea::copy_context (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/);
// ::GtkCellAreaContext* /*full*/ CellArea::copy_context (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/);
virtual Gtk::CellAreaContext copy_context_ (Gtk::CellAreaContext context) noexcept = 0;

// GtkCellAreaContext* /*full*/ CellArea::create_context (GtkCellArea* area /*none*/);
// ::GtkCellAreaContext* /*full*/ CellArea::create_context (::GtkCellArea* area /*none*/);
virtual Gtk::CellAreaContext create_context_ () noexcept = 0;

// int CellArea::event (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GdkEvent* event /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gint CellArea::event (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  event /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean CellArea::focus (GtkCellArea* area /*none*/, GtkDirectionType direction);
// gboolean CellArea::focus (::GtkCellArea* area /*none*/, ::GtkDirectionType direction);
virtual bool focus_ (Gtk::DirectionType direction) noexcept = 0;

// void CellArea::foreach (GtkCellArea* area /*none*/, GtkCellCallback callback /*none*/, gpointer callback_data);
// void CellArea::foreach (::GtkCellArea* area /*none*/, Gtk::CellCallback::cfunction_type callback /*none*/, void* callback_data);
virtual void foreach_ (Gtk::CellCallback callback) noexcept = 0;

// void CellArea::foreach_alloc (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, const GdkRectangle* background_area /*none*/, GtkCellAllocCallback callback /*none*/, gpointer callback_data);
// void CellArea::foreach_alloc (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, const ::GdkRectangle* background_area /*none*/, Gtk::CellAllocCallback::cfunction_type callback /*none*/, void* callback_data);
virtual void foreach_alloc_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref background_area, Gtk::CellAllocCallback callback) noexcept = 0;

// void CellArea::get_cell_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, guint property_id, GValue* value /*none*/, GParamSpec* pspec /*none*/);
// void CellArea::get_cell_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, guint property_id, ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
virtual void get_cell_property_ (Gtk::CellRenderer renderer, guint property_id, GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept = 0;

// void CellArea::get_preferred_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_height, int* natural_height);
// void CellArea::get_preferred_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_height, gint* natural_height);
virtual void get_preferred_height_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint & minimum_height, gint & natural_height) noexcept = 0;

// void CellArea::get_preferred_height_for_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void CellArea::get_preferred_height_for_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
virtual void get_preferred_height_for_width_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint width, gint & minimum_height, gint & natural_height) noexcept = 0;

// void CellArea::get_preferred_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_width, int* natural_width);
// void CellArea::get_preferred_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_width, gint* natural_width);
virtual void get_preferred_width_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint & minimum_width, gint & natural_width) noexcept = 0;

// void CellArea::get_preferred_width_for_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void CellArea::get_preferred_width_for_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
virtual void get_preferred_width_for_height_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint height, gint & minimum_width, gint & natural_width) noexcept = 0;

// GtkSizeRequestMode CellArea::get_request_mode (GtkCellArea* area /*none*/);
// ::GtkSizeRequestMode CellArea::get_request_mode (::GtkCellArea* area /*none*/);
virtual Gtk::SizeRequestMode get_request_mode_ () noexcept = 0;

// gboolean CellArea::is_activatable (GtkCellArea* area /*none*/);
// gboolean CellArea::is_activatable (::GtkCellArea* area /*none*/);
virtual bool is_activatable_ () noexcept = 0;

// void CellArea::remove (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void CellArea::remove (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
virtual void remove_ (Gtk::CellRenderer renderer) noexcept = 0;

// void CellArea::set_cell_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, guint property_id, const GValue* value /*none*/, GParamSpec* pspec /*none*/);
// void CellArea::set_cell_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, guint property_id, const ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
virtual void set_cell_property_ (Gtk::CellRenderer renderer, guint property_id, const GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept = 0;

// void CellArea::snapshot (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GtkSnapshot* snapshot /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean paint_focus);
// void CellArea::snapshot (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  snapshot /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean paint_focus);
// SKIP; snapshot type  not supported


};

GI_CLASS_IMPL_BEGIN


class CellAreaClass: public detail::ClassTemplate<Gtk::impl::internal::CellAreaClassDef, GObject::impl::internal::InitiallyUnownedClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl>
{
friend class internal::CellAreaClassDef;
typedef CellAreaClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellAreaClassDef, GObject::impl::internal::InitiallyUnownedClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;
typedef Gtk::impl::internal::CellLayoutIfaceClassImpl GtkCellLayoutIface_type;


// gboolean CellArea::activate (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean edit_only);
// gboolean CellArea::activate (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean edit_only);
GI_INLINE_DECL bool activate_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept override;

// void CellArea::add (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void CellArea::add (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
GI_INLINE_DECL void add_ (Gtk::CellRenderer renderer) noexcept override;

// void CellArea::apply_attributes (GtkCellArea* area /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
// void CellArea::apply_attributes (::GtkCellArea* area /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
GI_INLINE_DECL void apply_attributes_ (Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded) noexcept override;

// GtkCellAreaContext* /*full*/ CellArea::copy_context (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/);
// ::GtkCellAreaContext* /*full*/ CellArea::copy_context (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/);
GI_INLINE_DECL Gtk::CellAreaContext copy_context_ (Gtk::CellAreaContext context) noexcept override;

// GtkCellAreaContext* /*full*/ CellArea::create_context (GtkCellArea* area /*none*/);
// ::GtkCellAreaContext* /*full*/ CellArea::create_context (::GtkCellArea* area /*none*/);
GI_INLINE_DECL Gtk::CellAreaContext create_context_ () noexcept override;

// int CellArea::event (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GdkEvent* event /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gint CellArea::event (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  event /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean CellArea::focus (GtkCellArea* area /*none*/, GtkDirectionType direction);
// gboolean CellArea::focus (::GtkCellArea* area /*none*/, ::GtkDirectionType direction);
GI_INLINE_DECL bool focus_ (Gtk::DirectionType direction) noexcept override;

// void CellArea::foreach (GtkCellArea* area /*none*/, GtkCellCallback callback /*none*/, gpointer callback_data);
// void CellArea::foreach (::GtkCellArea* area /*none*/, Gtk::CellCallback::cfunction_type callback /*none*/, void* callback_data);
GI_INLINE_DECL void foreach_ (Gtk::CellCallback callback) noexcept override;

// void CellArea::foreach_alloc (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, const GdkRectangle* background_area /*none*/, GtkCellAllocCallback callback /*none*/, gpointer callback_data);
// void CellArea::foreach_alloc (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, const ::GdkRectangle* background_area /*none*/, Gtk::CellAllocCallback::cfunction_type callback /*none*/, void* callback_data);
GI_INLINE_DECL void foreach_alloc_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref background_area, Gtk::CellAllocCallback callback) noexcept override;

// void CellArea::get_cell_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, guint property_id, GValue* value /*none*/, GParamSpec* pspec /*none*/);
// void CellArea::get_cell_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, guint property_id, ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
GI_INLINE_DECL void get_cell_property_ (Gtk::CellRenderer renderer, guint property_id, GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept override;

// void CellArea::get_preferred_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_height, int* natural_height);
// void CellArea::get_preferred_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint & minimum_height, gint & natural_height) noexcept override;

// void CellArea::get_preferred_height_for_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void CellArea::get_preferred_height_for_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_for_width_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint width, gint & minimum_height, gint & natural_height) noexcept override;

// void CellArea::get_preferred_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_width, int* natural_width);
// void CellArea::get_preferred_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint & minimum_width, gint & natural_width) noexcept override;

// void CellArea::get_preferred_width_for_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void CellArea::get_preferred_width_for_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_for_height_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint height, gint & minimum_width, gint & natural_width) noexcept override;

// GtkSizeRequestMode CellArea::get_request_mode (GtkCellArea* area /*none*/);
// ::GtkSizeRequestMode CellArea::get_request_mode (::GtkCellArea* area /*none*/);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode_ () noexcept override;

// gboolean CellArea::is_activatable (GtkCellArea* area /*none*/);
// gboolean CellArea::is_activatable (::GtkCellArea* area /*none*/);
GI_INLINE_DECL bool is_activatable_ () noexcept override;

// void CellArea::remove (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void CellArea::remove (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
GI_INLINE_DECL void remove_ (Gtk::CellRenderer renderer) noexcept override;

// void CellArea::set_cell_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, guint property_id, const GValue* value /*none*/, GParamSpec* pspec /*none*/);
// void CellArea::set_cell_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, guint property_id, const ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
GI_INLINE_DECL void set_cell_property_ (Gtk::CellRenderer renderer, guint property_id, const GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept override;

// void CellArea::snapshot (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GtkSnapshot* snapshot /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean paint_focus);
// void CellArea::snapshot (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  snapshot /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean paint_focus);
// SKIP; snapshot type  not supported


};


struct CellAreaClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(CellAreaClass, activate)
  GI_MEMBER_DEFINE(CellAreaClass, add)
  GI_MEMBER_DEFINE(CellAreaClass, apply_attributes)
  GI_MEMBER_DEFINE(CellAreaClass, copy_context)
  GI_MEMBER_DEFINE(CellAreaClass, create_context)
  GI_MEMBER_DEFINE(CellAreaClass, focus)
  GI_MEMBER_DEFINE(CellAreaClass, foreach)
  GI_MEMBER_DEFINE(CellAreaClass, foreach_alloc)
  GI_MEMBER_DEFINE(CellAreaClass, get_cell_property)
  GI_MEMBER_DEFINE(CellAreaClass, get_preferred_height)
  GI_MEMBER_DEFINE(CellAreaClass, get_preferred_height_for_width)
  GI_MEMBER_DEFINE(CellAreaClass, get_preferred_width)
  GI_MEMBER_DEFINE(CellAreaClass, get_preferred_width_for_height)
  GI_MEMBER_DEFINE(CellAreaClass, get_request_mode)
  GI_MEMBER_DEFINE(CellAreaClass, is_activatable)
  GI_MEMBER_DEFINE(CellAreaClass, remove)
  GI_MEMBER_DEFINE(CellAreaClass, set_cell_property)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, add),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, apply_attributes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, copy_context),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_context),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, focus),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, foreach),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, foreach_alloc),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_cell_property),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preferred_height),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preferred_height_for_width),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preferred_width),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preferred_width_for_height),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_request_mode),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_activatable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, remove),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_cell_property)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using CellAreaImpl = detail::ObjectImpl<CellArea, internal::CellAreaClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
