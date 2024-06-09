// AUTO-GENERATED

#ifndef _GI_GTK_LABEL_IMPL_HPP_
#define _GI_GTK_LABEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_label_new (const char* str /*none,nullable*/);
// ::GtkLabel* /*none*/ gtk_label_new (const char* str /*none,nullable*/);
Gtk::Label base::LabelBase::new_ (const gi::cstring_v str) noexcept
{
  typedef ::GtkLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_new;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Label base::LabelBase::new_ () noexcept
{
  typedef ::GtkLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_new;
  auto str_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_label_new_with_mnemonic (const char* str /*none,nullable*/);
// ::GtkLabel* /*none*/ gtk_label_new_with_mnemonic (const char* str /*none,nullable*/);
Gtk::Label base::LabelBase::new_with_mnemonic (const gi::cstring_v str) noexcept
{
  typedef ::GtkLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_new_with_mnemonic;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Label base::LabelBase::new_with_mnemonic () noexcept
{
  typedef ::GtkLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_new_with_mnemonic;
  auto str_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoAttrList* /*none,nullable*/ gtk_label_get_attributes (GtkLabel* self /*none*/);
// ::PangoAttrList* /*none,nullable*/ gtk_label_get_attributes (::GtkLabel* self /*none*/);
Pango::AttrList_Ref base::LabelBase::get_attributes () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_label_get_current_uri (GtkLabel* self /*none*/);
// const char* /*none,nullable*/ gtk_label_get_current_uri (::GtkLabel* self /*none*/);
gi::cstring_v base::LabelBase::get_current_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_current_uri;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoEllipsizeMode gtk_label_get_ellipsize (GtkLabel* self /*none*/);
// ::PangoEllipsizeMode gtk_label_get_ellipsize (::GtkLabel* self /*none*/);
Pango::EllipsizeMode base::LabelBase::get_ellipsize () noexcept
{
  typedef ::PangoEllipsizeMode (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_ellipsize;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GMenuModel* /*none,nullable*/ gtk_label_get_extra_menu (GtkLabel* self /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_label_get_extra_menu (::GtkLabel* self /*none*/);
Gio::MenuModel base::LabelBase::get_extra_menu () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_extra_menu;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkJustification gtk_label_get_justify (GtkLabel* self /*none*/);
// ::GtkJustification gtk_label_get_justify (::GtkLabel* self /*none*/);
Gtk::Justification base::LabelBase::get_justify () noexcept
{
  typedef ::GtkJustification (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_justify;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none*/ gtk_label_get_label (GtkLabel* self /*none*/);
// const char* /*none*/ gtk_label_get_label (::GtkLabel* self /*none*/);
gi::cstring_v base::LabelBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_label;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoLayout* /*none*/ gtk_label_get_layout (GtkLabel* self /*none*/);
// ::PangoLayout* /*none*/ gtk_label_get_layout (::GtkLabel* self /*none*/);
Pango::Layout base::LabelBase::get_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_layout;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_label_get_layout_offsets (GtkLabel* self /*none*/, int* x, int* y);
// void gtk_label_get_layout_offsets (::GtkLabel* self /*none*/, gint* x, gint* y);
void base::LabelBase::get_layout_offsets (gint * x, gint * y) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint> base::LabelBase::get_layout_offsets () noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  auto &&tmp_return_1 = x_o;
  auto &&tmp_return_2 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// int gtk_label_get_lines (GtkLabel* self /*none*/);
// gint gtk_label_get_lines (::GtkLabel* self /*none*/);
gint base::LabelBase::get_lines () noexcept
{
  typedef gint (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_lines;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// int gtk_label_get_max_width_chars (GtkLabel* self /*none*/);
// gint gtk_label_get_max_width_chars (::GtkLabel* self /*none*/);
gint base::LabelBase::get_max_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_max_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// guint gtk_label_get_mnemonic_keyval (GtkLabel* self /*none*/);
// guint gtk_label_get_mnemonic_keyval (::GtkLabel* self /*none*/);
guint base::LabelBase::get_mnemonic_keyval () noexcept
{
  typedef guint (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_mnemonic_keyval;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_label_get_mnemonic_widget (GtkLabel* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_label_get_mnemonic_widget (::GtkLabel* self /*none*/);
Gtk::Widget base::LabelBase::get_mnemonic_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_mnemonic_widget;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkNaturalWrapMode gtk_label_get_natural_wrap_mode (GtkLabel* self /*none*/);
// ::GtkNaturalWrapMode gtk_label_get_natural_wrap_mode (::GtkLabel* self /*none*/);
Gtk::NaturalWrapMode base::LabelBase::get_natural_wrap_mode () noexcept
{
  typedef ::GtkNaturalWrapMode (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_natural_wrap_mode;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_label_get_selectable (GtkLabel* self /*none*/);
// gboolean gtk_label_get_selectable (::GtkLabel* self /*none*/);
bool base::LabelBase::get_selectable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_selectable;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_label_get_selection_bounds (GtkLabel* self /*none*/, int* start, int* end);
// gboolean gtk_label_get_selection_bounds (::GtkLabel* self /*none*/, gint* start, gint* end);
bool base::LabelBase::get_selection_bounds (gint * start, gint * end) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* self, gint* start, gint* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_selection_bounds;
  gint end_o {};
  gint start_o {};
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()), (gint*) (start ? &start_o : nullptr), (gint*) (end ? &end_o : nullptr));
  if (end) *end = end_o;
  if (start) *start = start_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::LabelBase::get_selection_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* self, gint* start, gint* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_selection_bounds;
  gint end_o {};
  gint start_o {};
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()), (gint*) (&start_o), (gint*) (&end_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = start_o;
  auto &&tmp_return_3 = end_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gtk_label_get_single_line_mode (GtkLabel* self /*none*/);
// gboolean gtk_label_get_single_line_mode (::GtkLabel* self /*none*/);
bool base::LabelBase::get_single_line_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_single_line_mode;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// PangoTabArray* /*full,nullable*/ gtk_label_get_tabs (GtkLabel* self /*none*/);
// ::PangoTabArray* /*full,nullable*/ gtk_label_get_tabs (::GtkLabel* self /*none*/);
Pango::TabArray base::LabelBase::get_tabs () noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_tabs;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_label_get_text (GtkLabel* self /*none*/);
// const char* /*none*/ gtk_label_get_text (::GtkLabel* self /*none*/);
gi::cstring_v base::LabelBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_text;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_label_get_use_markup (GtkLabel* self /*none*/);
// gboolean gtk_label_get_use_markup (::GtkLabel* self /*none*/);
bool base::LabelBase::get_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_use_markup;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_label_get_use_underline (GtkLabel* self /*none*/);
// gboolean gtk_label_get_use_underline (::GtkLabel* self /*none*/);
bool base::LabelBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// int gtk_label_get_width_chars (GtkLabel* self /*none*/);
// gint gtk_label_get_width_chars (::GtkLabel* self /*none*/);
gint base::LabelBase::get_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_label_get_wrap (GtkLabel* self /*none*/);
// gboolean gtk_label_get_wrap (::GtkLabel* self /*none*/);
bool base::LabelBase::get_wrap () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_wrap;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// PangoWrapMode gtk_label_get_wrap_mode (GtkLabel* self /*none*/);
// ::PangoWrapMode gtk_label_get_wrap_mode (::GtkLabel* self /*none*/);
Pango::WrapMode base::LabelBase::get_wrap_mode () noexcept
{
  typedef ::PangoWrapMode (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_wrap_mode;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// float gtk_label_get_xalign (GtkLabel* self /*none*/);
// gfloat gtk_label_get_xalign (::GtkLabel* self /*none*/);
gfloat base::LabelBase::get_xalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_xalign;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// float gtk_label_get_yalign (GtkLabel* self /*none*/);
// gfloat gtk_label_get_yalign (::GtkLabel* self /*none*/);
gfloat base::LabelBase::get_yalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_get_yalign;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// void gtk_label_select_region (GtkLabel* self /*none*/, int start_offset, int end_offset);
// void gtk_label_select_region (::GtkLabel* self /*none*/, gint start_offset, gint end_offset);
void base::LabelBase::select_region (gint start_offset, gint end_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gint start_offset, gint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_select_region;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c));
}

// void gtk_label_set_attributes (GtkLabel* self /*none*/, PangoAttrList* attrs /*none,nullable*/);
// void gtk_label_set_attributes (::GtkLabel* self /*none*/, ::PangoAttrList* attrs /*none,nullable*/);
void base::LabelBase::set_attributes (Pango::AttrList_Ref attrs) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_attributes;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}
void base::LabelBase::set_attributes () noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_attributes;
  auto attrs_to_c = nullptr;
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}

// void gtk_label_set_ellipsize (GtkLabel* self /*none*/, PangoEllipsizeMode mode);
// void gtk_label_set_ellipsize (::GtkLabel* self /*none*/, ::PangoEllipsizeMode mode);
void base::LabelBase::set_ellipsize (Pango::EllipsizeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::PangoEllipsizeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_ellipsize;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoEllipsizeMode) (mode_to_c));
}

// void gtk_label_set_extra_menu (GtkLabel* self /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_label_set_extra_menu (::GtkLabel* self /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::LabelBase::set_extra_menu (Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_extra_menu;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GMenuModel*) (model_to_c));
}
void base::LabelBase::set_extra_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_extra_menu;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GMenuModel*) (model_to_c));
}

// void gtk_label_set_justify (GtkLabel* self /*none*/, GtkJustification jtype);
// void gtk_label_set_justify (::GtkLabel* self /*none*/, ::GtkJustification jtype);
void base::LabelBase::set_justify (Gtk::Justification jtype) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::GtkJustification jtype);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_justify;
  auto jtype_to_c = gi::unwrap (jtype);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkJustification) (jtype_to_c));
}

// void gtk_label_set_label (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_label (::GtkLabel* self /*none*/, const char* str /*none*/);
void base::LabelBase::set_label (const gi::cstring_v str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_label;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_lines (GtkLabel* self /*none*/, int lines);
// void gtk_label_set_lines (::GtkLabel* self /*none*/, gint lines);
void base::LabelBase::set_lines (gint lines) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gint lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_lines;
  auto lines_to_c = lines;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint) (lines_to_c));
}

