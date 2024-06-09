// AUTO-GENERATED

#ifndef _GI_GDK__FUNCTIONS_IMPL_HPP_
#define _GI_GDK__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace DragActionNS_ {

// gboolean gdk_drag_action_is_unique (GdkDragAction action);
// gboolean gdk_drag_action_is_unique (::GdkDragAction action);
bool is_unique (Gdk::DragAction action) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDragAction action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_action_is_unique;
  auto action_to_c = gi::unwrap (action);
  auto _temp_ret = call_wrap_v ((::GdkDragAction) (action_to_c));
  return _temp_ret;
}

} // namespace DragActionNS_

namespace GLErrorNS_ {

// GQuark gdk_gl_error_quark ();
// ::GQuark gdk_gl_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_gl_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace GLErrorNS_

namespace TextureErrorNS_ {

// GQuark gdk_texture_error_quark ();
// ::GQuark gdk_texture_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_texture_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace TextureErrorNS_

namespace VulkanErrorNS_ {

// GQuark gdk_vulkan_error_quark ();
// ::GQuark gdk_vulkan_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_vulkan_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace VulkanErrorNS_

// void gdk_cairo_rectangle (cairo_t* cr /*none*/, const GdkRectangle* rectangle /*none*/);
// void gdk_cairo_rectangle (::cairo_t* cr /*none*/, const ::GdkRectangle* rectangle /*none*/);
void cairo_rectangle (cairo::Context_Ref cr, const Gdk::Rectangle_Ref rectangle) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const ::GdkRectangle* rectangle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cairo_rectangle;
  auto rectangle_to_c = gi::unwrap (rectangle, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const ::GdkRectangle*) (rectangle_to_c));
}

// void gdk_cairo_region (cairo_t* cr /*none*/, const cairo_region_t* region /*none*/);
// void gdk_cairo_region (::cairo_t* cr /*none*/, const ::cairo_region_t* region /*none*/);
void cairo_region (cairo::Context_Ref cr, const cairo::Region_Ref region) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cairo_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const ::cairo_region_t*) (region_to_c));
}

// cairo_region_t* /*full*/ gdk_cairo_region_create_from_surface (cairo_surface_t* surface /*none*/);
// ::cairo_region_t* /*full*/ gdk_cairo_region_create_from_surface (::cairo_surface_t* surface /*none*/);
cairo::Region cairo_region_create_from_surface (cairo::Surface_Ref surface) noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::cairo_surface_t* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cairo_region_create_from_surface;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::cairo_surface_t*) (surface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_cairo_set_source_pixbuf (cairo_t* cr /*none*/, const GdkPixbuf* pixbuf /*none*/, double pixbuf_x, double pixbuf_y);
// void gdk_cairo_set_source_pixbuf (::cairo_t* cr /*none*/, const ::GdkPixbuf* pixbuf /*none*/, gdouble pixbuf_x, gdouble pixbuf_y);
void cairo_set_source_pixbuf (cairo::Context_Ref cr, const GdkPixbuf::Pixbuf & pixbuf, gdouble pixbuf_x, gdouble pixbuf_y) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const ::GdkPixbuf* pixbuf, gdouble pixbuf_x, gdouble pixbuf_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cairo_set_source_pixbuf;
  auto pixbuf_y_to_c = pixbuf_y;
  auto pixbuf_x_to_c = pixbuf_x;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const ::GdkPixbuf*) (pixbuf_to_c), (gdouble) (pixbuf_x_to_c), (gdouble) (pixbuf_y_to_c));
}

// void gdk_cairo_set_source_rgba (cairo_t* cr /*none*/, const GdkRGBA* rgba /*none*/);
// void gdk_cairo_set_source_rgba (::cairo_t* cr /*none*/, const ::GdkRGBA* rgba /*none*/);
void cairo_set_source_rgba (cairo::Context_Ref cr, const Gdk::RGBA_Ref rgba) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cairo_set_source_rgba;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const ::GdkRGBA*) (rgba_to_c));
}

