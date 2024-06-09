// AUTO-GENERATED

#ifndef _GI_GLIB_IOCHANNEL_HPP_
#define _GI_GLIB_IOCHANNEL_HPP_


namespace gi {

namespace repository {

namespace GLib {

class IOChannel_Ref;
class String;
class String_Ref;

class IOChannel;

namespace base {


#define GI_GLIB_IOCHANNEL_BASE base::IOChannelBase
class IOChannelBase : public gi::detail::GBoxedWrapperBase<IOChannelBase, ::GIOChannel>
{
typedef gi::detail::GBoxedWrapperBase<IOChannelBase, ::GIOChannel> super_type;
public:

IOChannelBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_io_channel_get_type(); } 

// GIOChannel* /*full*/ g_io_channel_new_file (const gchar* filename /*none*/, const gchar* mode /*none*/, GError ** error);
// ::GIOChannel* /*full*/ g_io_channel_new_file (const char* filename /*none*/, const char* mode /*none*/, GError ** error);
static GI_INLINE_DECL GLib::IOChannel new_file (const gi::cstring_v filename, const gi::cstring_v mode);
static GI_INLINE_DECL GLib::IOChannel new_file (const gi::cstring_v filename, const gi::cstring_v mode, GLib::Error * _error) noexcept;

// GIOChannel* /*full*/ g_io_channel_unix_new (int fd);
// ::GIOChannel* /*full*/ g_io_channel_unix_new (gint fd);
static GI_INLINE_DECL GLib::IOChannel unix_new (gint fd) noexcept;

// void g_io_channel_close (GIOChannel* channel /*none*/);
// void g_io_channel_close (::GIOChannel* channel /*none*/);
// IGNORE; deprecated

// GIOStatus g_io_channel_flush (GIOChannel* channel /*none*/, GError ** error);
// ::GIOStatus g_io_channel_flush (::GIOChannel* channel /*none*/, GError ** error);
GI_INLINE_DECL GLib::IOStatus flush ();
GI_INLINE_DECL GLib::IOStatus flush (GLib::Error * _error) noexcept;

// GIOCondition g_io_channel_get_buffer_condition (GIOChannel* channel /*none*/);
// ::GIOCondition g_io_channel_get_buffer_condition (::GIOChannel* channel /*none*/);
GI_INLINE_DECL GLib::IOCondition get_buffer_condition () noexcept;

// gsize g_io_channel_get_buffer_size (GIOChannel* channel /*none*/);
// gsize g_io_channel_get_buffer_size (::GIOChannel* channel /*none*/);
GI_INLINE_DECL gsize get_buffer_size () noexcept;

// gboolean g_io_channel_get_buffered (GIOChannel* channel /*none*/);
// gboolean g_io_channel_get_buffered (::GIOChannel* channel /*none*/);
GI_INLINE_DECL bool get_buffered () noexcept;

// gboolean g_io_channel_get_close_on_unref (GIOChannel* channel /*none*/);
// gboolean g_io_channel_get_close_on_unref (::GIOChannel* channel /*none*/);
// IGNORE; marked ignore

// const gchar* /*none*/ g_io_channel_get_encoding (GIOChannel* channel /*none*/);
// const char* /*none*/ g_io_channel_get_encoding (::GIOChannel* channel /*none*/);
GI_INLINE_DECL gi::cstring_v get_encoding () noexcept;

// GIOFlags g_io_channel_get_flags (GIOChannel* channel /*none*/);
// ::GIOFlags g_io_channel_get_flags (::GIOChannel* channel /*none*/);
GI_INLINE_DECL GLib::IOFlags get_flags () noexcept;

// const gchar* /*none*/ g_io_channel_get_line_term (GIOChannel* channel /*none*/, gint* length);
// const char* /*none*/ g_io_channel_get_line_term (::GIOChannel* channel /*none*/, gint* length);
GI_INLINE_DECL gi::cstring_v get_line_term (gint * length) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring_v, gint> get_line_term () noexcept;

// void g_io_channel_init (GIOChannel* channel /*none*/);
// void g_io_channel_init (::GIOChannel* channel /*none*/);
GI_INLINE_DECL void init () noexcept;

// GIOError g_io_channel_read (GIOChannel* channel /*none*/, gchar* buf /*none*/, gsize count, gsize* bytes_read);
// ::GIOError g_io_channel_read (::GIOChannel* channel /*none*/, char* buf /*none*/, gsize count, gsize bytes_read);
// IGNORE; deprecated

// GIOStatus g_io_channel_read_chars (GIOChannel* channel /*none*/, gchar* buf /*none,out,ca*/, gsize count, gsize* bytes_read, GError ** error);
// ::GIOStatus g_io_channel_read_chars (::GIOChannel* channel /*none*/, guint8* buf /*none,out,ca*/, gsize count, gsize* bytes_read, GError ** error);
GI_INLINE_DECL GLib::IOStatus read_chars (guint8 * buf, gsize count, gsize * bytes_read);
GI_INLINE_DECL GLib::IOStatus read_chars (guint8 * buf, gsize count, gsize * bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::IOStatus, gsize> read_chars (guint8 * buf, gsize count);
GI_INLINE_DECL std::tuple<GLib::IOStatus, gsize> read_chars (guint8 * buf, gsize count, GLib::Error * _error) noexcept;

// GIOStatus g_io_channel_read_line (GIOChannel* channel /*none*/, gchar** str_return /*full,out*/, gsize* length, gsize* terminator_pos, GError ** error);
// ::GIOStatus g_io_channel_read_line (::GIOChannel* channel /*none*/, char** str_return /*full,out*/, gsize* length, gsize* terminator_pos, GError ** error);
GI_INLINE_DECL GLib::IOStatus read_line (gi::cstring & str_return, gsize * length, gsize * terminator_pos);
GI_INLINE_DECL GLib::IOStatus read_line (gi::cstring & str_return, gsize * length, gsize * terminator_pos, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::IOStatus, gi::cstring, gsize, gsize> read_line ();
GI_INLINE_DECL std::tuple<GLib::IOStatus, gi::cstring, gsize, gsize> read_line (GLib::Error * _error) noexcept;

// GIOStatus g_io_channel_read_line_string (GIOChannel* channel /*none*/, GString* buffer /*none*/, gsize* terminator_pos, GError ** error);
// ::GIOStatus g_io_channel_read_line_string (::GIOChannel* channel /*none*/, ::GString* buffer /*none*/, gsize terminator_pos, GError ** error);
// SKIP; inconsistent terminator_pos in pointer depth (1 vs 0)

// GIOStatus g_io_channel_read_to_end (GIOChannel* channel /*none*/, gchar** str_return /*full,out*/, gsize* length, GError ** error);
// ::GIOStatus g_io_channel_read_to_end (::GIOChannel* channel /*none*/, guint8** str_return /*full,out*/, gsize* length, GError ** error);
GI_INLINE_DECL GLib::IOStatus read_to_end (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & str_return);
GI_INLINE_DECL GLib::IOStatus read_to_end (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & str_return, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::IOStatus, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> read_to_end ();
GI_INLINE_DECL std::tuple<GLib::IOStatus, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>> read_to_end (GLib::Error * _error) noexcept;

// GIOStatus g_io_channel_read_unichar (GIOChannel* channel /*none*/, gunichar* thechar, GError ** error);
// ::GIOStatus g_io_channel_read_unichar (::GIOChannel* channel /*none*/, gunichar* thechar, GError ** error);
GI_INLINE_DECL GLib::IOStatus read_unichar (gunichar & thechar);
GI_INLINE_DECL GLib::IOStatus read_unichar (gunichar & thechar, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::IOStatus, gunichar> read_unichar ();
GI_INLINE_DECL std::tuple<GLib::IOStatus, gunichar> read_unichar (GLib::Error * _error) noexcept;

// GIOChannel* /*full*/ g_io_channel_ref (GIOChannel* channel /*none*/);
// ::GIOChannel* /*full*/ g_io_channel_ref (::GIOChannel* channel /*none*/);
// IGNORE; marked ignore

// GIOError g_io_channel_seek (GIOChannel* channel /*none*/, gint64 offset, GSeekType type);
// ::GIOError g_io_channel_seek (::GIOChannel* channel /*none*/, gint64 offset, ::GSeekType type);
// IGNORE; deprecated

// GIOStatus g_io_channel_seek_position (GIOChannel* channel /*none*/, gint64 offset, GSeekType type, GError ** error);
// ::GIOStatus g_io_channel_seek_position (::GIOChannel* channel /*none*/, gint64 offset, ::GSeekType type, GError ** error);
GI_INLINE_DECL GLib::IOStatus seek_position (gint64 offset, GLib::SeekType type);
GI_INLINE_DECL GLib::IOStatus seek_position (gint64 offset, GLib::SeekType type, GLib::Error * _error) noexcept;

// void g_io_channel_set_buffer_size (GIOChannel* channel /*none*/, gsize size);
// void g_io_channel_set_buffer_size (::GIOChannel* channel /*none*/, gsize size);
GI_INLINE_DECL void set_buffer_size (gsize size) noexcept;

// void g_io_channel_set_buffered (GIOChannel* channel /*none*/, gboolean buffered);
// void g_io_channel_set_buffered (::GIOChannel* channel /*none*/, gboolean buffered);
GI_INLINE_DECL void set_buffered (gboolean buffered) noexcept;

// void g_io_channel_set_close_on_unref (GIOChannel* channel /*none*/, gboolean do_close);
// void g_io_channel_set_close_on_unref (::GIOChannel* channel /*none*/, gboolean do_close);
// IGNORE; marked ignore

// GIOStatus g_io_channel_set_encoding (GIOChannel* channel /*none*/, const gchar* encoding /*none,nullable*/, GError ** error);
// ::GIOStatus g_io_channel_set_encoding (::GIOChannel* channel /*none*/, const char* encoding /*none,nullable*/, GError ** error);
GI_INLINE_DECL GLib::IOStatus set_encoding (const gi::cstring_v encoding);
GI_INLINE_DECL GLib::IOStatus set_encoding ();
GI_INLINE_DECL GLib::IOStatus set_encoding (const gi::cstring_v encoding, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::IOStatus set_encoding (GLib::Error * _error) noexcept;

// GIOStatus g_io_channel_set_flags (GIOChannel* channel /*none*/, GIOFlags flags, GError ** error);
// ::GIOStatus g_io_channel_set_flags (::GIOChannel* channel /*none*/, ::GIOFlags flags, GError ** error);
GI_INLINE_DECL GLib::IOStatus set_flags (GLib::IOFlags flags);
GI_INLINE_DECL GLib::IOStatus set_flags (GLib::IOFlags flags, GLib::Error * _error) noexcept;

// void g_io_channel_set_line_term (GIOChannel* channel /*none*/, const gchar* line_term /*none,nullable*/, gint length);
// void g_io_channel_set_line_term (::GIOChannel* channel /*none*/, const char* line_term /*none,nullable*/, gint length);
GI_INLINE_DECL void set_line_term (const gi::cstring_v line_term, gint length) noexcept;
GI_INLINE_DECL void set_line_term (gint length) noexcept;

// GIOStatus g_io_channel_shutdown (GIOChannel* channel /*none*/, gboolean flush, GError ** error);
// ::GIOStatus g_io_channel_shutdown (::GIOChannel* channel /*none*/, gboolean flush, GError ** error);
GI_INLINE_DECL GLib::IOStatus shutdown (gboolean flush);
GI_INLINE_DECL GLib::IOStatus shutdown (gboolean flush, GLib::Error * _error) noexcept;

// gint g_io_channel_unix_get_fd (GIOChannel* channel /*none*/);
// gint g_io_channel_unix_get_fd (::GIOChannel* channel /*none*/);
GI_INLINE_DECL gint unix_get_fd () noexcept;

// void g_io_channel_unref (GIOChannel* channel /*none*/);
// void g_io_channel_unref (::GIOChannel* channel /*none*/);
// IGNORE; marked ignore

// GIOError g_io_channel_write (GIOChannel* channel /*none*/, const gchar* buf /*none*/, gsize count, gsize* bytes_written);
// ::GIOError g_io_channel_write (::GIOChannel* channel /*none*/, const char* buf /*none*/, gsize count, gsize bytes_written);
// IGNORE; deprecated

// GIOStatus g_io_channel_write_chars (GIOChannel* channel /*none*/,  buf /*none*/, gssize count, gsize* bytes_written, GError ** error);
// ::GIOStatus g_io_channel_write_chars (::GIOChannel* channel /*none*/, * buf /*none*/, gssize count, gsize* bytes_written, GError ** error);
// SKIP; inconsistent array info

// GIOStatus g_io_channel_write_unichar (GIOChannel* channel /*none*/, gunichar thechar, GError ** error);
// ::GIOStatus g_io_channel_write_unichar (::GIOChannel* channel /*none*/, gunichar thechar, GError ** error);
GI_INLINE_DECL GLib::IOStatus write_unichar (gunichar thechar);
GI_INLINE_DECL GLib::IOStatus write_unichar (gunichar thechar, GLib::Error * _error) noexcept;

// GIOChannelError g_io_channel_error_from_errno (gint en);
// ::GIOChannelError g_io_channel_error_from_errno (gint en);
static GI_INLINE_DECL GLib::IOChannelError error_from_errno (gint en) noexcept;

// GQuark g_io_channel_error_quark ();
// ::GQuark g_io_channel_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/iochannel_extra_def.hpp>)
#include <glib/iochannel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/iochannel_extra.hpp>)
#include <glib/iochannel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class IOChannel_Ref;

class IOChannel : public gi::detail::GBoxedWrapper<IOChannel, ::GIOChannel, GI_GLIB_IOCHANNEL_BASE, IOChannel_Ref>
{ typedef gi::detail::GBoxedWrapper<IOChannel, ::GIOChannel, GI_GLIB_IOCHANNEL_BASE, IOChannel_Ref> super_type; using super_type::super_type; };


class IOChannel_Ref : public gi::detail::GBoxedRefWrapper<IOChannel, ::GIOChannel, GI_GLIB_IOCHANNEL_BASE>
{ typedef gi::detail::GBoxedRefWrapper<IOChannel, ::GIOChannel, GI_GLIB_IOCHANNEL_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GIOChannel>
{ typedef GLib::IOChannel type; }; 

} // namespace repository

} // namespace gi

#endif