// void gtk_label_set_markup (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_markup (::GtkLabel* self /*none*/, const char* str /*none*/);
void base::LabelBase::set_markup (const gi::cstring_v str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_markup;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_markup_with_mnemonic (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_markup_with_mnemonic (::GtkLabel* self /*none*/, const char* str /*none*/);
void base::LabelBase::set_markup_with_mnemonic (const gi::cstring_v str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_markup_with_mnemonic;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_max_width_chars (GtkLabel* self /*none*/, int n_chars);
// void gtk_label_set_max_width_chars (::GtkLabel* self /*none*/, gint n_chars);
void base::LabelBase::set_max_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_max_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint) (n_chars_to_c));
}

// void gtk_label_set_mnemonic_widget (GtkLabel* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_label_set_mnemonic_widget (::GtkLabel* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::LabelBase::set_mnemonic_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_mnemonic_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::LabelBase::set_mnemonic_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_mnemonic_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_label_set_natural_wrap_mode (GtkLabel* self /*none*/, GtkNaturalWrapMode wrap_mode);
// void gtk_label_set_natural_wrap_mode (::GtkLabel* self /*none*/, ::GtkNaturalWrapMode wrap_mode);
void base::LabelBase::set_natural_wrap_mode (Gtk::NaturalWrapMode wrap_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::GtkNaturalWrapMode wrap_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_natural_wrap_mode;
  auto wrap_mode_to_c = gi::unwrap (wrap_mode);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkNaturalWrapMode) (wrap_mode_to_c));
}

