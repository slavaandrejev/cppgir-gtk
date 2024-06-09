// AUTO-GENERATED

#ifndef _GI_GTK_ASSISTANT_IMPL_HPP_
#define _GI_GTK_ASSISTANT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_assistant_new ();
// ::GtkAssistant* /*none*/ gtk_assistant_new ();
Gtk::Assistant base::AssistantBase::new_ () noexcept
{
  typedef ::GtkAssistant* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_assistant_add_action_widget (GtkAssistant* assistant /*none*/, GtkWidget* child /*none*/);
// void gtk_assistant_add_action_widget (::GtkAssistant* assistant /*none*/, ::GtkWidget* child /*none*/);
void base::AssistantBase::add_action_widget (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_add_action_widget;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// int gtk_assistant_append_page (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// gint gtk_assistant_append_page (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
gint base::AssistantBase::append_page (Gtk::Widget page) noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_append_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return _temp_ret;
}

// void gtk_assistant_commit (GtkAssistant* assistant /*none*/);
// void gtk_assistant_commit (::GtkAssistant* assistant /*none*/);
void base::AssistantBase::commit () noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_commit;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// int gtk_assistant_get_current_page (GtkAssistant* assistant /*none*/);
// gint gtk_assistant_get_current_page (::GtkAssistant* assistant /*none*/);
gint base::AssistantBase::get_current_page () noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_get_current_page;
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()));
  return _temp_ret;
}

