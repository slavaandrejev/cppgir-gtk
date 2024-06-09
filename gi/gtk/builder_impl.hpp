// AUTO-GENERATED

#ifndef _GI_GTK_BUILDER_IMPL_HPP_
#define _GI_GTK_BUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkBuilder* /*full*/ gtk_builder_new ();
// ::GtkBuilder* /*full*/ gtk_builder_new ();
Gtk::Builder base::BuilderBase::new_ () noexcept
{
  typedef ::GtkBuilder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkBuilder* /*full*/ gtk_builder_new_from_file (const char* filename /*none*/);
// ::GtkBuilder* /*full*/ gtk_builder_new_from_file (const char* filename /*none*/);
Gtk::Builder base::BuilderBase::new_from_file (const gi::cstring_v filename) noexcept
{
  typedef ::GtkBuilder* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkBuilder* /*full*/ gtk_builder_new_from_resource (const char* resource_path /*none*/);
// ::GtkBuilder* /*full*/ gtk_builder_new_from_resource (const char* resource_path /*none*/);
Gtk::Builder base::BuilderBase::new_from_resource (const gi::cstring_v resource_path) noexcept
{
  typedef ::GtkBuilder* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkBuilder* /*full*/ gtk_builder_new_from_string (const char* string /*none*/, gssize length);
// ::GtkBuilder* /*full*/ gtk_builder_new_from_string (const char* string /*none*/, gssize length);
Gtk::Builder base::BuilderBase::new_from_string (const gi::cstring_v string, gssize length) noexcept
{
  typedef ::GtkBuilder* (*call_wrap_t) (const char* string, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_new_from_string;
  auto length_to_c = length;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_builder_add_from_file (GtkBuilder* builder /*none*/, const char* filename /*none*/, GError ** error);
// gboolean gtk_builder_add_from_file (::GtkBuilder* builder /*none*/, const char* filename /*none*/, GError ** error);
bool base::BuilderBase::add_from_file (const gi::cstring_v filename)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::add_from_file (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_builder_add_from_resource (GtkBuilder* builder /*none*/, const char* resource_path /*none*/, GError ** error);
// gboolean gtk_builder_add_from_resource (::GtkBuilder* builder /*none*/, const char* resource_path /*none*/, GError ** error);
bool base::BuilderBase::add_from_resource (const gi::cstring_v resource_path)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (resource_path_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::add_from_resource (const gi::cstring_v resource_path, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* resource_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (resource_path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_builder_add_from_string (GtkBuilder* builder /*none*/, const char* buffer /*none*/, gssize length, GError ** error);
// gboolean gtk_builder_add_from_string (::GtkBuilder* builder /*none*/, const char* buffer /*none*/, gssize length, GError ** error);
bool base::BuilderBase::add_from_string (const gi::cstring_v buffer, gssize length)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* buffer, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_from_string;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (buffer_to_c), (gssize) (length_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::add_from_string (const gi::cstring_v buffer, gssize length, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* buffer, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_from_string;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (buffer_to_c), (gssize) (length_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_builder_add_objects_from_file (GtkBuilder* builder /*none*/, const char* filename /*none*/, const char** object_ids /*none*/, GError ** error);
// gboolean gtk_builder_add_objects_from_file (::GtkBuilder* builder /*none*/, const char* filename /*none*/, const char** object_ids /*none*/, GError ** error);
bool base::BuilderBase::add_objects_from_file (const gi::cstring_v filename, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* filename, const char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_objects_from_file;
  auto object_ids_w = unwrap (std::move(object_ids), gi::transfer_none);
  auto object_ids_to_c = object_ids_w;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (filename_to_c), (const char**) (object_ids_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::add_objects_from_file (const gi::cstring_v filename, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* filename, const char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_objects_from_file;
  auto object_ids_w = unwrap (std::move(object_ids), gi::transfer_none);
  auto object_ids_to_c = object_ids_w;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (filename_to_c), (const char**) (object_ids_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_builder_add_objects_from_resource (GtkBuilder* builder /*none*/, const char* resource_path /*none*/, const char** object_ids /*none*/, GError ** error);
// gboolean gtk_builder_add_objects_from_resource (::GtkBuilder* builder /*none*/, const char* resource_path /*none*/, const char** object_ids /*none*/, GError ** error);
bool base::BuilderBase::add_objects_from_resource (const gi::cstring_v resource_path, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* resource_path, const char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_objects_from_resource;
  auto object_ids_w = unwrap (std::move(object_ids), gi::transfer_none);
  auto object_ids_to_c = object_ids_w;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (resource_path_to_c), (const char**) (object_ids_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::add_objects_from_resource (const gi::cstring_v resource_path, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* resource_path, const char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_objects_from_resource;
  auto object_ids_w = unwrap (std::move(object_ids), gi::transfer_none);
  auto object_ids_to_c = object_ids_w;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (resource_path_to_c), (const char**) (object_ids_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_builder_add_objects_from_string (GtkBuilder* builder /*none*/, const char* buffer /*none*/, gssize length, const char** object_ids /*none*/, GError ** error);
// gboolean gtk_builder_add_objects_from_string (::GtkBuilder* builder /*none*/, const char* buffer /*none*/, gssize length, const char** object_ids /*none*/, GError ** error);
bool base::BuilderBase::add_objects_from_string (const gi::cstring_v buffer, gssize length, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* buffer, gssize length, const char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_objects_from_string;
  auto object_ids_w = unwrap (std::move(object_ids), gi::transfer_none);
  auto object_ids_to_c = object_ids_w;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (buffer_to_c), (gssize) (length_to_c), (const char**) (object_ids_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::add_objects_from_string (const gi::cstring_v buffer, gssize length, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, const char* buffer, gssize length, const char** object_ids, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_add_objects_from_string;
  auto object_ids_w = unwrap (std::move(object_ids), gi::transfer_none);
  auto object_ids_to_c = object_ids_w;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (buffer_to_c), (gssize) (length_to_c), (const char**) (object_ids_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GClosure* /*full,nullable*/ gtk_builder_create_closure (GtkBuilder* builder /*none*/, const char* function_name /*none*/, GtkBuilderClosureFlags flags, GObject* object /*none,nullable*/, GError ** error);
// ::GClosure* /*full,nullable*/ gtk_builder_create_closure (::GtkBuilder* builder /*none*/, const char* function_name /*none*/, ::GtkBuilderClosureFlags flags, ::GObject* object /*none,nullable*/, GError ** error);
GObject::Closure base::BuilderBase::create_closure (const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GObject::Object object)
{
  typedef ::GClosure* (*call_wrap_t) (::GtkBuilder* builder, const char* function_name, ::GtkBuilderClosureFlags flags, ::GObject* object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_create_closure;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto function_name_to_c = gi::unwrap (function_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (function_name_to_c), (::GtkBuilderClosureFlags) (flags_to_c), (::GObject*) (object_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::Closure base::BuilderBase::create_closure (const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags)
{
  typedef ::GClosure* (*call_wrap_t) (::GtkBuilder* builder, const char* function_name, ::GtkBuilderClosureFlags flags, ::GObject* object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_create_closure;
  auto object_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto function_name_to_c = gi::unwrap (function_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (function_name_to_c), (::GtkBuilderClosureFlags) (flags_to_c), (::GObject*) (object_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::Closure base::BuilderBase::create_closure (const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GObject::Object object, GLib::Error * _error) noexcept
{
  typedef ::GClosure* (*call_wrap_t) (::GtkBuilder* builder, const char* function_name, ::GtkBuilderClosureFlags flags, ::GObject* object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_create_closure;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto function_name_to_c = gi::unwrap (function_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (function_name_to_c), (::GtkBuilderClosureFlags) (flags_to_c), (::GObject*) (object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::Closure base::BuilderBase::create_closure (const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GClosure* (*call_wrap_t) (::GtkBuilder* builder, const char* function_name, ::GtkBuilderClosureFlags flags, ::GObject* object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_create_closure;
  auto object_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto function_name_to_c = gi::unwrap (function_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (function_name_to_c), (::GtkBuilderClosureFlags) (flags_to_c), (::GObject*) (object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_builder_expose_object (GtkBuilder* builder /*none*/, const char* name /*none*/, GObject* object /*none*/);
// void gtk_builder_expose_object (::GtkBuilder* builder /*none*/, const char* name /*none*/, ::GObject* object /*none*/);
void base::BuilderBase::expose_object (const gi::cstring_v name, GObject::Object object) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, const char* name, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_expose_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (name_to_c), (::GObject*) (object_to_c));
}

// gboolean gtk_builder_extend_with_template (GtkBuilder* builder /*none*/, GObject* object /*none*/, GType template_type, const char* buffer /*none*/, gssize length, GError ** error);
// gboolean gtk_builder_extend_with_template (::GtkBuilder* builder /*none*/, ::GObject* object /*none*/, GType template_type, const char* buffer /*none*/, gssize length, GError ** error);
bool base::BuilderBase::extend_with_template (GObject::Object object, GType template_type, const gi::cstring_v buffer, gssize length)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GObject* object, GType template_type, const char* buffer, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_extend_with_template;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  auto template_type_to_c = template_type;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GObject*) (object_to_c), (GType) (template_type_to_c), (const char*) (buffer_to_c), (gssize) (length_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::extend_with_template (GObject::Object object, GType template_type, const gi::cstring_v buffer, gssize length, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GObject* object, GType template_type, const char* buffer, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_extend_with_template;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  auto template_type_to_c = template_type;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GObject*) (object_to_c), (GType) (template_type_to_c), (const char*) (buffer_to_c), (gssize) (length_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GObject* /*none,nullable*/ gtk_builder_get_current_object (GtkBuilder* builder /*none*/);
// ::GObject* /*none,nullable*/ gtk_builder_get_current_object (::GtkBuilder* builder /*none*/);
GObject::Object base::BuilderBase::get_current_object () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_get_current_object;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GObject* /*none,nullable*/ gtk_builder_get_object (GtkBuilder* builder /*none*/, const char* name /*none*/);
// ::GObject* /*none,nullable*/ gtk_builder_get_object (::GtkBuilder* builder /*none*/, const char* name /*none*/);
GObject::Object base::BuilderBase::get_object (const gi::cstring_v name) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkBuilder* builder, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_get_object;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GSList* /*container*/ gtk_builder_get_objects (GtkBuilder* builder /*none*/);
// ::GSList* /*container*/ gtk_builder_get_objects (::GtkBuilder* builder /*none*/);
gi::Collection<GSList, ::GObject*, gi::transfer_container_t> base::BuilderBase::get_objects () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_get_objects;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()));
  return gi::wrap_to<gi::Collection<GSList, ::GObject*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// GtkBuilderScope* /*none*/ gtk_builder_get_scope (GtkBuilder* builder /*none*/);
// ::GtkBuilderScope* /*none*/ gtk_builder_get_scope (::GtkBuilder* builder /*none*/);
Gtk::BuilderScope base::BuilderBase::get_scope () noexcept
{
  typedef ::GtkBuilderScope* (*call_wrap_t) (::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_get_scope;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_builder_get_translation_domain (GtkBuilder* builder /*none*/);
// const char* /*none,nullable*/ gtk_builder_get_translation_domain (::GtkBuilder* builder /*none*/);
gi::cstring_v base::BuilderBase::get_translation_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_get_translation_domain;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GType gtk_builder_get_type_from_name (GtkBuilder* builder /*none*/, const char* type_name /*none*/);
// GType gtk_builder_get_type_from_name (::GtkBuilder* builder /*none*/, const char* type_name /*none*/);
GType base::BuilderBase::get_type_from_name (const gi::cstring_v type_name) noexcept
{
  typedef GType (*call_wrap_t) (::GtkBuilder* builder, const char* type_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_get_type_from_name;
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (type_name_to_c));
  return _temp_ret;
}

// void gtk_builder_set_current_object (GtkBuilder* builder /*none*/, GObject* current_object /*none,nullable*/);
// void gtk_builder_set_current_object (::GtkBuilder* builder /*none*/, ::GObject* current_object /*none,nullable*/);
void base::BuilderBase::set_current_object (GObject::Object current_object) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, ::GObject* current_object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_set_current_object;
  auto current_object_to_c = gi::unwrap (current_object, gi::transfer_none);
  call_wrap_v ((::GtkBuilder*) (gobj_()), (::GObject*) (current_object_to_c));
}
void base::BuilderBase::set_current_object () noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, ::GObject* current_object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_set_current_object;
  auto current_object_to_c = nullptr;
  call_wrap_v ((::GtkBuilder*) (gobj_()), (::GObject*) (current_object_to_c));
}

// void gtk_builder_set_scope (GtkBuilder* builder /*none*/, GtkBuilderScope* scope /*none,nullable*/);
// void gtk_builder_set_scope (::GtkBuilder* builder /*none*/, ::GtkBuilderScope* scope /*none,nullable*/);
void base::BuilderBase::set_scope (Gtk::BuilderScope scope) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, ::GtkBuilderScope* scope);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_set_scope;
  auto scope_to_c = gi::unwrap (scope, gi::transfer_none);
  call_wrap_v ((::GtkBuilder*) (gobj_()), (::GtkBuilderScope*) (scope_to_c));
}
void base::BuilderBase::set_scope () noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, ::GtkBuilderScope* scope);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_set_scope;
  auto scope_to_c = nullptr;
  call_wrap_v ((::GtkBuilder*) (gobj_()), (::GtkBuilderScope*) (scope_to_c));
}

// void gtk_builder_set_translation_domain (GtkBuilder* builder /*none*/, const char* domain /*none,nullable*/);
// void gtk_builder_set_translation_domain (::GtkBuilder* builder /*none*/, const char* domain /*none,nullable*/);
void base::BuilderBase::set_translation_domain (const gi::cstring_v domain) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_set_translation_domain;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (domain_to_c));
}
void base::BuilderBase::set_translation_domain () noexcept
{
  typedef void (*call_wrap_t) (::GtkBuilder* builder, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_set_translation_domain;
  auto domain_to_c = nullptr;
  call_wrap_v ((::GtkBuilder*) (gobj_()), (const char*) (domain_to_c));
}

// gboolean gtk_builder_value_from_string (GtkBuilder* builder /*none*/, GParamSpec* pspec /*none*/, const char* string /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean gtk_builder_value_from_string (::GtkBuilder* builder /*none*/, ::GParamSpec* pspec /*none*/, const char* string /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
bool base::BuilderBase::value_from_string (GObject::ParamSpec pspec, const gi::cstring_v string, GObject::Value & value)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_value_from_string;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GParamSpec*) (pspec_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) (value).gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::value_from_string (GObject::ParamSpec pspec, const gi::cstring_v string, GObject::Value & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_value_from_string;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GParamSpec*) (pspec_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) (value).gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::BuilderBase::value_from_string (GObject::ParamSpec pspec, const gi::cstring_v string)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_value_from_string;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GParamSpec*) (pspec_to_c), (const char*) (string_to_c), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GObject::Value> base::BuilderBase::value_from_string (GObject::ParamSpec pspec, const gi::cstring_v string, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, ::GParamSpec* pspec, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_value_from_string;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (::GParamSpec*) (pspec_to_c), (const char*) (string_to_c), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_builder_value_from_string_type (GtkBuilder* builder /*none*/, GType type, const char* string /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean gtk_builder_value_from_string_type (::GtkBuilder* builder /*none*/, GType type, const char* string /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
bool base::BuilderBase::value_from_string_type (GType type, const gi::cstring_v string, GObject::Value & value)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_value_from_string_type;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto type_to_c = type;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (GType) (type_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) (value).gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BuilderBase::value_from_string_type (GType type, const gi::cstring_v string, GObject::Value & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_value_from_string_type;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto type_to_c = type;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (GType) (type_to_c), (const char*) (string_to_c), (::GValue*) ((GValue*) (value).gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::BuilderBase::value_from_string_type (GType type, const gi::cstring_v string)
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_value_from_string_type;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto type_to_c = type;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (GType) (type_to_c), (const char*) (string_to_c), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GObject::Value> base::BuilderBase::value_from_string_type (GType type, const gi::cstring_v string, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuilder* builder, GType type, const char* string, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_value_from_string_type;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto type_to_c = type;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkBuilder*) (gobj_()), (GType) (type_to_c), (const char*) (string_to_c), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/builder_extra_def_impl.hpp>)
#include <gtk/builder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/builder_extra_impl.hpp>)
#include <gtk/builder_extra_impl.hpp>
#endif
#endif

#endif
