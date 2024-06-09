// AUTO-GENERATED

#ifndef _GI_GTK_BUILDERSCOPE_IMPL_HPP_
#define _GI_GTK_BUILDERSCOPE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/builderscope_extra_def_impl.hpp>)
#include <gtk/builderscope_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/builderscope_extra_impl.hpp>)
#include <gtk/builderscope_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BuilderScopeInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkBuilderScopeInterface *methods = (::GtkBuilderScopeInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.create_closure) methods->create_closure = (decltype (methods->create_closure)) detail::method_wrapper<self, GObject::Closure (*) (Gtk::Builder builder, const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GObject::Object object, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::create_closure_>;
  if (init_data.get_type_from_function) methods->get_type_from_function = (decltype (methods->get_type_from_function)) detail::method_wrapper<self, GType (*) (Gtk::Builder builder, const gi::cstring_v function_name), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_type_from_function_>;
  if (init_data.get_type_from_name) methods->get_type_from_name = (decltype (methods->get_type_from_name)) detail::method_wrapper<self, GType (*) (Gtk::Builder builder, const gi::cstring_v type_name), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_type_from_name_>;
}

// GClosure* /*full*/ BuilderScope::create_closure (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* function_name /*none*/, GtkBuilderClosureFlags flags, GObject* object /*none*/, GError ** error);
// ::GClosure* /*full*/ BuilderScope::create_closure (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* function_name /*none*/, ::GtkBuilderClosureFlags flags, ::GObject* object /*none*/, GError ** error);
GObject::Closure BuilderScopeInterfaceClassImpl::create_closure_ (Gtk::Builder builder, const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GObject::Object object, GLib::Error * _error)
{
  if (!get_struct_()->create_closure) { g_critical ("no method in class struct"); return {}; }
  typedef ::GClosure* (*call_wrap_t) (::GtkBuilderScope* self, ::GtkBuilder* builder, const char* function_name, ::GtkBuilderClosureFlags flags, ::GObject* object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_closure;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto function_name_to_c = gi::unwrap (function_name, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilderScope*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (function_name_to_c), (::GtkBuilderClosureFlags) (flags_to_c), (::GObject*) (object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GType BuilderScope::get_type_from_function (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* function_name /*none*/);
// GType BuilderScope::get_type_from_function (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* function_name /*none*/);
GType BuilderScopeInterfaceClassImpl::get_type_from_function_ (Gtk::Builder builder, const gi::cstring_v function_name) noexcept
{
  if (!get_struct_()->get_type_from_function) { g_critical ("no method in class struct"); return {}; }
  typedef GType (*call_wrap_t) (::GtkBuilderScope* self, ::GtkBuilder* builder, const char* function_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_type_from_function;
  auto function_name_to_c = gi::unwrap (function_name, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkBuilderScope*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (function_name_to_c));
  return _temp_ret;
}

// GType BuilderScope::get_type_from_name (GtkBuilderScope* self /*none*/, GtkBuilder* builder /*none*/, const char* type_name /*none*/);
// GType BuilderScope::get_type_from_name (::GtkBuilderScope* self /*none*/, ::GtkBuilder* builder /*none*/, const char* type_name /*none*/);
GType BuilderScopeInterfaceClassImpl::get_type_from_name_ (Gtk::Builder builder, const gi::cstring_v type_name) noexcept
{
  if (!get_struct_()->get_type_from_name) { g_critical ("no method in class struct"); return {}; }
  typedef GType (*call_wrap_t) (::GtkBuilderScope* self, ::GtkBuilder* builder, const char* type_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_type_from_name;
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkBuilderScope*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (type_name_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
