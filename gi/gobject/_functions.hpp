// AUTO-GENERATED

#ifndef _GI_GOBJECT__FUNCTIONS_HPP_
#define _GI_GOBJECT__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace GObject {

// gpointer g_boxed_copy (GType boxed_type, gconstpointer src_boxed);
// void* g_boxed_copy (GType boxed_type, const void* src_boxed);
GI_INLINE_DECL gpointer boxed_copy (GType boxed_type, const void* src_boxed) noexcept;

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
GI_INLINE_DECL GObject::EnumValue_Ref enum_get_value (GObject::EnumClass_Ref enum_class, gint value) noexcept;

// GEnumValue* /*none,nullable*/ g_enum_get_value_by_name (GEnumClass* enum_class /*none*/, const gchar* name /*none*/);
// ::GEnumValue* /*none,nullable*/ g_enum_get_value_by_name (::GEnumClass* enum_class /*none*/, const char* name /*none*/);
GI_INLINE_DECL GObject::EnumValue_Ref enum_get_value_by_name (GObject::EnumClass_Ref enum_class, const gi::cstring_v name) noexcept;

// GEnumValue* /*none,nullable*/ g_enum_get_value_by_nick (GEnumClass* enum_class /*none*/, const gchar* nick /*none*/);
// ::GEnumValue* /*none,nullable*/ g_enum_get_value_by_nick (::GEnumClass* enum_class /*none*/, const char* nick /*none*/);
GI_INLINE_DECL GObject::EnumValue_Ref enum_get_value_by_nick (GObject::EnumClass_Ref enum_class, const gi::cstring_v nick) noexcept;

// GType g_enum_register_static (const gchar* name /*none*/, const GEnumValue* const_static_values /*none*/);
// GType g_enum_register_static (const char* name /*none*/, const ::GEnumValue* const_static_values /*none*/);
GI_INLINE_DECL GType enum_register_static (const gi::cstring_v name, const GObject::EnumValue_Ref const_static_values) noexcept;

// gchar* /*full*/ g_enum_to_string (GType g_enum_type, gint value);
// char* /*full*/ g_enum_to_string (GType g_enum_type, gint value);
GI_INLINE_DECL gi::cstring enum_to_string (GType g_enum_type, gint value) noexcept;

// void g_flags_complete_type_info (GType g_flags_type, GTypeInfo* info /*full,out*/, const GFlagsValue* const_values /*none*/);
// void g_flags_complete_type_info (GType g_flags_type, ::GTypeInfo** info /*full,out*/, const ::GFlagsValue* const_values /*none*/);
// SKIP; inconsistent info out pointer depth (1 vs 2)

// GFlagsValue* /*none,nullable*/ g_flags_get_first_value (GFlagsClass* flags_class /*none*/, guint value);
// ::GFlagsValue* /*none,nullable*/ g_flags_get_first_value (::GFlagsClass* flags_class /*none*/, guint value);
GI_INLINE_DECL GObject::FlagsValue_Ref flags_get_first_value (GObject::FlagsClass_Ref flags_class, guint value) noexcept;

// GFlagsValue* /*none,nullable*/ g_flags_get_value_by_name (GFlagsClass* flags_class /*none*/, const gchar* name /*none*/);
// ::GFlagsValue* /*none,nullable*/ g_flags_get_value_by_name (::GFlagsClass* flags_class /*none*/, const char* name /*none*/);
GI_INLINE_DECL GObject::FlagsValue_Ref flags_get_value_by_name (GObject::FlagsClass_Ref flags_class, const gi::cstring_v name) noexcept;

// GFlagsValue* /*none,nullable*/ g_flags_get_value_by_nick (GFlagsClass* flags_class /*none*/, const gchar* nick /*none*/);
// ::GFlagsValue* /*none,nullable*/ g_flags_get_value_by_nick (::GFlagsClass* flags_class /*none*/, const char* nick /*none*/);
GI_INLINE_DECL GObject::FlagsValue_Ref flags_get_value_by_nick (GObject::FlagsClass_Ref flags_class, const gi::cstring_v nick) noexcept;

// GType g_flags_register_static (const gchar* name /*none*/, const GFlagsValue* const_static_values /*none*/);
// GType g_flags_register_static (const char* name /*none*/, const ::GFlagsValue* const_static_values /*none*/);
GI_INLINE_DECL GType flags_register_static (const gi::cstring_v name, const GObject::FlagsValue_Ref const_static_values) noexcept;

