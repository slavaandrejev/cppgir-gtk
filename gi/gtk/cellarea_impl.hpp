// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREA_IMPL_HPP_
#define _GI_GTK_CELLAREA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable CellAreaBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CellAreaBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::CellLayout CellAreaBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CellAreaBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

// gboolean gtk_cell_area_activate (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean edit_only);
// gboolean gtk_cell_area_activate (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean edit_only);
bool base::CellAreaBase::activate (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_activate;
  auto edit_only_to_c = edit_only;
  auto flags_to_c = gi::unwrap (flags);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GtkCellRendererState) (flags_to_c), (gboolean) (edit_only_to_c));
  return _temp_ret;
}

// gboolean gtk_cell_area_activate_cell (GtkCellArea* area /*none*/, GtkWidget* widget /*none*/, GtkCellRenderer* renderer /*none*/, GdkEvent* event /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gboolean gtk_cell_area_activate_cell (::GtkCellArea* area /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRenderer* renderer /*none*/,  event /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_area_add (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void gtk_cell_area_add (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
void base::CellAreaBase::add (Gtk::CellRenderer renderer) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_add;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void gtk_cell_area_add_focus_sibling (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, GtkCellRenderer* sibling /*none*/);
// void gtk_cell_area_add_focus_sibling (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, ::GtkCellRenderer* sibling /*none*/);
void base::CellAreaBase::add_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_add_focus_sibling;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkCellRenderer*) (sibling_to_c));
}

// void gtk_cell_area_add_with_properties (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// void gtk_cell_area_add_with_properties (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_apply_attributes (GtkCellArea* area /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
// void gtk_cell_area_apply_attributes (::GtkCellArea* area /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
void base::CellAreaBase::apply_attributes (Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_apply_attributes;
  auto is_expanded_to_c = is_expanded;
  auto is_expander_to_c = is_expander;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkTreeModel*) (tree_model_to_c), (::GtkTreeIter*) (iter_to_c), (gboolean) (is_expander_to_c), (gboolean) (is_expanded_to_c));
}

// void gtk_cell_area_attribute_connect (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/, int column);
// void gtk_cell_area_attribute_connect (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/, gint column);
void base::CellAreaBase::attribute_connect (Gtk::CellRenderer renderer, const gi::cstring_v attribute, gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_attribute_connect;
  auto column_to_c = column;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (attribute_to_c), (gint) (column_to_c));
}

// void gtk_cell_area_attribute_disconnect (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/);
// void gtk_cell_area_attribute_disconnect (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/);
void base::CellAreaBase::attribute_disconnect (Gtk::CellRenderer renderer, const gi::cstring_v attribute) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_attribute_disconnect;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (attribute_to_c));
}

// int gtk_cell_area_attribute_get_column (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/);
// gint gtk_cell_area_attribute_get_column (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* attribute /*none*/);
gint base::CellAreaBase::attribute_get_column (Gtk::CellRenderer renderer, const gi::cstring_v attribute) noexcept
{
  typedef gint (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_attribute_get_column;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (attribute_to_c));
  return _temp_ret;
}

// void gtk_cell_area_cell_get (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// void gtk_cell_area_cell_get (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_cell_get_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* property_name /*none*/, GValue* value /*none*/);
// void gtk_cell_area_cell_get_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* property_name /*none*/, ::GValue* value /*none*/);
void base::CellAreaBase::cell_get_property (Gtk::CellRenderer renderer, const gi::cstring_v property_name, GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* property_name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_cell_get_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (property_name_to_c), (::GValue*) (value_to_c));
}

// void gtk_cell_area_cell_get_valist (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_property_name /*none*/, va_list var_args /*none*/);
// void gtk_cell_area_cell_get_valist (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_property_name /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_cell_area_cell_set (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// void gtk_cell_area_cell_set (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_prop_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_area_cell_set_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* property_name /*none*/, const GValue* value /*none*/);
// void gtk_cell_area_cell_set_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* property_name /*none*/, const ::GValue* value /*none*/);
void base::CellAreaBase::cell_set_property (Gtk::CellRenderer renderer, const gi::cstring_v property_name, const GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, const char* property_name, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_cell_set_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (const char*) (property_name_to_c), (const ::GValue*) (value_to_c));
}

