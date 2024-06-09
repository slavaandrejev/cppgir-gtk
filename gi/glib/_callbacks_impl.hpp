// AUTO-GENERATED

#ifndef _GI_GLIB__CALLBACKS_IMPL_HPP_
#define _GI_GLIB__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

// typedef void (*GChildWatchFunc) (GPid pid, gint wait_status, gpointer user_data);
// typedef void (*GChildWatchFunc) (::GPid pid, gint wait_status, void* user_data);
namespace internal {

void ChildWatchFunc_CF (::GPid pid, gint wait_status, ChildWatchFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto wait_status_to_c = wait_status;
  auto pid_to_c = pid;
  _call ((::GPid) (pid_to_c), (gint) (wait_status_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GClearHandleFunc) (guint handle_id);
// typedef void (*GClearHandleFunc) (guint handle_id);
// SKIP; not a callback since no user_data

// typedef gint (*GCompareDataFunc) (gconstpointer a, gconstpointer b, gpointer user_data);
// typedef gint (*GCompareDataFunc) (const void* a, const void* b, void* user_data);
namespace internal {

gint CompareDataFunc_CF (const void* a, const void* b, CompareDataFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = _call ((const void*) (a_to_c), (const void*) (b_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gint (*GCompareFunc) (gconstpointer a, gconstpointer b);
// typedef gint (*GCompareFunc) (const void* a, const void* b);
// SKIP; not a callback since no user_data

// typedef gpointer (*GCopyFunc) (gconstpointer src, gpointer data);
// typedef void* (*GCopyFunc) (const void* src, void* data);
namespace internal {

gpointer CopyFunc_CF (const void* src, CopyFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto src_to_c = src;
  auto _temp_ret = _call ((const void*) (src_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GDataForeachFunc) (GQuark key_id, gpointer data, gpointer user_data);
// typedef void (*GDataForeachFunc) (::GQuark key_id, void* data, void* user_data);
namespace internal {

void DataForeachFunc_CF (::GQuark key_id, void* data, DataForeachFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto data_to_c = data;
  auto key_id_to_c = key_id;
  _call ((::GQuark) (key_id_to_c), (void*) (data_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gpointer (*GDuplicateFunc) (gpointer data, gpointer user_data);
// typedef void* (*GDuplicateFunc) (void* data, void* user_data);
namespace internal {

gpointer DuplicateFunc_CF (void* data, DuplicateFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto data_to_c = data;
  auto _temp_ret = _call ((void*) (data_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GEqualFunc) (gconstpointer a, gconstpointer b);
// typedef gboolean (*GEqualFunc) (const void* a, const void* b);
// SKIP; not a callback since no user_data

// typedef gboolean (*GEqualFuncFull) (gconstpointer a, gconstpointer b, gpointer user_data);
// typedef gboolean (*GEqualFuncFull) (const void* a, const void* b, void* user_data);
namespace internal {

bool EqualFuncFull_CF (const void* a, const void* b, EqualFuncFull_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = _call ((const void*) (a_to_c), (const void*) (b_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GErrorClearFunc) (GError* error /*none*/);
// typedef void (*GErrorClearFunc) (::GError* error /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GErrorCopyFunc) (const GError* src_error /*none*/, GError* dest_error /*none*/);
// typedef void (*GErrorCopyFunc) (const ::GError* src_error /*none*/, ::GError* dest_error /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GErrorInitFunc) (GError* error /*none*/);
// typedef void (*GErrorInitFunc) (::GError* error /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GFreeFunc) (gpointer data);
// typedef void (*GFreeFunc) (void* data);
namespace internal {

void FreeFunc_CF (FreeFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  _call ((void*) (data_to_c));
}
} // namespace internal


// typedef void (*GFunc) (gpointer data, gpointer user_data);
// typedef void (*GFunc) (void* data, void* user_data);
namespace internal {

void Func_CF (void* data, Func_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto data_to_c = data;
  _call ((void*) (data_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GHFunc) (gpointer key, gpointer value, gpointer user_data);
// typedef void (*GHFunc) (void* key, void* value, void* user_data);
namespace internal {

void HFunc_CF (void* key, void* value, HFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto value_to_c = value;
  auto key_to_c = key;
  _call ((void*) (key_to_c), (void*) (value_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gboolean (*GHRFunc) (gpointer key, gpointer value, gpointer user_data);
// typedef gboolean (*GHRFunc) (void* key, void* value, void* user_data);
namespace internal {

bool HRFunc_CF (void* key, void* value, HRFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto value_to_c = value;
  auto key_to_c = key;
  auto _temp_ret = _call ((void*) (key_to_c), (void*) (value_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef guint (*GHashFunc) (gconstpointer key);
// typedef guint (*GHashFunc) (const void* key);
// SKIP; not a callback since no user_data

// typedef gboolean (*GHookCheckFunc) (gpointer data);
// typedef gboolean (*GHookCheckFunc) (void* data);
namespace internal {

bool HookCheckFunc_CF (HookCheckFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto _temp_ret = _call ((void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GHookCheckMarshaller) (GHook* hook /*none*/, gpointer marshal_data);
// typedef gboolean (*GHookCheckMarshaller) (::GHook* hook /*none*/, void* marshal_data);
namespace internal {

bool HookCheckMarshaller_CF (GLib::Hook_Ref hook, HookCheckMarshaller_CF_CType _call, gpointer marshal_data) noexcept
{
  auto marshal_data_to_c = marshal_data;
  auto hook_to_c = gi::unwrap (hook, gi::transfer_none);
  auto _temp_ret = _call ((::GHook*) (hook_to_c), (void*) (marshal_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gint (*GHookCompareFunc) (GHook* new_hook /*none*/, GHook* sibling /*none*/);
// typedef gint (*GHookCompareFunc) (::GHook* new_hook /*none*/, ::GHook* sibling /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GHookFinalizeFunc) (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// typedef void (*GHookFinalizeFunc) (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
// SKIP; not a callback since no user_data

// typedef gboolean (*GHookFindFunc) (GHook* hook /*none*/, gpointer data);
// typedef gboolean (*GHookFindFunc) (::GHook* hook /*none*/, void* data);
namespace internal {

bool HookFindFunc_CF (GLib::Hook_Ref hook, HookFindFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto hook_to_c = gi::unwrap (hook, gi::transfer_none);
  auto _temp_ret = _call ((::GHook*) (hook_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GHookFunc) (gpointer data);
// typedef void (*GHookFunc) (void* data);
namespace internal {

void HookFunc_CF (HookFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  _call ((void*) (data_to_c));
}
} // namespace internal


// typedef void (*GHookMarshaller) (GHook* hook /*none*/, gpointer marshal_data);
// typedef void (*GHookMarshaller) (::GHook* hook /*none*/, void* marshal_data);
namespace internal {

void HookMarshaller_CF (GLib::Hook_Ref hook, HookMarshaller_CF_CType _call, gpointer marshal_data) noexcept
{
  auto marshal_data_to_c = marshal_data;
  auto hook_to_c = gi::unwrap (hook, gi::transfer_none);
  _call ((::GHook*) (hook_to_c), (void*) (marshal_data_to_c));
}
} // namespace internal


// typedef gboolean (*GIOFunc) (GIOChannel* source /*none*/, GIOCondition condition, gpointer data);
// typedef gboolean (*GIOFunc) (::GIOChannel* source /*none*/, ::GIOCondition condition, void* data);
namespace internal {

bool IOFunc_CF (GLib::IOChannel_Ref source, GLib::IOCondition condition, IOFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto condition_to_c = gi::unwrap (condition);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  auto _temp_ret = _call ((::GIOChannel*) (source_to_c), (::GIOCondition) (condition_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GLogFunc) (const gchar* log_domain /*none*/, GLogLevelFlags log_level, const gchar* message /*none*/, gpointer user_data);
// typedef void (*GLogFunc) (const char* log_domain /*none*/, ::GLogLevelFlags log_level, const char* message /*none*/, void* user_data);
namespace internal {

void LogFunc_CF (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v message, LogFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  _call ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (message_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef GLogWriterOutput (*GLogWriterFunc) (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gpointer user_data);
// typedef ::GLogWriterOutput (*GLogWriterFunc) (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, void* user_data);
// SKIP; fields in boxed array not supported (depth 1)

// typedef void (*GNodeForeachFunc) (GNode* node /*none*/, gpointer data);
// typedef void (*GNodeForeachFunc) (::GNode* node /*none*/, void* data);
namespace internal {

void NodeForeachFunc_CF (GLib::Node_Ref node, NodeForeachFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto node_to_c = gi::unwrap (node, gi::transfer_none);
  _call ((::GNode*) (node_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef gboolean (*GNodeTraverseFunc) (GNode* node /*none*/, gpointer data);
// typedef gboolean (*GNodeTraverseFunc) (::GNode* node /*none*/, void* data);
namespace internal {

bool NodeTraverseFunc_CF (GLib::Node_Ref node, NodeTraverseFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto node_to_c = gi::unwrap (node, gi::transfer_none);
  auto _temp_ret = _call ((::GNode*) (node_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GOptionArgFunc) (const gchar* option_name /*none*/, const gchar* value /*none*/, gpointer data, GError ** error);
// typedef gboolean (*GOptionArgFunc) (const char* option_name /*none*/, const char* value /*none*/, void* data, GError ** error);
namespace internal {

bool OptionArgFunc_CF (const gi::cstring_v option_name, const gi::cstring_v value, GLib::Error * _error, OptionArgFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto option_name_to_c = gi::unwrap (option_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = _call ((const char*) (option_name_to_c), (const char*) (value_to_c), (void*) (data_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
} // namespace internal


// typedef void (*GOptionErrorFunc) (GOptionContext* context /*none*/, GOptionGroup* group /*none*/, gpointer data, GError ** error);
// typedef void (*GOptionErrorFunc) ( context /*none*/, ::GOptionGroup* group /*none*/, void* data, GError ** error);
// SKIP; context type  not supported

// typedef gboolean (*GOptionParseFunc) (GOptionContext* context /*none*/, GOptionGroup* group /*none*/, gpointer data, GError ** error);
// typedef gboolean (*GOptionParseFunc) ( context /*none*/, ::GOptionGroup* group /*none*/, void* data, GError ** error);
// SKIP; context type  not supported

// typedef gint (*GPollFunc) (GPollFD* ufds /*none*/, guint nfsd, gint timeout_);
// typedef gint (*GPollFunc) (::GPollFD* ufds /*none*/, guint nfsd, gint timeout_);
// SKIP; not a callback since no user_data

// typedef void (*GPrintFunc) (const gchar* string /*none*/);
// typedef void (*GPrintFunc) (const char* string /*none*/);
// SKIP; not a callback since no user_data

// typedef gboolean (*GRegexEvalCallback) (const GMatchInfo* match_info /*none*/, GString* result /*none*/, gpointer user_data);
// typedef gboolean (*GRegexEvalCallback) (const ::GMatchInfo* match_info /*none*/, ::GString* result /*none*/, void* user_data);
namespace internal {

bool RegexEvalCallback_CF (const GLib::MatchInfo_Ref match_info, GLib::String_Ref result, RegexEvalCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto match_info_to_c = gi::unwrap (match_info, gi::transfer_none);
  auto _temp_ret = _call ((const ::GMatchInfo*) (match_info_to_c), (::GString*) (result_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GScannerMsgFunc) (GScanner* scanner /*none*/, gchar* message /*none*/, gboolean error);
// typedef void (*GScannerMsgFunc) (::GScanner* scanner /*none*/, char* message /*none*/, gboolean error);
// SKIP; not a callback since no user_data

// typedef gint (*GSequenceIterCompareFunc) (GSequenceIter* a /*none*/, GSequenceIter* b /*none*/, gpointer data);
// typedef gint (*GSequenceIterCompareFunc) ( a /*none*/,  b /*none*/, void* data);
// SKIP; b type  not supported, a type  not supported

// typedef void (*GSourceDisposeFunc) (GSource* source /*none*/);
// typedef void (*GSourceDisposeFunc) (::GSource* source /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GSourceDummyMarshal) ();
// typedef void (*GSourceDummyMarshal) ();
// SKIP; not a callback since no user_data

// typedef gboolean (*GSourceFunc) (gpointer user_data);
// typedef gboolean (*GSourceFunc) (void* user_data);
namespace internal {

bool SourceFunc_CF (SourceFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto _temp_ret = _call ((void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GSourceOnceFunc) (gpointer user_data);
// typedef void (*GSourceOnceFunc) (void* user_data);
namespace internal {

void SourceOnceFunc_CF (SourceOnceFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  _call ((void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GSpawnChildSetupFunc) (gpointer data);
// typedef void (*GSpawnChildSetupFunc) (void* data);
namespace internal {

void SpawnChildSetupFunc_CF (SpawnChildSetupFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  _call ((void*) (data_to_c));
}
} // namespace internal


// typedef void (*GTestDataFunc) (gconstpointer user_data);
// typedef void (*GTestDataFunc) (const void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef void (*GTestFixtureFunc) (gpointer fixture, gconstpointer user_data);
// typedef void (*GTestFixtureFunc) (void* fixture, const void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef void (*GTestFunc) ();
// typedef void (*GTestFunc) ();
// SKIP; not a callback since no user_data

// typedef gboolean (*GTestLogFatalFunc) (const gchar* log_domain /*none*/, GLogLevelFlags log_level, const gchar* message /*none*/, gpointer user_data);
// typedef gboolean (*GTestLogFatalFunc) (const char* log_domain /*none*/, ::GLogLevelFlags log_level, const char* message /*none*/, void* user_data);
namespace internal {

bool TestLogFatalFunc_CF (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v message, TestLogFatalFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none);
  auto _temp_ret = _call ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (message_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gpointer (*GThreadFunc) (gpointer data);
// typedef void* (*GThreadFunc) (void* data);
namespace internal {

gpointer ThreadFunc_CF (ThreadFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto _temp_ret = _call ((void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef const gchar* /*none*/ (*GTranslateFunc) (const gchar* str /*none*/, gpointer data);
// typedef const char* /*none*/ (*GTranslateFunc) (const char* str /*none*/, void* data);
namespace internal {

gi::cstring_v TranslateFunc_CF (const gi::cstring_v str, TranslateFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = _call ((const char*) (str_to_c), (void*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
} // namespace internal


// typedef gboolean (*GTraverseFunc) (gpointer key, gpointer value, gpointer data);
// typedef gboolean (*GTraverseFunc) (void* key, void* value, void* data);
namespace internal {

bool TraverseFunc_CF (void* key, void* value, TraverseFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto value_to_c = value;
  auto key_to_c = key;
  auto _temp_ret = _call ((void*) (key_to_c), (void*) (value_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GTraverseNodeFunc) (GTreeNode* node /*none*/, gpointer data);
// typedef gboolean (*GTraverseNodeFunc) ( node /*none*/, void* data);
// SKIP; node type  not supported

// typedef gboolean (*GUnixFDSourceFunc) (gint fd, GIOCondition condition, gpointer user_data);
// typedef gboolean (*GUnixFDSourceFunc) (gint fd, ::GIOCondition condition, void* user_data);
namespace internal {

bool UnixFDSourceFunc_CF (gint fd, GLib::IOCondition condition, UnixFDSourceFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto condition_to_c = gi::unwrap (condition);
  auto fd_to_c = fd;
  auto _temp_ret = _call ((gint) (fd_to_c), (::GIOCondition) (condition_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GVoidFunc) ();
// typedef void (*GVoidFunc) ();
// SKIP; not a callback since no user_data

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