// gchar* /*full*/ g_flags_to_string (GType flags_type, guint value);
// char* /*full*/ g_flags_to_string (GType flags_type, guint value);
GI_INLINE_DECL gi::cstring flags_to_string (GType flags_type, guint value) noexcept;

// GType g_gtype_get_type ();
// GType g_gtype_get_type ();
GI_INLINE_DECL GType gtype_get_type () noexcept;

// GParamSpec* /*full*/ g_param_spec_boolean (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gboolean default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_boolean (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gboolean default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_boolean (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gboolean default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_boolean (const gi::cstring_v name, gboolean default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_boxed (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType boxed_type, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_boxed (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType boxed_type, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_boxed (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType boxed_type, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_boxed (const gi::cstring_v name, GType boxed_type, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_char (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gint8 minimum, gint8 maximum, gint8 default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_char (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gint8 minimum, gint8 maximum, gint8 default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_char (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gint8 minimum, gint8 maximum, gint8 default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_char (const gi::cstring_v name, gint8 minimum, gint8 maximum, gint8 default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_double (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gdouble minimum, gdouble maximum, gdouble default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_double (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gdouble minimum, gdouble maximum, gdouble default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_double (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gdouble minimum, gdouble maximum, gdouble default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_double (const gi::cstring_v name, gdouble minimum, gdouble maximum, gdouble default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_enum (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType enum_type, gint default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_enum (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType enum_type, gint default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_enum (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType enum_type, gint default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_enum (const gi::cstring_v name, GType enum_type, gint default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_flags (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType flags_type, guint default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_flags (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType flags_type, guint default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_flags (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType flags_type, guint default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_flags (const gi::cstring_v name, GType flags_type, guint default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_float (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gfloat minimum, gfloat maximum, gfloat default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_float (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gfloat minimum, gfloat maximum, gfloat default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_float (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gfloat minimum, gfloat maximum, gfloat default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_float (const gi::cstring_v name, gfloat minimum, gfloat maximum, gfloat default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_gtype (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType is_a_type, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_gtype (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType is_a_type, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_gtype (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType is_a_type, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_gtype (const gi::cstring_v name, GType is_a_type, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_int (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gint minimum, gint maximum, gint default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_int (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gint minimum, gint maximum, gint default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_int (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gint minimum, gint maximum, gint default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_int (const gi::cstring_v name, gint minimum, gint maximum, gint default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_int64 (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gint64 minimum, gint64 maximum, gint64 default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_int64 (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gint64 minimum, gint64 maximum, gint64 default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_int64 (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gint64 minimum, gint64 maximum, gint64 default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_int64 (const gi::cstring_v name, gint64 minimum, gint64 maximum, gint64 default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_long (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, glong minimum, glong maximum, glong default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_long (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, glong minimum, glong maximum, glong default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_long (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, glong minimum, glong maximum, glong default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_long (const gi::cstring_v name, glong minimum, glong maximum, glong default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_object (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType object_type, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_object (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType object_type, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_object (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType object_type, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_object (const gi::cstring_v name, GType object_type, GObject::ParamFlags flags) noexcept;

// FAILURE on g_param_spec_override; No such node (<xmlattr>.transfer-ownership)
// GParamSpec* /*full*/ g_param_spec_param (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GType param_type, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_param (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, GType param_type, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_param (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GType param_type, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_param (const gi::cstring_v name, GType param_type, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_pointer (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_pointer (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_pointer (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_pointer (const gi::cstring_v name, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_string (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, const gchar* default_value /*none,nullable*/, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_string (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, const char* default_value /*none,nullable*/, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_string (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, const gi::cstring_v default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_string (const gi::cstring_v name, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_uchar (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, guint8 minimum, guint8 maximum, guint8 default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_uchar (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, guint8 minimum, guint8 maximum, guint8 default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_uchar (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, guint8 minimum, guint8 maximum, guint8 default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_uchar (const gi::cstring_v name, guint8 minimum, guint8 maximum, guint8 default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_uint (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, guint minimum, guint maximum, guint default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_uint (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, guint minimum, guint maximum, guint default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_uint (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, guint minimum, guint maximum, guint default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_uint (const gi::cstring_v name, guint minimum, guint maximum, guint default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_uint64 (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, guint64 minimum, guint64 maximum, guint64 default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_uint64 (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, guint64 minimum, guint64 maximum, guint64 default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_uint64 (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, guint64 minimum, guint64 maximum, guint64 default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_uint64 (const gi::cstring_v name, guint64 minimum, guint64 maximum, guint64 default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_ulong (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gulong minimum, gulong maximum, gulong default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_ulong (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gulong minimum, gulong maximum, gulong default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_ulong (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gulong minimum, gulong maximum, gulong default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_ulong (const gi::cstring_v name, gulong minimum, gulong maximum, gulong default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* /*full*/ g_param_spec_unichar (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, gunichar default_value, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_unichar (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, gunichar default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_unichar (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, gunichar default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_unichar (const gi::cstring_v name, gunichar default_value, GObject::ParamFlags flags) noexcept;

