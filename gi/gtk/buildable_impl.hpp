// AUTO-GENERATED

#ifndef _GI_GTK_BUILDABLE_IMPL_HPP_
#define _GI_GTK_BUILDABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// const char* /*none,nullable*/ gtk_buildable_get_buildable_id (GtkBuildable* buildable /*none*/);
// const char* /*none,nullable*/ gtk_buildable_get_buildable_id (::GtkBuildable* buildable /*none*/);
gi::cstring_v base::BuildableBase::get_buildable_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkBuildable* buildable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_buildable_get_buildable_id;
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buildable_extra_def_impl.hpp>)
#include <gtk/buildable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buildable_extra_impl.hpp>)
#include <gtk/buildable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BuildableIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkBuildableIface *methods = (::GtkBuildableIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.add_child) methods->add_child = (decltype (methods->add_child)) detail::method_wrapper<self, void (*) (Gtk::Builder builder, GObject::Object child, const gi::cstring_v type), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::add_child_>;
  if (init_data.custom_finished) methods->custom_finished = (decltype (methods->custom_finished)) detail::method_wrapper<self, void (*) (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, void* data), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::custom_finished_>;
  if (init_data.custom_tag_end) methods->custom_tag_end = (decltype (methods->custom_tag_end)) detail::method_wrapper<self, void (*) (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, void* data), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::custom_tag_end_>;
  if (init_data.custom_tag_start) methods->custom_tag_start = (decltype (methods->custom_tag_start)) detail::method_wrapper<self, bool (*) (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, Gtk::BuildableParser_Ref parser, gpointer & data), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::custom_tag_start_>;
  if (init_data.get_id) methods->get_id = (decltype (methods->get_id)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_id_>;
  if (init_data.get_internal_child) methods->get_internal_child = (decltype (methods->get_internal_child)) detail::method_wrapper<self, GObject::Object (*) (Gtk::Builder builder, const gi::cstring_v childname), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_internal_child_>;
  if (init_data.parser_finished) methods->parser_finished = (decltype (methods->parser_finished)) detail::method_wrapper<self, void (*) (Gtk::Builder builder), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::parser_finished_>;
  if (init_data.set_buildable_property) methods->set_buildable_property = (decltype (methods->set_buildable_property)) detail::method_wrapper<self, void (*) (Gtk::Builder builder, const gi::cstring_v name, const GObject::Value_Ref value), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::set_buildable_property_>;
  if (init_data.set_id) methods->set_id = (decltype (methods->set_id)) detail::method_wrapper<self, void (*) (const gi::cstring_v id), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_id_>;
}

// void Buildable::add_child (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none*/, const char* type /*none,nullable*/);
// void Buildable::add_child (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none*/, const char* type /*none,nullable*/);
void BuildableIfaceClassImpl::add_child_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v type) noexcept
{
  if (!get_struct_()->add_child) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_child;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (type_to_c));
}

// void Buildable::custom_finished (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, gpointer data);
// void Buildable::custom_finished (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, void* data);
void BuildableIfaceClassImpl::custom_finished_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, void* data) noexcept
{
  if (!get_struct_()->custom_finished) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->custom_finished;
  auto data_to_c = data;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (void*) (data_to_c));
}

// void Buildable::custom_tag_end (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, gpointer data);
// void Buildable::custom_tag_end (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, void* data);
void BuildableIfaceClassImpl::custom_tag_end_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, void* data) noexcept
{
  if (!get_struct_()->custom_tag_end) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->custom_tag_end;
  auto data_to_c = data;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (void*) (data_to_c));
}

// gboolean Buildable::custom_tag_start (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, GtkBuildableParser* parser /*none,out,ca*/, gpointer* data);
// gboolean Buildable::custom_tag_start (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, ::GtkBuildableParser* parser /*none,out,ca*/, void** data);
bool BuildableIfaceClassImpl::custom_tag_start_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, Gtk::BuildableParser_Ref parser, gpointer & data) noexcept
{
  if (!get_struct_()->custom_tag_start) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GtkBuildableParser* parser, void** data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->custom_tag_start;
  void* data_o {};
  auto parser_to_c = gi::unwrap (parser, gi::transfer_none);
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (::GtkBuildableParser*) (parser_to_c), (void**) (&data_o));
  data = data_o;
  return _temp_ret;
}

// const char* /*none*/ Buildable::get_id (GtkBuildable* buildable /*none*/);
// const char* /*none*/ Buildable::get_id (::GtkBuildable* buildable /*none*/);
gi::cstring_v BuildableIfaceClassImpl::get_id_ () noexcept
{
  if (!get_struct_()->get_id) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GtkBuildable* buildable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_id;
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GObject* /*none*/ Buildable::get_internal_child (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, const char* childname /*none*/);
// ::GObject* /*none*/ Buildable::get_internal_child (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, const char* childname /*none*/);
GObject::Object BuildableIfaceClassImpl::get_internal_child_ (Gtk::Builder builder, const gi::cstring_v childname) noexcept
{
  if (!get_struct_()->get_internal_child) { g_critical ("no method in class struct"); return {}; }
  typedef ::GObject* (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* childname);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_internal_child;
  auto childname_to_c = gi::unwrap (childname, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (childname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void Buildable::parser_finished (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/);
// void Buildable::parser_finished (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/);
void BuildableIfaceClassImpl::parser_finished_ (Gtk::Builder builder) noexcept
{
  if (!get_struct_()->parser_finished) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->parser_finished;
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c));
}

// void Buildable::set_buildable_property (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, const char* name /*none*/, const GValue* value /*none*/);
// void Buildable::set_buildable_property (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, const char* name /*none*/, const ::GValue* value /*none*/);
void BuildableIfaceClassImpl::set_buildable_property_ (Gtk::Builder builder, const gi::cstring_v name, const GObject::Value_Ref value) noexcept
{
  if (!get_struct_()->set_buildable_property) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_buildable_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (name_to_c), (const ::GValue*) (value_to_c));
}

// void Buildable::set_id (GtkBuildable* buildable /*none*/, const char* id /*none*/);
// void Buildable::set_id (::GtkBuildable* buildable /*none*/, const char* id /*none*/);
void BuildableIfaceClassImpl::set_id_ (const gi::cstring_v id) noexcept
{
  if (!get_struct_()->set_id) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_id;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (const char*) (id_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
