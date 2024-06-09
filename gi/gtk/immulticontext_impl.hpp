// AUTO-GENERATED

#ifndef _GI_GTK_IMMULTICONTEXT_IMPL_HPP_
#define _GI_GTK_IMMULTICONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkIMContext* /*full*/ gtk_im_multicontext_new ();
// ::GtkIMMulticontext* /*full*/ gtk_im_multicontext_new ();
Gtk::IMMulticontext base::IMMulticontextBase::new_ () noexcept
{
  typedef ::GtkIMMulticontext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_multicontext_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_im_multicontext_get_context_id (GtkIMMulticontext* context /*none*/);
// const char* /*none*/ gtk_im_multicontext_get_context_id (::GtkIMMulticontext* context /*none*/);
gi::cstring_v base::IMMulticontextBase::get_context_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkIMMulticontext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_multicontext_get_context_id;
  auto _temp_ret = call_wrap_v ((::GtkIMMulticontext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_im_multicontext_set_context_id (GtkIMMulticontext* context /*none*/, const char* context_id /*none,nullable*/);
// void gtk_im_multicontext_set_context_id (::GtkIMMulticontext* context /*none*/, const char* context_id /*none,nullable*/);
void base::IMMulticontextBase::set_context_id (const gi::cstring_v context_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMMulticontext* context, const char* context_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_multicontext_set_context_id;
  auto context_id_to_c = gi::unwrap (context_id, gi::transfer_none);
  call_wrap_v ((::GtkIMMulticontext*) (gobj_()), (const char*) (context_id_to_c));
}
void base::IMMulticontextBase::set_context_id () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMMulticontext* context, const char* context_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_multicontext_set_context_id;
  auto context_id_to_c = nullptr;
  call_wrap_v ((::GtkIMMulticontext*) (gobj_()), (const char*) (context_id_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/immulticontext_extra_def_impl.hpp>)
#include <gtk/immulticontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/immulticontext_extra_impl.hpp>)
#include <gtk/immulticontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void IMMulticontextClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkIMMulticontextClass *methods = (::GtkIMMulticontextClass *) class_struct;
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