// FAILURE on g_param_spec_value_array; No such node (<xmlattr>.transfer-ownership)
// GParamSpec* /*full*/ g_param_spec_variant (const gchar* name /*none*/, const gchar* nick /*none,nullable*/, const gchar* blurb /*none,nullable*/, const GVariantType* type /*none*/, GVariant* default_value /*full,nullable*/, GParamFlags flags);
// ::GParamSpec* /*full*/ g_param_spec_variant (const char* name /*none*/, const char* nick /*none,nullable*/, const char* blurb /*none,nullable*/, const ::GVariantType* type /*none*/, ::GVariant* default_value /*full,nullable*/, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_variant (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, const GLib::VariantType_Ref type, GLib::Variant default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_variant (const gi::cstring_v name, const GLib::VariantType_Ref type, GObject::ParamFlags flags) noexcept;

// GType g_param_type_register_static (const gchar* name /*none*/, const GParamSpecTypeInfo* pspec_info /*none*/);
// GType g_param_type_register_static (const char* name /*none*/, const ::GParamSpecTypeInfo* pspec_info /*none*/);
GI_INLINE_DECL GType param_type_register_static (const gi::cstring_v name, const GObject::ParamSpecTypeInfo_Ref pspec_info) noexcept;

// gboolean g_param_value_convert (GParamSpec* pspec /*none*/, const GValue* src_value /*none*/, GValue* dest_value /*none*/, gboolean strict_validation);
// gboolean g_param_value_convert (::GParamSpec* pspec /*none*/, const ::GValue* src_value /*none*/, ::GValue* dest_value /*none*/, gboolean strict_validation);
GI_INLINE_DECL bool param_value_convert (GObject::ParamSpec pspec, const GObject::Value_Ref src_value, GObject::Value_Ref dest_value, gboolean strict_validation) noexcept;

// gboolean g_param_value_defaults (GParamSpec* pspec /*none*/, const GValue* value /*none*/);
// gboolean g_param_value_defaults (::GParamSpec* pspec /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL bool param_value_defaults (GObject::ParamSpec pspec, const GObject::Value_Ref value) noexcept;

// gboolean g_param_value_is_valid (GParamSpec* pspec /*none*/, const GValue* value /*none*/);
// gboolean g_param_value_is_valid (::GParamSpec* pspec /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL bool param_value_is_valid (GObject::ParamSpec pspec, const GObject::Value_Ref value) noexcept;

// void g_param_value_set_default (GParamSpec* pspec /*none*/, GValue* value /*none*/);
// void g_param_value_set_default (::GParamSpec* pspec /*none*/, ::GValue* value /*none*/);
GI_INLINE_DECL void param_value_set_default (GObject::ParamSpec pspec, GObject::Value_Ref value) noexcept;

// gboolean g_param_value_validate (GParamSpec* pspec /*none*/, GValue* value /*none*/);
// gboolean g_param_value_validate (::GParamSpec* pspec /*none*/, ::GValue* value /*none*/);
GI_INLINE_DECL bool param_value_validate (GObject::ParamSpec pspec, GObject::Value_Ref value) noexcept;

// gint g_param_values_cmp (GParamSpec* pspec /*none*/, const GValue* value1 /*none*/, const GValue* value2 /*none*/);
// gint g_param_values_cmp (::GParamSpec* pspec /*none*/, const ::GValue* value1 /*none*/, const ::GValue* value2 /*none*/);
GI_INLINE_DECL gint param_values_cmp (GObject::ParamSpec pspec, const GObject::Value_Ref value1, const GObject::Value_Ref value2) noexcept;