// void gdk_content_deserialize_async (GInputStream* stream /*none*/, const char* mime_type /*none*/, GType type, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_content_deserialize_async (::GInputStream* stream /*none*/, const char* mime_type /*none*/, GType type, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void content_deserialize_async (Gio::InputStream stream, const gi::cstring_v mime_type, GType type, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, const char* mime_type, GType type, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserialize_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto type_to_c = type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GInputStream*) (stream_to_c), (const char*) (mime_type_to_c), (GType) (type_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void content_deserialize_async (Gio::InputStream stream, const gi::cstring_v mime_type, GType type, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, const char* mime_type, GType type, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserialize_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto type_to_c = type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GInputStream*) (stream_to_c), (const char*) (mime_type_to_c), (GType) (type_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gdk_content_deserialize_finish (GAsyncResult* result /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean gdk_content_deserialize_finish (::GAsyncResult* result /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
bool content_deserialize_finish (Gio::AsyncResult result, GObject::Value & value)
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserialize_finish;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GValue*) ((GValue*) (value).gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool content_deserialize_finish (Gio::AsyncResult result, GObject::Value & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserialize_finish;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GValue*) ((GValue*) (value).gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> content_deserialize_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserialize_finish;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GObject::Value> content_deserialize_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserialize_finish;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gdk_content_register_deserializer (const char* mime_type /*none*/, GType type, GdkContentDeserializeFunc deserialize /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void gdk_content_register_deserializer (const char* mime_type /*none*/, GType type,  deserialize /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; deserialize type  not supported

// void gdk_content_register_serializer (GType type, const char* mime_type /*none*/, GdkContentSerializeFunc serialize /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void gdk_content_register_serializer (GType type, const char* mime_type /*none*/,  serialize /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; serialize type  not supported

// void gdk_content_serialize_async (GOutputStream* stream /*none*/, const char* mime_type /*none*/, const GValue* value /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_content_serialize_async (::GOutputStream* stream /*none*/, const char* mime_type /*none*/, const ::GValue* value /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void content_serialize_async (Gio::OutputStream stream, const gi::cstring_v mime_type, const GObject::Value_Ref value, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, const char* mime_type, const ::GValue* value, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serialize_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GOutputStream*) (stream_to_c), (const char*) (mime_type_to_c), (const ::GValue*) (value_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void content_serialize_async (Gio::OutputStream stream, const gi::cstring_v mime_type, const GObject::Value_Ref value, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, const char* mime_type, const ::GValue* value, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serialize_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GOutputStream*) (stream_to_c), (const char*) (mime_type_to_c), (const ::GValue*) (value_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gdk_content_serialize_finish (GAsyncResult* result /*none*/, GError ** error);
// gboolean gdk_content_serialize_finish (::GAsyncResult* result /*none*/, GError ** error);
bool content_serialize_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serialize_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool content_serialize_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serialize_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GType gdk_drag_surface_size_get_type ();
// GType gdk_drag_surface_size_get_type ();
GType drag_surface_size_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drag_surface_size_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean gdk_events_get_angle (GdkEvent* event1 /*none*/, GdkEvent* event2 /*none*/, double* angle);
// gboolean gdk_events_get_angle ( event1 /*none*/,  event2 /*none*/, gdouble* angle);
// SKIP; event2 type  not supported, event1 type  not supported

// gboolean gdk_events_get_center (GdkEvent* event1 /*none*/, GdkEvent* event2 /*none*/, double* x, double* y);
// gboolean gdk_events_get_center ( event1 /*none*/,  event2 /*none*/, gdouble* x, gdouble* y);
// SKIP; event2 type  not supported, event1 type  not supported

// gboolean gdk_events_get_distance (GdkEvent* event1 /*none*/, GdkEvent* event2 /*none*/, double* distance);
// gboolean gdk_events_get_distance ( event1 /*none*/,  event2 /*none*/, gdouble* distance);
// SKIP; event2 type  not supported, event1 type  not supported

// const char* /*none,nullable*/ gdk_intern_mime_type (const char* string /*none*/);
// const char* /*none,nullable*/ gdk_intern_mime_type (const char* string /*none*/);
gi::cstring_v intern_mime_type (const gi::cstring_v string) noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_intern_mime_type;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_keyval_convert_case (guint symbol, guint* lower, guint* upper);
// void gdk_keyval_convert_case (guint symbol, guint* lower, guint* upper);
void keyval_convert_case (guint symbol, guint & lower, guint & upper) noexcept
{
  typedef void (*call_wrap_t) (guint symbol, guint* lower, guint* upper);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_convert_case;
  guint upper_o {};
  guint lower_o {};
  auto symbol_to_c = symbol;
  call_wrap_v ((guint) (symbol_to_c), (guint*) (&lower_o), (guint*) (&upper_o));
  upper = upper_o;
  lower = lower_o;
}
std::tuple<guint, guint> keyval_convert_case (guint symbol) noexcept
{
  typedef void (*call_wrap_t) (guint symbol, guint* lower, guint* upper);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_convert_case;
  guint upper_o {};
  guint lower_o {};
  auto symbol_to_c = symbol;
  call_wrap_v ((guint) (symbol_to_c), (guint*) (&lower_o), (guint*) (&upper_o));
  auto &&tmp_return_1 = lower_o;
  auto &&tmp_return_2 = upper_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// guint gdk_keyval_from_name (const char* keyval_name /*none*/);
// guint gdk_keyval_from_name (const char* keyval_name /*none*/);
guint keyval_from_name (const gi::cstring_v keyval_name) noexcept
{
  typedef guint (*call_wrap_t) (const char* keyval_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_from_name;
  auto keyval_name_to_c = gi::unwrap (keyval_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (keyval_name_to_c));
  return _temp_ret;
}

// gboolean gdk_keyval_is_lower (guint keyval);
// gboolean gdk_keyval_is_lower (guint keyval);
bool keyval_is_lower (guint keyval) noexcept
{
  typedef gboolean (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_is_lower;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// gboolean gdk_keyval_is_upper (guint keyval);
// gboolean gdk_keyval_is_upper (guint keyval);
bool keyval_is_upper (guint keyval) noexcept
{
  typedef gboolean (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_is_upper;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ gdk_keyval_name (guint keyval);
// const char* /*none,nullable*/ gdk_keyval_name (guint keyval);
gi::cstring_v keyval_name (guint keyval) noexcept
{
  typedef const char* (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_name;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gdk_keyval_to_lower (guint keyval);
// guint gdk_keyval_to_lower (guint keyval);
guint keyval_to_lower (guint keyval) noexcept
{
  typedef guint (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_to_lower;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// guint32 gdk_keyval_to_unicode (guint keyval);
// guint32 gdk_keyval_to_unicode (guint keyval);
guint32 keyval_to_unicode (guint keyval) noexcept
{
  typedef guint32 (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_to_unicode;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// guint gdk_keyval_to_upper (guint keyval);
// guint gdk_keyval_to_upper (guint keyval);
guint keyval_to_upper (guint keyval) noexcept
{
  typedef guint (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_keyval_to_upper;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// cairo_region_t* /*full*/ gdk_pango_layout_get_clip_region (PangoLayout* layout /*none*/, int x_origin, int y_origin, const int* index_ranges, int n_ranges);
// ::cairo_region_t* /*full*/ gdk_pango_layout_get_clip_region (::PangoLayout* layout /*none*/, gint x_origin, gint y_origin, const gint index_ranges, gint n_ranges);
// IGNORE; not introspectable, inconsistent index_ranges in pointer depth (1 vs 0)

// cairo_region_t* /*full*/ gdk_pango_layout_line_get_clip_region (PangoLayoutLine* line /*none*/, int x_origin, int y_origin,  index_ranges /*none*/, int n_ranges);
// ::cairo_region_t* /*full*/ gdk_pango_layout_line_get_clip_region (::PangoLayoutLine* line /*none*/, gint x_origin, gint y_origin, * index_ranges /*none*/, gint n_ranges);
// IGNORE; not introspectable, inconsistent array info

// void gdk_set_allowed_backends (const char* backends /*none*/);
// void gdk_set_allowed_backends (const char* backends /*none*/);
void set_allowed_backends (const gi::cstring_v backends) noexcept
{
  typedef void (*call_wrap_t) (const char* backends);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_set_allowed_backends;
  auto backends_to_c = gi::unwrap (backends, gi::transfer_none);
  call_wrap_v ((const char*) (backends_to_c));
}

// GType gdk_toplevel_size_get_type ();
// GType gdk_toplevel_size_get_type ();
GType toplevel_size_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_toplevel_size_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint gdk_unicode_to_keyval (guint32 wc);
// guint gdk_unicode_to_keyval (guint32 wc);
guint unicode_to_keyval (guint32 wc) noexcept
{
  typedef guint (*call_wrap_t) (guint32 wc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_unicode_to_keyval;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((guint32) (wc_to_c));
  return _temp_ret;
}

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