// int gtk_assistant_get_n_pages (GtkAssistant* assistant /*none*/);
// gint gtk_assistant_get_n_pages (::GtkAssistant* assistant /*none*/);
gint base::AssistantBase::get_n_pages () noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_get_n_pages;
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_assistant_get_nth_page (GtkAssistant* assistant /*none*/, int page_num);
// ::GtkWidget* /*none,nullable*/ gtk_assistant_get_nth_page (::GtkAssistant* assistant /*none*/, gint page_num);
Gtk::Widget base::AssistantBase::get_nth_page (gint page_num) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkAssistant* assistant, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_get_nth_page;
  auto page_num_to_c = page_num;
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (gint) (page_num_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkAssistantPage* /*none*/ gtk_assistant_get_page (GtkAssistant* assistant /*none*/, GtkWidget* child /*none*/);
// ::GtkAssistantPage* /*none*/ gtk_assistant_get_page (::GtkAssistant* assistant /*none*/, ::GtkWidget* child /*none*/);
Gtk::AssistantPage base::AssistantBase::get_page (Gtk::Widget child) noexcept
{
  typedef ::GtkAssistantPage* (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_get_page;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_assistant_get_page_complete (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// gboolean gtk_assistant_get_page_complete (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
bool base::AssistantBase::get_page_complete (Gtk::Widget page) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_get_page_complete;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return _temp_ret;
}

// const char* /*none*/ gtk_assistant_get_page_title (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// const char* /*none*/ gtk_assistant_get_page_title (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
gi::cstring_v base::AssistantBase::get_page_title (Gtk::Widget page) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_get_page_title;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkAssistantPageType gtk_assistant_get_page_type (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// ::GtkAssistantPageType gtk_assistant_get_page_type (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
Gtk::AssistantPageType base::AssistantBase::get_page_type (Gtk::Widget page) noexcept
{
  typedef ::GtkAssistantPageType (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_get_page_type;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return gi::wrap (_temp_ret);
}

// GListModel* /*full*/ gtk_assistant_get_pages (GtkAssistant* assistant /*none*/);
// ::GListModel* /*full*/ gtk_assistant_get_pages (::GtkAssistant* assistant /*none*/);
Gio::ListModel base::AssistantBase::get_pages () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_get_pages;
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_assistant_insert_page (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/, int position);
// gint gtk_assistant_insert_page (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/, gint position);
gint base::AssistantBase::insert_page (Gtk::Widget page, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_insert_page;
  auto position_to_c = position;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// void gtk_assistant_next_page (GtkAssistant* assistant /*none*/);
// void gtk_assistant_next_page (::GtkAssistant* assistant /*none*/);
void base::AssistantBase::next_page () noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_next_page;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// int gtk_assistant_prepend_page (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/);
// gint gtk_assistant_prepend_page (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/);
gint base::AssistantBase::prepend_page (Gtk::Widget page) noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_prepend_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return _temp_ret;
}

// void gtk_assistant_previous_page (GtkAssistant* assistant /*none*/);
// void gtk_assistant_previous_page (::GtkAssistant* assistant /*none*/);
void base::AssistantBase::previous_page () noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_previous_page;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// void gtk_assistant_remove_action_widget (GtkAssistant* assistant /*none*/, GtkWidget* child /*none*/);
// void gtk_assistant_remove_action_widget (::GtkAssistant* assistant /*none*/, ::GtkWidget* child /*none*/);
void base::AssistantBase::remove_action_widget (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_remove_action_widget;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_assistant_remove_page (GtkAssistant* assistant /*none*/, int page_num);
// void gtk_assistant_remove_page (::GtkAssistant* assistant /*none*/, gint page_num);
void base::AssistantBase::remove_page (gint page_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_remove_page;
  auto page_num_to_c = page_num;
  call_wrap_v ((::GtkAssistant*) (gobj_()), (gint) (page_num_to_c));
}

// void gtk_assistant_set_current_page (GtkAssistant* assistant /*none*/, int page_num);
// void gtk_assistant_set_current_page (::GtkAssistant* assistant /*none*/, gint page_num);
void base::AssistantBase::set_current_page (gint page_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_set_current_page;
  auto page_num_to_c = page_num;
  call_wrap_v ((::GtkAssistant*) (gobj_()), (gint) (page_num_to_c));
}

// void gtk_assistant_set_forward_page_func (GtkAssistant* assistant /*none*/, GtkAssistantPageFunc page_func /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none*/);
// void gtk_assistant_set_forward_page_func (::GtkAssistant* assistant /*none*/, Gtk::AssistantPageFunc::cfunction_type page_func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void base::AssistantBase::set_forward_page_func (Gtk::AssistantPageFunc page_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, Gtk::AssistantPageFunc::cfunction_type page_func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_set_forward_page_func;
  auto page_func_wrap_ = page_func ? unwrap (std::move (page_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkAssistant*) (gobj_()), (Gtk::AssistantPageFunc::cfunction_type) (page_func_wrap_ ? &page_func_wrap_->wrapper : nullptr), (void*) (page_func_wrap_), (GLib::DestroyNotify::cfunction_type) (page_func_wrap_ ? &page_func_wrap_->destroy : nullptr));
}

// void gtk_assistant_set_page_complete (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/, gboolean complete);
// void gtk_assistant_set_page_complete (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/, gboolean complete);
void base::AssistantBase::set_page_complete (Gtk::Widget page, gboolean complete) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, gboolean complete);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_set_page_complete;
  auto complete_to_c = complete;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (gboolean) (complete_to_c));
}

// void gtk_assistant_set_page_title (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/, const char* title /*none*/);
// void gtk_assistant_set_page_title (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/, const char* title /*none*/);
void base::AssistantBase::set_page_title (Gtk::Widget page, const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_set_page_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (const char*) (title_to_c));
}

// void gtk_assistant_set_page_type (GtkAssistant* assistant /*none*/, GtkWidget* page /*none*/, GtkAssistantPageType type);
// void gtk_assistant_set_page_type (::GtkAssistant* assistant /*none*/, ::GtkWidget* page /*none*/, ::GtkAssistantPageType type);
void base::AssistantBase::set_page_type (Gtk::Widget page, Gtk::AssistantPageType type) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, ::GtkAssistantPageType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_set_page_type;
  auto type_to_c = gi::unwrap (type);
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (::GtkAssistantPageType) (type_to_c));
}

// void gtk_assistant_update_buttons_state (GtkAssistant* assistant /*none*/);
// void gtk_assistant_update_buttons_state (::GtkAssistant* assistant /*none*/);
void base::AssistantBase::update_buttons_state () noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_assistant_update_buttons_state;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/assistant_extra_def_impl.hpp>)
#include <gtk/assistant_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/assistant_extra_impl.hpp>)
#include <gtk/assistant_extra_impl.hpp>
#endif
#endif

#endif
