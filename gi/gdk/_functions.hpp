// AUTO-GENERATED

#ifndef _GI_GDK__FUNCTIONS_HPP_
#define _GI_GDK__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace DragActionNS_ {

// gboolean gdk_drag_action_is_unique (GdkDragAction action);
// gboolean gdk_drag_action_is_unique (::GdkDragAction action);
GI_INLINE_DECL bool is_unique (Gdk::DragAction action) noexcept;

} // namespace DragActionNS_

namespace GLErrorNS_ {

// GQuark gdk_gl_error_quark ();
// ::GQuark gdk_gl_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace GLErrorNS_

namespace TextureErrorNS_ {

// GQuark gdk_texture_error_quark ();
// ::GQuark gdk_texture_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace TextureErrorNS_

namespace VulkanErrorNS_ {

// GQuark gdk_vulkan_error_quark ();
// ::GQuark gdk_vulkan_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace VulkanErrorNS_

// void gdk_cairo_rectangle (cairo_t* cr /*none*/, const GdkRectangle* rectangle /*none*/);
// void gdk_cairo_rectangle (::cairo_t* cr /*none*/, const ::GdkRectangle* rectangle /*none*/);
GI_INLINE_DECL void cairo_rectangle (cairo::Context_Ref cr, const Gdk::Rectangle_Ref rectangle) noexcept;

// void gdk_cairo_region (cairo_t* cr /*none*/, const cairo_region_t* region /*none*/);
// void gdk_cairo_region (::cairo_t* cr /*none*/, const ::cairo_region_t* region /*none*/);
GI_INLINE_DECL void cairo_region (cairo::Context_Ref cr, const cairo::Region_Ref region) noexcept;

// cairo_region_t* /*full*/ gdk_cairo_region_create_from_surface (cairo_surface_t* surface /*none*/);
// ::cairo_region_t* /*full*/ gdk_cairo_region_create_from_surface (::cairo_surface_t* surface /*none*/);
GI_INLINE_DECL cairo::Region cairo_region_create_from_surface (cairo::Surface_Ref surface) noexcept;

// void gdk_cairo_set_source_pixbuf (cairo_t* cr /*none*/, const GdkPixbuf* pixbuf /*none*/, double pixbuf_x, double pixbuf_y);
// void gdk_cairo_set_source_pixbuf (::cairo_t* cr /*none*/, const ::GdkPixbuf* pixbuf /*none*/, gdouble pixbuf_x, gdouble pixbuf_y);
GI_INLINE_DECL void cairo_set_source_pixbuf (cairo::Context_Ref cr, const GdkPixbuf::Pixbuf & pixbuf, gdouble pixbuf_x, gdouble pixbuf_y) noexcept;

// void gdk_cairo_set_source_rgba (cairo_t* cr /*none*/, const GdkRGBA* rgba /*none*/);
// void gdk_cairo_set_source_rgba (::cairo_t* cr /*none*/, const ::GdkRGBA* rgba /*none*/);
GI_INLINE_DECL void cairo_set_source_rgba (cairo::Context_Ref cr, const Gdk::RGBA_Ref rgba) noexcept;

// void gdk_content_deserialize_async (GInputStream* stream /*none*/, const char* mime_type /*none*/, GType type, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_content_deserialize_async (::GInputStream* stream /*none*/, const char* mime_type /*none*/, GType type, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void content_deserialize_async (Gio::InputStream stream, const gi::cstring_v mime_type, GType type, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void content_deserialize_async (Gio::InputStream stream, const gi::cstring_v mime_type, GType type, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean gdk_content_deserialize_finish (GAsyncResult* result /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean gdk_content_deserialize_finish (::GAsyncResult* result /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
GI_INLINE_DECL bool content_deserialize_finish (Gio::AsyncResult result, GObject::Value & value);
GI_INLINE_DECL bool content_deserialize_finish (Gio::AsyncResult result, GObject::Value & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> content_deserialize_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, GObject::Value> content_deserialize_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gdk_content_register_deserializer (const char* mime_type /*none*/, GType type, GdkContentDeserializeFunc deserialize /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void gdk_content_register_deserializer (const char* mime_type /*none*/, GType type,  deserialize /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; deserialize type  not supported

// void gdk_content_register_serializer (GType type, const char* mime_type /*none*/, GdkContentSerializeFunc serialize /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void gdk_content_register_serializer (GType type, const char* mime_type /*none*/,  serialize /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; serialize type  not supported

// void gdk_content_serialize_async (GOutputStream* stream /*none*/, const char* mime_type /*none*/, const GValue* value /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_content_serialize_async (::GOutputStream* stream /*none*/, const char* mime_type /*none*/, const ::GValue* value /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void content_serialize_async (Gio::OutputStream stream, const gi::cstring_v mime_type, const GObject::Value_Ref value, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void content_serialize_async (Gio::OutputStream stream, const gi::cstring_v mime_type, const GObject::Value_Ref value, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean gdk_content_serialize_finish (GAsyncResult* result /*none*/, GError ** error);
// gboolean gdk_content_serialize_finish (::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool content_serialize_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool content_serialize_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GType gdk_drag_surface_size_get_type ();
// GType gdk_drag_surface_size_get_type ();
GI_INLINE_DECL GType drag_surface_size_get_type () noexcept;

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
GI_INLINE_DECL gi::cstring_v intern_mime_type (const gi::cstring_v string) noexcept;

// void gdk_keyval_convert_case (guint symbol, guint* lower, guint* upper);
// void gdk_keyval_convert_case (guint symbol, guint* lower, guint* upper);
GI_INLINE_DECL void keyval_convert_case (guint symbol, guint & lower, guint & upper) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> keyval_convert_case (guint symbol) noexcept;

// guint gdk_keyval_from_name (const char* keyval_name /*none*/);
// guint gdk_keyval_from_name (const char* keyval_name /*none*/);
GI_INLINE_DECL guint keyval_from_name (const gi::cstring_v keyval_name) noexcept;

// gboolean gdk_keyval_is_lower (guint keyval);
// gboolean gdk_keyval_is_lower (guint keyval);
GI_INLINE_DECL bool keyval_is_lower (guint keyval) noexcept;

// gboolean gdk_keyval_is_upper (guint keyval);
// gboolean gdk_keyval_is_upper (guint keyval);
GI_INLINE_DECL bool keyval_is_upper (guint keyval) noexcept;

// const char* /*none,nullable*/ gdk_keyval_name (guint keyval);
// const char* /*none,nullable*/ gdk_keyval_name (guint keyval);
GI_INLINE_DECL gi::cstring_v keyval_name (guint keyval) noexcept;

// guint gdk_keyval_to_lower (guint keyval);
// guint gdk_keyval_to_lower (guint keyval);
GI_INLINE_DECL guint keyval_to_lower (guint keyval) noexcept;

// guint32 gdk_keyval_to_unicode (guint keyval);
// guint32 gdk_keyval_to_unicode (guint keyval);
GI_INLINE_DECL guint32 keyval_to_unicode (guint keyval) noexcept;

// guint gdk_keyval_to_upper (guint keyval);
// guint gdk_keyval_to_upper (guint keyval);
GI_INLINE_DECL guint keyval_to_upper (guint keyval) noexcept;

// cairo_region_t* /*full*/ gdk_pango_layout_get_clip_region (PangoLayout* layout /*none*/, int x_origin, int y_origin, const int* index_ranges, int n_ranges);
// ::cairo_region_t* /*full*/ gdk_pango_layout_get_clip_region (::PangoLayout* layout /*none*/, gint x_origin, gint y_origin, const gint index_ranges, gint n_ranges);
// IGNORE; not introspectable, inconsistent index_ranges in pointer depth (1 vs 0)

// cairo_region_t* /*full*/ gdk_pango_layout_line_get_clip_region (PangoLayoutLine* line /*none*/, int x_origin, int y_origin,  index_ranges /*none*/, int n_ranges);
// ::cairo_region_t* /*full*/ gdk_pango_layout_line_get_clip_region (::PangoLayoutLine* line /*none*/, gint x_origin, gint y_origin, * index_ranges /*none*/, gint n_ranges);
// IGNORE; not introspectable, inconsistent array info

// void gdk_set_allowed_backends (const char* backends /*none*/);
// void gdk_set_allowed_backends (const char* backends /*none*/);
GI_INLINE_DECL void set_allowed_backends (const gi::cstring_v backends) noexcept;

// GType gdk_toplevel_size_get_type ();
// GType gdk_toplevel_size_get_type ();
GI_INLINE_DECL GType toplevel_size_get_type () noexcept;

// guint gdk_unicode_to_keyval (guint32 wc);
// guint gdk_unicode_to_keyval (guint32 wc);
GI_INLINE_DECL guint unicode_to_keyval (guint32 wc) noexcept;

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