// void gtk_cell_area_cell_set_valist (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, const char* first_property_name /*none*/, va_list var_args /*none*/);
// void gtk_cell_area_cell_set_valist (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, const char* first_property_name /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// GtkCellAreaContext* /*full*/ gtk_cell_area_copy_context (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/);
// ::GtkCellAreaContext* /*full*/ gtk_cell_area_copy_context (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/);
Gtk::CellAreaContext base::CellAreaBase::copy_context (Gtk::CellAreaContext context) noexcept
{
  typedef ::GtkCellAreaContext* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_copy_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkCellAreaContext* /*full*/ gtk_cell_area_create_context (GtkCellArea* area /*none*/);
// ::GtkCellAreaContext* /*full*/ gtk_cell_area_create_context (::GtkCellArea* area /*none*/);
Gtk::CellAreaContext base::CellAreaBase::create_context () noexcept
{
  typedef ::GtkCellAreaContext* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_create_context;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_cell_area_event (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GdkEvent* event /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gint gtk_cell_area_event (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  event /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean gtk_cell_area_focus (GtkCellArea* area /*none*/, GtkDirectionType direction);
// gboolean gtk_cell_area_focus (::GtkCellArea* area /*none*/, ::GtkDirectionType direction);
bool base::CellAreaBase::focus (Gtk::DirectionType direction) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_focus;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// void gtk_cell_area_foreach (GtkCellArea* area /*none*/, GtkCellCallback callback /*none*/, gpointer callback_data);
// void gtk_cell_area_foreach (::GtkCellArea* area /*none*/, Gtk::CellCallback::cfunction_type callback /*none*/, void* callback_data);
void base::CellAreaBase::foreach (Gtk::CellCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, Gtk::CellCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_foreach;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(callback_wrap_)>::type> callback_wrap__sp (callback_wrap_);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (Gtk::CellCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_cell_area_foreach_alloc (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, const GdkRectangle* background_area /*none*/, GtkCellAllocCallback callback /*none*/, gpointer callback_data);
// void gtk_cell_area_foreach_alloc (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, const ::GdkRectangle* background_area /*none*/, Gtk::CellAllocCallback::cfunction_type callback /*none*/, void* callback_data);
void base::CellAreaBase::foreach_alloc (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref background_area, Gtk::CellAllocCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_foreach_alloc;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(callback_wrap_)>::type> callback_wrap__sp (callback_wrap_);
  auto background_area_to_c = gi::unwrap (background_area, gi::transfer_none);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (const ::GdkRectangle*) (background_area_to_c), (Gtk::CellAllocCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_cell_area_get_cell_allocation (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GtkCellRenderer* renderer /*none*/, const GdkRectangle* cell_area /*none*/, GdkRectangle* allocation /*none,out,ca*/);
// void gtk_cell_area_get_cell_allocation (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRenderer* renderer /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* allocation /*none,out,ca*/);
void base::CellAreaBase::get_cell_allocation (Gtk::CellAreaContext context, Gtk::Widget widget, Gtk::CellRenderer renderer, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle & allocation) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::GtkCellRenderer* renderer, const ::GdkRectangle* cell_area, ::GdkRectangle* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_cell_allocation;
  detail::allocate(allocation);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(allocation).gobj_()), "");
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (::GtkCellRenderer*) (renderer_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) (allocation).gobj_()));
}
Gdk::Rectangle base::CellAreaBase::get_cell_allocation (Gtk::CellAreaContext context, Gtk::Widget widget, Gtk::CellRenderer renderer, const Gdk::Rectangle_Ref cell_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, ::GtkCellRenderer* renderer, const ::GdkRectangle* cell_area, ::GdkRectangle* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_cell_allocation;
  Gdk::Rectangle allocation_c;
  auto allocation = &allocation_c;
  detail::allocate(*allocation);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*allocation).gobj_()), "");
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (::GtkCellRenderer*) (renderer_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) (allocation ? (::GdkRectangle*) (*allocation).gobj_() : nullptr));
  return allocation_c;
}