// GType g_pointer_type_register_static (const gchar* name /*none*/);
// GType g_pointer_type_register_static (const char* name /*none*/);
GI_INLINE_DECL GType pointer_type_register_static (const gi::cstring_v name) noexcept;

// gboolean g_signal_accumulator_first_wins (GSignalInvocationHint* ihint /*none*/, GValue* return_accu /*none*/, const GValue* handler_return /*none*/, gpointer dummy);
// gboolean g_signal_accumulator_first_wins (::GSignalInvocationHint* ihint /*none*/, ::GValue* return_accu /*none*/, const ::GValue* handler_return /*none*/, void* dummy);
GI_INLINE_DECL bool signal_accumulator_first_wins (GObject::SignalInvocationHint_Ref ihint, GObject::Value_Ref return_accu, const GObject::Value_Ref handler_return, void* dummy) noexcept;

// gboolean g_signal_accumulator_true_handled (GSignalInvocationHint* ihint /*none*/, GValue* return_accu /*none*/, const GValue* handler_return /*none*/, gpointer dummy);
// gboolean g_signal_accumulator_true_handled (::GSignalInvocationHint* ihint /*none*/, ::GValue* return_accu /*none*/, const ::GValue* handler_return /*none*/, void* dummy);
GI_INLINE_DECL bool signal_accumulator_true_handled (GObject::SignalInvocationHint_Ref ihint, GObject::Value_Ref return_accu, const GObject::Value_Ref handler_return, void* dummy) noexcept;

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
GI_INLINE_DECL gulong signal_connect_closure (GObject::Object instance, const gi::cstring_v detailed_signal, GObject::Closure_Ref closure, gboolean after) noexcept;

// gulong g_signal_connect_closure_by_id (gpointer instance /*none*/, guint signal_id, GQuark detail, GClosure* closure /*none*/, gboolean after);
// gulong g_signal_connect_closure_by_id (::GObject* instance /*none*/, guint signal_id, ::GQuark detail, ::GClosure* closure /*none*/, gboolean after);
GI_INLINE_DECL gulong signal_connect_closure_by_id (GObject::Object instance, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, gboolean after) noexcept;

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
GI_INLINE_DECL GObject::SignalInvocationHint_Ref signal_get_invocation_hint (GObject::Object instance) noexcept;

// void g_signal_handler_block (gpointer instance /*none*/, gulong handler_id);
// void g_signal_handler_block (::GObject* instance /*none*/, gulong handler_id);
GI_INLINE_DECL void signal_handler_block (GObject::Object instance, gulong handler_id) noexcept;

// void g_signal_handler_disconnect (gpointer instance /*none*/, gulong handler_id);
// void g_signal_handler_disconnect (::GObject* instance /*none*/, gulong handler_id);
GI_INLINE_DECL void signal_handler_disconnect (GObject::Object instance, gulong handler_id) noexcept;

// gulong g_signal_handler_find (gpointer instance /*none*/, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure /*none,nullable*/, gpointer func, gpointer data);
// gulong g_signal_handler_find (::GObject* instance /*none*/, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure /*none,nullable*/, void* func, void* data);
GI_INLINE_DECL gulong signal_handler_find (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, void* func, void* data) noexcept;
GI_INLINE_DECL gulong signal_handler_find (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept;

// gboolean g_signal_handler_is_connected (gpointer instance /*none*/, gulong handler_id);
// gboolean g_signal_handler_is_connected (::GObject* instance /*none*/, gulong handler_id);
GI_INLINE_DECL bool signal_handler_is_connected (GObject::Object instance, gulong handler_id) noexcept;

// void g_signal_handler_unblock (gpointer instance /*none*/, gulong handler_id);
// void g_signal_handler_unblock (::GObject* instance /*none*/, gulong handler_id);
GI_INLINE_DECL void signal_handler_unblock (GObject::Object instance, gulong handler_id) noexcept;

// guint g_signal_handlers_block_matched (gpointer instance /*none*/, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure /*none,nullable*/, gpointer func, gpointer data);
// guint g_signal_handlers_block_matched (::GObject* instance /*none*/, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure /*none,nullable*/, void* func, void* data);
GI_INLINE_DECL guint signal_handlers_block_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, void* func, void* data) noexcept;
GI_INLINE_DECL guint signal_handlers_block_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept;