// void gtk_label_set_selectable (GtkLabel* self /*none*/, gboolean setting);
// void gtk_label_set_selectable (::GtkLabel* self /*none*/, gboolean setting);
void base::LabelBase::set_selectable (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_selectable;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_label_set_single_line_mode (GtkLabel* self /*none*/, gboolean single_line_mode);
// void gtk_label_set_single_line_mode (::GtkLabel* self /*none*/, gboolean single_line_mode);
void base::LabelBase::set_single_line_mode (gboolean single_line_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gboolean single_line_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_single_line_mode;
  auto single_line_mode_to_c = single_line_mode;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (single_line_mode_to_c));
}

// void gtk_label_set_tabs (GtkLabel* self /*none*/, PangoTabArray* tabs /*none,nullable*/);
// void gtk_label_set_tabs (::GtkLabel* self /*none*/, ::PangoTabArray* tabs /*none,nullable*/);
void base::LabelBase::set_tabs (Pango::TabArray_Ref tabs) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_tabs;
  auto tabs_to_c = gi::unwrap (tabs, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}
void base::LabelBase::set_tabs () noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_tabs;
  auto tabs_to_c = nullptr;
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}

// void gtk_label_set_text (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_text (::GtkLabel* self /*none*/, const char* str /*none*/);
void base::LabelBase::set_text (const gi::cstring_v str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_text;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_text_with_mnemonic (GtkLabel* self /*none*/, const char* str /*none*/);
// void gtk_label_set_text_with_mnemonic (::GtkLabel* self /*none*/, const char* str /*none*/);
void base::LabelBase::set_text_with_mnemonic (const gi::cstring_v str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_text_with_mnemonic;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_use_markup (GtkLabel* self /*none*/, gboolean setting);
// void gtk_label_set_use_markup (::GtkLabel* self /*none*/, gboolean setting);
void base::LabelBase::set_use_markup (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_use_markup;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_label_set_use_underline (GtkLabel* self /*none*/, gboolean setting);
// void gtk_label_set_use_underline (::GtkLabel* self /*none*/, gboolean setting);
void base::LabelBase::set_use_underline (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_use_underline;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_label_set_width_chars (GtkLabel* self /*none*/, int n_chars);
// void gtk_label_set_width_chars (::GtkLabel* self /*none*/, gint n_chars);
void base::LabelBase::set_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint) (n_chars_to_c));
}

// void gtk_label_set_wrap (GtkLabel* self /*none*/, gboolean wrap);
// void gtk_label_set_wrap (::GtkLabel* self /*none*/, gboolean wrap);
void base::LabelBase::set_wrap (gboolean wrap) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gboolean wrap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_wrap;
  auto wrap_to_c = wrap;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (wrap_to_c));
}

// void gtk_label_set_wrap_mode (GtkLabel* self /*none*/, PangoWrapMode wrap_mode);
// void gtk_label_set_wrap_mode (::GtkLabel* self /*none*/, ::PangoWrapMode wrap_mode);
void base::LabelBase::set_wrap_mode (Pango::WrapMode wrap_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, ::PangoWrapMode wrap_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_wrap_mode;
  auto wrap_mode_to_c = gi::unwrap (wrap_mode);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoWrapMode) (wrap_mode_to_c));
}

// void gtk_label_set_xalign (GtkLabel* self /*none*/, float xalign);
// void gtk_label_set_xalign (::GtkLabel* self /*none*/, gfloat xalign);
void base::LabelBase::set_xalign (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_xalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_label_set_yalign (GtkLabel* self /*none*/, float yalign);
// void gtk_label_set_yalign (::GtkLabel* self /*none*/, gfloat yalign);
void base::LabelBase::set_yalign (gfloat yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* self, gfloat yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_label_set_yalign;
  auto yalign_to_c = yalign;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gfloat) (yalign_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/label_extra_def_impl.hpp>)
#include <gtk/label_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/label_extra_impl.hpp>)
#include <gtk/label_extra_impl.hpp>
#endif
#endif

#endif
