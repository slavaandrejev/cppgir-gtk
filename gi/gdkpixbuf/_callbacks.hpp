// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF__CALLBACKS_HPP_
#define _GI_GDKPIXBUF__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf;
class PixbufAnimation;
class PixbufFormat;
class PixbufFormat_Ref;
class PixbufModule;
class PixbufModule_Ref;

// typedef void (*GdkPixbufDestroyNotify) ( pixels /*none*/, gpointer data);
// typedef void (*GdkPixbufDestroyNotify) (* pixels /*none*/, void* data);
// SKIP; inconsistent array info

// typedef gpointer (*GdkPixbufModuleBeginLoadFunc) (GdkPixbufModuleSizeFunc size_func /*none*/, GdkPixbufModulePreparedFunc prepared_func /*none*/, GdkPixbufModuleUpdatedFunc updated_func /*none*/, gpointer user_data, GError ** error);
// typedef void* (*GdkPixbufModuleBeginLoadFunc) (GdkPixbuf::PixbufModuleSizeFunc::cfunction_type size_func /*none*/, GdkPixbuf::PixbufModulePreparedFunc::cfunction_type prepared_func /*none*/, GdkPixbuf::PixbufModuleUpdatedFunc::cfunction_type updated_func /*none*/, void* user_data, GError ** error);
// IGNORE; not introspectable, callback misses scope info, callback misses closure info, callback misses closure info

// typedef void (*GdkPixbufModuleFillInfoFunc) (GdkPixbufFormat* info /*none*/);
// typedef void (*GdkPixbufModuleFillInfoFunc) (::GdkPixbufFormat* info /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GdkPixbufModuleFillVtableFunc) (GdkPixbufModule* module_ /*none*/);
// typedef void (*GdkPixbufModuleFillVtableFunc) (::GdkPixbufModule* module_ /*none*/);
// SKIP; not a callback since no user_data

// typedef gboolean (*GdkPixbufModuleIncrementLoadFunc) (gpointer context, const guchar* buf /*none*/, guint size, GError ** error);
// typedef gboolean (*GdkPixbufModuleIncrementLoadFunc) (void* context, const guint8* buf /*none*/, guint size, GError ** error);
// SKIP; not a callback since no user_data

// typedef GdkPixbufAnimation* /*full*/ (*GdkPixbufModuleLoadAnimationFunc) (FILE* f, GError ** error);
// typedef ::GdkPixbufAnimation* /*full*/ (*GdkPixbufModuleLoadAnimationFunc) (void* f, GError ** error);
// SKIP; not a callback since no user_data

// typedef GdkPixbuf* /*full*/ (*GdkPixbufModuleLoadFunc) (FILE* f, GError ** error);
// typedef ::GdkPixbuf* /*full*/ (*GdkPixbufModuleLoadFunc) (void* f, GError ** error);
// SKIP; not a callback since no user_data