// void g_signal_handlers_destroy (gpointer instance /*none*/);
// void g_signal_handlers_destroy (::GObject* instance /*none*/);
GI_INLINE_DECL void signal_handlers_destroy (GObject::Object instance) noexcept;

// guint g_signal_handlers_disconnect_matched (gpointer instance /*none*/, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure /*none,nullable*/, gpointer func, gpointer data);
// guint g_signal_handlers_disconnect_matched (::GObject* instance /*none*/, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure /*none,nullable*/, void* func, void* data);
GI_INLINE_DECL guint signal_handlers_disconnect_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, void* func, void* data) noexcept;
GI_INLINE_DECL guint signal_handlers_disconnect_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept;

// guint g_signal_handlers_unblock_matched (gpointer instance /*none*/, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure /*none,nullable*/, gpointer func, gpointer data);
// guint g_signal_handlers_unblock_matched (::GObject* instance /*none*/, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure /*none,nullable*/, void* func, void* data);
GI_INLINE_DECL guint signal_handlers_unblock_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure_Ref closure, void* func, void* data) noexcept;
GI_INLINE_DECL guint signal_handlers_unblock_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept;

// gboolean g_signal_has_handler_pending (gpointer instance /*none*/, guint signal_id, GQuark detail, gboolean may_be_blocked);
// gboolean g_signal_has_handler_pending (::GObject* instance /*none*/, guint signal_id, ::GQuark detail, gboolean may_be_blocked);
GI_INLINE_DECL bool signal_has_handler_pending (GObject::Object instance, guint signal_id, ::GQuark detail, gboolean may_be_blocked) noexcept;

// gboolean g_signal_is_valid_name (const gchar* name /*none*/);
// gboolean g_signal_is_valid_name (const char* name /*none*/);
GI_INLINE_DECL bool signal_is_valid_name (const gi::cstring_v name) noexcept;

// guint* /*full*/ g_signal_list_ids (GType itype, guint* n_ids);
// guint* /*full*/ g_signal_list_ids (GType itype, guint* n_ids);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint, gi::transfer_full_t> signal_list_ids (GType itype) noexcept;

// guint g_signal_lookup (const gchar* name /*none*/, GType itype);
// guint g_signal_lookup (const char* name /*none*/, GType itype);
GI_INLINE_DECL guint signal_lookup (const gi::cstring_v name, GType itype) noexcept;

// const gchar* /*none,nullable*/ g_signal_name (guint signal_id);
// const char* /*none,nullable*/ g_signal_name (guint signal_id);
GI_INLINE_DECL gi::cstring_v signal_name (guint signal_id) noexcept;

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
GI_INLINE_DECL void signal_override_class_closure (guint signal_id, GType instance_type, GObject::Closure_Ref class_closure) noexcept;

// void g_signal_override_class_handler (const gchar* signal_name /*none*/, GType instance_type, GCallback class_handler /*none*/);
// void g_signal_override_class_handler (const char* signal_name /*none*/, GType instance_type,  class_handler /*none*/);
// SKIP; class_handler type  not supported

// gboolean g_signal_parse_name (const gchar* detailed_signal /*none*/, GType itype, guint* signal_id_p, GQuark* detail_p, gboolean force_detail_quark);
// gboolean g_signal_parse_name (const char* detailed_signal /*none*/, GType itype, guint* signal_id_p, ::GQuark* detail_p, gboolean force_detail_quark);
GI_INLINE_DECL bool signal_parse_name (const gi::cstring_v detailed_signal, GType itype, guint & signal_id_p, GLib::Quark & detail_p, gboolean force_detail_quark) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, GLib::Quark> signal_parse_name (const gi::cstring_v detailed_signal, GType itype, gboolean force_detail_quark) noexcept;

// void g_signal_query (guint signal_id, GSignalQuery* query /*none,out,ca*/);
// void g_signal_query (guint signal_id, ::GSignalQuery* query /*none,out,ca*/);
GI_INLINE_DECL void signal_query (guint signal_id, GObject::SignalQuery & query) noexcept;
GI_INLINE_DECL GObject::SignalQuery signal_query (guint signal_id) noexcept;

