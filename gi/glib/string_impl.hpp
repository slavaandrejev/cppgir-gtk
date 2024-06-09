// AUTO-GENERATED

#ifndef _GI_GLIB_STRING_IMPL_HPP_
#define _GI_GLIB_STRING_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static char* _field_str_get (const ::GString* obj) { return (char*) obj->str; }
// char* /*none*/ String::str (const ::GString* obj /*none*/);
// char* /*none*/ String::str (const ::GString* obj /*none*/);
gi::cstring_v base::StringBase::str_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GString* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_str_get;
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static gsize _field_len_get (const ::GString* obj) { return (gsize) obj->len; }
// gsize String::len (const ::GString* obj /*none*/);
// gsize String::len (const ::GString* obj /*none*/);
gsize base::StringBase::len_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GString* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_len_get;
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()));
  return _temp_ret;
}

static void _field_len_set (::GString* obj, gsize _value) { obj->len = (decltype(obj->len)) _value; }
//  String::len (::GString* obj /*none*/, gsize _value);
// void String::len (::GString* obj /*none*/, gsize _value);
void base::StringBase::len_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GString* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_len_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GString*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_allocated_len_get (const ::GString* obj) { return (gsize) obj->allocated_len; }
// gsize String::allocated_len (const ::GString* obj /*none*/);
// gsize String::allocated_len (const ::GString* obj /*none*/);
gsize base::StringBase::allocated_len_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GString* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_allocated_len_get;
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()));
  return _temp_ret;
}

static void _field_allocated_len_set (::GString* obj, gsize _value) { obj->allocated_len = (decltype(obj->allocated_len)) _value; }
//  String::allocated_len (::GString* obj /*none*/, gsize _value);
// void String::allocated_len (::GString* obj /*none*/, gsize _value);
void base::StringBase::allocated_len_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GString* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_allocated_len_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GString*) (gobj_()), (gsize) (_value_to_c));
}