// GtkCellRenderer* /*none*/ gtk_cell_area_get_cell_at_position (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, int x, int y, GdkRectangle* alloc_area /*none,out,opt,ca*/);
// ::GtkCellRenderer* /*none*/ gtk_cell_area_get_cell_at_position (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, gint x, gint y, ::GdkRectangle* alloc_area /*none,out,opt,ca*/);
Gtk::CellRenderer base::CellAreaBase::get_cell_at_position (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, gint x, gint y, Gdk::Rectangle * alloc_area) noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint x, gint y, ::GdkRectangle* alloc_area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_cell_at_position;
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*alloc_area).gobj_()), "");
  auto y_to_c = y;
  auto x_to_c = x;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (gint) (x_to_c), (gint) (y_to_c), (::GdkRectangle*) (alloc_area ? (::GdkRectangle*) (*alloc_area).gobj_() : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
std::tuple<Gtk::CellRenderer, Gdk::Rectangle> base::CellAreaBase::get_cell_at_position (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, gint x, gint y) noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, gint x, gint y, ::GdkRectangle* alloc_area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_cell_at_position;
  Gdk::Rectangle alloc_area_c;
  auto alloc_area = &alloc_area_c;
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*alloc_area).gobj_()), "");
  auto y_to_c = y;
  auto x_to_c = x;
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (gint) (x_to_c), (gint) (y_to_c), (::GdkRectangle*) (alloc_area ? (::GdkRectangle*) (*alloc_area).gobj_() : nullptr));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = alloc_area_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const char* /*none*/ gtk_cell_area_get_current_path_string (GtkCellArea* area /*none*/);
// const char* /*none*/ gtk_cell_area_get_current_path_string (::GtkCellArea* area /*none*/);
gi::cstring_v base::CellAreaBase::get_current_path_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_current_path_string;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkCellEditable* /*none,nullable*/ gtk_cell_area_get_edit_widget (GtkCellArea* area /*none*/);
// ::GtkCellEditable* /*none,nullable*/ gtk_cell_area_get_edit_widget (::GtkCellArea* area /*none*/);
Gtk::CellEditable base::CellAreaBase::get_edit_widget () noexcept
{
  typedef ::GtkCellEditable* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_edit_widget;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_edited_cell (GtkCellArea* area /*none*/);
// ::GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_edited_cell (::GtkCellArea* area /*none*/);
Gtk::CellRenderer base::CellAreaBase::get_edited_cell () noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_edited_cell;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_focus_cell (GtkCellArea* area /*none*/);
// ::GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_focus_cell (::GtkCellArea* area /*none*/);
Gtk::CellRenderer base::CellAreaBase::get_focus_cell () noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_focus_cell;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_focus_from_sibling (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// ::GtkCellRenderer* /*none,nullable*/ gtk_cell_area_get_focus_from_sibling (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
Gtk::CellRenderer base::CellAreaBase::get_focus_from_sibling (Gtk::CellRenderer renderer) noexcept
{
  typedef ::GtkCellRenderer* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_focus_from_sibling;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GList* /*none*/ gtk_cell_area_get_focus_siblings (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// const ::GList* /*none*/ gtk_cell_area_get_focus_siblings (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_none_t> base::CellAreaBase::get_focus_siblings (Gtk::CellRenderer renderer) noexcept
{
  typedef const ::GList* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_focus_siblings;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
  return gi::wrap_to<gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// void gtk_cell_area_get_preferred_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_height, int* natural_height);
// void gtk_cell_area_get_preferred_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_height, gint* natural_height);
void base::CellAreaBase::get_preferred_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellAreaBase::get_preferred_height (Gtk::CellAreaContext context, Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  auto &&tmp_return_1 = minimum_height_o;
  auto &&tmp_return_2 = natural_height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_area_get_preferred_height_for_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void gtk_cell_area_get_preferred_height_for_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
void base::CellAreaBase::get_preferred_height_for_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint width, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::CellAreaBase::get_preferred_height_for_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  auto &&tmp_return_1 = minimum_height_o;
  auto &&tmp_return_2 = natural_height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_area_get_preferred_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_width, int* natural_width);
// void gtk_cell_area_get_preferred_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_width, gint* natural_width);
void base::CellAreaBase::get_preferred_width (Gtk::CellAreaContext context, Gtk::Widget widget, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellAreaBase::get_preferred_width (Gtk::CellAreaContext context, Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  auto &&tmp_return_1 = minimum_width_o;
  auto &&tmp_return_2 = natural_width_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_area_get_preferred_width_for_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void gtk_cell_area_get_preferred_width_for_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
void base::CellAreaBase::get_preferred_width_for_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint height, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::CellAreaBase::get_preferred_width_for_height (Gtk::CellAreaContext context, Gtk::Widget widget, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  auto &&tmp_return_1 = minimum_width_o;
  auto &&tmp_return_2 = natural_width_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GtkSizeRequestMode gtk_cell_area_get_request_mode (GtkCellArea* area /*none*/);
// ::GtkSizeRequestMode gtk_cell_area_get_request_mode (::GtkCellArea* area /*none*/);
Gtk::SizeRequestMode base::CellAreaBase::get_request_mode () noexcept
{
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_cell_area_has_renderer (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// gboolean gtk_cell_area_has_renderer (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
bool base::CellAreaBase::has_renderer (Gtk::CellRenderer renderer) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_has_renderer;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
  return _temp_ret;
}

// void gtk_cell_area_inner_cell_area (GtkCellArea* area /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, GdkRectangle* inner_area /*none,out,ca*/);
// void gtk_cell_area_inner_cell_area (::GtkCellArea* area /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* inner_area /*none,out,ca*/);
void base::CellAreaBase::inner_cell_area (Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle & inner_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GdkRectangle* inner_area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_inner_cell_area;
  detail::allocate(inner_area);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(inner_area).gobj_()), "");
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) ((::GdkRectangle*) (inner_area).gobj_()));
}
Gdk::Rectangle base::CellAreaBase::inner_cell_area (Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GdkRectangle* inner_area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_inner_cell_area;
  Gdk::Rectangle inner_area_c;
  auto inner_area = &inner_area_c;
  detail::allocate(*inner_area);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*inner_area).gobj_()), "");
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GdkRectangle*) (inner_area ? (::GdkRectangle*) (*inner_area).gobj_() : nullptr));
  return inner_area_c;
}