// void g_signal_remove_emission_hook (guint signal_id, gulong hook_id);
// void g_signal_remove_emission_hook (guint signal_id, gulong hook_id);
GI_INLINE_DECL void signal_remove_emission_hook (guint signal_id, gulong hook_id) noexcept;

// void g_signal_set_va_marshaller (guint signal_id, GType instance_type, GSignalCVaMarshaller va_marshaller /*none*/);
// void g_signal_set_va_marshaller (guint signal_id, GType instance_type,  va_marshaller /*none*/);
// SKIP; va_marshaller type  not supported

// void g_signal_stop_emission (gpointer instance /*none*/, guint signal_id, GQuark detail);
// void g_signal_stop_emission (::GObject* instance /*none*/, guint signal_id, ::GQuark detail);
GI_INLINE_DECL void signal_stop_emission (GObject::Object instance, guint signal_id, ::GQuark detail) noexcept;

// void g_signal_stop_emission_by_name (gpointer instance /*none*/, const gchar* detailed_signal /*none*/);
// void g_signal_stop_emission_by_name (::GObject* instance /*none*/, const char* detailed_signal /*none*/);
GI_INLINE_DECL void signal_stop_emission_by_name (GObject::Object instance, const gi::cstring_v detailed_signal) noexcept;

// GClosure* /*full*/ g_signal_type_cclosure_new (GType itype, guint struct_offset);
// ::GClosure* /*full*/ g_signal_type_cclosure_new (GType itype, guint struct_offset);
GI_INLINE_DECL GObject::Closure signal_type_cclosure_new (GType itype, guint struct_offset) noexcept;

// gchar* /*full*/ g_strdup_value_contents (const GValue* value /*none*/);
// char* /*full*/ g_strdup_value_contents (const ::GValue* value /*none*/);
GI_INLINE_DECL gi::cstring strdup_value_contents (const GObject::Value_Ref value) noexcept;

// void g_type_add_class_cache_func (gpointer cache_data, GTypeClassCacheFunc cache_func /*none*/);
// void g_type_add_class_cache_func (void* cache_data,  cache_func /*none*/);
// IGNORE; not introspectable, cache_func type  not supported

// void g_type_add_class_private (GType class_type, gsize private_size);
// void g_type_add_class_private (GType class_type, gsize private_size);
GI_INLINE_DECL void type_add_class_private (GType class_type, gsize private_size) noexcept;

// gint g_type_add_instance_private (GType class_type, gsize private_size);
// gint g_type_add_instance_private (GType class_type, gsize private_size);
GI_INLINE_DECL gint type_add_instance_private (GType class_type, gsize private_size) noexcept;

// void g_type_add_interface_check (gpointer check_data, GTypeInterfaceCheckFunc check_func /*none*/);
// void g_type_add_interface_check (void* check_data,  check_func /*none*/);
// IGNORE; not introspectable, check_func type  not supported

// void g_type_add_interface_dynamic (GType instance_type, GType interface_type, GTypePlugin* plugin /*none*/);
// void g_type_add_interface_dynamic (GType instance_type, GType interface_type, ::GTypePlugin* plugin /*none*/);
GI_INLINE_DECL void type_add_interface_dynamic (GType instance_type, GType interface_type, GObject::TypePlugin plugin) noexcept;

// void g_type_add_interface_static (GType instance_type, GType interface_type, const GInterfaceInfo* info /*none*/);
// void g_type_add_interface_static (GType instance_type, GType interface_type, const ::GInterfaceInfo* info /*none*/);
GI_INLINE_DECL void type_add_interface_static (GType instance_type, GType interface_type, const GObject::InterfaceInfo_Ref info) noexcept;

// FAILURE on g_type_check_class_cast; No such node (<xmlattr>.transfer-ownership)
// gboolean g_type_check_class_is_a (GTypeClass* g_class /*none*/, GType is_a_type);
// gboolean g_type_check_class_is_a (::GTypeClass* g_class /*none*/, GType is_a_type);
GI_INLINE_DECL bool type_check_class_is_a (GObject::TypeClass_Ref g_class, GType is_a_type) noexcept;

// gboolean g_type_check_instance (GTypeInstance* instance /*none*/);
// gboolean g_type_check_instance (::GTypeInstance* instance /*none*/);
GI_INLINE_DECL bool type_check_instance (GObject::TypeInstance_Ref instance) noexcept;

