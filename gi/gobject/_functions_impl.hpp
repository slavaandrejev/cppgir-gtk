// AUTO-GENERATED

#ifndef _GI_GOBJECT__FUNCTIONS_IMPL_HPP_
#define _GI_GOBJECT__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

// gpointer g_boxed_copy (GType boxed_type, gconstpointer src_boxed);
// void* g_boxed_copy (GType boxed_type, const void* src_boxed);
gpointer boxed_copy (GType boxed_type, const void* src_boxed) noexcept
{
  typedef void* (*call_wrap_t) (GType boxed_type, const void* src_boxed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_boxed_copy;
  auto src_boxed_to_c = src_boxed;
  auto boxed_type_to_c = boxed_type;
  auto _temp_ret = call_wrap_v ((GType) (boxed_type_to_c), (const void*) (src_boxed_to_c));
  return _temp_ret;
}

// GType g_boxed_type_register_static (const gchar* name /*none*/, GBoxedCopyFunc boxed_copy /*none*/, GBoxedFreeFunc boxed_free /*none*/);
// GType g_boxed_type_register_static (const char* name /*none*/,  boxed_copy /*none*/,  boxed_free /*none*/);
// SKIP; boxed_free type  not supported, boxed_copy type  not supported

// void g_clear_object (GObject** object_ptr /*none*/);
// void g_clear_object (::GObject* object_ptr /*none*/);
// IGNORE; not introspectable, inconsistent object_ptr in pointer depth (2 vs 1)

// void g_clear_signal_handler (gulong* handler_id_ptr, gpointer instance /*none*/);
// void g_clear_signal_handler (gulong handler_id_ptr, ::GObject* instance /*none*/);
// SKIP; inconsistent handler_id_ptr in pointer depth (1 vs 0)

// void g_enum_complete_type_info (GType g_enum_type, GTypeInfo* info /*full,out*/, const GEnumValue* const_values /*none*/);
// void g_enum_complete_type_info (GType g_enum_type, ::GTypeInfo** info /*full,out*/, const ::GEnumValue* const_values /*none*/);
// SKIP; inconsistent info out pointer depth (1 vs 2)

// GEnumValue* /*none,nullable*/ g_enum_get_value (GEnumClass* enum_class /*none*/, gint value);
// ::GEnumValue* /*none,nullable*/ g_enum_get_value (::GEnumClass* enum_class /*none*/, gint value);
GObject::EnumValue_Ref enum_get_value (GObject::EnumClass_Ref enum_class, gint value) noexcept
{
  typedef ::GEnumValue* (*call_wrap_t) (::GEnumClass* enum_class, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_enum_get_value;
  auto value_to_c = value;
  auto enum_class_to_c = gi::unwrap (enum_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GEnumClass*) (enum_class_to_c), (gint) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GEnumValue* /*none,nullable*/ g_enum_get_value_by_name (GEnumClass* enum_class /*none*/, const gchar* name /*none*/);
// ::GEnumValue* /*none,nullable*/ g_enum_get_value_by_name (::GEnumClass* enum_class /*none*/, const char* name /*none*/);
GObject::EnumValue_Ref enum_get_value_by_name (GObject::EnumClass_Ref enum_class, const gi::cstring_v name) noexcept
{
  typedef ::GEnumValue* (*call_wrap_t) (::GEnumClass* enum_class, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_enum_get_value_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto enum_class_to_c = gi::unwrap (enum_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GEnumClass*) (enum_class_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GEnumValue* /*none,nullable*/ g_enum_get_value_by_nick (GEnumClass* enum_class /*none*/, const gchar* nick /*none*/);
// ::GEnumValue* /*none,nullable*/ g_enum_get_value_by_nick (::GEnumClass* enum_class /*none*/, const char* nick /*none*/);
GObject::EnumValue_Ref enum_get_value_by_nick (GObject::EnumClass_Ref enum_class, const gi::cstring_v nick) noexcept
{
  typedef ::GEnumValue* (*call_wrap_t) (::GEnumClass* enum_class, const char* nick);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_enum_get_value_by_nick;
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto enum_class_to_c = gi::unwrap (enum_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GEnumClass*) (enum_class_to_c), (const char*) (nick_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GType g_enum_register_static (const gchar* name /*none*/, const GEnumValue* const_static_values /*none*/);
// GType g_enum_register_static (const char* name /*none*/, const ::GEnumValue* const_static_values /*none*/);
GType enum_register_static (const gi::cstring_v name, const GObject::EnumValue_Ref const_static_values) noexcept
{
  typedef GType (*call_wrap_t) (const char* name, const ::GEnumValue* const_static_values);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_enum_register_static;
  auto const_static_values_to_c = gi::unwrap (const_static_values, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GEnumValue*) (const_static_values_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_enum_to_string (GType g_enum_type, gint value);
// char* /*full*/ g_enum_to_string (GType g_enum_type, gint value);
gi::cstring enum_to_string (GType g_enum_type, gint value) noexcept
{
  typedef char* (*call_wrap_t) (GType g_enum_type, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_enum_to_string;
  auto value_to_c = value;
  auto g_enum_type_to_c = g_enum_type;
  auto _temp_ret = call_wrap_v ((GType) (g_enum_type_to_c), (gint) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_flags_complete_type_info (GType g_flags_type, GTypeInfo* info /*full,out*/, const GFlagsValue* const_values /*none*/);
// void g_flags_complete_type_info (GType g_flags_type, ::GTypeInfo** info /*full,out*/, const ::GFlagsValue* const_values /*none*/);
// SKIP; inconsistent info out pointer depth (1 vs 2)

// GFlagsValue* /*none,nullable*/ g_flags_get_first_value (GFlagsClass* flags_class /*none*/, guint value);
// ::GFlagsValue* /*none,nullable*/ g_flags_get_first_value (::GFlagsClass* flags_class /*none*/, guint value);
GObject::FlagsValue_Ref flags_get_first_value (GObject::FlagsClass_Ref flags_class, guint value) noexcept
{
  typedef ::GFlagsValue* (*call_wrap_t) (::GFlagsClass* flags_class, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_flags_get_first_value;
  auto value_to_c = value;
  auto flags_class_to_c = gi::unwrap (flags_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFlagsClass*) (flags_class_to_c), (guint) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFlagsValue* /*none,nullable*/ g_flags_get_value_by_name (GFlagsClass* flags_class /*none*/, const gchar* name /*none*/);
// ::GFlagsValue* /*none,nullable*/ g_flags_get_value_by_name (::GFlagsClass* flags_class /*none*/, const char* name /*none*/);
GObject::FlagsValue_Ref flags_get_value_by_name (GObject::FlagsClass_Ref flags_class, const gi::cstring_v name) noexcept
{
  typedef ::GFlagsValue* (*call_wrap_t) (::GFlagsClass* flags_class, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_flags_get_value_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_class_to_c = gi::unwrap (flags_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFlagsClass*) (flags_class_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFlagsValue* /*none,nullable*/ g_flags_get_value_by_nick (GFlagsClass* flags_class /*none*/, const gchar* nick /*none*/);
// ::GFlagsValue* /*none,nullable*/ g_flags_get_value_by_nick (::GFlagsClass* flags_class /*none*/, const char* nick /*none*/);
GObject::FlagsValue_Ref flags_get_value_by_nick (GObject::FlagsClass_Ref flags_class, const gi::cstring_v nick) noexcept
{
  typedef ::GFlagsValue* (*call_wrap_t) (::GFlagsClass* flags_class, const char* nick);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_flags_get_value_by_nick;
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto flags_class_to_c = gi::unwrap (flags_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFlagsClass*) (flags_class_to_c), (const char*) (nick_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GType g_flags_register_static (const gchar* name /*none*/, const GFlagsValue* const_static_values /*none*/);
// GType g_flags_register_static (const char* name /*none*/, const ::GFlagsValue* const_static_values /*none*/);
GType flags_register_static (const gi::cstring_v name, const GObject::FlagsValue_Ref const_static_values) noexcept
{
  typedef GType (*call_wrap_t) (const char* name, const ::GFlagsValue* const_static_values);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_flags_register_static;
  auto const_static_values_to_c = gi::unwrap (const_static_values, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GFlagsValue*) (const_static_values_to_c));
  return _temp_ret;
}

// gchar* /*full*/ g_flags_to_string (GType flags_type, guint value);
// char* /*full*/ g_flags_to_string (GType flags_type, guint value);
gi::cstring flags_to_string (GType flags_type, guint value) noexcept
{
  typedef char* (*call_wrap_t) (GType flags_type, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_flags_to_string;
  auto value_to_c = value;
  auto flags_type_to_c = flags_type;
  auto _temp_ret = call_wrap_v ((GType) (flags_type_to_c), (guint) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GType g_gtype_get_type ();
// GType g_gtype_get_type ();
GType gtype_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_gtype_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GParamSpec* /*full*/ g_param_spec_boolean (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gboolean default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_boolean (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gboolean default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_boolean (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gboolean default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gboolean default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_boolean;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gboolean) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_boolean (const gi::cstring_v name, gboolean default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gboolean default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_boolean;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gboolean) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_boxed (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType boxed_type, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_boxed (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType boxed_type, ::GParamFlags flags);
GObject::ParamSpec param_spec_boxed (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType boxed_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType boxed_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_boxed;
  auto flags_to_c = gi::unwrap (flags);
  auto boxed_type_to_c = boxed_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (boxed_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_boxed (const gi::cstring_v name, GType boxed_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType boxed_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_boxed;
  auto flags_to_c = gi::unwrap (flags);
  auto boxed_type_to_c = boxed_type;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (boxed_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_char (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gint8 minimum, gint8 maximum, gint8 default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_char (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gint8 minimum, gint8 maximum, gint8 default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_char (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gint8 minimum, gint8 maximum, gint8 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint8 minimum, gint8 maximum, gint8 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_char;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint8) (minimum_to_c), (gint8) (maximum_to_c), (gint8) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_char (const gi::cstring_v name, gint8 minimum, gint8 maximum, gint8 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint8 minimum, gint8 maximum, gint8 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_char;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint8) (minimum_to_c), (gint8) (maximum_to_c), (gint8) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_double (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gdouble minimum, gdouble maximum, gdouble default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_double (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gdouble minimum, gdouble maximum, gdouble default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_double (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gdouble minimum, gdouble maximum, gdouble default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gdouble minimum, gdouble maximum, gdouble default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_double;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gdouble) (minimum_to_c), (gdouble) (maximum_to_c), (gdouble) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_double (const gi::cstring_v name, gdouble minimum, gdouble maximum, gdouble default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gdouble minimum, gdouble maximum, gdouble default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_double;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gdouble) (minimum_to_c), (gdouble) (maximum_to_c), (gdouble) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_enum (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType enum_type, gint default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_enum (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType enum_type, gint default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_enum (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType enum_type, gint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType enum_type, gint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_enum;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto enum_type_to_c = enum_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (enum_type_to_c), (gint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_enum (const gi::cstring_v name, GType enum_type, gint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType enum_type, gint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_enum;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto enum_type_to_c = enum_type;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (enum_type_to_c), (gint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_flags (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType flags_type, guint default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_flags (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType flags_type, guint default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_flags (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType flags_type, guint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType flags_type, guint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto flags_type_to_c = flags_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (flags_type_to_c), (guint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_flags (const gi::cstring_v name, GType flags_type, guint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType flags_type, guint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto flags_type_to_c = flags_type;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (flags_type_to_c), (guint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_float (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gfloat minimum, gfloat maximum, gfloat default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_float (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gfloat minimum, gfloat maximum, gfloat default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_float (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gfloat minimum, gfloat maximum, gfloat default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gfloat minimum, gfloat maximum, gfloat default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_float;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gfloat) (minimum_to_c), (gfloat) (maximum_to_c), (gfloat) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_float (const gi::cstring_v name, gfloat minimum, gfloat maximum, gfloat default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gfloat minimum, gfloat maximum, gfloat default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_float;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gfloat) (minimum_to_c), (gfloat) (maximum_to_c), (gfloat) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_gtype (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType is_a_type, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_gtype (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType is_a_type, ::GParamFlags flags);
GObject::ParamSpec param_spec_gtype (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType is_a_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType is_a_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_gtype;
  auto flags_to_c = gi::unwrap (flags);
  auto is_a_type_to_c = is_a_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (is_a_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_gtype (const gi::cstring_v name, GType is_a_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType is_a_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_gtype;
  auto flags_to_c = gi::unwrap (flags);
  auto is_a_type_to_c = is_a_type;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (is_a_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_int (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gint minimum, gint maximum, gint default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_int (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gint minimum, gint maximum, gint default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_int (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gint minimum, gint maximum, gint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint minimum, gint maximum, gint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_int;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint) (minimum_to_c), (gint) (maximum_to_c), (gint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_int (const gi::cstring_v name, gint minimum, gint maximum, gint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint minimum, gint maximum, gint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_int;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint) (minimum_to_c), (gint) (maximum_to_c), (gint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_int64 (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gint64 minimum, gint64 maximum, gint64 default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_int64 (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gint64 minimum, gint64 maximum, gint64 default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_int64 (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gint64 minimum, gint64 maximum, gint64 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint64 minimum, gint64 maximum, gint64 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_int64;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint64) (minimum_to_c), (gint64) (maximum_to_c), (gint64) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_int64 (const gi::cstring_v name, gint64 minimum, gint64 maximum, gint64 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint64 minimum, gint64 maximum, gint64 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_int64;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint64) (minimum_to_c), (gint64) (maximum_to_c), (gint64) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_long (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, glong minimum, glong maximum, glong default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_long (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, glong minimum, glong maximum, glong default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_long (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, glong minimum, glong maximum, glong default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, glong minimum, glong maximum, glong default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_long;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (glong) (minimum_to_c), (glong) (maximum_to_c), (glong) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_long (const gi::cstring_v name, glong minimum, glong maximum, glong default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, glong minimum, glong maximum, glong default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_long;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (glong) (minimum_to_c), (glong) (maximum_to_c), (glong) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_object (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType object_type, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_object (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType object_type, ::GParamFlags flags);
GObject::ParamSpec param_spec_object (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType object_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType object_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_object;
  auto flags_to_c = gi::unwrap (flags);
  auto object_type_to_c = object_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (object_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_object (const gi::cstring_v name, GType object_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType object_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_object;
  auto flags_to_c = gi::unwrap (flags);
  auto object_type_to_c = object_type;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (object_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// FAILURE on g_param_spec_override; No such node (<xmlattr>.transfer-ownership)
// GParamSpec* /*full*/ g_param_spec_param (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType param_type, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_param (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType param_type, ::GParamFlags flags);
GObject::ParamSpec param_spec_param (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType param_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType param_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_param;
  auto flags_to_c = gi::unwrap (flags);
  auto param_type_to_c = param_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (param_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_param (const gi::cstring_v name, GType param_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType param_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_param;
  auto flags_to_c = gi::unwrap (flags);
  auto param_type_to_c = param_type;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (param_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_pointer (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_pointer (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, ::GParamFlags flags);
GObject::ParamSpec param_spec_pointer (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_pointer;
  auto flags_to_c = gi::unwrap (flags);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_pointer (const gi::cstring_v name, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_pointer;
  auto flags_to_c = gi::unwrap (flags);
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_string (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, const gchar* default_value /*none,nullable*/, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_string (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, const char* default_value /*none,nullable*/, ::GParamFlags flags);
GObject::ParamSpec param_spec_string (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, const gi::cstring_v default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, const char* default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_string;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = gi::unwrap (default_value, gi::transfer_none);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (const char*) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_string (const gi::cstring_v name, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, const char* default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_string;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = nullptr;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (const char*) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_uchar (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, guint8 minimum, guint8 maximum, guint8 default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_uchar (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, guint8 minimum, guint8 maximum, guint8 default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_uchar (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, guint8 minimum, guint8 maximum, guint8 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint8 minimum, guint8 maximum, guint8 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_uchar;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint8) (minimum_to_c), (guint8) (maximum_to_c), (guint8) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_uchar (const gi::cstring_v name, guint8 minimum, guint8 maximum, guint8 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint8 minimum, guint8 maximum, guint8 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_uchar;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint8) (minimum_to_c), (guint8) (maximum_to_c), (guint8) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_uint (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, guint minimum, guint maximum, guint default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_uint (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, guint minimum, guint maximum, guint default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_uint (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, guint minimum, guint maximum, guint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint minimum, guint maximum, guint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_uint;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint) (minimum_to_c), (guint) (maximum_to_c), (guint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_uint (const gi::cstring_v name, guint minimum, guint maximum, guint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint minimum, guint maximum, guint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_uint;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint) (minimum_to_c), (guint) (maximum_to_c), (guint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_uint64 (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, guint64 minimum, guint64 maximum, guint64 default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_uint64 (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, guint64 minimum, guint64 maximum, guint64 default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_uint64 (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, guint64 minimum, guint64 maximum, guint64 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint64 minimum, guint64 maximum, guint64 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_uint64;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint64) (minimum_to_c), (guint64) (maximum_to_c), (guint64) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_uint64 (const gi::cstring_v name, guint64 minimum, guint64 maximum, guint64 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint64 minimum, guint64 maximum, guint64 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_uint64;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint64) (minimum_to_c), (guint64) (maximum_to_c), (guint64) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_ulong (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gulong minimum, gulong maximum, gulong default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_ulong (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gulong minimum, gulong maximum, gulong default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_ulong (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gulong minimum, gulong maximum, gulong default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gulong minimum, gulong maximum, gulong default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_ulong;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gulong) (minimum_to_c), (gulong) (maximum_to_c), (gulong) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_ulong (const gi::cstring_v name, gulong minimum, gulong maximum, gulong default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gulong minimum, gulong maximum, gulong default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_ulong;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gulong) (minimum_to_c), (gulong) (maximum_to_c), (gulong) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GParamSpec* /*full*/ g_param_spec_unichar (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gunichar default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_unichar (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gunichar default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_unichar (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gunichar default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gunichar default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_unichar;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gunichar) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_unichar (const gi::cstring_v name, gunichar default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gunichar default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_unichar;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gunichar) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// FAILURE on g_param_spec_value_array; No such node (<xmlattr>.transfer-ownership)
// GParamSpec* /*full*/ g_param_spec_variant (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, const GVariantType* type /*none*/, GVariant* default_value /*full,nullable*/, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_variant (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, const ::GVariantType* type /*none*/, ::GVariant* default_value /*full,nullable*/, ::GParamFlags flags);
GObject::ParamSpec param_spec_variant (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, const GLib::VariantType_Ref type, GLib::Variant default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, const ::GVariantType* type, ::GVariant* default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_variant;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = gi::unwrap (default_value, gi::transfer_full);
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (const ::GVariantType*) (type_to_c), (::GVariant*) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::ParamSpec param_spec_variant (const gi::cstring_v name, const GLib::VariantType_Ref type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, const ::GVariantType* type, ::GVariant* default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_spec_variant;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = nullptr;
  auto type_to_c = gi::unwrap (type, gi::transfer_none);
  auto blurb_to_c = nullptr;
  auto nick_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (const ::GVariantType*) (type_to_c), (::GVariant*) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GType g_param_type_register_static (const gchar* name /*none*/, const GParamSpecTypeInfo* pspec_info /*none*/);
// GType g_param_type_register_static (const char* name /*none*/, const ::GParamSpecTypeInfo* pspec_info /*none*/);
GType param_type_register_static (const gi::cstring_v name, const GObject::ParamSpecTypeInfo_Ref pspec_info) noexcept
{
  typedef GType (*call_wrap_t) (const char* name, const ::GParamSpecTypeInfo* pspec_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_type_register_static;
  auto pspec_info_to_c = gi::unwrap (pspec_info, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GParamSpecTypeInfo*) (pspec_info_to_c));
  return _temp_ret;
}

// gboolean g_param_value_convert (GParamSpec* pspec /*none*/, const GValue* src_value /*none*/, GValue* dest_value /*none*/, gboolean strict_validation);
// gboolean g_param_value_convert (::GParamSpec* pspec /*none*/, const ::GValue* src_value /*none*/, ::GValue* dest_value /*none*/, gboolean strict_validation);
bool param_value_convert (GObject::ParamSpec pspec, const GObject::Value_Ref src_value, GObject::Value_Ref dest_value, gboolean strict_validation) noexcept
{
  typedef gboolean (*call_wrap_t) (::GParamSpec* pspec, const ::GValue* src_value, ::GValue* dest_value, gboolean strict_validation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_value_convert;
  auto strict_validation_to_c = strict_validation;
  auto dest_value_to_c = gi::unwrap (dest_value, gi::transfer_none);
  auto src_value_to_c = gi::unwrap (src_value, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (const ::GValue*) (src_value_to_c), (::GValue*) (dest_value_to_c), (gboolean) (strict_validation_to_c));
  return _temp_ret;
}

// gboolean g_param_value_defaults (GParamSpec* pspec /*none*/, const GValue* value /*none*/);
// gboolean g_param_value_defaults (::GParamSpec* pspec /*none*/, const ::GValue* value /*none*/);
bool param_value_defaults (GObject::ParamSpec pspec, const GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GParamSpec* pspec, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_value_defaults;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gboolean g_param_value_is_valid (GParamSpec* pspec /*none*/, const GValue* value /*none*/);
// gboolean g_param_value_is_valid (::GParamSpec* pspec /*none*/, const ::GValue* value /*none*/);
bool param_value_is_valid (GObject::ParamSpec pspec, const GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GParamSpec* pspec, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_value_is_valid;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (const ::GValue*) (value_to_c));
  return _temp_ret;
}

// void g_param_value_set_default (GParamSpec* pspec /*none*/, GValue* value /*none*/);
// void g_param_value_set_default (::GParamSpec* pspec /*none*/, ::GValue* value /*none*/);
void param_value_set_default (GObject::ParamSpec pspec, GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GParamSpec* pspec, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_value_set_default;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  call_wrap_v ((::GParamSpec*) (pspec_to_c), (::GValue*) (value_to_c));
}

// gboolean g_param_value_validate (GParamSpec* pspec /*none*/, GValue* value /*none*/);
// gboolean g_param_value_validate (::GParamSpec* pspec /*none*/, ::GValue* value /*none*/);
bool param_value_validate (GObject::ParamSpec pspec, GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GParamSpec* pspec, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_value_validate;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (::GValue*) (value_to_c));
  return _temp_ret;
}

// gint g_param_values_cmp (GParamSpec* pspec /*none*/, const GValue* value1 /*none*/, const GValue* value2 /*none*/);
// gint g_param_values_cmp (::GParamSpec* pspec /*none*/, const ::GValue* value1 /*none*/, const ::GValue* value2 /*none*/);
gint param_values_cmp (GObject::ParamSpec pspec, const GObject::Value_Ref value1, const GObject::Value_Ref value2) noexcept
{
  typedef gint (*call_wrap_t) (::GParamSpec* pspec, const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_param_values_cmp;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return _temp_ret;
}

// GType g_pointer_type_register_static (const gchar* name /*none*/);
// GType g_pointer_type_register_static (const char* name /*none*/);
GType pointer_type_register_static (const gi::cstring_v name) noexcept
{
  typedef GType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_pointer_type_register_static;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return _temp_ret;
}

// gboolean g_signal_accumulator_first_wins (GSignalInvocationHint* ihint /*none*/, GValue* return_accu /*none*/, const GValue* handler_return /*none*/, gpointer dummy);
// gboolean g_signal_accumulator_first_wins (::GSignalInvocationHint* ihint /*none*/, ::GValue* return_accu /*none*/, const ::GValue* handler_return /*none*/, void* dummy);
bool signal_accumulator_first_wins (GObject::SignalInvocationHint_Ref ihint, GObject::Value_Ref return_accu, const GObject::Value_Ref handler_return, void* dummy) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* dummy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_accumulator_first_wins;
  auto dummy_to_c = dummy;
  auto handler_return_to_c = gi::unwrap (handler_return, gi::transfer_none);
  auto return_accu_to_c = gi::unwrap (return_accu, gi::transfer_none);
  auto ihint_to_c = gi::unwrap (ihint, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSignalInvocationHint*) (ihint_to_c), (::GValue*) (return_accu_to_c), (const ::GValue*) (handler_return_to_c), (void*) (dummy_to_c));
  return _temp_ret;
}

// gboolean g_signal_accumulator_true_handled (GSignalInvocationHint* ihint /*none*/, GValue* return_accu /*none*/, const GValue* handler_return /*none*/, gpointer dummy);
// gboolean g_signal_accumulator_true_handled (::GSignalInvocationHint* ihint /*none*/, ::GValue* return_accu /*none*/, const ::GValue* handler_return /*none*/, void* dummy);
bool signal_accumulator_true_handled (GObject::SignalInvocationHint_Ref ihint, GObject::Value_Ref return_accu, const GObject::Value_Ref handler_return, void* dummy) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* dummy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_accumulator_true_handled;
  auto dummy_to_c = dummy;
  auto handler_return_to_c = gi::unwrap (handler_return, gi::transfer_none);
  auto return_accu_to_c = gi::unwrap (return_accu, gi::transfer_none);
  auto ihint_to_c = gi::unwrap (ihint, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSignalInvocationHint*) (ihint_to_c), (::GValue*) (return_accu_to_c), (const ::GValue*) (handler_return_to_c), (void*) (dummy_to_c));
  return _temp_ret;
}

// gulong g_signal_add_emission_hook (guint signal_id, GQuark detail, GSignalEmissionHook hook_func /*none*/, gpointer hook_data, GDestroyNotify data_destroy /*none,nullable*/);
// gulong g_signal_add_emission_hook (guint signal_id, ::GQuark detail,  hook_func /*none*/, void* hook_data, GLib::DestroyNotify::cfunction_type data_destroy /*none,nullable*/);
// SKIP; hook_func type  not supported

// void g_signal_chain_from_overridden ( instance_and_params /*none*/, GValue* return_value /*none*/);
// void g_signal_chain_from_overridden (* instance_and_params /*none*/, ::GValue* return_value /*none*/);
// SKIP; inconsistent array info

// void g_signal_chain_from_overridden_handler (gpointer instance /*none*/,  ..._ /*none*/);
// void g_signal_chain_from_overridden_handler (::GTypeInstance* instance /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gulong g_signal_connect_closure (gpointer instance /*none*/, const gchar* detailed_signal /*none*/, GClosure* closure /*none*/, gboolean after);
// gulong g_signal_connect_closure (::GObject* instance /*none*/, const char* detailed_signal /*none*/, ::GClosure* closure /*none*/, gboolean after);
gulong signal_connect_closure (GObject::Object instance, const gi::cstring_v detailed_signal, GObject::Closure_Ref closure, gboolean after) noexcept
{
  typedef gulong (*call_wrap_t) (::GObject* instance, const char* detailed_signal, ::GClosure* closure, gboolean after);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_connect_closure;
  auto after_to_c = after;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (const char*) (detailed_signal_to_c), (::GClosure*) (closure_to_c), (gboolean) (after_to_c));
  return _temp_ret;
}

// gulong g_signal_connect_closure_by_id (gpointer instance /*none*/, guint signal_id, GQuark detail, GClosure* closure /*none*/, gboolean after);
// gulong g_signal_connect_closure_by_id (::GObject* instance /*none*/, guint signal_id, ::GQuark detail, ::GClosure* closure /*none*/, gboolean after);
gulong signal_connect_closure_by_id (GObject::Object instance, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, gboolean after) noexcept
{
  typedef gulong (*call_wrap_t) (::GObject* instance, guint signal_id, ::GQuark detail, ::GClosure* closure, gboolean after);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_connect_closure_by_id;
  auto after_to_c = after;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (gboolean) (after_to_c));
  return _temp_ret;
}

// gulong g_signal_connect_data (gpointer instance /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data, GClosureNotify destroy_data /*none,nullable*/, GConnectFlags connect_flags);
// gulong g_signal_connect_data (::GObject* instance /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data,  destroy_data /*none,nullable*/, ::GConnectFlags connect_flags);
// IGNORE; not introspectable, destroy_data type  not supported, c_handler type  not supported

// gulong g_signal_connect_object (gpointer instance /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer gobject /*none,nullable*/, GConnectFlags connect_flags);
// gulong g_signal_connect_object (::GTypeInstance* instance /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, ::GObject* gobject /*none,nullable*/, ::GConnectFlags connect_flags);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_emit (gpointer instance /*none*/, guint signal_id, GQuark detail,  ..._ /*none*/);
// void g_signal_emit (::GObject* instance /*none*/, guint signal_id, ::GQuark detail,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_signal_emit_by_name (gpointer instance /*none*/, const gchar* detailed_signal /*none*/,  ..._ /*none*/);
// void g_signal_emit_by_name (::GObject* instance /*none*/, const char* detailed_signal /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_signal_emit_valist (gpointer instance /*none*/, guint signal_id, GQuark detail, va_list var_args /*none*/);
// void g_signal_emit_valist (::GTypeInstance* instance /*none*/, guint signal_id, ::GQuark detail,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void g_signal_emitv ( instance_and_params /*none*/, guint signal_id, GQuark detail, GValue* return_value /*full,inout,opt*/);
// void g_signal_emitv (* instance_and_params /*none*/, guint signal_id, ::GQuark detail, ::GValue** return_value /*full,inout,opt*/);
// SKIP; inconsistent array info

// GSignalInvocationHint* /*none,nullable*/ g_signal_get_invocation_hint (gpointer instance /*none*/);
// ::GSignalInvocationHint* /*none,nullable*/ g_signal_get_invocation_hint (::GObject* instance /*none*/);
GObject::SignalInvocationHint_Ref signal_get_invocation_hint (GObject::Object instance) noexcept
{
  typedef ::GSignalInvocationHint* (*call_wrap_t) (::GObject* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_get_invocation_hint;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_signal_handler_block (gpointer instance /*none*/, gulong handler_id);
// void g_signal_handler_block (::GObject* instance /*none*/, gulong handler_id);
void signal_handler_block (GObject::Object instance, gulong handler_id) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handler_block;
  auto handler_id_to_c = handler_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  call_wrap_v ((::GObject*) (instance_to_c), (gulong) (handler_id_to_c));
}

// void g_signal_handler_disconnect (gpointer instance /*none*/, gulong handler_id);
// void g_signal_handler_disconnect (::GObject* instance /*none*/, gulong handler_id);
void signal_handler_disconnect (GObject::Object instance, gulong handler_id) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handler_disconnect;
  auto handler_id_to_c = handler_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  call_wrap_v ((::GObject*) (instance_to_c), (gulong) (handler_id_to_c));
}

// gulong g_signal_handler_find (gpointer instance /*none*/, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure /*none,nullable*/, gpointer func, gpointer data);
// gulong g_signal_handler_find (::GObject* instance /*none*/, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure /*none,nullable*/, void* func, void* data);
gulong signal_handler_find (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, void* func, void* data) noexcept
{
  typedef gulong (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handler_find;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}
gulong signal_handler_find (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept
{
  typedef gulong (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handler_find;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = nullptr;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// gboolean g_signal_handler_is_connected (gpointer instance /*none*/, gulong handler_id);
// gboolean g_signal_handler_is_connected (::GObject* instance /*none*/, gulong handler_id);
bool signal_handler_is_connected (GObject::Object instance, gulong handler_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* instance, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handler_is_connected;
  auto handler_id_to_c = handler_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (gulong) (handler_id_to_c));
  return _temp_ret;
}

// void g_signal_handler_unblock (gpointer instance /*none*/, gulong handler_id);
// void g_signal_handler_unblock (::GObject* instance /*none*/, gulong handler_id);
void signal_handler_unblock (GObject::Object instance, gulong handler_id) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handler_unblock;
  auto handler_id_to_c = handler_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  call_wrap_v ((::GObject*) (instance_to_c), (gulong) (handler_id_to_c));
}

// guint g_signal_handlers_block_matched (gpointer instance /*none*/, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure /*none,nullable*/, gpointer func, gpointer data);
// guint g_signal_handlers_block_matched (::GObject* instance /*none*/, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure /*none,nullable*/, void* func, void* data);
guint signal_handlers_block_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handlers_block_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}
guint signal_handlers_block_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handlers_block_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = nullptr;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// void g_signal_handlers_destroy (gpointer instance /*none*/);
// void g_signal_handlers_destroy (::GObject* instance /*none*/);
void signal_handlers_destroy (GObject::Object instance) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handlers_destroy;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  call_wrap_v ((::GObject*) (instance_to_c));
}

// guint g_signal_handlers_disconnect_matched (gpointer instance /*none*/, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure /*none,nullable*/, gpointer func, gpointer data);
// guint g_signal_handlers_disconnect_matched (::GObject* instance /*none*/, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure /*none,nullable*/, void* func, void* data);
guint signal_handlers_disconnect_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handlers_disconnect_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}
guint signal_handlers_disconnect_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handlers_disconnect_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = nullptr;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// guint g_signal_handlers_unblock_matched (gpointer instance /*none*/, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure /*none,nullable*/, gpointer func, gpointer data);
// guint g_signal_handlers_unblock_matched (::GObject* instance /*none*/, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure /*none,nullable*/, void* func, void* data);
guint signal_handlers_unblock_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handlers_unblock_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}
guint signal_handlers_unblock_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_handlers_unblock_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = nullptr;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// gboolean g_signal_has_handler_pending (gpointer instance /*none*/, guint signal_id, GQuark detail, gboolean may_be_blocked);
// gboolean g_signal_has_handler_pending (::GObject* instance /*none*/, guint signal_id, ::GQuark detail, gboolean may_be_blocked);
bool signal_has_handler_pending (GObject::Object instance, guint signal_id, ::GQuark detail, gboolean may_be_blocked) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* instance, guint signal_id, ::GQuark detail, gboolean may_be_blocked);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_has_handler_pending;
  auto may_be_blocked_to_c = may_be_blocked;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (gboolean) (may_be_blocked_to_c));
  return _temp_ret;
}

// gboolean g_signal_is_valid_name (const gchar* name /*none*/);
// gboolean g_signal_is_valid_name (const char* name /*none*/);
bool signal_is_valid_name (const gi::cstring_v name) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_is_valid_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return _temp_ret;
}

// guint* /*full*/ g_signal_list_ids (GType itype, guint* n_ids);
// guint* /*full*/ g_signal_list_ids (GType itype, guint* n_ids);
gi::Collection<gi::DSpan, guint, gi::transfer_full_t> signal_list_ids (GType itype) noexcept
{
  typedef guint* (*call_wrap_t) (GType itype, guint* n_ids);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_list_ids;
  auto itype_to_c = itype;
  guint n_ids;
  auto _ret_o = call_wrap_v ((GType) (itype_to_c), (guint*) (&n_ids));
  gi::Collection<gi::DSpan, guint, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint, gi::transfer_full_t>>(_ret_o, n_ids, gi::transfer_full);
  return _temp_ret;
}

// guint g_signal_lookup (const gchar* name /*none*/, GType itype);
// guint g_signal_lookup (const char* name /*none*/, GType itype);
guint signal_lookup (const gi::cstring_v name, GType itype) noexcept
{
  typedef guint (*call_wrap_t) (const char* name, GType itype);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_lookup;
  auto itype_to_c = itype;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (GType) (itype_to_c));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_signal_name (guint signal_id);
// const char* /*none,nullable*/ g_signal_name (guint signal_id);
gi::cstring_v signal_name (guint signal_id) noexcept
{
  typedef const char* (*call_wrap_t) (guint signal_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_name;
  auto signal_id_to_c = signal_id;
  auto _temp_ret = call_wrap_v ((guint) (signal_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint g_signal_new (const gchar* signal_name /*none*/, GType itype, GSignalFlags signal_flags, guint class_offset, GSignalAccumulator accumulator /*none,nullable*/, gpointer accu_data, GSignalCMarshaller c_marshaller /*none,nullable*/, GType return_type, guint n_params,  ..._ /*none*/);
// guint g_signal_new (const char* signal_name /*none*/, GType itype, ::GSignalFlags signal_flags, guint class_offset, GObject::SignalAccumulator::cfunction_type accumulator /*none,nullable*/, void* accu_data,  c_marshaller /*none,nullable*/, GType return_type, guint n_params,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// guint g_signal_new_class_handler (const gchar* signal_name /*none*/, GType itype, GSignalFlags signal_flags, GCallback class_handler /*none,nullable*/, GSignalAccumulator accumulator /*none,nullable*/, gpointer accu_data, GSignalCMarshaller c_marshaller /*none,nullable*/, GType return_type, guint n_params,  ..._ /*none*/);
// guint g_signal_new_class_handler (const char* signal_name /*none*/, GType itype, ::GSignalFlags signal_flags,  class_handler /*none,nullable*/, GObject::SignalAccumulator::cfunction_type accumulator /*none,nullable*/, void* accu_data,  c_marshaller /*none,nullable*/, GType return_type, guint n_params,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// guint g_signal_new_valist (const gchar* signal_name /*none*/, GType itype, GSignalFlags signal_flags, GClosure* class_closure /*none,nullable*/, GSignalAccumulator accumulator /*none,nullable*/, gpointer accu_data, GSignalCMarshaller c_marshaller /*none,nullable*/, GType return_type, guint n_params, va_list args /*none*/);
// guint g_signal_new_valist (const char* signal_name /*none*/, GType itype, ::GSignalFlags signal_flags, ::GClosure* class_closure /*none,nullable*/, GObject::SignalAccumulator::cfunction_type accumulator /*none,nullable*/, void* accu_data,  c_marshaller /*none,nullable*/, GType return_type, guint n_params,  args /*none*/);
// IGNORE; not introspectable, args type  not supported, c_marshaller type  not supported, invalid callback scope forever

// guint g_signal_newv (const gchar* signal_name /*none*/, GType itype, GSignalFlags signal_flags, GClosure* class_closure /*none,nullable*/, GSignalAccumulator accumulator /*none,nullable*/, gpointer accu_data, GSignalCMarshaller c_marshaller /*none,nullable*/, GType return_type, guint n_params, GType* param_types /*none,nullable*/);
// guint g_signal_newv (const char* signal_name /*none*/, GType itype, ::GSignalFlags signal_flags, ::GClosure* class_closure /*none,nullable*/, GObject::SignalAccumulator::cfunction_type accumulator /*none,nullable*/, void* accu_data,  c_marshaller /*none,nullable*/, GType return_type, guint n_params, GType* param_types /*none,nullable*/);
// SKIP; c_marshaller type  not supported, invalid callback scope forever

// void g_signal_override_class_closure (guint signal_id, GType instance_type, GClosure* class_closure /*none*/);
// void g_signal_override_class_closure (guint signal_id, GType instance_type, ::GClosure* class_closure /*none*/);
void signal_override_class_closure (guint signal_id, GType instance_type, GObject::Closure_Ref class_closure) noexcept
{
  typedef void (*call_wrap_t) (guint signal_id, GType instance_type, ::GClosure* class_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_override_class_closure;
  auto class_closure_to_c = gi::unwrap (class_closure, gi::transfer_none);
  auto instance_type_to_c = instance_type;
  auto signal_id_to_c = signal_id;
  call_wrap_v ((guint) (signal_id_to_c), (GType) (instance_type_to_c), (::GClosure*) (class_closure_to_c));
}

// void g_signal_override_class_handler (const gchar* signal_name /*none*/, GType instance_type, GCallback class_handler /*none*/);
// void g_signal_override_class_handler (const char* signal_name /*none*/, GType instance_type,  class_handler /*none*/);
// SKIP; class_handler type  not supported

// gboolean g_signal_parse_name (const gchar* detailed_signal /*none*/, GType itype, guint* signal_id_p, GQuark* detail_p, gboolean force_detail_quark);
// gboolean g_signal_parse_name (const char* detailed_signal /*none*/, GType itype, guint* signal_id_p, ::GQuark* detail_p, gboolean force_detail_quark);
bool signal_parse_name (const gi::cstring_v detailed_signal, GType itype, guint & signal_id_p, GLib::Quark & detail_p, gboolean force_detail_quark) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* detailed_signal, GType itype, guint* signal_id_p, ::GQuark* detail_p, gboolean force_detail_quark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_parse_name;
  auto force_detail_quark_to_c = force_detail_quark;
  ::GQuark detail_p_o {};
  guint signal_id_p_o {};
  auto itype_to_c = itype;
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (detailed_signal_to_c), (GType) (itype_to_c), (guint*) (&signal_id_p_o), (::GQuark*) (&detail_p_o), (gboolean) (force_detail_quark_to_c));
  detail_p = detail_p_o;
  signal_id_p = signal_id_p_o;
  return _temp_ret;
}
std::tuple<bool, guint, GLib::Quark> signal_parse_name (const gi::cstring_v detailed_signal, GType itype, gboolean force_detail_quark) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* detailed_signal, GType itype, guint* signal_id_p, ::GQuark* detail_p, gboolean force_detail_quark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_parse_name;
  auto force_detail_quark_to_c = force_detail_quark;
  ::GQuark detail_p_o {};
  guint signal_id_p_o {};
  auto itype_to_c = itype;
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (detailed_signal_to_c), (GType) (itype_to_c), (guint*) (&signal_id_p_o), (::GQuark*) (&detail_p_o), (gboolean) (force_detail_quark_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = signal_id_p_o;
  auto &&tmp_return_3 = detail_p_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_signal_query (guint signal_id, GSignalQuery* query /*none,out,ca*/);
// void g_signal_query (guint signal_id, ::GSignalQuery* query /*none,out,ca*/);
void signal_query (guint signal_id, GObject::SignalQuery & query) noexcept
{
  typedef void (*call_wrap_t) (guint signal_id, ::GSignalQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_query;
  detail::allocate(query);
  static_assert(sizeof(::GSignalQuery) == sizeof(*(query).gobj_()), "");
  auto signal_id_to_c = signal_id;
  call_wrap_v ((guint) (signal_id_to_c), (::GSignalQuery*) ((::GSignalQuery*) (query).gobj_()));
}
GObject::SignalQuery signal_query (guint signal_id) noexcept
{
  typedef void (*call_wrap_t) (guint signal_id, ::GSignalQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_query;
  GObject::SignalQuery query_c;
  auto query = &query_c;
  detail::allocate(*query);
  static_assert(sizeof(::GSignalQuery) == sizeof(*(*query).gobj_()), "");
  auto signal_id_to_c = signal_id;
  call_wrap_v ((guint) (signal_id_to_c), (::GSignalQuery*) (query ? (::GSignalQuery*) (*query).gobj_() : nullptr));
  return query_c;
}

// void g_signal_remove_emission_hook (guint signal_id, gulong hook_id);
// void g_signal_remove_emission_hook (guint signal_id, gulong hook_id);
void signal_remove_emission_hook (guint signal_id, gulong hook_id) noexcept
{
  typedef void (*call_wrap_t) (guint signal_id, gulong hook_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_remove_emission_hook;
  auto hook_id_to_c = hook_id;
  auto signal_id_to_c = signal_id;
  call_wrap_v ((guint) (signal_id_to_c), (gulong) (hook_id_to_c));
}

// void g_signal_set_va_marshaller (guint signal_id, GType instance_type, GSignalCVaMarshaller va_marshaller /*none*/);
// void g_signal_set_va_marshaller (guint signal_id, GType instance_type,  va_marshaller /*none*/);
// SKIP; va_marshaller type  not supported

// void g_signal_stop_emission (gpointer instance /*none*/, guint signal_id, GQuark detail);
// void g_signal_stop_emission (::GObject* instance /*none*/, guint signal_id, ::GQuark detail);
void signal_stop_emission (GObject::Object instance, guint signal_id, ::GQuark detail) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, guint signal_id, ::GQuark detail);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_stop_emission;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  call_wrap_v ((::GObject*) (instance_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c));
}

// void g_signal_stop_emission_by_name (gpointer instance /*none*/, const gchar* detailed_signal /*none*/);
// void g_signal_stop_emission_by_name (::GObject* instance /*none*/, const char* detailed_signal /*none*/);
void signal_stop_emission_by_name (GObject::Object instance, const gi::cstring_v detailed_signal) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, const char* detailed_signal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_stop_emission_by_name;
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  call_wrap_v ((::GObject*) (instance_to_c), (const char*) (detailed_signal_to_c));
}

// GClosure* /*full*/ g_signal_type_cclosure_new (GType itype, guint struct_offset);
// ::GClosure* /*full*/ g_signal_type_cclosure_new (GType itype, guint struct_offset);
GObject::Closure signal_type_cclosure_new (GType itype, guint struct_offset) noexcept
{
  typedef ::GClosure* (*call_wrap_t) (GType itype, guint struct_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_type_cclosure_new;
  auto struct_offset_to_c = struct_offset;
  auto itype_to_c = itype;
  auto _temp_ret = call_wrap_v ((GType) (itype_to_c), (guint) (struct_offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_strdup_value_contents (const GValue* value /*none*/);
// char* /*full*/ g_strdup_value_contents (const ::GValue* value /*none*/);
gi::cstring strdup_value_contents (const GObject::Value_Ref value) noexcept
{
  typedef char* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_strdup_value_contents;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_type_add_class_cache_func (gpointer cache_data, GTypeClassCacheFunc cache_func /*none*/);
// void g_type_add_class_cache_func (void* cache_data,  cache_func /*none*/);
// IGNORE; not introspectable, cache_func type  not supported

// void g_type_add_class_private (GType class_type, gsize private_size);
// void g_type_add_class_private (GType class_type, gsize private_size);
void type_add_class_private (GType class_type, gsize private_size) noexcept
{
  typedef void (*call_wrap_t) (GType class_type, gsize private_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_add_class_private;
  auto private_size_to_c = private_size;
  auto class_type_to_c = class_type;
  call_wrap_v ((GType) (class_type_to_c), (gsize) (private_size_to_c));
}

// gint g_type_add_instance_private (GType class_type, gsize private_size);
// gint g_type_add_instance_private (GType class_type, gsize private_size);
gint type_add_instance_private (GType class_type, gsize private_size) noexcept
{
  typedef gint (*call_wrap_t) (GType class_type, gsize private_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_add_instance_private;
  auto private_size_to_c = private_size;
  auto class_type_to_c = class_type;
  auto _temp_ret = call_wrap_v ((GType) (class_type_to_c), (gsize) (private_size_to_c));
  return _temp_ret;
}

// void g_type_add_interface_check (gpointer check_data, GTypeInterfaceCheckFunc check_func /*none*/);
// void g_type_add_interface_check (void* check_data,  check_func /*none*/);
// IGNORE; not introspectable, check_func type  not supported

// void g_type_add_interface_dynamic (GType instance_type, GType interface_type, GTypePlugin* plugin /*none*/);
// void g_type_add_interface_dynamic (GType instance_type, GType interface_type, ::GTypePlugin* plugin /*none*/);
void type_add_interface_dynamic (GType instance_type, GType interface_type, GObject::TypePlugin plugin) noexcept
{
  typedef void (*call_wrap_t) (GType instance_type, GType interface_type, ::GTypePlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_add_interface_dynamic;
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none);
  auto interface_type_to_c = interface_type;
  auto instance_type_to_c = instance_type;
  call_wrap_v ((GType) (instance_type_to_c), (GType) (interface_type_to_c), (::GTypePlugin*) (plugin_to_c));
}

// void g_type_add_interface_static (GType instance_type, GType interface_type, const GInterfaceInfo* info /*none*/);
// void g_type_add_interface_static (GType instance_type, GType interface_type, const ::GInterfaceInfo* info /*none*/);
void type_add_interface_static (GType instance_type, GType interface_type, const GObject::InterfaceInfo_Ref info) noexcept
{
  typedef void (*call_wrap_t) (GType instance_type, GType interface_type, const ::GInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_add_interface_static;
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto interface_type_to_c = interface_type;
  auto instance_type_to_c = instance_type;
  call_wrap_v ((GType) (instance_type_to_c), (GType) (interface_type_to_c), (const ::GInterfaceInfo*) (info_to_c));
}

// FAILURE on g_type_check_class_cast; No such node (<xmlattr>.transfer-ownership)
// gboolean g_type_check_class_is_a (GTypeClass* g_class /*none*/, GType is_a_type);
// gboolean g_type_check_class_is_a (::GTypeClass* g_class /*none*/, GType is_a_type);
bool type_check_class_is_a (GObject::TypeClass_Ref g_class, GType is_a_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeClass* g_class, GType is_a_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_check_class_is_a;
  auto is_a_type_to_c = is_a_type;
  auto g_class_to_c = gi::unwrap (g_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTypeClass*) (g_class_to_c), (GType) (is_a_type_to_c));
  return _temp_ret;
}

// gboolean g_type_check_instance (GTypeInstance* instance /*none*/);
// gboolean g_type_check_instance (::GTypeInstance* instance /*none*/);
bool type_check_instance (GObject::TypeInstance_Ref instance) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeInstance* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_check_instance;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (instance_to_c));
  return _temp_ret;
}

// FAILURE on g_type_check_instance_cast; No such node (<xmlattr>.transfer-ownership)
// gboolean g_type_check_instance_is_a (GTypeInstance* instance /*none*/, GType iface_type);
// gboolean g_type_check_instance_is_a (::GTypeInstance* instance /*none*/, GType iface_type);
bool type_check_instance_is_a (GObject::TypeInstance_Ref instance, GType iface_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeInstance* instance, GType iface_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_check_instance_is_a;
  auto iface_type_to_c = iface_type;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (instance_to_c), (GType) (iface_type_to_c));
  return _temp_ret;
}

// gboolean g_type_check_instance_is_fundamentally_a (GTypeInstance* instance /*none*/, GType fundamental_type);
// gboolean g_type_check_instance_is_fundamentally_a (::GTypeInstance* instance /*none*/, GType fundamental_type);
bool type_check_instance_is_fundamentally_a (GObject::TypeInstance_Ref instance, GType fundamental_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeInstance* instance, GType fundamental_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_check_instance_is_fundamentally_a;
  auto fundamental_type_to_c = fundamental_type;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (instance_to_c), (GType) (fundamental_type_to_c));
  return _temp_ret;
}

// gboolean g_type_check_is_value_type (GType type);
// gboolean g_type_check_is_value_type (GType type);
bool type_check_is_value_type (GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_check_is_value_type;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// gboolean g_type_check_value (const GValue* value /*none*/);
// gboolean g_type_check_value (const ::GValue* value /*none*/);
bool type_check_value (const GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_check_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gboolean g_type_check_value_holds (const GValue* value /*none*/, GType type);
// gboolean g_type_check_value_holds (const ::GValue* value /*none*/, GType type);
bool type_check_value_holds (const GObject::Value_Ref value, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_check_value_holds;
  auto type_to_c = type;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c), (GType) (type_to_c));
  return _temp_ret;
}

// GType* /*full*/ g_type_children (GType type, guint* n_children);
// GType* /*full*/ g_type_children (GType type, guint* n_children);
gi::Collection<gi::DSpan, GType, gi::transfer_full_t> type_children (GType type) noexcept
{
  typedef GType* (*call_wrap_t) (GType type, guint* n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_children;
  auto type_to_c = type;
  guint n_children;
  auto _ret_o = call_wrap_v ((GType) (type_to_c), (guint*) (&n_children));
  gi::Collection<gi::DSpan, GType, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, GType, gi::transfer_full_t>>(_ret_o, n_children, gi::transfer_full);
  return _temp_ret;
}

// FAILURE on g_type_create_instance; No such node (<xmlattr>.transfer-ownership)
// gpointer /*none*/ g_type_default_interface_peek (GType g_type);
// ::GTypeInterface* /*none*/ g_type_default_interface_peek (GType g_type);
GObject::TypeInterface_Ref type_default_interface_peek (GType g_type) noexcept
{
  typedef ::GTypeInterface* (*call_wrap_t) (GType g_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_default_interface_peek;
  auto g_type_to_c = g_type;
  auto _temp_ret = call_wrap_v ((GType) (g_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint g_type_depth (GType type);
// guint g_type_depth (GType type);
guint type_depth (GType type) noexcept
{
  typedef guint (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_depth;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// void g_type_ensure (GType type);
// void g_type_ensure (GType type);
void type_ensure (GType type) noexcept
{
  typedef void (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_ensure;
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c));
}

// void g_type_free_instance (GTypeInstance* instance /*none*/);
// void g_type_free_instance (::GTypeInstance* instance /*none*/);
void type_free_instance (GObject::TypeInstance_Ref instance) noexcept
{
  typedef void (*call_wrap_t) (::GTypeInstance* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_free_instance;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  call_wrap_v ((::GTypeInstance*) (instance_to_c));
}

// GType g_type_from_name (const gchar* name /*none*/);
// GType g_type_from_name (const char* name /*none*/);
GType type_from_name (const gi::cstring_v name) noexcept
{
  typedef GType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_from_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return _temp_ret;
}

// GType g_type_fundamental (GType type_id);
// GType g_type_fundamental (GType type_id);
GType type_fundamental (GType type_id) noexcept
{
  typedef GType (*call_wrap_t) (GType type_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_fundamental;
  auto type_id_to_c = type_id;
  auto _temp_ret = call_wrap_v ((GType) (type_id_to_c));
  return _temp_ret;
}

// GType g_type_fundamental_next ();
// GType g_type_fundamental_next ();
GType type_fundamental_next () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_fundamental_next;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// int g_type_get_instance_count (GType type);
// gint g_type_get_instance_count (GType type);
gint type_get_instance_count (GType type) noexcept
{
  typedef gint (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_get_instance_count;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// GTypePlugin* /*none*/ g_type_get_plugin (GType type);
// ::GTypePlugin* /*none*/ g_type_get_plugin (GType type);
GObject::TypePlugin type_get_plugin (GType type) noexcept
{
  typedef ::GTypePlugin* (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_get_plugin;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gpointer g_type_get_qdata (GType type, GQuark quark);
// void* g_type_get_qdata (GType type, ::GQuark quark);
gpointer type_get_qdata (GType type, ::GQuark quark) noexcept
{
  typedef void* (*call_wrap_t) (GType type, ::GQuark quark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_get_qdata;
  auto quark_to_c = quark;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (::GQuark) (quark_to_c));
  return _temp_ret;
}

// guint g_type_get_type_registration_serial ();
// guint g_type_get_type_registration_serial ();
guint type_get_type_registration_serial () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_get_type_registration_serial;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GType* /*full*/ g_type_interfaces (GType type, guint* n_interfaces);
// GType* /*full*/ g_type_interfaces (GType type, guint* n_interfaces);
gi::Collection<gi::DSpan, GType, gi::transfer_full_t> type_interfaces (GType type) noexcept
{
  typedef GType* (*call_wrap_t) (GType type, guint* n_interfaces);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_interfaces;
  auto type_to_c = type;
  guint n_interfaces;
  auto _ret_o = call_wrap_v ((GType) (type_to_c), (guint*) (&n_interfaces));
  gi::Collection<gi::DSpan, GType, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, GType, gi::transfer_full_t>>(_ret_o, n_interfaces, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_type_is_a (GType type, GType is_a_type);
// gboolean g_type_is_a (GType type, GType is_a_type);
bool type_is_a (GType type, GType is_a_type) noexcept
{
  typedef gboolean (*call_wrap_t) (GType type, GType is_a_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_is_a;
  auto is_a_type_to_c = is_a_type;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (GType) (is_a_type_to_c));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_type_name (GType type);
// const char* /*none,nullable*/ g_type_name (GType type);
gi::cstring_v type_name (GType type) noexcept
{
  typedef const char* (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_name;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_type_name_from_class (GTypeClass* g_class /*none*/);
// const char* /*none*/ g_type_name_from_class (::GTypeClass* g_class /*none*/);
gi::cstring_v type_name_from_class (GObject::TypeClass_Ref g_class) noexcept
{
  typedef const char* (*call_wrap_t) (::GTypeClass* g_class);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_name_from_class;
  auto g_class_to_c = gi::unwrap (g_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTypeClass*) (g_class_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_type_name_from_instance (GTypeInstance* instance /*none*/);
// const char* /*none*/ g_type_name_from_instance (::GTypeInstance* instance /*none*/);
gi::cstring_v type_name_from_instance (GObject::TypeInstance_Ref instance) noexcept
{
  typedef const char* (*call_wrap_t) (::GTypeInstance* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_name_from_instance;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (instance_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GType g_type_next_base (GType leaf_type, GType root_type);
// GType g_type_next_base (GType leaf_type, GType root_type);
GType type_next_base (GType leaf_type, GType root_type) noexcept
{
  typedef GType (*call_wrap_t) (GType leaf_type, GType root_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_next_base;
  auto root_type_to_c = root_type;
  auto leaf_type_to_c = leaf_type;
  auto _temp_ret = call_wrap_v ((GType) (leaf_type_to_c), (GType) (root_type_to_c));
  return _temp_ret;
}

// GType g_type_parent (GType type);
// GType g_type_parent (GType type);
GType type_parent (GType type) noexcept
{
  typedef GType (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_parent;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// GQuark g_type_qname (GType type);
// ::GQuark g_type_qname (GType type);
GLib::Quark type_qname (GType type) noexcept
{
  typedef ::GQuark (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_qname;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// void g_type_query (GType type, GTypeQuery* query /*none,out,ca*/);
// void g_type_query (GType type, ::GTypeQuery* query /*none,out,ca*/);
void type_query (GType type, GObject::TypeQuery & query) noexcept
{
  typedef void (*call_wrap_t) (GType type, ::GTypeQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_query;
  detail::allocate(query);
  static_assert(sizeof(::GTypeQuery) == sizeof(*(query).gobj_()), "");
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c), (::GTypeQuery*) ((::GTypeQuery*) (query).gobj_()));
}
GObject::TypeQuery type_query (GType type) noexcept
{
  typedef void (*call_wrap_t) (GType type, ::GTypeQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_query;
  GObject::TypeQuery query_c;
  auto query = &query_c;
  detail::allocate(*query);
  static_assert(sizeof(::GTypeQuery) == sizeof(*(*query).gobj_()), "");
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c), (::GTypeQuery*) (query ? (::GTypeQuery*) (*query).gobj_() : nullptr));
  return query_c;
}

// GType g_type_register_dynamic (GType parent_type, const gchar* type_name /*none*/, GTypePlugin* plugin /*none*/, GTypeFlags flags);
// GType g_type_register_dynamic (GType parent_type, const char* type_name /*none*/, ::GTypePlugin* plugin /*none*/, ::GTypeFlags flags);
GType type_register_dynamic (GType parent_type, const gi::cstring_v type_name, GObject::TypePlugin plugin, GObject::TypeFlags flags) noexcept
{
  typedef GType (*call_wrap_t) (GType parent_type, const char* type_name, ::GTypePlugin* plugin, ::GTypeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_register_dynamic;
  auto flags_to_c = gi::unwrap (flags);
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none);
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none);
  auto parent_type_to_c = parent_type;
  auto _temp_ret = call_wrap_v ((GType) (parent_type_to_c), (const char*) (type_name_to_c), (::GTypePlugin*) (plugin_to_c), (::GTypeFlags) (flags_to_c));
  return _temp_ret;
}

// GType g_type_register_fundamental (GType type_id, const gchar* type_name /*none*/, const GTypeInfo* info /*none*/, const GTypeFundamentalInfo* finfo /*none*/, GTypeFlags flags);
// GType g_type_register_fundamental (GType type_id, const char* type_name /*none*/, const ::GTypeInfo* info /*none*/, const ::GTypeFundamentalInfo* finfo /*none*/, ::GTypeFlags flags);
GType type_register_fundamental (GType type_id, const gi::cstring_v type_name, const GObject::TypeInfo_Ref info, const GObject::TypeFundamentalInfo_Ref finfo, GObject::TypeFlags flags) noexcept
{
  typedef GType (*call_wrap_t) (GType type_id, const char* type_name, const ::GTypeInfo* info, const ::GTypeFundamentalInfo* finfo, ::GTypeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_register_fundamental;
  auto flags_to_c = gi::unwrap (flags);
  auto finfo_to_c = gi::unwrap (finfo, gi::transfer_none);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none);
  auto type_id_to_c = type_id;
  auto _temp_ret = call_wrap_v ((GType) (type_id_to_c), (const char*) (type_name_to_c), (const ::GTypeInfo*) (info_to_c), (const ::GTypeFundamentalInfo*) (finfo_to_c), (::GTypeFlags) (flags_to_c));
  return _temp_ret;
}

// GType g_type_register_static (GType parent_type, const gchar* type_name /*none*/, const GTypeInfo* info /*none*/, GTypeFlags flags);
// GType g_type_register_static (GType parent_type, const char* type_name /*none*/, const ::GTypeInfo* info /*none*/, ::GTypeFlags flags);
GType type_register_static (GType parent_type, const gi::cstring_v type_name, const GObject::TypeInfo_Ref info, GObject::TypeFlags flags) noexcept
{
  typedef GType (*call_wrap_t) (GType parent_type, const char* type_name, const ::GTypeInfo* info, ::GTypeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_register_static;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none);
  auto parent_type_to_c = parent_type;
  auto _temp_ret = call_wrap_v ((GType) (parent_type_to_c), (const char*) (type_name_to_c), (const ::GTypeInfo*) (info_to_c), (::GTypeFlags) (flags_to_c));
  return _temp_ret;
}

// GType g_type_register_static_simple (GType parent_type, const gchar* type_name /*none*/, guint class_size, GClassInitFunc class_init /*none*/, guint instance_size, GInstanceInitFunc instance_init /*none*/, GTypeFlags flags);
// GType g_type_register_static_simple (GType parent_type, const char* type_name /*none*/, guint class_size, GObject::ClassInitFunc::cfunction_type class_init /*none*/, guint instance_size,  instance_init /*none*/, ::GTypeFlags flags);
// IGNORE; not introspectable, instance_init type  not supported, callback misses closure info

// void g_type_remove_class_cache_func (gpointer cache_data, GTypeClassCacheFunc cache_func /*none*/);
// void g_type_remove_class_cache_func (void* cache_data,  cache_func /*none*/);
// IGNORE; not introspectable, cache_func type  not supported

// void g_type_remove_interface_check (gpointer check_data, GTypeInterfaceCheckFunc check_func /*none*/);
// void g_type_remove_interface_check (void* check_data,  check_func /*none*/);
// IGNORE; not introspectable, check_func type  not supported

// void g_type_set_qdata (GType type, GQuark quark, gpointer data);
// void g_type_set_qdata (GType type, ::GQuark quark, void* data);
void type_set_qdata (GType type, ::GQuark quark, void* data) noexcept
{
  typedef void (*call_wrap_t) (GType type, ::GQuark quark, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_set_qdata;
  auto data_to_c = data;
  auto quark_to_c = quark;
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c), (::GQuark) (quark_to_c), (void*) (data_to_c));
}

// gboolean g_type_test_flags (GType type, guint flags);
// gboolean g_type_test_flags (GType type, guint flags);
bool type_test_flags (GType type, guint flags) noexcept
{
  typedef gboolean (*call_wrap_t) (GType type, guint flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_test_flags;
  auto flags_to_c = flags;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (guint) (flags_to_c));
  return _temp_ret;
}

// GType g_variant_get_gtype ();
// GType g_variant_get_gtype ();
GType variant_get_gtype () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_variant_get_gtype;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
