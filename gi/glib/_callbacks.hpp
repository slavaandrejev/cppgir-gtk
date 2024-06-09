// AUTO-GENERATED

#ifndef _GI_GLIB__CALLBACKS_HPP_
#define _GI_GLIB__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace GLib {

class Error;
class Error_Ref;
class Hook;
class HookList;
class HookList_Ref;
class Hook_Ref;
class IOChannel;
class IOChannel_Ref;
class LogField;
class LogField_Ref;
class MatchInfo;
class MatchInfo_Ref;
class Node;
class Node_Ref;
class OptionGroup;
class OptionGroup_Ref;
class PollFD;
class PollFD_Ref;
class Scanner;
class Scanner_Ref;
class Source;
class Source_Ref;
class String;
class String_Ref;

// typedef void (*GChildWatchFunc) (GPid pid, gint wait_status, gpointer user_data);
// typedef void (*GChildWatchFunc) (::GPid pid, gint wait_status, void* user_data);
namespace internal {

typedef void (*ChildWatchFunc_CF_CType) (::GPid pid, gint wait_status, void* user_data);
GI_INLINE_DECL void ChildWatchFunc_CF (::GPid pid, gint wait_status, ChildWatchFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ChildWatchFunc_CB_Trait, ChildWatchFunc_CF_CType, ChildWatchFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(::GPid pid, gint wait_status), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> ChildWatchFunc;

// typedef void (*GClearHandleFunc) (guint handle_id);
// typedef void (*GClearHandleFunc) (guint handle_id);
// SKIP; not a callback since no user_data

// typedef gint (*GCompareDataFunc) (gconstpointer a, gconstpointer b, gpointer user_data);
// typedef gint (*GCompareDataFunc) (const void* a, const void* b, void* user_data);
namespace internal {

typedef gint (*CompareDataFunc_CF_CType) (const void* a, const void* b, void* user_data);
GI_INLINE_DECL gint CompareDataFunc_CF (const void* a, const void* b, CompareDataFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(CompareDataFunc_CB_Trait, CompareDataFunc_CF_CType, CompareDataFunc_CF);
} // namespace internal

typedef gi::detail::callback<gint(const void* a, const void* b), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> CompareDataFunc;

// typedef gint (*GCompareFunc) (gconstpointer a, gconstpointer b);
// typedef gint (*GCompareFunc) (const void* a, const void* b);
// SKIP; not a callback since no user_data

// typedef gpointer (*GCopyFunc) (gconstpointer src, gpointer data);
// typedef void* (*GCopyFunc) (const void* src, void* data);
namespace internal {

typedef void* (*CopyFunc_CF_CType) (const void* src, void* data);
GI_INLINE_DECL gpointer CopyFunc_CF (const void* src, CopyFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(CopyFunc_CB_Trait, CopyFunc_CF_CType, CopyFunc_CF);
} // namespace internal

typedef gi::detail::callback<gpointer(const void* src), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> CopyFunc;

// typedef void (*GDataForeachFunc) (GQuark key_id, gpointer data, gpointer user_data);
// typedef void (*GDataForeachFunc) (::GQuark key_id, void* data, void* user_data);
namespace internal {

typedef void (*DataForeachFunc_CF_CType) (::GQuark key_id, void* data, void* user_data);
GI_INLINE_DECL void DataForeachFunc_CF (::GQuark key_id, void* data, DataForeachFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DataForeachFunc_CB_Trait, DataForeachFunc_CF_CType, DataForeachFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(::GQuark key_id, void* data), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> DataForeachFunc;

// typedef gpointer (*GDuplicateFunc) (gpointer data, gpointer user_data);
// typedef void* (*GDuplicateFunc) (void* data, void* user_data);
namespace internal {

typedef void* (*DuplicateFunc_CF_CType) (void* data, void* user_data);
GI_INLINE_DECL gpointer DuplicateFunc_CF (void* data, DuplicateFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DuplicateFunc_CB_Trait, DuplicateFunc_CF_CType, DuplicateFunc_CF);
} // namespace internal

typedef gi::detail::callback<gpointer(void* data), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> DuplicateFunc;

// typedef gboolean (*GEqualFunc) (gconstpointer a, gconstpointer b);
// typedef gboolean (*GEqualFunc) (const void* a, const void* b);
// SKIP; not a callback since no user_data

// typedef gboolean (*GEqualFuncFull) (gconstpointer a, gconstpointer b, gpointer user_data);
// typedef gboolean (*GEqualFuncFull) (const void* a, const void* b, void* user_data);
namespace internal {

typedef gboolean (*EqualFuncFull_CF_CType) (const void* a, const void* b, void* user_data);
GI_INLINE_DECL bool EqualFuncFull_CF (const void* a, const void* b, EqualFuncFull_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(EqualFuncFull_CB_Trait, EqualFuncFull_CF_CType, EqualFuncFull_CF);
} // namespace internal

typedef gi::detail::callback<bool(const void* a, const void* b), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> EqualFuncFull;

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

typedef void (*FreeFunc_CF_CType) (void* data);
GI_INLINE_DECL void FreeFunc_CF (FreeFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FreeFunc_CB_Trait, FreeFunc_CF_CType, FreeFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(), gi::transfer_full_t, std::tuple<>> FreeFunc;

// typedef void (*GFunc) (gpointer data, gpointer user_data);
// typedef void (*GFunc) (void* data, void* user_data);
namespace internal {

typedef void (*Func_CF_CType) (void* data, void* user_data);
GI_INLINE_DECL void Func_CF (void* data, Func_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(Func_CB_Trait, Func_CF_CType, Func_CF);
} // namespace internal

typedef gi::detail::callback<void(void* data), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> Func;

// typedef void (*GHFunc) (gpointer key, gpointer value, gpointer user_data);
// typedef void (*GHFunc) (void* key, void* value, void* user_data);
namespace internal {

typedef void (*HFunc_CF_CType) (void* key, void* value, void* user_data);
GI_INLINE_DECL void HFunc_CF (void* key, void* value, HFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(HFunc_CB_Trait, HFunc_CF_CType, HFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(void* key, void* value), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> HFunc;

// typedef gboolean (*GHRFunc) (gpointer key, gpointer value, gpointer user_data);
// typedef gboolean (*GHRFunc) (void* key, void* value, void* user_data);
namespace internal {

typedef gboolean (*HRFunc_CF_CType) (void* key, void* value, void* user_data);
GI_INLINE_DECL bool HRFunc_CF (void* key, void* value, HRFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(HRFunc_CB_Trait, HRFunc_CF_CType, HRFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(void* key, void* value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> HRFunc;

// typedef guint (*GHashFunc) (gconstpointer key);
// typedef guint (*GHashFunc) (const void* key);
// SKIP; not a callback since no user_data

// typedef gboolean (*GHookCheckFunc) (gpointer data);
// typedef gboolean (*GHookCheckFunc) (void* data);
namespace internal {

typedef gboolean (*HookCheckFunc_CF_CType) (void* data);
GI_INLINE_DECL bool HookCheckFunc_CF (HookCheckFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(HookCheckFunc_CB_Trait, HookCheckFunc_CF_CType, HookCheckFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(), gi::transfer_none_t, std::tuple<>> HookCheckFunc;

// typedef gboolean (*GHookCheckMarshaller) (GHook* hook /*none*/, gpointer marshal_data);
// typedef gboolean (*GHookCheckMarshaller) (::GHook* hook /*none*/, void* marshal_data);
namespace internal {

typedef gboolean (*HookCheckMarshaller_CF_CType) (::GHook* hook, void* marshal_data);
GI_INLINE_DECL bool HookCheckMarshaller_CF (GLib::Hook_Ref hook, HookCheckMarshaller_CF_CType _call, gpointer marshal_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(HookCheckMarshaller_CB_Trait, HookCheckMarshaller_CF_CType, HookCheckMarshaller_CF);
} // namespace internal

typedef gi::detail::callback<bool(GLib::Hook_Ref hook), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> HookCheckMarshaller;

// typedef gint (*GHookCompareFunc) (GHook* new_hook /*none*/, GHook* sibling /*none*/);
// typedef gint (*GHookCompareFunc) (::GHook* new_hook /*none*/, ::GHook* sibling /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GHookFinalizeFunc) (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// typedef void (*GHookFinalizeFunc) (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
// SKIP; not a callback since no user_data

// typedef gboolean (*GHookFindFunc) (GHook* hook /*none*/, gpointer data);
// typedef gboolean (*GHookFindFunc) (::GHook* hook /*none*/, void* data);
namespace internal {

typedef gboolean (*HookFindFunc_CF_CType) (::GHook* hook, void* data);
GI_INLINE_DECL bool HookFindFunc_CF (GLib::Hook_Ref hook, HookFindFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(HookFindFunc_CB_Trait, HookFindFunc_CF_CType, HookFindFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(GLib::Hook_Ref hook), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> HookFindFunc;

// typedef void (*GHookFunc) (gpointer data);
// typedef void (*GHookFunc) (void* data);
namespace internal {

typedef void (*HookFunc_CF_CType) (void* data);
GI_INLINE_DECL void HookFunc_CF (HookFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(HookFunc_CB_Trait, HookFunc_CF_CType, HookFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(), gi::transfer_full_t, std::tuple<>> HookFunc;

// typedef void (*GHookMarshaller) (GHook* hook /*none*/, gpointer marshal_data);
// typedef void (*GHookMarshaller) (::GHook* hook /*none*/, void* marshal_data);
namespace internal {

typedef void (*HookMarshaller_CF_CType) (::GHook* hook, void* marshal_data);
GI_INLINE_DECL void HookMarshaller_CF (GLib::Hook_Ref hook, HookMarshaller_CF_CType _call, gpointer marshal_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(HookMarshaller_CB_Trait, HookMarshaller_CF_CType, HookMarshaller_CF);
} // namespace internal

typedef gi::detail::callback<void(GLib::Hook_Ref hook), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> HookMarshaller;

// typedef gboolean (*GIOFunc) (GIOChannel* source /*none*/, GIOCondition condition, gpointer data);
// typedef gboolean (*GIOFunc) (::GIOChannel* source /*none*/, ::GIOCondition condition, void* data);
namespace internal {

typedef gboolean (*IOFunc_CF_CType) (::GIOChannel* source, ::GIOCondition condition, void* data);
GI_INLINE_DECL bool IOFunc_CF (GLib::IOChannel_Ref source, GLib::IOCondition condition, IOFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(IOFunc_CB_Trait, IOFunc_CF_CType, IOFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(GLib::IOChannel_Ref source, GLib::IOCondition condition), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> IOFunc;

// typedef void (*GLogFunc) (const gchar* log_domain /*none*/, GLogLevelFlags log_level, const gchar* message /*none*/, gpointer user_data);
// typedef void (*GLogFunc) (const char* log_domain /*none*/, ::GLogLevelFlags log_level, const char* message /*none*/, void* user_data);
namespace internal {

typedef void (*LogFunc_CF_CType) (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* user_data);
GI_INLINE_DECL void LogFunc_CF (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v message, LogFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(LogFunc_CB_Trait, LogFunc_CF_CType, LogFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v message), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> LogFunc;

// typedef GLogWriterOutput (*GLogWriterFunc) (GLogLevelFlags log_level, const GLogField* fields /*none*/, gsize n_fields, gpointer user_data);
// typedef ::GLogWriterOutput (*GLogWriterFunc) (::GLogLevelFlags log_level, const ::GLogField** fields /*none*/, gsize n_fields, void* user_data);
// SKIP; fields in boxed array not supported (depth 1)

// typedef void (*GNodeForeachFunc) (GNode* node /*none*/, gpointer data);
// typedef void (*GNodeForeachFunc) (::GNode* node /*none*/, void* data);
namespace internal {

typedef void (*NodeForeachFunc_CF_CType) (::GNode* node, void* data);
GI_INLINE_DECL void NodeForeachFunc_CF (GLib::Node_Ref node, NodeForeachFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(NodeForeachFunc_CB_Trait, NodeForeachFunc_CF_CType, NodeForeachFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(GLib::Node_Ref node), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> NodeForeachFunc;

// typedef gboolean (*GNodeTraverseFunc) (GNode* node /*none*/, gpointer data);
// typedef gboolean (*GNodeTraverseFunc) (::GNode* node /*none*/, void* data);
namespace internal {

typedef gboolean (*NodeTraverseFunc_CF_CType) (::GNode* node, void* data);
GI_INLINE_DECL bool NodeTraverseFunc_CF (GLib::Node_Ref node, NodeTraverseFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(NodeTraverseFunc_CB_Trait, NodeTraverseFunc_CF_CType, NodeTraverseFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(GLib::Node_Ref node), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> NodeTraverseFunc;

// typedef gboolean (*GOptionArgFunc) (const gchar* option_name /*none*/, const gchar* value /*none*/, gpointer data, GError ** error);
// typedef gboolean (*GOptionArgFunc) (const char* option_name /*none*/, const char* value /*none*/, void* data, GError ** error);
namespace internal {

typedef gboolean (*OptionArgFunc_CF_CType) (const char* option_name, const char* value, void* data, GError ** error);
GI_INLINE_DECL bool OptionArgFunc_CF (const gi::cstring_v option_name, const gi::cstring_v value, GLib::Error * _error, OptionArgFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(OptionArgFunc_CB_Trait, OptionArgFunc_CF_CType, OptionArgFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(const gi::cstring_v option_name, const gi::cstring_v value, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>> OptionArgFunc;

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

typedef gboolean (*RegexEvalCallback_CF_CType) (const ::GMatchInfo* match_info, ::GString* result, void* user_data);
GI_INLINE_DECL bool RegexEvalCallback_CF (const GLib::MatchInfo_Ref match_info, GLib::String_Ref result, RegexEvalCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(RegexEvalCallback_CB_Trait, RegexEvalCallback_CF_CType, RegexEvalCallback_CF);
} // namespace internal

typedef gi::detail::callback<bool(const GLib::MatchInfo_Ref match_info, GLib::String_Ref result), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> RegexEvalCallback;

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

typedef gboolean (*SourceFunc_CF_CType) (void* user_data);
GI_INLINE_DECL bool SourceFunc_CF (SourceFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SourceFunc_CB_Trait, SourceFunc_CF_CType, SourceFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(), gi::transfer_none_t, std::tuple<>> SourceFunc;

// typedef void (*GSourceOnceFunc) (gpointer user_data);
// typedef void (*GSourceOnceFunc) (void* user_data);
namespace internal {

typedef void (*SourceOnceFunc_CF_CType) (void* user_data);
GI_INLINE_DECL void SourceOnceFunc_CF (SourceOnceFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SourceOnceFunc_CB_Trait, SourceOnceFunc_CF_CType, SourceOnceFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(), gi::transfer_full_t, std::tuple<>> SourceOnceFunc;

// typedef void (*GSpawnChildSetupFunc) (gpointer data);
// typedef void (*GSpawnChildSetupFunc) (void* data);
namespace internal {

typedef void (*SpawnChildSetupFunc_CF_CType) (void* data);
GI_INLINE_DECL void SpawnChildSetupFunc_CF (SpawnChildSetupFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SpawnChildSetupFunc_CB_Trait, SpawnChildSetupFunc_CF_CType, SpawnChildSetupFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(), gi::transfer_full_t, std::tuple<>> SpawnChildSetupFunc;

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

typedef gboolean (*TestLogFatalFunc_CF_CType) (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* user_data);
GI_INLINE_DECL bool TestLogFatalFunc_CF (const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v message, TestLogFatalFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TestLogFatalFunc_CB_Trait, TestLogFatalFunc_CF_CType, TestLogFatalFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(const gi::cstring_v log_domain, GLib::LogLevelFlags log_level, const gi::cstring_v message), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TestLogFatalFunc;

// typedef gpointer (*GThreadFunc) (gpointer data);
// typedef void* (*GThreadFunc) (void* data);
namespace internal {

typedef void* (*ThreadFunc_CF_CType) (void* data);
GI_INLINE_DECL gpointer ThreadFunc_CF (ThreadFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ThreadFunc_CB_Trait, ThreadFunc_CF_CType, ThreadFunc_CF);
} // namespace internal

typedef gi::detail::callback<gpointer(), gi::transfer_none_t, std::tuple<>> ThreadFunc;

// typedef const gchar* /*none*/ (*GTranslateFunc) (const gchar* str /*none*/, gpointer data);
// typedef const char* /*none*/ (*GTranslateFunc) (const char* str /*none*/, void* data);
namespace internal {

typedef const char* (*TranslateFunc_CF_CType) (const char* str, void* data);
GI_INLINE_DECL gi::cstring_v TranslateFunc_CF (const gi::cstring_v str, TranslateFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TranslateFunc_CB_Trait, TranslateFunc_CF_CType, TranslateFunc_CF);
} // namespace internal

typedef gi::detail::callback<gi::cstring_v(const gi::cstring_v str), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> TranslateFunc;

// typedef gboolean (*GTraverseFunc) (gpointer key, gpointer value, gpointer data);
// typedef gboolean (*GTraverseFunc) (void* key, void* value, void* data);
namespace internal {

typedef gboolean (*TraverseFunc_CF_CType) (void* key, void* value, void* data);
GI_INLINE_DECL bool TraverseFunc_CF (void* key, void* value, TraverseFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TraverseFunc_CB_Trait, TraverseFunc_CF_CType, TraverseFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(void* key, void* value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> TraverseFunc;

// typedef gboolean (*GTraverseNodeFunc) (GTreeNode* node /*none*/, gpointer data);
// typedef gboolean (*GTraverseNodeFunc) ( node /*none*/, void* data);
// SKIP; node type  not supported

// typedef gboolean (*GUnixFDSourceFunc) (gint fd, GIOCondition condition, gpointer user_data);
// typedef gboolean (*GUnixFDSourceFunc) (gint fd, ::GIOCondition condition, void* user_data);
namespace internal {

typedef gboolean (*UnixFDSourceFunc_CF_CType) (gint fd, ::GIOCondition condition, void* user_data);
GI_INLINE_DECL bool UnixFDSourceFunc_CF (gint fd, GLib::IOCondition condition, UnixFDSourceFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(UnixFDSourceFunc_CB_Trait, UnixFDSourceFunc_CF_CType, UnixFDSourceFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(gint fd, GLib::IOCondition condition), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> UnixFDSourceFunc;

// typedef void (*GVoidFunc) ();
// typedef void (*GVoidFunc) ();
// SKIP; not a callback since no user_data

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
