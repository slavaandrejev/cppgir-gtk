// AUTO-GENERATED

#ifndef _GI_GTK_PRINTOPERATIONPREVIEW_IMPL_HPP_
#define _GI_GTK_PRINTOPERATIONPREVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_print_operation_preview_end_preview (GtkPrintOperationPreview* preview /*none*/);
// void gtk_print_operation_preview_end_preview (::GtkPrintOperationPreview* preview /*none*/);
void base::PrintOperationPreviewBase::end_preview () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_operation_preview_end_preview;
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()));
}

// gboolean gtk_print_operation_preview_is_selected (GtkPrintOperationPreview* preview /*none*/, int page_nr);
// gboolean gtk_print_operation_preview_is_selected (::GtkPrintOperationPreview* preview /*none*/, gint page_nr);
bool base::PrintOperationPreviewBase::is_selected (gint page_nr) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintOperationPreview* preview, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_operation_preview_is_selected;
  auto page_nr_to_c = page_nr;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (gint) (page_nr_to_c));
  return _temp_ret;
}

// void gtk_print_operation_preview_render_page (GtkPrintOperationPreview* preview /*none*/, int page_nr);
// void gtk_print_operation_preview_render_page (::GtkPrintOperationPreview* preview /*none*/, gint page_nr);
void base::PrintOperationPreviewBase::render_page (gint page_nr) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_operation_preview_render_page;
  auto page_nr_to_c = page_nr;
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (gint) (page_nr_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printoperationpreview_extra_def_impl.hpp>)
#include <gtk/printoperationpreview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printoperationpreview_extra_impl.hpp>)
#include <gtk/printoperationpreview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PrintOperationPreviewIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkPrintOperationPreviewIface *methods = (::GtkPrintOperationPreviewIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.end_preview) methods->end_preview = (decltype (methods->end_preview)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::end_preview_>;
  if (init_data.got_page_size) methods->got_page_size = (decltype (methods->got_page_size)) detail::method_wrapper<self, void (*) (Gtk::PrintContext context, Gtk::PageSetup page_setup), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::got_page_size_>;
  if (init_data.is_selected) methods->is_selected = (decltype (methods->is_selected)) detail::method_wrapper<self, bool (*) (gint page_nr), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::is_selected_>;
  if (init_data.ready) methods->ready = (decltype (methods->ready)) detail::method_wrapper<self, void (*) (Gtk::PrintContext context), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::ready_>;
  if (init_data.render_page) methods->render_page = (decltype (methods->render_page)) detail::method_wrapper<self, void (*) (gint page_nr), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::render_page_>;
}

// void PrintOperationPreview::end_preview (GtkPrintOperationPreview* preview /*none*/);
// void PrintOperationPreview::end_preview (::GtkPrintOperationPreview* preview /*none*/);
void PrintOperationPreviewIfaceClassImpl::end_preview_ () noexcept
{
  if (!get_struct_()->end_preview) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->end_preview;
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()));
}

// void PrintOperationPreview::got_page_size (GtkPrintOperationPreview* preview /*none*/, GtkPrintContext* context /*none*/, GtkPageSetup* page_setup /*none*/);
// void PrintOperationPreview::got_page_size (::GtkPrintOperationPreview* preview /*none*/, ::GtkPrintContext* context /*none*/, ::GtkPageSetup* page_setup /*none*/);
void PrintOperationPreviewIfaceClassImpl::got_page_size_ (Gtk::PrintContext context, Gtk::PageSetup page_setup) noexcept
{
  if (!get_struct_()->got_page_size) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkPageSetup* page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->got_page_size;
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (::GtkPrintContext*) (context_to_c), (::GtkPageSetup*) (page_setup_to_c));
}

// gboolean PrintOperationPreview::is_selected (GtkPrintOperationPreview* preview /*none*/, int page_nr);
// gboolean PrintOperationPreview::is_selected (::GtkPrintOperationPreview* preview /*none*/, gint page_nr);
bool PrintOperationPreviewIfaceClassImpl::is_selected_ (gint page_nr) noexcept
{
  if (!get_struct_()->is_selected) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkPrintOperationPreview* preview, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_selected;
  auto page_nr_to_c = page_nr;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (gint) (page_nr_to_c));
  return _temp_ret;
}

// void PrintOperationPreview::ready (GtkPrintOperationPreview* preview /*none*/, GtkPrintContext* context /*none*/);
// void PrintOperationPreview::ready (::GtkPrintOperationPreview* preview /*none*/, ::GtkPrintContext* context /*none*/);
void PrintOperationPreviewIfaceClassImpl::ready_ (Gtk::PrintContext context) noexcept
{
  if (!get_struct_()->ready) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ready;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (::GtkPrintContext*) (context_to_c));
}

// void PrintOperationPreview::render_page (GtkPrintOperationPreview* preview /*none*/, int page_nr);
// void PrintOperationPreview::render_page (::GtkPrintOperationPreview* preview /*none*/, gint page_nr);
void PrintOperationPreviewIfaceClassImpl::render_page_ (gint page_nr) noexcept
{
  if (!get_struct_()->render_page) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_page;
  auto page_nr_to_c = page_nr;
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (gint) (page_nr_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
