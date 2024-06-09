// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUF_HPP_
#define _GI_GDKPIXBUF_PIXBUF_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufFormat;
class PixbufFormat_Ref;

class Pixbuf;

namespace base {


#define GI_GDKPIXBUF_PIXBUF_BASE base::PixbufBase
class PixbufBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkPixbuf BaseObjectType;

PixbufBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_get_type(); } 

GI_INLINE_DECL Gio::Icon interface_ (gi::interface_tag<Gio::Icon>);

GI_INLINE_DECL operator Gio::Icon ();

GI_INLINE_DECL Gio::LoadableIcon interface_ (gi::interface_tag<Gio::LoadableIcon>);

GI_INLINE_DECL operator Gio::LoadableIcon ();

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new (GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new (::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_ (GdkPixbuf::Colorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height) noexcept;

// GdkPixbuf* /*full*/ gdk_pixbuf_new_from_bytes (GBytes* data /*none*/, GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height, int rowstride);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_from_bytes (::GBytes* data /*none*/, ::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height, gint rowstride);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_bytes (GLib::Bytes_Ref data, GdkPixbuf::Colorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height, gint rowstride) noexcept;

// GdkPixbuf* /*full*/ gdk_pixbuf_new_from_data ( data /*none*/, GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height, int rowstride, GdkPixbufDestroyNotify destroy_fn /*none,nullable*/, gpointer destroy_fn_data);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_from_data (* data /*none*/, ::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height, gint rowstride,  destroy_fn /*none,nullable*/, void* destroy_fn_data);
// SKIP; inconsistent array info

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file (const char* filename /*none*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file (const char* filename /*none*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_file (const gi::cstring_v filename);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_file (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file_at_scale (const char* filename /*none*/, int width, int height, gboolean preserve_aspect_ratio, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file_at_scale (const char* filename /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, GError ** error);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_file_at_scale (const gi::cstring_v filename, gint width, gint height, gboolean preserve_aspect_ratio);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_file_at_scale (const gi::cstring_v filename, gint width, gint height, gboolean preserve_aspect_ratio, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file_at_size (const char* filename /*none*/, int width, int height, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_file_at_size (const char* filename /*none*/, gint width, gint height, GError ** error);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_file_at_size (const gi::cstring_v filename, gint width, gint height);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_file_at_size (const gi::cstring_v filename, gint width, gint height, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full*/ gdk_pixbuf_new_from_inline (gint data_length, const guint8* data /*none*/, gboolean copy_pixels, GError ** error);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_from_inline (gint data_length, const guint8* data /*none*/, gboolean copy_pixels, GError ** error);
// IGNORE; deprecated

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_resource (const char* resource_path /*none*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_resource (const char* resource_path /*none*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_resource (const gi::cstring_v resource_path);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_resource (const gi::cstring_v resource_path, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_resource_at_scale (const char* resource_path /*none*/, int width, int height, gboolean preserve_aspect_ratio, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_resource_at_scale (const char* resource_path /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, GError ** error);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_resource_at_scale (const gi::cstring_v resource_path, gint width, gint height, gboolean preserve_aspect_ratio);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_resource_at_scale (const gi::cstring_v resource_path, gint width, gint height, gboolean preserve_aspect_ratio, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream (Gio::InputStream stream);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream (Gio::InputStream stream, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream (Gio::InputStream stream, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream_at_scale (GInputStream* stream /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream_at_scale (::GInputStream* stream /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream_at_scale (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, Gio::Cancellable cancellable);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream_at_scale (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream_at_scale (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream_at_scale (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream_finish (GAsyncResult* async_result /*none*/, GError ** error);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_new_from_stream_finish (::GAsyncResult* async_result /*none*/, GError ** error);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream_finish (Gio::AsyncResult async_result);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_stream_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full*/ gdk_pixbuf_new_from_xpm_data (const char** data /*none*/);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_from_xpm_data (const char** data /*none*/);
static GI_INLINE_DECL GdkPixbuf::Pixbuf new_from_xpm_data (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> data) noexcept;

// gint gdk_pixbuf_calculate_rowstride (GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height);
// gint gdk_pixbuf_calculate_rowstride (::GdkColorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height);
static GI_INLINE_DECL gint calculate_rowstride (GdkPixbuf::Colorspace colorspace, gboolean has_alpha, gint bits_per_sample, gint width, gint height) noexcept;

// GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_get_file_info (const gchar* filename /*none*/, gint* width, gint* height);
// ::GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_get_file_info (const char* filename /*none*/, gint* width, gint* height);
static GI_INLINE_DECL GdkPixbuf::PixbufFormat_Ref get_file_info (const gi::cstring_v filename, gint * width, gint * height) noexcept;
static GI_INLINE_DECL std::tuple<GdkPixbuf::PixbufFormat_Ref, gint, gint> get_file_info (const gi::cstring_v filename) noexcept;

// void gdk_pixbuf_get_file_info_async (const gchar* filename /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_get_file_info_async (const char* filename /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void get_file_info_async (const gi::cstring_v filename, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void get_file_info_async (const gi::cstring_v filename, Gio::AsyncReadyCallback callback) noexcept;

// GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_get_file_info_finish (GAsyncResult* async_result /*none*/, gint* width, gint* height, GError ** error);
// ::GdkPixbufFormat* /*none,nullable*/ gdk_pixbuf_get_file_info_finish (::GAsyncResult* async_result /*none*/, gint* width, gint* height, GError ** error);
static GI_INLINE_DECL GdkPixbuf::PixbufFormat_Ref get_file_info_finish (Gio::AsyncResult async_result, gint & width, gint & height);
static GI_INLINE_DECL GdkPixbuf::PixbufFormat_Ref get_file_info_finish (Gio::AsyncResult async_result, gint & width, gint & height, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<GdkPixbuf::PixbufFormat_Ref, gint, gint> get_file_info_finish (Gio::AsyncResult async_result);
static GI_INLINE_DECL std::tuple<GdkPixbuf::PixbufFormat_Ref, gint, gint> get_file_info_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept;

// GSList* /*container*/ gdk_pixbuf_get_formats ();
// ::GSList* /*container*/ gdk_pixbuf_get_formats ();
static GI_INLINE_DECL gi::Collection<GSList, ::GdkPixbufFormat*, gi::transfer_container_t> get_formats () noexcept;

// gboolean gdk_pixbuf_init_modules (const char* path /*none*/, GError ** error);
// gboolean gdk_pixbuf_init_modules (const char* path /*none*/, GError ** error);
static GI_INLINE_DECL bool init_modules (const gi::cstring_v path);
static GI_INLINE_DECL bool init_modules (const gi::cstring_v path, GLib::Error * _error) noexcept;

// void gdk_pixbuf_new_from_stream_async (GInputStream* stream /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_new_from_stream_async (::GInputStream* stream /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_from_stream_async (Gio::InputStream stream, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_from_stream_async (Gio::InputStream stream, Gio::AsyncReadyCallback callback) noexcept;

// void gdk_pixbuf_new_from_stream_at_scale_async (GInputStream* stream /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_new_from_stream_at_scale_async (::GInputStream* stream /*none*/, gint width, gint height, gboolean preserve_aspect_ratio, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_from_stream_at_scale_async (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_from_stream_at_scale_async (Gio::InputStream stream, gint width, gint height, gboolean preserve_aspect_ratio, Gio::AsyncReadyCallback callback) noexcept;

// gboolean gdk_pixbuf_save_to_stream_finish (GAsyncResult* async_result /*none*/, GError ** error);
// gboolean gdk_pixbuf_save_to_stream_finish (::GAsyncResult* async_result /*none*/, GError ** error);
static GI_INLINE_DECL bool save_to_stream_finish (Gio::AsyncResult async_result);
static GI_INLINE_DECL bool save_to_stream_finish (Gio::AsyncResult async_result, GLib::Error * _error) noexcept;

// GdkPixbuf* /*full*/ gdk_pixbuf_add_alpha (const GdkPixbuf* pixbuf /*none*/, gboolean substitute_color, guchar r, guchar g, guchar b);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_add_alpha (const ::GdkPixbuf* pixbuf /*none*/, gboolean substitute_color, guint8 r, guint8 g, guint8 b);
GI_INLINE_DECL GdkPixbuf::Pixbuf add_alpha (gboolean substitute_color, guint8 r, guint8 g, guint8 b) const noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_apply_embedded_orientation (GdkPixbuf* src /*none*/);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_apply_embedded_orientation (::GdkPixbuf* src /*none*/);
GI_INLINE_DECL GdkPixbuf::Pixbuf apply_embedded_orientation () noexcept;

// void gdk_pixbuf_composite (const GdkPixbuf* src /*none*/, GdkPixbuf* dest /*none*/, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, GdkInterpType interp_type, int overall_alpha);
// void gdk_pixbuf_composite (const ::GdkPixbuf* src /*none*/, ::GdkPixbuf* dest /*none*/, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type, gint overall_alpha);
GI_INLINE_DECL void composite (GdkPixbuf::Pixbuf dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, GdkPixbuf::InterpType interp_type, gint overall_alpha) const noexcept;

// void gdk_pixbuf_composite_color (const GdkPixbuf* src /*none*/, GdkPixbuf* dest /*none*/, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, GdkInterpType interp_type, int overall_alpha, int check_x, int check_y, int check_size, guint32 color1, guint32 color2);
// void gdk_pixbuf_composite_color (const ::GdkPixbuf* src /*none*/, ::GdkPixbuf* dest /*none*/, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type, gint overall_alpha, gint check_x, gint check_y, gint check_size, guint32 color1, guint32 color2);
GI_INLINE_DECL void composite_color (GdkPixbuf::Pixbuf dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, GdkPixbuf::InterpType interp_type, gint overall_alpha, gint check_x, gint check_y, gint check_size, guint32 color1, guint32 color2) const noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_composite_color_simple (const GdkPixbuf* src /*none*/, int dest_width, int dest_height, GdkInterpType interp_type, int overall_alpha, int check_size, guint32 color1, guint32 color2);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_composite_color_simple (const ::GdkPixbuf* src /*none*/, gint dest_width, gint dest_height, ::GdkInterpType interp_type, gint overall_alpha, gint check_size, guint32 color1, guint32 color2);
GI_INLINE_DECL GdkPixbuf::Pixbuf composite_color_simple (gint dest_width, gint dest_height, GdkPixbuf::InterpType interp_type, gint overall_alpha, gint check_size, guint32 color1, guint32 color2) const noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_copy (const GdkPixbuf* pixbuf /*none*/);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_copy (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL GdkPixbuf::Pixbuf copy () const noexcept;

// void gdk_pixbuf_copy_area (const GdkPixbuf* src_pixbuf /*none*/, int src_x, int src_y, int width, int height, GdkPixbuf* dest_pixbuf /*none*/, int dest_x, int dest_y);
// void gdk_pixbuf_copy_area (const ::GdkPixbuf* src_pixbuf /*none*/, gint src_x, gint src_y, gint width, gint height, ::GdkPixbuf* dest_pixbuf /*none*/, gint dest_x, gint dest_y);
GI_INLINE_DECL void copy_area (gint src_x, gint src_y, gint width, gint height, GdkPixbuf::Pixbuf dest_pixbuf, gint dest_x, gint dest_y) const noexcept;

// gboolean gdk_pixbuf_copy_options (GdkPixbuf* src_pixbuf /*none*/, GdkPixbuf* dest_pixbuf /*none*/);
// gboolean gdk_pixbuf_copy_options (::GdkPixbuf* src_pixbuf /*none*/, ::GdkPixbuf* dest_pixbuf /*none*/);
GI_INLINE_DECL bool copy_options (GdkPixbuf::Pixbuf dest_pixbuf) noexcept;

// void gdk_pixbuf_fill (GdkPixbuf* pixbuf /*none*/, guint32 pixel);
// void gdk_pixbuf_fill (::GdkPixbuf* pixbuf /*none*/, guint32 pixel);
GI_INLINE_DECL void fill (guint32 pixel) noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_flip (const GdkPixbuf* src /*none*/, gboolean horizontal);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_flip (const ::GdkPixbuf* src /*none*/, gboolean horizontal);
GI_INLINE_DECL GdkPixbuf::Pixbuf flip (gboolean horizontal) const noexcept;

// int gdk_pixbuf_get_bits_per_sample (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_bits_per_sample (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL gint get_bits_per_sample () const noexcept;

// gsize gdk_pixbuf_get_byte_length (const GdkPixbuf* pixbuf /*none*/);
// gsize gdk_pixbuf_get_byte_length (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL gsize get_byte_length () const noexcept;

// GdkColorspace gdk_pixbuf_get_colorspace (const GdkPixbuf* pixbuf /*none*/);
// ::GdkColorspace gdk_pixbuf_get_colorspace (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL GdkPixbuf::Colorspace get_colorspace () const noexcept;

// gboolean gdk_pixbuf_get_has_alpha (const GdkPixbuf* pixbuf /*none*/);
// gboolean gdk_pixbuf_get_has_alpha (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL bool get_has_alpha () const noexcept;

// int gdk_pixbuf_get_height (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_height (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL gint get_height () const noexcept;

// int gdk_pixbuf_get_n_channels (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_n_channels (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL gint get_n_channels () const noexcept;

// const gchar* /*none,nullable*/ gdk_pixbuf_get_option (GdkPixbuf* pixbuf /*none*/, const gchar* key /*none*/);
// const char* /*none,nullable*/ gdk_pixbuf_get_option (::GdkPixbuf* pixbuf /*none*/, const char* key /*none*/);
GI_INLINE_DECL gi::cstring_v get_option (const gi::cstring_v key) noexcept;

// GHashTable* /*container*/ gdk_pixbuf_get_options (GdkPixbuf* pixbuf /*none*/);
// ::GHashTable* /*container*/ gdk_pixbuf_get_options (::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL gi::Collection<GHashTable, std::pair<char*, char*>, gi::transfer_container_t> get_options () noexcept;

//  /*none*/ gdk_pixbuf_get_pixels (const GdkPixbuf* pixbuf /*none*/);
// * /*none*/ gdk_pixbuf_get_pixels (const ::GdkPixbuf* pixbuf /*none*/);
// SKIP; inconsistent array info

// guchar* /*none*/ gdk_pixbuf_get_pixels_with_length (const GdkPixbuf* pixbuf /*none*/, guint* length);
// guint8* /*none*/ gdk_pixbuf_get_pixels_with_length (const ::GdkPixbuf* pixbuf /*none*/, guint* length);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> get_pixels () const noexcept;

// int gdk_pixbuf_get_rowstride (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_rowstride (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL gint get_rowstride () const noexcept;

// int gdk_pixbuf_get_width (const GdkPixbuf* pixbuf /*none*/);
// gint gdk_pixbuf_get_width (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL gint get_width () const noexcept;

// GdkPixbuf* /*full*/ gdk_pixbuf_new_subpixbuf (GdkPixbuf* src_pixbuf /*none*/, int src_x, int src_y, int width, int height);
// ::GdkPixbuf* /*full*/ gdk_pixbuf_new_subpixbuf (::GdkPixbuf* src_pixbuf /*none*/, gint src_x, gint src_y, gint width, gint height);
GI_INLINE_DECL GdkPixbuf::Pixbuf new_subpixbuf (gint src_x, gint src_y, gint width, gint height) noexcept;

// GBytes* /*full*/ gdk_pixbuf_read_pixel_bytes (const GdkPixbuf* pixbuf /*none*/);
// ::GBytes* /*full*/ gdk_pixbuf_read_pixel_bytes (const ::GdkPixbuf* pixbuf /*none*/);
GI_INLINE_DECL GLib::Bytes read_pixel_bytes () const noexcept;

// const guint8* gdk_pixbuf_read_pixels (const GdkPixbuf* pixbuf /*none*/);
// const guint8 gdk_pixbuf_read_pixels (const ::GdkPixbuf* pixbuf /*none*/);
// SKIP; inconsistent  return pointer depth (1 vs 0)

// FAILURE on gdk_pixbuf_ref; No such node (<xmlattr>.transfer-ownership)
// gboolean gdk_pixbuf_remove_option (GdkPixbuf* pixbuf /*none*/, const gchar* key /*none*/);
// gboolean gdk_pixbuf_remove_option (::GdkPixbuf* pixbuf /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool remove_option (const gi::cstring_v key) noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_rotate_simple (const GdkPixbuf* src /*none*/, GdkPixbufRotation angle);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_rotate_simple (const ::GdkPixbuf* src /*none*/, ::GdkPixbufRotation angle);
GI_INLINE_DECL GdkPixbuf::Pixbuf rotate_simple (GdkPixbuf::PixbufRotation angle) const noexcept;

// void gdk_pixbuf_saturate_and_pixelate (const GdkPixbuf* src /*none*/, GdkPixbuf* dest /*none*/, gfloat saturation, gboolean pixelate);
// void gdk_pixbuf_saturate_and_pixelate (const ::GdkPixbuf* src /*none*/, ::GdkPixbuf* dest /*none*/, gfloat saturation, gboolean pixelate);
GI_INLINE_DECL void saturate_and_pixelate (GdkPixbuf::Pixbuf dest, gfloat saturation, gboolean pixelate) const noexcept;

// gboolean gdk_pixbuf_save (GdkPixbuf* pixbuf /*none*/, const char* filename /*none*/, const char* type /*none*/, GError** error /*none,nullable*/,  ..._ /*none*/);
// gboolean gdk_pixbuf_save (::GdkPixbuf* pixbuf /*none*/, const char* filename /*none*/, const char* type /*none*/, ::GError* error /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gdk_pixbuf_save_to_buffer (GdkPixbuf* pixbuf /*none*/, gchar** buffer /*full,out*/, gsize* buffer_size, const char* type /*none*/, GError** error /*none,nullable*/,  ..._ /*none*/);
// gboolean gdk_pixbuf_save_to_buffer (::GdkPixbuf* pixbuf /*none*/, guint8** buffer /*full,out*/, gsize* buffer_size, const char* type /*none*/, ::GError* error /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gdk_pixbuf_save_to_bufferv (GdkPixbuf* pixbuf /*none*/, gchar** buffer /*full,out*/, gsize* buffer_size, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
// gboolean gdk_pixbuf_save_to_bufferv (::GdkPixbuf* pixbuf /*none*/, guint8** buffer /*full,out*/, gsize* buffer_size, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool save_to_bufferv (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & buffer, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values);
GI_INLINE_DECL bool save_to_bufferv (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & buffer, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> save_to_bufferv (const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values);
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> save_to_bufferv (const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept;

// gboolean gdk_pixbuf_save_to_callback (GdkPixbuf* pixbuf /*none*/, GdkPixbufSaveFunc save_func /*none*/, gpointer user_data, const char* type /*none*/, GError** error /*none,nullable*/,  ..._ /*none*/);
// gboolean gdk_pixbuf_save_to_callback (::GdkPixbuf* pixbuf /*none*/, GdkPixbuf::PixbufSaveFunc::cfunction_type save_func /*none*/, void* user_data, const char* type /*none*/, ::GError* error /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gdk_pixbuf_save_to_callbackv (GdkPixbuf* pixbuf /*none*/, GdkPixbufSaveFunc save_func /*none*/, gpointer user_data, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
// gboolean gdk_pixbuf_save_to_callbackv (::GdkPixbuf* pixbuf /*none*/, GdkPixbuf::PixbufSaveFunc::cfunction_type save_func /*none*/, void* user_data, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool save_to_callbackv (GdkPixbuf::PixbufSaveFunc save_func, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values);
GI_INLINE_DECL bool save_to_callbackv (GdkPixbuf::PixbufSaveFunc save_func, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept;

// gboolean gdk_pixbuf_save_to_stream (GdkPixbuf* pixbuf /*none*/, GOutputStream* stream /*none*/, const char* type /*none*/, GCancellable* cancellable /*none,nullable*/, GError** error /*none,nullable*/,  ..._ /*none*/);
// gboolean gdk_pixbuf_save_to_stream (::GdkPixbuf* pixbuf /*none*/, ::GOutputStream* stream /*none*/, const char* type /*none*/, ::GCancellable* cancellable /*none,nullable*/, ::GError* error /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gdk_pixbuf_save_to_stream_async (GdkPixbuf* pixbuf /*none*/, GOutputStream* stream /*none*/, const gchar* type /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data,  ..._ /*none*/);
// void gdk_pixbuf_save_to_stream_async (::GdkPixbuf* pixbuf /*none*/, ::GOutputStream* stream /*none*/, const char* type /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gdk_pixbuf_save_to_streamv (GdkPixbuf* pixbuf /*none*/, GOutputStream* stream /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean gdk_pixbuf_save_to_streamv (::GdkPixbuf* pixbuf /*none*/, ::GOutputStream* stream /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool save_to_streamv (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, Gio::Cancellable cancellable);
GI_INLINE_DECL bool save_to_streamv (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values);
GI_INLINE_DECL bool save_to_streamv (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool save_to_streamv (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept;

// void gdk_pixbuf_save_to_streamv_async (GdkPixbuf* pixbuf /*none*/, GOutputStream* stream /*none*/, const gchar* type /*none*/, gchar** option_keys /*none,nullable*/, gchar** option_values /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_pixbuf_save_to_streamv_async (::GdkPixbuf* pixbuf /*none*/, ::GOutputStream* stream /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void save_to_streamv_async (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void save_to_streamv_async (Gio::OutputStream stream, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, Gio::AsyncReadyCallback callback) noexcept;

// gboolean gdk_pixbuf_savev (GdkPixbuf* pixbuf /*none*/, const char* filename /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
// gboolean gdk_pixbuf_savev (::GdkPixbuf* pixbuf /*none*/, const char* filename /*none*/, const char* type /*none*/, char** option_keys /*none,nullable*/, char** option_values /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool savev (const gi::cstring_v filename, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values);
GI_INLINE_DECL bool savev (const gi::cstring_v filename, const gi::cstring_v type, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_keys, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> option_values, GLib::Error * _error) noexcept;

// void gdk_pixbuf_scale (const GdkPixbuf* src /*none*/, GdkPixbuf* dest /*none*/, int dest_x, int dest_y, int dest_width, int dest_height, double offset_x, double offset_y, double scale_x, double scale_y, GdkInterpType interp_type);
// void gdk_pixbuf_scale (const ::GdkPixbuf* src /*none*/, ::GdkPixbuf* dest /*none*/, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, ::GdkInterpType interp_type);
GI_INLINE_DECL void scale (GdkPixbuf::Pixbuf dest, gint dest_x, gint dest_y, gint dest_width, gint dest_height, gdouble offset_x, gdouble offset_y, gdouble scale_x, gdouble scale_y, GdkPixbuf::InterpType interp_type) const noexcept;

// GdkPixbuf* /*full,nullable*/ gdk_pixbuf_scale_simple (const GdkPixbuf* src /*none*/, int dest_width, int dest_height, GdkInterpType interp_type);
// ::GdkPixbuf* /*full,nullable*/ gdk_pixbuf_scale_simple (const ::GdkPixbuf* src /*none*/, gint dest_width, gint dest_height, ::GdkInterpType interp_type);
GI_INLINE_DECL GdkPixbuf::Pixbuf scale_simple (gint dest_width, gint dest_height, GdkPixbuf::InterpType interp_type) const noexcept;

// gboolean gdk_pixbuf_set_option (GdkPixbuf* pixbuf /*none*/, const gchar* key /*none*/, const gchar* value /*none*/);
// gboolean gdk_pixbuf_set_option (::GdkPixbuf* pixbuf /*none*/, const char* key /*none*/, const char* value /*none*/);
GI_INLINE_DECL bool set_option (const gi::cstring_v key, const gi::cstring_v value) noexcept;

// void gdk_pixbuf_unref (GdkPixbuf* pixbuf /*none*/);
// void gdk_pixbuf_unref (::GdkPixbuf* pixbuf /*none*/);
// IGNORE; marked ignore

gi::property_proxy<gint, base::PixbufBase> property_bits_per_sample()
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "bits-per-sample"); }
const gi::property_proxy<gint, base::PixbufBase> property_bits_per_sample() const
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "bits-per-sample"); }

gi::property_proxy<GdkPixbuf::Colorspace, base::PixbufBase> property_colorspace()
{ return gi::property_proxy<GdkPixbuf::Colorspace, base::PixbufBase> (*this, "colorspace"); }
const gi::property_proxy<GdkPixbuf::Colorspace, base::PixbufBase> property_colorspace() const
{ return gi::property_proxy<GdkPixbuf::Colorspace, base::PixbufBase> (*this, "colorspace"); }

gi::property_proxy<bool, base::PixbufBase> property_has_alpha()
{ return gi::property_proxy<bool, base::PixbufBase> (*this, "has-alpha"); }
const gi::property_proxy<bool, base::PixbufBase> property_has_alpha() const
{ return gi::property_proxy<bool, base::PixbufBase> (*this, "has-alpha"); }

gi::property_proxy<gint, base::PixbufBase> property_height()
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "height"); }
const gi::property_proxy<gint, base::PixbufBase> property_height() const
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "height"); }

gi::property_proxy<gint, base::PixbufBase> property_n_channels()
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "n-channels"); }
const gi::property_proxy<gint, base::PixbufBase> property_n_channels() const
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "n-channels"); }

gi::property_proxy<GLib::Bytes, base::PixbufBase> property_pixel_bytes()
{ return gi::property_proxy<GLib::Bytes, base::PixbufBase> (*this, "pixel-bytes"); }
const gi::property_proxy<GLib::Bytes, base::PixbufBase> property_pixel_bytes() const
{ return gi::property_proxy<GLib::Bytes, base::PixbufBase> (*this, "pixel-bytes"); }

gi::property_proxy<gpointer, base::PixbufBase> property_pixels()
{ return gi::property_proxy<gpointer, base::PixbufBase> (*this, "pixels"); }
const gi::property_proxy<gpointer, base::PixbufBase> property_pixels() const
{ return gi::property_proxy<gpointer, base::PixbufBase> (*this, "pixels"); }

gi::property_proxy<gint, base::PixbufBase> property_rowstride()
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "rowstride"); }
const gi::property_proxy<gint, base::PixbufBase> property_rowstride() const
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "rowstride"); }

gi::property_proxy<gint, base::PixbufBase> property_width()
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "width"); }
const gi::property_proxy<gint, base::PixbufBase> property_width() const
{ return gi::property_proxy<gint, base::PixbufBase> (*this, "width"); }

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbuf_extra_def.hpp>)
#include <gdkpixbuf/pixbuf_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbuf_extra.hpp>)
#include <gdkpixbuf/pixbuf_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class Pixbuf : public GI_GDKPIXBUF_PIXBUF_BASE
{ typedef GI_GDKPIXBUF_PIXBUF_BASE super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbuf>
{ typedef GdkPixbuf::Pixbuf type; }; 

} // namespace repository

} // namespace gi

#endif
