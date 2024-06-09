// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERTEXT_IMPL_HPP_
#define _GI_GTK_CELLRENDERERTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCellRenderer* /*none*/ gtk_cell_renderer_text_new ();
// ::GtkCellRendererText* /*none*/ gtk_cell_renderer_text_new ();
Gtk::CellRendererText base::CellRendererTextBase::new_ () noexcept
{
  typedef ::GtkCellRendererText* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_text_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_cell_renderer_text_set_fixed_height_from_font (GtkCellRendererText* renderer /*none*/, int number_of_rows);
// void gtk_cell_renderer_text_set_fixed_height_from_font (::GtkCellRendererText* renderer /*none*/, gint number_of_rows);
void base::CellRendererTextBase::set_fixed_height_from_font (gint number_of_rows) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRendererText* renderer, gint number_of_rows);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_renderer_text_set_fixed_height_from_font;
  auto number_of_rows_to_c = number_of_rows;
  call_wrap_v ((::GtkCellRendererText*) (gobj_()), (gint) (number_of_rows_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertext_extra_def_impl.hpp>)
#include <gtk/cellrenderertext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertext_extra_impl.hpp>)
#include <gtk/cellrenderertext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererTextClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCellRendererTextClass *methods = (::GtkCellRendererTextClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.edited) methods->edited = (decltype (methods->edited)) detail::method_wrapper<self, void (*) (const gi::cstring_v path, const gi::cstring_v new_text), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::edited_>;
}

// void CellRendererText::edited (GtkCellRendererText* cell_renderer_text /*none*/, const char* path /*none*/, const char* new_text /*none*/);
// void CellRendererText::edited (::GtkCellRendererText* cell_renderer_text /*none*/, const char* path /*none*/, const char* new_text /*none*/);
void CellRendererTextClass::edited_ (const gi::cstring_v path, const gi::cstring_v new_text) noexcept
{
  if (!get_struct_()->edited) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellRendererText* cell_renderer_text, const char* path, const char* new_text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->edited;
  auto new_text_to_c = gi::unwrap (new_text, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkCellRendererText*) (gobj_()), (const char*) (path_to_c), (const char*) (new_text_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