// typedef GdkPixbuf* /*full*/ (*GdkPixbufModuleLoadXpmDataFunc) (const char** data /*none*/);
// typedef ::GdkPixbuf* /*full*/ (*GdkPixbufModuleLoadXpmDataFunc) (const char** data /*none*/);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef void (*GdkPixbufModulePreparedFunc) (GdkPixbuf* pixbuf /*none*/, GdkPixbufAnimation* anim /*none*/, gpointer user_data);
// typedef void (*GdkPixbufModulePreparedFunc) (::GdkPixbuf* pixbuf /*none*/, ::GdkPixbufAnimation* anim /*none*/, void* user_data);
namespace internal {

typedef void (*PixbufModulePreparedFunc_CF_CType) (::GdkPixbuf* pixbuf, ::GdkPixbufAnimation* anim, void* user_data);
GI_INLINE_DECL void PixbufModulePreparedFunc_CF (GdkPixbuf::Pixbuf pixbuf, GdkPixbuf::PixbufAnimation anim, PixbufModulePreparedFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(PixbufModulePreparedFunc_CB_Trait, PixbufModulePreparedFunc_CF_CType, PixbufModulePreparedFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(GdkPixbuf::Pixbuf pixbuf, GdkPixbuf::PixbufAnimation anim), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> PixbufModulePreparedFunc;

// typedef gboolean (*GdkPixbufModuleSaveCallbackFunc) (GdkPixbufSaveFunc save_func /*none*/, gpointer user_data, GdkPixbuf* pixbuf /*none*/, gchar** option_keys /*none,nullable*/, gchar** option_values /*none,nullable*/, GError ** error);
// typedef gboolean (*GdkPixbufModuleSaveCallbackFunc) (GdkPixbuf::PixbufSaveFunc::cfunction_type save_func /*none*/, void* user_data, ::GdkPixbuf* pixbuf /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
// IGNORE; not introspectable, callback misses scope info, not a callback since no user_data

// typedef gboolean (*GdkPixbufModuleSaveFunc) (FILE* f, GdkPixbuf* pixbuf /*none*/, gchar** param_keys /*none,nullable*/, gchar** param_values /*none,nullable*/, GError ** error);
// typedef gboolean (*GdkPixbufModuleSaveFunc) (void* f, ::GdkPixbuf* pixbuf /*none*/, char** param_keys /*none,nullable*/, char** param_values /*none,nullable*/, GError ** error);
// SKIP; not a callback since no user_data

// typedef gboolean (*GdkPixbufModuleSaveOptionSupportedFunc) (const gchar* option_key /*none*/);
// typedef gboolean (*GdkPixbufModuleSaveOptionSupportedFunc) (const char* option_key /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GdkPixbufModuleSizeFunc) (gint* width, gint* height, gpointer user_data);
// typedef void (*GdkPixbufModuleSizeFunc) (gint width, gint height, void* user_data);
// SKIP; inconsistent height in pointer depth (1 vs 0), inconsistent width in pointer depth (1 vs 0)

// typedef gboolean (*GdkPixbufModuleStopLoadFunc) (gpointer context, GError ** error);
// typedef gboolean (*GdkPixbufModuleStopLoadFunc) (void* context, GError ** error);
// SKIP; not a callback since no user_data

// typedef void (*GdkPixbufModuleUpdatedFunc) (GdkPixbuf* pixbuf /*none*/, int x, int y, int width, int height, gpointer user_data);
// typedef void (*GdkPixbufModuleUpdatedFunc) (::GdkPixbuf* pixbuf /*none*/, gint x, gint y, gint width, gint height, void* user_data);
namespace internal {

typedef void (*PixbufModuleUpdatedFunc_CF_CType) (::GdkPixbuf* pixbuf, gint x, gint y, gint width, gint height, void* user_data);
GI_INLINE_DECL void PixbufModuleUpdatedFunc_CF (GdkPixbuf::Pixbuf pixbuf, gint x, gint y, gint width, gint height, PixbufModuleUpdatedFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(PixbufModuleUpdatedFunc_CB_Trait, PixbufModuleUpdatedFunc_CF_CType, PixbufModuleUpdatedFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(GdkPixbuf::Pixbuf pixbuf, gint x, gint y, gint width, gint height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> PixbufModuleUpdatedFunc;

// typedef gboolean (*GdkPixbufSaveFunc) (const gchar* buf /*none*/, gsize count, GError** error /*full,out*/, gpointer data);
// typedef gboolean (*GdkPixbufSaveFunc) (const guint8* buf /*none*/, gsize count, ::GError** error /*full,out*/, void* data);
namespace internal {

typedef gboolean (*PixbufSaveFunc_CF_CType) (const guint8* buf, gsize count, ::GError** error, void* data);
GI_INLINE_DECL bool PixbufSaveFunc_CF (const guint8 * buf, gsize count, GLib::Error & error, PixbufSaveFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(PixbufSaveFunc_CB_Trait, PixbufSaveFunc_CF_CType, PixbufSaveFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(const guint8 * buf, gsize count, GLib::Error & error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>> PixbufSaveFunc;

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