// FAILURE on g_type_check_instance_cast; No such node (<xmlattr>.transfer-ownership)
// gboolean g_type_check_instance_is_a (GTypeInstance* instance /*none*/, GType iface_type);
// gboolean g_type_check_instance_is_a (::GTypeInstance* instance /*none*/, GType iface_type);
GI_INLINE_DECL bool type_check_instance_is_a (GObject::TypeInstance_Ref instance, GType iface_type) noexcept;

// gboolean g_type_check_instance_is_fundamentally_a (GTypeInstance* instance /*none*/, GType fundamental_type);
// gboolean g_type_check_instance_is_fundamentally_a (::GTypeInstance* instance /*none*/, GType fundamental_type);
GI_INLINE_DECL bool type_check_instance_is_fundamentally_a (GObject::TypeInstance_Ref instance, GType fundamental_type) noexcept;

// gboolean g_type_check_is_value_type (GType type);
// gboolean g_type_check_is_value_type (GType type);
GI_INLINE_DECL bool type_check_is_value_type (GType type) noexcept;

// gboolean g_type_check_value (const GValue* value /*none*/);
// gboolean g_type_check_value (const ::GValue* value /*none*/);
GI_INLINE_DECL bool type_check_value (const GObject::Value_Ref value) noexcept;

// gboolean g_type_check_value_holds (const GValue* value /*none*/, GType type);
// gboolean g_type_check_value_holds (const ::GValue* value /*none*/, GType type);
GI_INLINE_DECL bool type_check_value_holds (const GObject::Value_Ref value, GType type) noexcept;

// GType* /*full*/ g_type_children (GType type, guint* n_children);
// GType* /*full*/ g_type_children (GType type, guint* n_children);
GI_INLINE_DECL gi::Collection<gi::DSpan, GType, gi::transfer_full_t> type_children (GType type) noexcept;

// FAILURE on g_type_create_instance; No such node (<xmlattr>.transfer-ownership)
// gpointer /*none*/ g_type_default_interface_peek (GType g_type);
// ::GTypeInterface* /*none*/ g_type_default_interface_peek (GType g_type);
GI_INLINE_DECL GObject::TypeInterface_Ref type_default_interface_peek (GType g_type) noexcept;

// guint g_type_depth (GType type);
// guint g_type_depth (GType type);
GI_INLINE_DECL guint type_depth (GType type) noexcept;

// void g_type_ensure (GType type);
// void g_type_ensure (GType type);
GI_INLINE_DECL void type_ensure (GType type) noexcept;

// void g_type_free_instance (GTypeInstance* instance /*none*/);
// void g_type_free_instance (::GTypeInstance* instance /*none*/);
GI_INLINE_DECL void type_free_instance (GObject::TypeInstance_Ref instance) noexcept;

// GType g_type_from_name (const gchar* name /*none*/);
// GType g_type_from_name (const char* name /*none*/);
GI_INLINE_DECL GType type_from_name (const gi::cstring_v name) noexcept;

// GType g_type_fundamental (GType type_id);
// GType g_type_fundamental (GType type_id);
GI_INLINE_DECL GType type_fundamental (GType type_id) noexcept;

// GType g_type_fundamental_next ();
// GType g_type_fundamental_next ();
GI_INLINE_DECL GType type_fundamental_next () noexcept;

// int g_type_get_instance_count (GType type);
// gint g_type_get_instance_count (GType type);
GI_INLINE_DECL gint type_get_instance_count (GType type) noexcept;

// GTypePlugin* /*none*/ g_type_get_plugin (GType type);
// ::GTypePlugin* /*none*/ g_type_get_plugin (GType type);
GI_INLINE_DECL GObject::TypePlugin type_get_plugin (GType type) noexcept;

// gpointer g_type_get_qdata (GType type, GQuark quark);
// void* g_type_get_qdata (GType type, ::GQuark quark);
GI_INLINE_DECL gpointer type_get_qdata (GType type, ::GQuark quark) noexcept;

// guint g_type_get_type_registration_serial ();
// guint g_type_get_type_registration_serial ();
GI_INLINE_DECL guint type_get_type_registration_serial () noexcept;