// gboolean gtk_cell_area_is_activatable (GtkCellArea* area /*none*/);
// gboolean gtk_cell_area_is_activatable (::GtkCellArea* area /*none*/);
bool base::CellAreaBase::is_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_is_activatable;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_area_is_focus_sibling (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, GtkCellRenderer* sibling /*none*/);
// gboolean gtk_cell_area_is_focus_sibling (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, ::GtkCellRenderer* sibling /*none*/);
bool base::CellAreaBase::is_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_is_focus_sibling;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkCellRenderer*) (sibling_to_c));
  return _temp_ret;
}

// void gtk_cell_area_remove (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void gtk_cell_area_remove (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
void base::CellAreaBase::remove (Gtk::CellRenderer renderer) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_remove;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void gtk_cell_area_remove_focus_sibling (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, GtkCellRenderer* sibling /*none*/);
// void gtk_cell_area_remove_focus_sibling (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, ::GtkCellRenderer* sibling /*none*/);
void base::CellAreaBase::remove_focus_sibling (Gtk::CellRenderer renderer, Gtk::CellRenderer sibling) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkCellRenderer* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_remove_focus_sibling;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkCellRenderer*) (sibling_to_c));
}

// void gtk_cell_area_request_renderer (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, GtkOrientation orientation, GtkWidget* widget /*none*/, int for_size, int* minimum_size, int* natural_size);
// void gtk_cell_area_request_renderer (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, ::GtkOrientation orientation, ::GtkWidget* widget /*none*/, gint for_size, gint* minimum_size, gint* natural_size);
void base::CellAreaBase::request_renderer (Gtk::CellRenderer renderer, Gtk::Orientation orientation, Gtk::Widget widget, gint for_size, gint * minimum_size, gint * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkOrientation orientation, ::GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_request_renderer;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto for_size_to_c = for_size;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto orientation_to_c = gi::unwrap (orientation);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkOrientation) (orientation_to_c), (::GtkWidget*) (widget_to_c), (gint) (for_size_to_c), (gint*) (minimum_size ? &minimum_size_o : nullptr), (gint*) (natural_size ? &natural_size_o : nullptr));
  if (natural_size) *natural_size = natural_size_o;
  if (minimum_size) *minimum_size = minimum_size_o;
}
std::tuple<gint, gint> base::CellAreaBase::request_renderer (Gtk::CellRenderer renderer, Gtk::Orientation orientation, Gtk::Widget widget, gint for_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, ::GtkOrientation orientation, ::GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_request_renderer;
  gint natural_size_o {};
  gint minimum_size_o {};
  auto for_size_to_c = for_size;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto orientation_to_c = gi::unwrap (orientation);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (::GtkOrientation) (orientation_to_c), (::GtkWidget*) (widget_to_c), (gint) (for_size_to_c), (gint*) (&minimum_size_o), (gint*) (&natural_size_o));
  auto &&tmp_return_1 = minimum_size_o;
  auto &&tmp_return_2 = natural_size_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_cell_area_set_focus_cell (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none,nullable*/);
