// AUTO-GENERATED

#ifndef _GI_GIO_TASK_HPP_
#define _GI_GIO_TASK_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class Task;

namespace base {


#define GI_GIO_TASK_BASE base::TaskBase
class TaskBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTask BaseObjectType;

TaskBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_task_get_type(); } 

GI_INLINE_DECL Gio::AsyncResult interface_ (gi::interface_tag<Gio::AsyncResult>);

GI_INLINE_DECL operator Gio::AsyncResult ();

// GTask* /*full*/ g_task_new (gpointer source_object /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer callback_data);
// ::GTask* /*full*/ g_task_new (::GObject* source_object /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* callback_data);
static GI_INLINE_DECL Gio::Task new_ (GObject::Object source_object, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL Gio::Task new_ (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_task_is_valid (gpointer result /*none*/, gpointer source_object /*none,nullable*/);
// gboolean g_task_is_valid (::GAsyncResult* result /*none*/, ::GObject* source_object /*none,nullable*/);
static GI_INLINE_DECL bool is_valid (Gio::AsyncResult result, GObject::Object source_object) noexcept;
static GI_INLINE_DECL bool is_valid (Gio::AsyncResult result) noexcept;

// void g_task_report_error (gpointer source_object /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer callback_data, gpointer source_tag, GError* error /*full*/);
// void g_task_report_error (::GObject* source_object /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* callback_data, void* source_tag, ::GError* error /*full*/);
static GI_INLINE_DECL void report_error (GObject::Object source_object, Gio::AsyncReadyCallback callback, void* source_tag, GLib::Error error) noexcept;
static GI_INLINE_DECL void report_error (Gio::AsyncReadyCallback callback, void* source_tag, GLib::Error error) noexcept;

// void g_task_report_new_error (gpointer source_object /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer callback_data, gpointer source_tag, GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// void g_task_report_new_error (::GObject* source_object /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* callback_data, void* source_tag, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_task_attach_source (GTask* task /*none*/, GSource* source /*none*/, GSourceFunc callback /*none*/);
// void g_task_attach_source (::GTask* task /*none*/, ::GSource* source /*none*/, GLib::SourceFunc::cfunction_type callback /*none*/);
// IGNORE; not introspectable, callback misses closure info

// GCancellable* /*none,nullable*/ g_task_get_cancellable (GTask* task /*none*/);
// ::GCancellable* /*none,nullable*/ g_task_get_cancellable (::GTask* task /*none*/);
GI_INLINE_DECL Gio::Cancellable get_cancellable () noexcept;

// gboolean g_task_get_check_cancellable (GTask* task /*none*/);
// gboolean g_task_get_check_cancellable (::GTask* task /*none*/);
GI_INLINE_DECL bool get_check_cancellable () noexcept;

// gboolean g_task_get_completed (GTask* task /*none*/);
// gboolean g_task_get_completed (::GTask* task /*none*/);
GI_INLINE_DECL bool get_completed () noexcept;

// GMainContext* /*none*/ g_task_get_context (GTask* task /*none*/);
// ::GMainContext* /*none*/ g_task_get_context (::GTask* task /*none*/);
GI_INLINE_DECL GLib::MainContext_Ref get_context () noexcept;

// const gchar* /*none,nullable*/ g_task_get_name (GTask* task /*none*/);
// const char* /*none,nullable*/ g_task_get_name (::GTask* task /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gint g_task_get_priority (GTask* task /*none*/);
// gint g_task_get_priority (::GTask* task /*none*/);
GI_INLINE_DECL gint get_priority () noexcept;

// gboolean g_task_get_return_on_cancel (GTask* task /*none*/);
// gboolean g_task_get_return_on_cancel (::GTask* task /*none*/);
GI_INLINE_DECL bool get_return_on_cancel () noexcept;

// gpointer /*none,nullable*/ g_task_get_source_object (GTask* task /*none*/);
// ::GObject* /*none,nullable*/ g_task_get_source_object (::GTask* task /*none*/);
GI_INLINE_DECL GObject::Object get_source_object () noexcept;

// gpointer g_task_get_source_tag (GTask* task /*none*/);
// void* g_task_get_source_tag (::GTask* task /*none*/);
GI_INLINE_DECL gpointer get_source_tag () noexcept;

// gpointer g_task_get_task_data (GTask* task /*none*/);
// void* g_task_get_task_data (::GTask* task /*none*/);
GI_INLINE_DECL gpointer get_task_data () noexcept;

// gboolean g_task_had_error (GTask* task /*none*/);
// gboolean g_task_had_error (::GTask* task /*none*/);
GI_INLINE_DECL bool had_error () noexcept;

// gboolean g_task_propagate_boolean (GTask* task /*none*/, GError ** error);
// gboolean g_task_propagate_boolean (::GTask* task /*none*/, GError ** error);
GI_INLINE_DECL bool propagate_boolean ();
GI_INLINE_DECL bool propagate_boolean (GLib::Error * _error) noexcept;

// gssize g_task_propagate_int (GTask* task /*none*/, GError ** error);
// gssize g_task_propagate_int (::GTask* task /*none*/, GError ** error);
GI_INLINE_DECL gssize propagate_int ();
GI_INLINE_DECL gssize propagate_int (GLib::Error * _error) noexcept;

// gpointer g_task_propagate_pointer (GTask* task /*none*/, GError ** error);
// void* g_task_propagate_pointer (::GTask* task /*none*/, GError ** error);
GI_INLINE_DECL gpointer propagate_pointer ();
GI_INLINE_DECL gpointer propagate_pointer (GLib::Error * _error) noexcept;

// gboolean g_task_propagate_value (GTask* task /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean g_task_propagate_value (::GTask* task /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
GI_INLINE_DECL bool propagate_value (GObject::Value & value);
GI_INLINE_DECL bool propagate_value (GObject::Value & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> propagate_value ();
GI_INLINE_DECL std::tuple<bool, GObject::Value> propagate_value (GLib::Error * _error) noexcept;

// void g_task_return_boolean (GTask* task /*none*/, gboolean result);
// void g_task_return_boolean (::GTask* task /*none*/, gboolean result);
GI_INLINE_DECL void return_boolean (gboolean result) noexcept;

// void g_task_return_error (GTask* task /*none*/, GError* error /*full*/);
// void g_task_return_error (::GTask* task /*none*/, ::GError* error /*full*/);
GI_INLINE_DECL void return_error (GLib::Error error) noexcept;

// gboolean g_task_return_error_if_cancelled (GTask* task /*none*/);
// gboolean g_task_return_error_if_cancelled (::GTask* task /*none*/);
GI_INLINE_DECL bool return_error_if_cancelled () noexcept;

// void g_task_return_int (GTask* task /*none*/, gssize result);
// void g_task_return_int (::GTask* task /*none*/, gssize result);
GI_INLINE_DECL void return_int (gssize result) noexcept;

// void g_task_return_new_error (GTask* task /*none*/, GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// void g_task_return_new_error (::GTask* task /*none*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_task_return_new_error_literal (GTask* task /*none*/, GQuark domain, gint code, const char* message /*none*/);
// void g_task_return_new_error_literal (::GTask* task /*none*/, ::GQuark domain, gint code, const char* message /*none*/);
GI_INLINE_DECL void return_new_error_literal (::GQuark domain, gint code, const gi::cstring_v message) noexcept;

// void g_task_return_pointer (GTask* task /*none*/, gpointer result, GDestroyNotify result_destroy /*none,nullable*/);
// void g_task_return_pointer (::GTask* task /*none*/, void* result, GLib::DestroyNotify::cfunction_type result_destroy /*none,nullable*/);
// SKIP; callback misses closure info

// void g_task_return_prefixed_error (GTask* task /*none*/, GError* error /*full*/, const char* format /*none*/,  ..._ /*none*/);
// void g_task_return_prefixed_error (::GTask* task /*none*/, ::GError* error /*full*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_task_return_value (GTask* task /*none*/, GValue* result /*none,nullable*/);
// void g_task_return_value (::GTask* task /*none*/, ::GValue* result /*none,nullable*/);
GI_INLINE_DECL void return_value (GObject::Value_Ref result) noexcept;
GI_INLINE_DECL void return_value () noexcept;

// void g_task_run_in_thread (GTask* task /*none*/, GTaskThreadFunc task_func /*none*/);
// void g_task_run_in_thread (::GTask* task /*none*/,  task_func /*none*/);
// SKIP; task_func type  not supported

// void g_task_run_in_thread_sync (GTask* task /*none*/, GTaskThreadFunc task_func /*none*/);
// void g_task_run_in_thread_sync (::GTask* task /*none*/,  task_func /*none*/);
// SKIP; task_func type  not supported

// void g_task_set_check_cancellable (GTask* task /*none*/, gboolean check_cancellable);
// void g_task_set_check_cancellable (::GTask* task /*none*/, gboolean check_cancellable);
GI_INLINE_DECL void set_check_cancellable (gboolean check_cancellable) noexcept;

// void g_task_set_name (GTask* task /*none*/, const gchar* name /*none,nullable*/);
// void g_task_set_name (::GTask* task /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// void g_task_set_priority (GTask* task /*none*/, gint priority);
// void g_task_set_priority (::GTask* task /*none*/, gint priority);
GI_INLINE_DECL void set_priority (gint priority) noexcept;

// gboolean g_task_set_return_on_cancel (GTask* task /*none*/, gboolean return_on_cancel);
// gboolean g_task_set_return_on_cancel (::GTask* task /*none*/, gboolean return_on_cancel);
GI_INLINE_DECL bool set_return_on_cancel (gboolean return_on_cancel) noexcept;

// void g_task_set_source_tag (GTask* task /*none*/, gpointer source_tag);
// void g_task_set_source_tag (::GTask* task /*none*/, void* source_tag);
GI_INLINE_DECL void set_source_tag (void* source_tag) noexcept;

// void g_task_set_static_name (GTask* task /*none*/, const gchar* name /*none,nullable*/);
// void g_task_set_static_name (::GTask* task /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_static_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_static_name () noexcept;

// void g_task_set_task_data (GTask* task /*none*/, gpointer task_data, GDestroyNotify task_data_destroy /*none,nullable*/);
// void g_task_set_task_data (::GTask* task /*none*/, void* task_data, GLib::DestroyNotify::cfunction_type task_data_destroy /*none,nullable*/);
// SKIP; callback misses closure info

gi::property_proxy<bool, base::TaskBase> property_completed()
{ return gi::property_proxy<bool, base::TaskBase> (*this, "completed"); }
const gi::property_proxy<bool, base::TaskBase> property_completed() const
{ return gi::property_proxy<bool, base::TaskBase> (*this, "completed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/task_extra_def.hpp>)
#include <gio/task_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/task_extra.hpp>)
#include <gio/task_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Task : public GI_GIO_TASK_BASE
{ typedef GI_GIO_TASK_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTask>
{ typedef Gio::Task type; }; 

} // namespace repository

} // namespace gi

#endif
