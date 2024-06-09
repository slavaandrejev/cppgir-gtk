// AUTO-GENERATED

#ifndef _GI_GIO_TASK_IMPL_HPP_
#define _GI_GIO_TASK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::AsyncResult TaskBase::interface_ (gi::interface_tag<Gio::AsyncResult>)
{ return gi::wrap ((Gio::AsyncResult::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TaskBase::operator Gio::AsyncResult ()
{ return interface_ (gi::interface_tag<Gio::AsyncResult>()); }

// GTask* /*full*/ g_task_new (gpointer source_object /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer callback_data);
// ::GTask* /*full*/ g_task_new (::GObject* source_object /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* callback_data);
Gio::Task base::TaskBase::new_ (GObject::Object source_object, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef ::GTask* (*call_wrap_t) (::GObject* source_object, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (source_object_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Task base::TaskBase::new_ (Gio::AsyncReadyCallback callback) noexcept
{
  typedef ::GTask* (*call_wrap_t) (::GObject* source_object, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto source_object_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GObject*) (source_object_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_task_is_valid (gpointer result /*none*/, gpointer source_object /*none,nullable*/);
// gboolean g_task_is_valid (::GAsyncResult* result /*none*/, ::GObject* source_object /*none,nullable*/);
bool base::TaskBase::is_valid (Gio::AsyncResult result, GObject::Object source_object) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, ::GObject* source_object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_is_valid;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none);
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GObject*) (source_object_to_c));
  return _temp_ret;
}
bool base::TaskBase::is_valid (Gio::AsyncResult result) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, ::GObject* source_object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_is_valid;
  auto source_object_to_c = nullptr;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GObject*) (source_object_to_c));
  return _temp_ret;
}

// void g_task_report_error (gpointer source_object /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer callback_data, gpointer source_tag, GError* error /*full*/);
// void g_task_report_error (::GObject* source_object /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* callback_data, void* source_tag, ::GError* error /*full*/);
void base::TaskBase::report_error (GObject::Object source_object, Gio::AsyncReadyCallback callback, void* source_tag, GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data, void* source_tag, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_report_error;
  auto error_to_c = gi::unwrap (std::move(error), gi::transfer_full);
  auto source_tag_to_c = source_tag;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none);
  call_wrap_v ((::GObject*) (source_object_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (void*) (source_tag_to_c), (::GError*) (error_to_c));
}
void base::TaskBase::report_error (Gio::AsyncReadyCallback callback, void* source_tag, GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data, void* source_tag, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_report_error;
  auto error_to_c = gi::unwrap (std::move(error), gi::transfer_full);
  auto source_tag_to_c = source_tag;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto source_object_to_c = nullptr;
  call_wrap_v ((::GObject*) (source_object_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (void*) (source_tag_to_c), (::GError*) (error_to_c));
}

// void g_task_report_new_error (gpointer source_object /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer callback_data, gpointer source_tag, GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// void g_task_report_new_error (::GObject* source_object /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* callback_data, void* source_tag, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_task_attach_source (GTask* task /*none*/, GSource* source /*none*/, GSourceFunc callback /*none*/);
// void g_task_attach_source (::GTask* task /*none*/, ::GSource* source /*none*/, GLib::SourceFunc::cfunction_type callback /*none*/);
// IGNORE; not introspectable, callback misses closure info

// GCancellable* /*none,nullable*/ g_task_get_cancellable (GTask* task /*none*/);
// ::GCancellable* /*none,nullable*/ g_task_get_cancellable (::GTask* task /*none*/);
Gio::Cancellable base::TaskBase::get_cancellable () noexcept
{
  typedef ::GCancellable* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_cancellable;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_task_get_check_cancellable (GTask* task /*none*/);
// gboolean g_task_get_check_cancellable (::GTask* task /*none*/);
bool base::TaskBase::get_check_cancellable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_check_cancellable;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_task_get_completed (GTask* task /*none*/);
// gboolean g_task_get_completed (::GTask* task /*none*/);
bool base::TaskBase::get_completed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_completed;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// GMainContext* /*none*/ g_task_get_context (GTask* task /*none*/);
// ::GMainContext* /*none*/ g_task_get_context (::GTask* task /*none*/);
GLib::MainContext_Ref base::TaskBase::get_context () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_context;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_task_get_name (GTask* task /*none*/);
// const char* /*none,nullable*/ g_task_get_name (::GTask* task /*none*/);
gi::cstring_v base::TaskBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_name;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint g_task_get_priority (GTask* task /*none*/);
// gint g_task_get_priority (::GTask* task /*none*/);
gint base::TaskBase::get_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_priority;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_task_get_return_on_cancel (GTask* task /*none*/);
// gboolean g_task_get_return_on_cancel (::GTask* task /*none*/);
bool base::TaskBase::get_return_on_cancel () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_return_on_cancel;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gpointer /*none,nullable*/ g_task_get_source_object (GTask* task /*none*/);
// ::GObject* /*none,nullable*/ g_task_get_source_object (::GTask* task /*none*/);
GObject::Object base::TaskBase::get_source_object () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_source_object;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gpointer g_task_get_source_tag (GTask* task /*none*/);
// void* g_task_get_source_tag (::GTask* task /*none*/);
gpointer base::TaskBase::get_source_tag () noexcept
{
  typedef void* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_source_tag;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gpointer g_task_get_task_data (GTask* task /*none*/);
// void* g_task_get_task_data (::GTask* task /*none*/);
gpointer base::TaskBase::get_task_data () noexcept
{
  typedef void* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_get_task_data;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_task_had_error (GTask* task /*none*/);
// gboolean g_task_had_error (::GTask* task /*none*/);
bool base::TaskBase::had_error () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_had_error;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_task_propagate_boolean (GTask* task /*none*/, GError ** error);
// gboolean g_task_propagate_boolean (::GTask* task /*none*/, GError ** error);
bool base::TaskBase::propagate_boolean ()
{
  typedef gboolean (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_boolean;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::TaskBase::propagate_boolean (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_boolean;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize g_task_propagate_int (GTask* task /*none*/, GError ** error);
// gssize g_task_propagate_int (::GTask* task /*none*/, GError ** error);
gssize base::TaskBase::propagate_int ()
{
  typedef gssize (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_int;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::TaskBase::propagate_int (GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_int;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gpointer g_task_propagate_pointer (GTask* task /*none*/, GError ** error);
// void* g_task_propagate_pointer (::GTask* task /*none*/, GError ** error);
gpointer base::TaskBase::propagate_pointer ()
{
  typedef void* (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_pointer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
gpointer base::TaskBase::propagate_pointer (GLib::Error * _error) noexcept
{
  typedef void* (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_pointer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_task_propagate_value (GTask* task /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean g_task_propagate_value (::GTask* task /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
bool base::TaskBase::propagate_value (GObject::Value & value)
{
  typedef gboolean (*call_wrap_t) (::GTask* task, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_value;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (::GValue*) ((GValue*) (value).gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::TaskBase::propagate_value (GObject::Value & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_value;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (::GValue*) ((GValue*) (value).gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::TaskBase::propagate_value ()
{
  typedef gboolean (*call_wrap_t) (::GTask* task, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_value;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GObject::Value> base::TaskBase::propagate_value (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_propagate_value;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_task_return_boolean (GTask* task /*none*/, gboolean result);
// void g_task_return_boolean (::GTask* task /*none*/, gboolean result);
void base::TaskBase::return_boolean (gboolean result) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, gboolean result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_return_boolean;
  auto result_to_c = result;
  call_wrap_v ((::GTask*) (gobj_()), (gboolean) (result_to_c));
}

// void g_task_return_error (GTask* task /*none*/, GError* error /*full*/);
// void g_task_return_error (::GTask* task /*none*/, ::GError* error /*full*/);
void base::TaskBase::return_error (GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_return_error;
  auto error_to_c = gi::unwrap (std::move(error), gi::transfer_full);
  call_wrap_v ((::GTask*) (gobj_()), (::GError*) (error_to_c));
}

// gboolean g_task_return_error_if_cancelled (GTask* task /*none*/);
// gboolean g_task_return_error_if_cancelled (::GTask* task /*none*/);
bool base::TaskBase::return_error_if_cancelled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_return_error_if_cancelled;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// void g_task_return_int (GTask* task /*none*/, gssize result);
// void g_task_return_int (::GTask* task /*none*/, gssize result);
void base::TaskBase::return_int (gssize result) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, gssize result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_return_int;
  auto result_to_c = result;
  call_wrap_v ((::GTask*) (gobj_()), (gssize) (result_to_c));
}

// void g_task_return_new_error (GTask* task /*none*/, GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// void g_task_return_new_error (::GTask* task /*none*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_task_return_new_error_literal (GTask* task /*none*/, GQuark domain, gint code, const char* message /*none*/);
// void g_task_return_new_error_literal (::GTask* task /*none*/, ::GQuark domain, gint code, const char* message /*none*/);
void base::TaskBase::return_new_error_literal (::GQuark domain, gint code, const gi::cstring_v message) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, ::GQuark domain, gint code, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_return_new_error_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  auto code_to_c = code;
  auto domain_to_c = domain;
  call_wrap_v ((::GTask*) (gobj_()), (::GQuark) (domain_to_c), (gint) (code_to_c), (const char*) (message_to_c));
}

// void g_task_return_pointer (GTask* task /*none*/, gpointer result, GDestroyNotify result_destroy /*none,nullable*/);
// void g_task_return_pointer (::GTask* task /*none*/, void* result, GLib::DestroyNotify::cfunction_type result_destroy /*none,nullable*/);
// SKIP; callback misses closure info

// void g_task_return_prefixed_error (GTask* task /*none*/, GError* error /*full*/, const char* format /*none*/,  ..._ /*none*/);
// void g_task_return_prefixed_error (::GTask* task /*none*/, ::GError* error /*full*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_task_return_value (GTask* task /*none*/, GValue* result /*none,nullable*/);
// void g_task_return_value (::GTask* task /*none*/, ::GValue* result /*none,nullable*/);
void base::TaskBase::return_value (GObject::Value_Ref result) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, ::GValue* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_return_value;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  call_wrap_v ((::GTask*) (gobj_()), (::GValue*) (result_to_c));
}
void base::TaskBase::return_value () noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, ::GValue* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_return_value;
  auto result_to_c = nullptr;
  call_wrap_v ((::GTask*) (gobj_()), (::GValue*) (result_to_c));
}

// void g_task_run_in_thread (GTask* task /*none*/, GTaskThreadFunc task_func /*none*/);
// void g_task_run_in_thread (::GTask* task /*none*/,  task_func /*none*/);
// SKIP; task_func type  not supported

// void g_task_run_in_thread_sync (GTask* task /*none*/, GTaskThreadFunc task_func /*none*/);
// void g_task_run_in_thread_sync (::GTask* task /*none*/,  task_func /*none*/);
// SKIP; task_func type  not supported

// void g_task_set_check_cancellable (GTask* task /*none*/, gboolean check_cancellable);
// void g_task_set_check_cancellable (::GTask* task /*none*/, gboolean check_cancellable);
void base::TaskBase::set_check_cancellable (gboolean check_cancellable) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, gboolean check_cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_set_check_cancellable;
  auto check_cancellable_to_c = check_cancellable;
  call_wrap_v ((::GTask*) (gobj_()), (gboolean) (check_cancellable_to_c));
}

// void g_task_set_name (GTask* task /*none*/, const gchar* name /*none,nullable*/);
// void g_task_set_name (::GTask* task /*none*/, const char* name /*none,nullable*/);
void base::TaskBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GTask*) (gobj_()), (const char*) (name_to_c));
}
void base::TaskBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GTask*) (gobj_()), (const char*) (name_to_c));
}

// void g_task_set_priority (GTask* task /*none*/, gint priority);
// void g_task_set_priority (::GTask* task /*none*/, gint priority);
void base::TaskBase::set_priority (gint priority) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, gint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_set_priority;
  auto priority_to_c = priority;
  call_wrap_v ((::GTask*) (gobj_()), (gint) (priority_to_c));
}

// gboolean g_task_set_return_on_cancel (GTask* task /*none*/, gboolean return_on_cancel);
// gboolean g_task_set_return_on_cancel (::GTask* task /*none*/, gboolean return_on_cancel);
bool base::TaskBase::set_return_on_cancel (gboolean return_on_cancel) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task, gboolean return_on_cancel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_set_return_on_cancel;
  auto return_on_cancel_to_c = return_on_cancel;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (gboolean) (return_on_cancel_to_c));
  return _temp_ret;
}

// void g_task_set_source_tag (GTask* task /*none*/, gpointer source_tag);
// void g_task_set_source_tag (::GTask* task /*none*/, void* source_tag);
void base::TaskBase::set_source_tag (void* source_tag) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, void* source_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_set_source_tag;
  auto source_tag_to_c = source_tag;
  call_wrap_v ((::GTask*) (gobj_()), (void*) (source_tag_to_c));
}

// void g_task_set_static_name (GTask* task /*none*/, const gchar* name /*none,nullable*/);
// void g_task_set_static_name (::GTask* task /*none*/, const char* name /*none,nullable*/);
void base::TaskBase::set_static_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_set_static_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GTask*) (gobj_()), (const char*) (name_to_c));
}
void base::TaskBase::set_static_name () noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_task_set_static_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GTask*) (gobj_()), (const char*) (name_to_c));
}

// void g_task_set_task_data (GTask* task /*none*/, gpointer task_data, GDestroyNotify task_data_destroy /*none,nullable*/);
// void g_task_set_task_data (::GTask* task /*none*/, void* task_data, GLib::DestroyNotify::cfunction_type task_data_destroy /*none,nullable*/);
// SKIP; callback misses closure info


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/task_extra_def_impl.hpp>)
#include <gio/task_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/task_extra_impl.hpp>)
#include <gio/task_extra_impl.hpp>
#endif
#endif

#endif
