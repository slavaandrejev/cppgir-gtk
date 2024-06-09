// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEASYNCRESULT_HPP_
#define _GI_GIO_SIMPLEASYNCRESULT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class SimpleAsyncResult;

namespace base {


#define GI_GIO_SIMPLEASYNCRESULT_BASE base::SimpleAsyncResultBase
class SimpleAsyncResultBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSimpleAsyncResult BaseObjectType;

SimpleAsyncResultBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_simple_async_result_get_type(); } 

GI_INLINE_DECL Gio::AsyncResult interface_ (gi::interface_tag<Gio::AsyncResult>);

GI_INLINE_DECL operator Gio::AsyncResult ();

// GSimpleAsyncResult* /*full*/ g_simple_async_result_new (GObject* source_object /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data, gpointer source_tag);
// ::GSimpleAsyncResult* /*full*/ g_simple_async_result_new (::GObject* source_object /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data, void* source_tag);
// IGNORE; deprecated

// GSimpleAsyncResult* /*full*/ g_simple_async_result_new_error (GObject* source_object /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data, GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// ::GSimpleAsyncResult* /*full*/ g_simple_async_result_new_error (::GObject* source_object /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; deprecated, varargs not supported

// GSimpleAsyncResult* /*full*/ g_simple_async_result_new_from_error (GObject* source_object /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data, const GError* error /*none*/);
// ::GSimpleAsyncResult* /*full*/ g_simple_async_result_new_from_error (::GObject* source_object /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data, const ::GError* error /*none*/);
// IGNORE; deprecated

// GSimpleAsyncResult* /*full*/ g_simple_async_result_new_take_error (GObject* source_object /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data, GError* error /*none*/);
// ::GSimpleAsyncResult* /*full*/ g_simple_async_result_new_take_error (::GObject* source_object /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data, ::GError* error /*none*/);
// IGNORE; deprecated

// gboolean g_simple_async_result_is_valid (GAsyncResult* result /*none*/, GObject* source /*none,nullable*/, gpointer source_tag);
// gboolean g_simple_async_result_is_valid (::GAsyncResult* result /*none*/, ::GObject* source /*none,nullable*/, void* source_tag);
// IGNORE; deprecated

// void g_simple_async_result_complete (GSimpleAsyncResult* simple /*none*/);
// void g_simple_async_result_complete (::GSimpleAsyncResult* simple /*none*/);
// IGNORE; deprecated

// void g_simple_async_result_complete_in_idle (GSimpleAsyncResult* simple /*none*/);
// void g_simple_async_result_complete_in_idle (::GSimpleAsyncResult* simple /*none*/);
// IGNORE; deprecated

// gboolean g_simple_async_result_get_op_res_gboolean (GSimpleAsyncResult* simple /*none*/);
// gboolean g_simple_async_result_get_op_res_gboolean (::GSimpleAsyncResult* simple /*none*/);
// IGNORE; deprecated

// gpointer g_simple_async_result_get_op_res_gpointer (GSimpleAsyncResult* simple /*none*/);
// void* g_simple_async_result_get_op_res_gpointer (::GSimpleAsyncResult* simple /*none*/);
// IGNORE; deprecated

// gssize g_simple_async_result_get_op_res_gssize (GSimpleAsyncResult* simple /*none*/);
// gssize g_simple_async_result_get_op_res_gssize (::GSimpleAsyncResult* simple /*none*/);
// IGNORE; deprecated

// gpointer g_simple_async_result_get_source_tag (GSimpleAsyncResult* simple /*none*/);
// void* g_simple_async_result_get_source_tag (::GSimpleAsyncResult* simple /*none*/);
// IGNORE; deprecated

// gboolean g_simple_async_result_propagate_error (GSimpleAsyncResult* simple /*none*/, GError ** error);
// gboolean g_simple_async_result_propagate_error (::GSimpleAsyncResult* simple /*none*/, GError ** error);
// IGNORE; deprecated

// void g_simple_async_result_run_in_thread (GSimpleAsyncResult* simple /*none*/, GSimpleAsyncThreadFunc func /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/);
// void g_simple_async_result_run_in_thread (::GSimpleAsyncResult* simple /*none*/,  func /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/);
// IGNORE; deprecated

// void g_simple_async_result_set_check_cancellable (GSimpleAsyncResult* simple /*none*/, GCancellable* check_cancellable /*none,nullable*/);
// void g_simple_async_result_set_check_cancellable (::GSimpleAsyncResult* simple /*none*/, ::GCancellable* check_cancellable /*none,nullable*/);
// IGNORE; deprecated

// void g_simple_async_result_set_error (GSimpleAsyncResult* simple /*none*/, GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// void g_simple_async_result_set_error (::GSimpleAsyncResult* simple /*none*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; deprecated, varargs not supported

// void g_simple_async_result_set_error_va (GSimpleAsyncResult* simple /*none*/, GQuark domain, gint code, const char* format /*none*/, va_list args /*none*/);
// void g_simple_async_result_set_error_va (::GSimpleAsyncResult* simple /*none*/, ::GQuark domain, gint code, const char* format /*none*/,  args /*none*/);
// IGNORE; deprecated

// void g_simple_async_result_set_from_error (GSimpleAsyncResult* simple /*none*/, const GError* error /*none*/);
// void g_simple_async_result_set_from_error (::GSimpleAsyncResult* simple /*none*/, const ::GError* error /*none*/);
// IGNORE; deprecated

// void g_simple_async_result_set_handle_cancellation (GSimpleAsyncResult* simple /*none*/, gboolean handle_cancellation);
// void g_simple_async_result_set_handle_cancellation (::GSimpleAsyncResult* simple /*none*/, gboolean handle_cancellation);
// IGNORE; deprecated

// void g_simple_async_result_set_op_res_gboolean (GSimpleAsyncResult* simple /*none*/, gboolean op_res);
// void g_simple_async_result_set_op_res_gboolean (::GSimpleAsyncResult* simple /*none*/, gboolean op_res);
// IGNORE; deprecated

// void g_simple_async_result_set_op_res_gpointer (GSimpleAsyncResult* simple /*none*/, gpointer op_res, GDestroyNotify destroy_op_res /*none*/);
// void g_simple_async_result_set_op_res_gpointer (::GSimpleAsyncResult* simple /*none*/, void* op_res, GLib::DestroyNotify::cfunction_type destroy_op_res /*none*/);
// IGNORE; deprecated

// void g_simple_async_result_set_op_res_gssize (GSimpleAsyncResult* simple /*none*/, gssize op_res);
// void g_simple_async_result_set_op_res_gssize (::GSimpleAsyncResult* simple /*none*/, gssize op_res);
// IGNORE; deprecated

// void g_simple_async_result_take_error (GSimpleAsyncResult* simple /*none*/, GError* error /*none*/);
// void g_simple_async_result_take_error (::GSimpleAsyncResult* simple /*none*/, ::GError* error /*none*/);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleasyncresult_extra_def.hpp>)
#include <gio/simpleasyncresult_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleasyncresult_extra.hpp>)
#include <gio/simpleasyncresult_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SimpleAsyncResult : public GI_GIO_SIMPLEASYNCRESULT_BASE
{ typedef GI_GIO_SIMPLEASYNCRESULT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSimpleAsyncResult>
{ typedef Gio::SimpleAsyncResult type; }; 

} // namespace repository

} // namespace gi

#endif
