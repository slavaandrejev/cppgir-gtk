// AUTO-GENERATED

#ifndef _GI_GTK_BUILDERCSCOPE_IMPL_HPP_
#define _GI_GTK_BUILDERCSCOPE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::BuilderScope BuilderCScopeBase::interface_ (gi::interface_tag<Gtk::BuilderScope>)
{ return gi::wrap ((Gtk::BuilderScope::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BuilderCScopeBase::operator Gtk::BuilderScope ()
{ return interface_ (gi::interface_tag<Gtk::BuilderScope>()); }

// GtkBuilderScope* /*full*/ gtk_builder_cscope_new ();
// ::GtkBuilderCScope* /*full*/ gtk_builder_cscope_new ();
Gtk::BuilderCScope base::BuilderCScopeBase::new_ () noexcept
{
  typedef ::GtkBuilderCScope* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_cscope_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_builder_cscope_add_callback_symbol (GtkBuilderCScope* self /*none*/, const char* callback_name /*none*/, GCallback callback_symbol /*none*/);
// void gtk_builder_cscope_add_callback_symbol (::GtkBuilderCScope* self /*none*/, const char* callback_name /*none*/,  callback_symbol /*none*/);
// SKIP; callback_symbol type  not supported

// void gtk_builder_cscope_add_callback_symbols (GtkBuilderCScope* self /*none*/, const char* first_callback_name /*none*/, GCallback first_callback_symbol /*none*/,  ..._ /*none*/);
// void gtk_builder_cscope_add_callback_symbols (::GtkBuilderCScope* self /*none*/, const char* first_callback_name /*none*/,  first_callback_symbol /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GCallback /*none,nullable*/ gtk_builder_cscope_lookup_callback_symbol (GtkBuilderCScope* self /*none*/, const char* callback_name /*none*/);
//  /*none,nullable*/ gtk_builder_cscope_lookup_callback_symbol (::GtkBuilderCScope* self /*none*/, const char* callback_name /*none*/);
// IGNORE; not introspectable,  type  not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buildercscope_extra_def_impl.hpp>)
#include <gtk/buildercscope_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buildercscope_extra_impl.hpp>)
#include <gtk/buildercscope_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BuilderCScopeClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkBuilderCScopeClass *methods = (::GtkBuilderCScopeClass *) class_struct;
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