// GString* /*full*/ g_string_new (const gchar* init /*none,nullable*/);
// ::GString* /*full*/ g_string_new (const char* init /*none,nullable*/);
GLib::String base::StringBase::new_ (const gi::cstring_v init) noexcept
{
  typedef ::GString* (*call_wrap_t) (const char* init);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_new;
  auto init_to_c = gi::unwrap (init, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (init_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::String base::StringBase::new_ () noexcept
{
  typedef ::GString* (*call_wrap_t) (const char* init);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_new;
  auto init_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (init_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GString* /*full*/ g_string_new_len (const gchar* init /*none*/, gssize len);
// ::GString* /*full*/ g_string_new_len (const char* init /*none*/, gssize len);
GLib::String base::StringBase::new_len (const gi::cstring_v init, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (const char* init, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_new_len;
  auto len_to_c = len;
  auto init_to_c = gi::unwrap (init, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (init_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GString* /*full*/ g_string_new_take (gchar* init /*full,nullable*/);
// ::GString* /*full*/ g_string_new_take (char* init /*full,nullable*/);
GLib::String base::StringBase::new_take (gi::cstring init) noexcept
{
  typedef ::GString* (*call_wrap_t) (char* init);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_new_take;
  auto init_to_c = gi::unwrap (std::move(init), gi::transfer_full);
  auto _temp_ret = call_wrap_v ((char*) (init_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::String base::StringBase::new_take () noexcept
{
  typedef ::GString* (*call_wrap_t) (char* init);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_new_take;
  auto init_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((char*) (init_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GString* /*full*/ g_string_sized_new (gsize dfl_size);
// ::GString* /*full*/ g_string_sized_new (gsize dfl_size);
GLib::String base::StringBase::sized_new (gsize dfl_size) noexcept
{
  typedef ::GString* (*call_wrap_t) (gsize dfl_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_sized_new;
  auto dfl_size_to_c = dfl_size;
  auto _temp_ret = call_wrap_v ((gsize) (dfl_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GString* /*none*/ g_string_append (GString* string /*none*/, const gchar* val /*none*/);
// ::GString* /*none*/ g_string_append (::GString* string /*none*/, const char* val /*none*/);
GLib::String_Ref base::StringBase::append (const gi::cstring_v val) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* val);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_append;
  auto val_to_c = gi::unwrap (val, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_append_c (GString* string /*none*/, gchar c);
// ::GString* /*none*/ g_string_append_c (::GString* string /*none*/, gchar c);
GLib::String_Ref base::StringBase::append_c (gchar c) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_append_c;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gchar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_append_len (GString* string /*none*/, const gchar* val /*none*/, gssize len);
// ::GString* /*none*/ g_string_append_len (::GString* string /*none*/, const char* val /*none*/, gssize len);
GLib::String_Ref base::StringBase::append_len (const gi::cstring_v val, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* val, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_append_len;
  auto len_to_c = len;
  auto val_to_c = gi::unwrap (val, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (val_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_string_append_printf (GString* string /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_string_append_printf (::GString* string /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GString* /*none*/ g_string_append_unichar (GString* string /*none*/, gunichar wc);
// ::GString* /*none*/ g_string_append_unichar (::GString* string /*none*/, gunichar wc);
GLib::String_Ref base::StringBase::append_unichar (gunichar wc) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gunichar wc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_append_unichar;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gunichar) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_append_uri_escaped (GString* string /*none*/, const gchar* unescaped /*none*/, const gchar* reserved_chars_allowed /*none*/, gboolean allow_utf8);
// ::GString* /*none*/ g_string_append_uri_escaped (::GString* string /*none*/, const char* unescaped /*none*/, const char* reserved_chars_allowed /*none*/, gboolean allow_utf8);
GLib::String_Ref base::StringBase::append_uri_escaped (const gi::cstring_v unescaped, const gi::cstring_v reserved_chars_allowed, gboolean allow_utf8) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_append_uri_escaped;
  auto allow_utf8_to_c = allow_utf8;
  auto reserved_chars_allowed_to_c = gi::unwrap (reserved_chars_allowed, gi::transfer_none);
  auto unescaped_to_c = gi::unwrap (unescaped, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (unescaped_to_c), (const char*) (reserved_chars_allowed_to_c), (gboolean) (allow_utf8_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_string_append_vprintf (GString* string /*none*/, const gchar* format /*none*/, va_list args /*none*/);
// void g_string_append_vprintf (::GString* string /*none*/, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// GString* /*none*/ g_string_ascii_down (GString* string /*none*/);
// ::GString* /*none*/ g_string_ascii_down (::GString* string /*none*/);
GLib::String_Ref base::StringBase::ascii_down () noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_ascii_down;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_ascii_up (GString* string /*none*/);
// ::GString* /*none*/ g_string_ascii_up (::GString* string /*none*/);
GLib::String_Ref base::StringBase::ascii_up () noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_ascii_up;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_assign (GString* string /*none*/, const gchar* rval /*none*/);
// ::GString* /*none*/ g_string_assign (::GString* string /*none*/, const char* rval /*none*/);
GLib::String_Ref base::StringBase::assign (const gi::cstring_v rval) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* rval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_assign;
  auto rval_to_c = gi::unwrap (rval, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (rval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_down (GString* string /*none*/);
// ::GString* /*none*/ g_string_down (::GString* string /*none*/);
// IGNORE; deprecated

// gboolean g_string_equal (const GString* v /*none*/, const GString* v2 /*none*/);
// gboolean g_string_equal (const ::GString* v /*none*/, const ::GString* v2 /*none*/);
bool base::StringBase::equal (const GLib::String_Ref v2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GString* v, const ::GString* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_equal;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()), (const ::GString*) (v2_to_c));
  return _temp_ret;
}

// GString* /*none*/ g_string_erase (GString* string /*none*/, gssize pos, gssize len);
// ::GString* /*none*/ g_string_erase (::GString* string /*none*/, gssize pos, gssize len);
GLib::String_Ref base::StringBase::erase (gssize pos, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_erase;
  auto len_to_c = len;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gchar* /*full,nullable*/ g_string_free (GString* string /*full*/, gboolean free_segment);
// char* /*full,nullable*/ g_string_free (::GString* string /*full*/, gboolean free_segment);
// IGNORE; marked ignore

// gchar* /*full*/ g_string_free_and_steal (GString* string /*full*/);
// char* /*full*/ g_string_free_and_steal (::GString* string /*full*/);
gi::cstring base::StringBase::free_and_steal () noexcept
{
  typedef char* (*call_wrap_t) (::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_free_and_steal;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ g_string_free_to_bytes (GString* string /*full*/);
// ::GBytes* /*full*/ g_string_free_to_bytes (::GString* string /*full*/);
GLib::Bytes base::StringBase::free_to_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_free_to_bytes;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint g_string_hash (const GString* str /*none*/);
// guint g_string_hash (const ::GString* str /*none*/);
guint base::StringBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GString* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_hash;
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()));
  return _temp_ret;
}

// GString* /*none*/ g_string_insert (GString* string /*none*/, gssize pos, const gchar* val /*none*/);
// ::GString* /*none*/ g_string_insert (::GString* string /*none*/, gssize pos, const char* val /*none*/);
GLib::String_Ref base::StringBase::insert (gssize pos, const gi::cstring_v val) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, const char* val);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_insert;
  auto val_to_c = gi::unwrap (val, gi::transfer_none);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (const char*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_insert_c (GString* string /*none*/, gssize pos, gchar c);
// ::GString* /*none*/ g_string_insert_c (::GString* string /*none*/, gssize pos, gchar c);
GLib::String_Ref base::StringBase::insert_c (gssize pos, gchar c) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_insert_c;
  auto c_to_c = c;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (gchar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_insert_len (GString* string /*none*/, gssize pos, const gchar* val /*none*/, gssize len);
// ::GString* /*none*/ g_string_insert_len (::GString* string /*none*/, gssize pos, const char* val /*none*/, gssize len);
GLib::String_Ref base::StringBase::insert_len (gssize pos, const gi::cstring_v val, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, const char* val, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_insert_len;
  auto len_to_c = len;
  auto val_to_c = gi::unwrap (val, gi::transfer_none);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (const char*) (val_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_insert_unichar (GString* string /*none*/, gssize pos, gunichar wc);
// ::GString* /*none*/ g_string_insert_unichar (::GString* string /*none*/, gssize pos, gunichar wc);
GLib::String_Ref base::StringBase::insert_unichar (gssize pos, gunichar wc) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, gunichar wc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_insert_unichar;
  auto wc_to_c = wc;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (gunichar) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_overwrite (GString* string /*none*/, gsize pos, const gchar* val /*none*/);
// ::GString* /*none*/ g_string_overwrite (::GString* string /*none*/, gsize pos, const char* val /*none*/);
GLib::String_Ref base::StringBase::overwrite (gsize pos, const gi::cstring_v val) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gsize pos, const char* val);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_overwrite;
  auto val_to_c = gi::unwrap (val, gi::transfer_none);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gsize) (pos_to_c), (const char*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_overwrite_len (GString* string /*none*/, gsize pos, const gchar* val /*none*/, gssize len);
// ::GString* /*none*/ g_string_overwrite_len (::GString* string /*none*/, gsize pos, const char* val /*none*/, gssize len);
GLib::String_Ref base::StringBase::overwrite_len (gsize pos, const gi::cstring_v val, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gsize pos, const char* val, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_overwrite_len;
  auto len_to_c = len;
  auto val_to_c = gi::unwrap (val, gi::transfer_none);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gsize) (pos_to_c), (const char*) (val_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_prepend (GString* string /*none*/, const gchar* val /*none*/);
// ::GString* /*none*/ g_string_prepend (::GString* string /*none*/, const char* val /*none*/);
GLib::String_Ref base::StringBase::prepend (const gi::cstring_v val) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* val);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_prepend;
  auto val_to_c = gi::unwrap (val, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_prepend_c (GString* string /*none*/, gchar c);
// ::GString* /*none*/ g_string_prepend_c (::GString* string /*none*/, gchar c);
GLib::String_Ref base::StringBase::prepend_c (gchar c) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_prepend_c;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gchar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_prepend_len (GString* string /*none*/, const gchar* val /*none*/, gssize len);
// ::GString* /*none*/ g_string_prepend_len (::GString* string /*none*/, const char* val /*none*/, gssize len);
GLib::String_Ref base::StringBase::prepend_len (const gi::cstring_v val, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* val, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_prepend_len;
  auto len_to_c = len;
  auto val_to_c = gi::unwrap (val, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (val_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_prepend_unichar (GString* string /*none*/, gunichar wc);
// ::GString* /*none*/ g_string_prepend_unichar (::GString* string /*none*/, gunichar wc);
GLib::String_Ref base::StringBase::prepend_unichar (gunichar wc) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gunichar wc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_prepend_unichar;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gunichar) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_string_printf (GString* string /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_string_printf (::GString* string /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// guint g_string_replace (GString* string /*none*/, const gchar* find /*none*/, const gchar* replace /*none*/, guint limit);
// guint g_string_replace (::GString* string /*none*/, const char* find /*none*/, const char* replace /*none*/, guint limit);
guint base::StringBase::replace (const gi::cstring_v find, const gi::cstring_v replace, guint limit) noexcept
{
  typedef guint (*call_wrap_t) (::GString* string, const char* find, const char* replace, guint limit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_replace;
  auto limit_to_c = limit;
  auto replace_to_c = gi::unwrap (replace, gi::transfer_none);
  auto find_to_c = gi::unwrap (find, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (find_to_c), (const char*) (replace_to_c), (guint) (limit_to_c));
  return _temp_ret;
}

// GString* /*none*/ g_string_set_size (GString* string /*none*/, gsize len);
// ::GString* /*none*/ g_string_set_size (::GString* string /*none*/, gsize len);
GLib::String_Ref base::StringBase::set_size (gsize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_set_size;
  auto len_to_c = len;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gsize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_truncate (GString* string /*none*/, gsize len);
// ::GString* /*none*/ g_string_truncate (::GString* string /*none*/, gsize len);
GLib::String_Ref base::StringBase::truncate (gsize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_string_truncate;
  auto len_to_c = len;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gsize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GString* /*none*/ g_string_up (GString* string /*none*/);
// ::GString* /*none*/ g_string_up (::GString* string /*none*/);
// IGNORE; deprecated

// void g_string_vprintf (GString* string /*none*/, const gchar* format /*none*/, va_list args /*none*/);
// void g_string_vprintf (::GString* string /*none*/, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/string_extra_def_impl.hpp>)
#include <glib/string_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/string_extra_impl.hpp>)
#include <glib/string_extra_impl.hpp>
#endif
#endif

#endif
