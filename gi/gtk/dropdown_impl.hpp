// AUTO-GENERATED

#ifndef _GI_GTK_DROPDOWN_IMPL_HPP_
#define _GI_GTK_DROPDOWN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_drop_down_new (GListModel* model /*full,nullable*/, GtkExpression* expression /*full,nullable*/);
// ::GtkDropDown* /*none*/ gtk_drop_down_new (::GListModel* model /*full,nullable*/,  expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkWidget* /*none*/ gtk_drop_down_new_from_strings (const char* const* strings /*none*/);
// ::GtkDropDown* /*none*/ gtk_drop_down_new_from_strings (const char** strings /*none*/);
Gtk::DropDown base::DropDownBase::new_from_strings (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> strings) noexcept
{
  typedef ::GtkDropDown* (*call_wrap_t) (const char** strings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drop_down_new_from_strings;
  auto strings_w = unwrap (std::move(strings), gi::transfer_none);
  auto strings_to_c = strings_w;
  auto _temp_ret = call_wrap_v ((const char**) (strings_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_drop_down_get_enable_search (GtkDropDown* self /*none*/);
// gboolean gtk_drop_down_get_enable_search (::GtkDropDown* self /*none*/);
bool base::DropDownBase::get_enable_search () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_enable_search;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return _temp_ret;
}

// GtkExpression* /*none,nullable*/ gtk_drop_down_get_expression (GtkDropDown* self /*none*/);
//  /*none,nullable*/ gtk_drop_down_get_expression (::GtkDropDown* self /*none*/);
// SKIP;  type  not supported

// GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_factory (GtkDropDown* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_factory (::GtkDropDown* self /*none*/);
Gtk::ListItemFactory base::DropDownBase::get_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_factory;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_header_factory (GtkDropDown* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_header_factory (::GtkDropDown* self /*none*/);
Gtk::ListItemFactory base::DropDownBase::get_header_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_header_factory;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_list_factory (GtkDropDown* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_drop_down_get_list_factory (::GtkDropDown* self /*none*/);
Gtk::ListItemFactory base::DropDownBase::get_list_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_list_factory;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*none,nullable*/ gtk_drop_down_get_model (GtkDropDown* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_drop_down_get_model (::GtkDropDown* self /*none*/);
Gio::ListModel base::DropDownBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_model;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkStringFilterMatchMode gtk_drop_down_get_search_match_mode (GtkDropDown* self /*none*/);
// ::GtkStringFilterMatchMode gtk_drop_down_get_search_match_mode (::GtkDropDown* self /*none*/);
Gtk::StringFilterMatchMode base::DropDownBase::get_search_match_mode () noexcept
{
  typedef ::GtkStringFilterMatchMode (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_search_match_mode;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint gtk_drop_down_get_selected (GtkDropDown* self /*none*/);
// guint gtk_drop_down_get_selected (::GtkDropDown* self /*none*/);
guint base::DropDownBase::get_selected () noexcept
{
  typedef guint (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_selected;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return _temp_ret;
}

// gpointer /*none,nullable*/ gtk_drop_down_get_selected_item (GtkDropDown* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_drop_down_get_selected_item (::GtkDropDown* self /*none*/);
GObject::Object base::DropDownBase::get_selected_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_selected_item;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_drop_down_get_show_arrow (GtkDropDown* self /*none*/);
// gboolean gtk_drop_down_get_show_arrow (::GtkDropDown* self /*none*/);
bool base::DropDownBase::get_show_arrow () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkDropDown* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_get_show_arrow;
  auto _temp_ret = call_wrap_v ((::GtkDropDown*) (gobj_()));
  return _temp_ret;
}

// void gtk_drop_down_set_enable_search (GtkDropDown* self /*none*/, gboolean enable_search);
// void gtk_drop_down_set_enable_search (::GtkDropDown* self /*none*/, gboolean enable_search);
void base::DropDownBase::set_enable_search (gboolean enable_search) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, gboolean enable_search);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_enable_search;
  auto enable_search_to_c = enable_search;
  call_wrap_v ((::GtkDropDown*) (gobj_()), (gboolean) (enable_search_to_c));
}

// void gtk_drop_down_set_expression (GtkDropDown* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_drop_down_set_expression (::GtkDropDown* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_drop_down_set_factory (GtkDropDown* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_drop_down_set_factory (::GtkDropDown* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::DropDownBase::set_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::DropDownBase::set_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_drop_down_set_header_factory (GtkDropDown* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_drop_down_set_header_factory (::GtkDropDown* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::DropDownBase::set_header_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_header_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::DropDownBase::set_header_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_header_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_drop_down_set_list_factory (GtkDropDown* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_drop_down_set_list_factory (::GtkDropDown* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::DropDownBase::set_list_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_list_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::DropDownBase::set_list_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_list_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_drop_down_set_model (GtkDropDown* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_drop_down_set_model (::GtkDropDown* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::DropDownBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::DropDownBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GListModel*) (model_to_c));
}

// void gtk_drop_down_set_search_match_mode (GtkDropDown* self /*none*/, GtkStringFilterMatchMode search_match_mode);
// void gtk_drop_down_set_search_match_mode (::GtkDropDown* self /*none*/, ::GtkStringFilterMatchMode search_match_mode);
void base::DropDownBase::set_search_match_mode (Gtk::StringFilterMatchMode search_match_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, ::GtkStringFilterMatchMode search_match_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_search_match_mode;
  auto search_match_mode_to_c = gi::unwrap (search_match_mode);
  call_wrap_v ((::GtkDropDown*) (gobj_()), (::GtkStringFilterMatchMode) (search_match_mode_to_c));
}

// void gtk_drop_down_set_selected (GtkDropDown* self /*none*/, guint position);
// void gtk_drop_down_set_selected (::GtkDropDown* self /*none*/, guint position);
void base::DropDownBase::set_selected (guint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_selected;
  auto position_to_c = position;
  call_wrap_v ((::GtkDropDown*) (gobj_()), (guint) (position_to_c));
}

// void gtk_drop_down_set_show_arrow (GtkDropDown* self /*none*/, gboolean show_arrow);
// void gtk_drop_down_set_show_arrow (::GtkDropDown* self /*none*/, gboolean show_arrow);
void base::DropDownBase::set_show_arrow (gboolean show_arrow) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropDown* self, gboolean show_arrow);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_down_set_show_arrow;
  auto show_arrow_to_c = show_arrow;
  call_wrap_v ((::GtkDropDown*) (gobj_()), (gboolean) (show_arrow_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dropdown_extra_def_impl.hpp>)
#include <gtk/dropdown_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dropdown_extra_impl.hpp>)
#include <gtk/dropdown_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void DropDownClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkDropDownClass *methods = (::GtkDropDownClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