// GType* /*full*/ g_type_interfaces (GType type, guint* n_interfaces);
// GType* /*full*/ g_type_interfaces (GType type, guint* n_interfaces);
GI_INLINE_DECL gi::Collection<gi::DSpan, GType, gi::transfer_full_t> type_interfaces (GType type) noexcept;

// gboolean g_type_is_a (GType type, GType is_a_type);
// gboolean g_type_is_a (GType type, GType is_a_type);
GI_INLINE_DECL bool type_is_a (GType type, GType is_a_type) noexcept;

// const gchar* /*none,nullable*/ g_type_name (GType type);
// const char* /*none,nullable*/ g_type_name (GType type);
GI_INLINE_DECL gi::cstring_v type_name (GType type) noexcept;

// const gchar* /*none*/ g_type_name_from_class (GTypeClass* g_class /*none*/);
// const char* /*none*/ g_type_name_from_class (::GTypeClass* g_class /*none*/);
GI_INLINE_DECL gi::cstring_v type_name_from_class (GObject::TypeClass_Ref g_class) noexcept;

// const gchar* /*none*/ g_type_name_from_instance (GTypeInstance* instance /*none*/);
// const char* /*none*/ g_type_name_from_instance (::GTypeInstance* instance /*none*/);
GI_INLINE_DECL gi::cstring_v type_name_from_instance (GObject::TypeInstance_Ref instance) noexcept;

// GType g_type_next_base (GType leaf_type, GType root_type);
// GType g_type_next_base (GType leaf_type, GType root_type);
GI_INLINE_DECL GType type_next_base (GType leaf_type, GType root_type) noexcept;

// GType g_type_parent (GType type);
// GType g_type_parent (GType type);
GI_INLINE_DECL GType type_parent (GType type) noexcept;

// GQuark g_type_qname (GType type);
// ::GQuark g_type_qname (GType type);
GI_INLINE_DECL GLib::Quark type_qname (GType type) noexcept;

// void g_type_query (GType type, GTypeQuery* query /*none,out,ca*/);
// void g_type_query (GType type, ::GTypeQuery* query /*none,out,ca*/);
GI_INLINE_DECL void type_query (GType type, GObject::TypeQuery & query) noexcept;
GI_INLINE_DECL GObject::TypeQuery type_query (GType type) noexcept;

// GType g_type_register_dynamic (GType parent_type, const gchar* type_name /*none*/, GTypePlugin* plugin /*none*/, GTypeFlags flags);
// GType g_type_register_dynamic (GType parent_type, const char* type_name /*none*/, ::GTypePlugin* plugin /*none*/, ::GTypeFlags flags);
GI_INLINE_DECL GType type_register_dynamic (GType parent_type, const gi::cstring_v type_name, GObject::TypePlugin plugin, GObject::TypeFlags flags) noexcept;

// GType g_type_register_fundamental (GType type_id, const gchar* type_name /*none*/, const GTypeInfo* info /*none*/, const GTypeFundamentalInfo* finfo /*none*/, GTypeFlags flags);
// GType g_type_register_fundamental (GType type_id, const char* type_name /*none*/, const ::GTypeInfo* info /*none*/, const ::GTypeFundamentalInfo* finfo /*none*/, ::GTypeFlags flags);
GI_INLINE_DECL GType type_register_fundamental (GType type_id, const gi::cstring_v type_name, const GObject::TypeInfo_Ref info, const GObject::TypeFundamentalInfo_Ref finfo, GObject::TypeFlags flags) noexcept;

// GType g_type_register_static (GType parent_type, const gchar* type_name /*none*/, const GTypeInfo* info /*none*/, GTypeFlags flags);
// GType g_type_register_static (GType parent_type, const char* type_name /*none*/, const ::GTypeInfo* info /*none*/, ::GTypeFlags flags);
GI_INLINE_DECL GType type_register_static (GType parent_type, const gi::cstring_v type_name, const GObject::TypeInfo_Ref info, GObject::TypeFlags flags) noexcept;

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
GI_INLINE_DECL void type_set_qdata (GType type, ::GQuark quark, void* data) noexcept;

// gboolean g_type_test_flags (GType type, guint flags);
// gboolean g_type_test_flags (GType type, guint flags);
GI_INLINE_DECL bool type_test_flags (GType type, guint flags) noexcept;

// GType g_variant_get_gtype ();
// GType g_variant_get_gtype ();
GI_INLINE_DECL GType variant_get_gtype () noexcept;

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
