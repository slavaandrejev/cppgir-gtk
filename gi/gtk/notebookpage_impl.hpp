// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOKPAGE_IMPL_HPP_
#define _GI_GTK_NOTEBOOKPAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_notebook_page_get_child (GtkNotebookPage* page /*none*/);
// ::GtkWidget* /*none*/ gtk_notebook_page_get_child (::GtkNotebookPage* page /*none*/);
Gtk::Widget base::NotebookPageBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebookPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_page_get_child;
  auto _temp_ret = call_wrap_v ((::GtkNotebookPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebookpage_extra_def_impl.hpp>)
#include <gtk/notebookpage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebookpage_extra_impl.hpp>)
#include <gtk/notebookpage_extra_impl.hpp>
#endif
#endif

#endif