// void gtk_cell_area_set_focus_cell (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none,nullable*/);
void base::CellAreaBase::set_focus_cell (Gtk::CellRenderer renderer) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_set_focus_cell;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}
void base::CellAreaBase::set_focus_cell () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_set_focus_cell;
  auto renderer_to_c = nullptr;
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void gtk_cell_area_snapshot (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GtkSnapshot* snapshot /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean paint_focus);
// void gtk_cell_area_snapshot (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  snapshot /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean paint_focus);
// SKIP; snapshot type  not supported

// void gtk_cell_area_stop_editing (GtkCellArea* area /*none*/, gboolean canceled);
// void gtk_cell_area_stop_editing (::GtkCellArea* area /*none*/, gboolean canceled);
void base::CellAreaBase::stop_editing (gboolean canceled) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellArea* area, gboolean canceled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_stop_editing;
  auto canceled_to_c = canceled;
  call_wrap_v ((::GtkCellArea*) (gobj_()), (gboolean) (canceled_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellarea_extra_def_impl.hpp>)
#include <gtk/cellarea_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellarea_extra_impl.hpp>)
#include <gtk/cellarea_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellAreaClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCellAreaClass *methods = (::GtkCellAreaClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, bool (*) (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, Gtk::CellRendererState flags, gboolean edit_only), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::activate_>;
  if (init_data.add) methods->add = (decltype (methods->add)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer renderer), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::add_>;
  if (init_data.apply_attributes) methods->apply_attributes = (decltype (methods->apply_attributes)) detail::method_wrapper<self, void (*) (Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::apply_attributes_>;
  if (init_data.copy_context) methods->copy_context = (decltype (methods->copy_context)) detail::method_wrapper<self, Gtk::CellAreaContext (*) (Gtk::CellAreaContext context), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::copy_context_>;
  if (init_data.create_context) methods->create_context = (decltype (methods->create_context)) detail::method_wrapper<self, Gtk::CellAreaContext (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::create_context_>;
  if (init_data.focus) methods->focus = (decltype (methods->focus)) detail::method_wrapper<self, bool (*) (Gtk::DirectionType direction), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::focus_>;
  if (init_data.foreach) methods->foreach = (decltype (methods->foreach)) detail::method_wrapper<self, void (*) (Gtk::CellCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, Gtk::internal::CellCallback_CB_Trait, detail::args_index<0, 1>>>, void  (Gtk::CellCallback::cfunction_type callback, void* callback_data)>::wrapper<&self::foreach_>;
  if (init_data.foreach_alloc) methods->foreach_alloc = (decltype (methods->foreach_alloc)) detail::method_wrapper<self, void (*) (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref background_area, Gtk::CellAllocCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gtk::internal::CellAllocCallback_CB_Trait, detail::args_index<4, 5>>>, void  (::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data)>::wrapper<&self::foreach_alloc_>;
  if (init_data.get_cell_property) methods->get_cell_property = (decltype (methods->get_cell_property)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer renderer, guint property_id, GObject::Value_Ref value, GObject::ParamSpec pspec), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_cell_property_>;
  if (init_data.get_preferred_height) methods->get_preferred_height = (decltype (methods->get_preferred_height)) detail::method_wrapper<self, void (*) (Gtk::CellAreaContext context, Gtk::Widget widget, gint & minimum_height, gint & natural_height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_height_>;
  if (init_data.get_preferred_height_for_width) methods->get_preferred_height_for_width = (decltype (methods->get_preferred_height_for_width)) detail::method_wrapper<self, void (*) (Gtk::CellAreaContext context, Gtk::Widget widget, gint width, gint & minimum_height, gint & natural_height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_height_for_width_>;
  if (init_data.get_preferred_width) methods->get_preferred_width = (decltype (methods->get_preferred_width)) detail::method_wrapper<self, void (*) (Gtk::CellAreaContext context, Gtk::Widget widget, gint & minimum_width, gint & natural_width), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_width_>;
  if (init_data.get_preferred_width_for_height) methods->get_preferred_width_for_height = (decltype (methods->get_preferred_width_for_height)) detail::method_wrapper<self, void (*) (Gtk::CellAreaContext context, Gtk::Widget widget, gint height, gint & minimum_width, gint & natural_width), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preferred_width_for_height_>;
  if (init_data.get_request_mode) methods->get_request_mode = (decltype (methods->get_request_mode)) detail::method_wrapper<self, Gtk::SizeRequestMode (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_request_mode_>;
  if (init_data.is_activatable) methods->is_activatable = (decltype (methods->is_activatable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_activatable_>;
  if (init_data.remove) methods->remove = (decltype (methods->remove)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer renderer), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::remove_>;
  if (init_data.set_cell_property) methods->set_cell_property = (decltype (methods->set_cell_property)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer renderer, guint property_id, const GObject::Value_Ref value, GObject::ParamSpec pspec), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::set_cell_property_>;
}

// gboolean CellArea::activate (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean edit_only);
// gboolean CellArea::activate (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean edit_only);
bool CellAreaClass::activate_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, Gtk::CellRendererState flags, gboolean edit_only) noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, ::GtkCellRendererState flags, gboolean edit_only);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  auto edit_only_to_c = edit_only;
  auto flags_to_c = gi::unwrap (flags);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (::GtkCellRendererState) (flags_to_c), (gboolean) (edit_only_to_c));
  return _temp_ret;
}

// void CellArea::add (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void CellArea::add (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
void CellAreaClass::add_ (Gtk::CellRenderer renderer) noexcept
{
  if (!get_struct_()->add) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void CellArea::apply_attributes (GtkCellArea* area /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
// void CellArea::apply_attributes (::GtkCellArea* area /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
void CellAreaClass::apply_attributes_ (Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded) noexcept
{
  if (!get_struct_()->apply_attributes) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->apply_attributes;
  auto is_expanded_to_c = is_expanded;
  auto is_expander_to_c = is_expander;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkTreeModel*) (tree_model_to_c), (::GtkTreeIter*) (iter_to_c), (gboolean) (is_expander_to_c), (gboolean) (is_expanded_to_c));
}

// GtkCellAreaContext* /*full*/ CellArea::copy_context (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/);
// ::GtkCellAreaContext* /*full*/ CellArea::copy_context (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/);
Gtk::CellAreaContext CellAreaClass::copy_context_ (Gtk::CellAreaContext context) noexcept
{
  if (!get_struct_()->copy_context) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkCellAreaContext* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkCellAreaContext* /*full*/ CellArea::create_context (GtkCellArea* area /*none*/);
// ::GtkCellAreaContext* /*full*/ CellArea::create_context (::GtkCellArea* area /*none*/);
Gtk::CellAreaContext CellAreaClass::create_context_ () noexcept
{
  if (!get_struct_()->create_context) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkCellAreaContext* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_context;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int CellArea::event (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GdkEvent* event /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gint CellArea::event (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  event /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// gboolean CellArea::focus (GtkCellArea* area /*none*/, GtkDirectionType direction);
// gboolean CellArea::focus (::GtkCellArea* area /*none*/, ::GtkDirectionType direction);
bool CellAreaClass::focus_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->focus) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// void CellArea::foreach (GtkCellArea* area /*none*/, GtkCellCallback callback /*none*/, gpointer callback_data);
// void CellArea::foreach (::GtkCellArea* area /*none*/, Gtk::CellCallback::cfunction_type callback /*none*/, void* callback_data);
void CellAreaClass::foreach_ (Gtk::CellCallback callback) noexcept
{
  if (!get_struct_()->foreach) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, Gtk::CellCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->foreach;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(callback_wrap_)>::type> callback_wrap__sp (callback_wrap_);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (Gtk::CellCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void CellArea::foreach_alloc (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* cell_area /*none*/, const GdkRectangle* background_area /*none*/, GtkCellAllocCallback callback /*none*/, gpointer callback_data);
// void CellArea::foreach_alloc (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* cell_area /*none*/, const ::GdkRectangle* background_area /*none*/, Gtk::CellAllocCallback::cfunction_type callback /*none*/, void* callback_data);
void CellAreaClass::foreach_alloc_ (Gtk::CellAreaContext context, Gtk::Widget widget, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref background_area, Gtk::CellAllocCallback callback) noexcept
{
  if (!get_struct_()->foreach_alloc) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, const ::GdkRectangle* cell_area, const ::GdkRectangle* background_area, Gtk::CellAllocCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->foreach_alloc;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(callback_wrap_)>::type> callback_wrap__sp (callback_wrap_);
  auto background_area_to_c = gi::unwrap (background_area, gi::transfer_none);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (const ::GdkRectangle*) (cell_area_to_c), (const ::GdkRectangle*) (background_area_to_c), (Gtk::CellAllocCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void CellArea::get_cell_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, guint property_id, GValue* value /*none*/, GParamSpec* pspec /*none*/);
// void CellArea::get_cell_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, guint property_id, ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
void CellAreaClass::get_cell_property_ (Gtk::CellRenderer renderer, guint property_id, GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept
{
  if (!get_struct_()->get_cell_property) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, ::GValue* value, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_cell_property;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto property_id_to_c = property_id;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (guint) (property_id_to_c), (::GValue*) (value_to_c), (::GParamSpec*) (pspec_to_c));
}

// void CellArea::get_preferred_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_height, int* natural_height);
// void CellArea::get_preferred_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_height, gint* natural_height);
void CellAreaClass::get_preferred_height_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint & minimum_height, gint & natural_height) noexcept
{
  if (!get_struct_()->get_preferred_height) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  natural_height = natural_height_o;
  minimum_height = minimum_height_o;
}

// void CellArea::get_preferred_height_for_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void CellArea::get_preferred_height_for_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
void CellAreaClass::get_preferred_height_for_width_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint width, gint & minimum_height, gint & natural_height) noexcept
{
  if (!get_struct_()->get_preferred_height_for_width) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  natural_height = natural_height_o;
  minimum_height = minimum_height_o;
}

// void CellArea::get_preferred_width (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int* minimum_width, int* natural_width);
// void CellArea::get_preferred_width (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_width, gint* natural_width);
void CellAreaClass::get_preferred_width_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint & minimum_width, gint & natural_width) noexcept
{
  if (!get_struct_()->get_preferred_width) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  natural_width = natural_width_o;
  minimum_width = minimum_width_o;
}

// void CellArea::get_preferred_width_for_height (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void CellArea::get_preferred_width_for_height (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
void CellAreaClass::get_preferred_width_for_height_ (Gtk::CellAreaContext context, Gtk::Widget widget, gint height, gint & minimum_width, gint & natural_width) noexcept
{
  if (!get_struct_()->get_preferred_width_for_height) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context, ::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellAreaContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  natural_width = natural_width_o;
  minimum_width = minimum_width_o;
}

// GtkSizeRequestMode CellArea::get_request_mode (GtkCellArea* area /*none*/);
// ::GtkSizeRequestMode CellArea::get_request_mode (::GtkCellArea* area /*none*/);
Gtk::SizeRequestMode CellAreaClass::get_request_mode_ () noexcept
{
  if (!get_struct_()->get_request_mode) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean CellArea::is_activatable (GtkCellArea* area /*none*/);
// gboolean CellArea::is_activatable (::GtkCellArea* area /*none*/);
bool CellAreaClass::is_activatable_ () noexcept
{
  if (!get_struct_()->is_activatable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_activatable;
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (gobj_()));
  return _temp_ret;
}

// void CellArea::remove (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/);
// void CellArea::remove (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/);
void CellAreaClass::remove_ (Gtk::CellRenderer renderer) noexcept
{
  if (!get_struct_()->remove) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c));
}

// void CellArea::set_cell_property (GtkCellArea* area /*none*/, GtkCellRenderer* renderer /*none*/, guint property_id, const GValue* value /*none*/, GParamSpec* pspec /*none*/);
// void CellArea::set_cell_property (::GtkCellArea* area /*none*/, ::GtkCellRenderer* renderer /*none*/, guint property_id, const ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
void CellAreaClass::set_cell_property_ (Gtk::CellRenderer renderer, guint property_id, const GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept
{
  if (!get_struct_()->set_cell_property) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellArea* area, ::GtkCellRenderer* renderer, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_cell_property;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto property_id_to_c = property_id;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellArea*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (guint) (property_id_to_c), (const ::GValue*) (value_to_c), (::GParamSpec*) (pspec_to_c));
}

// void CellArea::snapshot (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/, GtkWidget* widget /*none*/, GtkSnapshot* snapshot /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags, gboolean paint_focus);
// void CellArea::snapshot (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/, ::GtkWidget* widget /*none*/,  snapshot /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags, gboolean paint_focus);
// SKIP; snapshot type  not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
