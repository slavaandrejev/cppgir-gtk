// AUTO-GENERATED

#ifndef _GI_GTK_BUILDER_HPP_
#define _GI_GTK_BUILDER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class BuilderScope;

class Builder;

namespace base {


#define GI_GTK_BUILDER_BASE base::BuilderBase
class BuilderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkBuilder BaseObjectType;

BuilderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_builder_get_type(); } 

// GtkBuilder* /*full*/ gtk_builder_new ();
// ::GtkBuilder* /*full*/ gtk_builder_new ();
static GI_INLINE_DECL Gtk::Builder new_ () noexcept;

// GtkBuilder* /*full*/ gtk_builder_new_from_file (const char* filename /*none*/);
// ::GtkBuilder* /*full*/ gtk_builder_new_from_file (const char* filename /*none*/);
static GI_INLINE_DECL Gtk::Builder new_from_file (const gi::cstring_v filename) noexcept;

// GtkBuilder* /*full*/ gtk_builder_new_from_resource (const char* resource_path /*none*/);
// ::GtkBuilder* /*full*/ gtk_builder_new_from_resource (const char* resource_path /*none*/);
static GI_INLINE_DECL Gtk::Builder new_from_resource (const gi::cstring_v resource_path) noexcept;

// GtkBuilder* /*full*/ gtk_builder_new_from_string (const char* string /*none*/, gssize length);
// ::GtkBuilder* /*full*/ gtk_builder_new_from_string (const char* string /*none*/, gssize length);
static GI_INLINE_DECL Gtk::Builder new_from_string (const gi::cstring_v string, gssize length) noexcept;

// gboolean gtk_builder_add_from_file (GtkBuilder* builder /*none*/, const char* filename /*none*/, GError ** error);
// gboolean gtk_builder_add_from_file (::GtkBuilder* builder /*none*/, const char* filename /*none*/, GError ** error);
GI_INLINE_DECL bool add_from_file (const gi::cstring_v filename);
GI_INLINE_DECL bool add_from_file (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// gboolean gtk_builder_add_from_resource (GtkBuilder* builder /*none*/, const char* resource_path /*none*/, GError ** error);
// gboolean gtk_builder_add_from_resource (::GtkBuilder* builder /*none*/, const char* resource_path /*none*/, GError ** error);
GI_INLINE_DECL bool add_from_resource (const gi::cstring_v resource_path);
GI_INLINE_DECL bool add_from_resource (const gi::cstring_v resource_path, GLib::Error * _error) noexcept;

// gboolean gtk_builder_add_from_string (GtkBuilder* builder /*none*/, const char* buffer /*none*/, gssize length, GError ** error);
// gboolean gtk_builder_add_from_string (::GtkBuilder* builder /*none*/, const char* buffer /*none*/, gssize length, GError ** error);
GI_INLINE_DECL bool add_from_string (const gi::cstring_v buffer, gssize length);
GI_INLINE_DECL bool add_from_string (const gi::cstring_v buffer, gssize length, GLib::Error * _error) noexcept;

// gboolean gtk_builder_add_objects_from_file (GtkBuilder* builder /*none*/, const char* filename /*none*/, const char** object_ids /*none*/, GError ** error);
// gboolean gtk_builder_add_objects_from_file (::GtkBuilder* builder /*none*/, const char* filename /*none*/, const char** object_ids /*none*/, GError ** error);
GI_INLINE_DECL bool add_objects_from_file (const gi::cstring_v filename, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids);
GI_INLINE_DECL bool add_objects_from_file (const gi::cstring_v filename, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids, GLib::Error * _error) noexcept;

// gboolean gtk_builder_add_objects_from_resource (GtkBuilder* builder /*none*/, const char* resource_path /*none*/, const char** object_ids /*none*/, GError ** error);
// gboolean gtk_builder_add_objects_from_resource (::GtkBuilder* builder /*none*/, const char* resource_path /*none*/, const char** object_ids /*none*/, GError ** error);
GI_INLINE_DECL bool add_objects_from_resource (const gi::cstring_v resource_path, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids);
GI_INLINE_DECL bool add_objects_from_resource (const gi::cstring_v resource_path, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids, GLib::Error * _error) noexcept;

// gboolean gtk_builder_add_objects_from_string (GtkBuilder* builder /*none*/, const char* buffer /*none*/, gssize length, const char** object_ids /*none*/, GError ** error);
// gboolean gtk_builder_add_objects_from_string (::GtkBuilder* builder /*none*/, const char* buffer /*none*/, gssize length, const char** object_ids /*none*/, GError ** error);
GI_INLINE_DECL bool add_objects_from_string (const gi::cstring_v buffer, gssize length, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids);
GI_INLINE_DECL bool add_objects_from_string (const gi::cstring_v buffer, gssize length, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> object_ids, GLib::Error * _error) noexcept;

// GClosure* /*full,nullable*/ gtk_builder_create_closure (GtkBuilder* builder /*none*/, const char* function_name /*none*/, GtkBuilderClosureFlags flags, GObject* object /*none,nullable*/, GError ** error);
// ::GClosure* /*full,nullable*/ gtk_builder_create_closure (::GtkBuilder* builder /*none*/, const char* function_name /*none*/, ::GtkBuilderClosureFlags flags, ::GObject* object /*none,nullable*/, GError ** error);
GI_INLINE_DECL GObject::Closure create_closure (const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GObject::Object object);
GI_INLINE_DECL GObject::Closure create_closure (const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags);
GI_INLINE_DECL GObject::Closure create_closure (const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GObject::Object object, GLib::Error * _error) noexcept;
GI_INLINE_DECL GObject::Closure create_closure (const gi::cstring_v function_name, Gtk::BuilderClosureFlags flags, GLib::Error * _error) noexcept;

// void gtk_builder_expose_object (GtkBuilder* builder /*none*/, const char* name /*none*/, GObject* object /*none*/);
// void gtk_builder_expose_object (::GtkBuilder* builder /*none*/, const char* name /*none*/, ::GObject* object /*none*/);
GI_INLINE_DECL void expose_object (const gi::cstring_v name, GObject::Object object) noexcept;

// gboolean gtk_builder_extend_with_template (GtkBuilder* builder /*none*/, GObject* object /*none*/, GType template_type, const char* buffer /*none*/, gssize length, GError ** error);
// gboolean gtk_builder_extend_with_template (::GtkBuilder* builder /*none*/, ::GObject* object /*none*/, GType template_type, const char* buffer /*none*/, gssize length, GError ** error);
GI_INLINE_DECL bool extend_with_template (GObject::Object object, GType template_type, const gi::cstring_v buffer, gssize length);
GI_INLINE_DECL bool extend_with_template (GObject::Object object, GType template_type, const gi::cstring_v buffer, gssize length, GLib::Error * _error) noexcept;

// GObject* /*none,nullable*/ gtk_builder_get_current_object (GtkBuilder* builder /*none*/);
// ::GObject* /*none,nullable*/ gtk_builder_get_current_object (::GtkBuilder* builder /*none*/);
GI_INLINE_DECL GObject::Object get_current_object () noexcept;

// GObject* /*none,nullable*/ gtk_builder_get_object (GtkBuilder* builder /*none*/, const char* name /*none*/);
// ::GObject* /*none,nullable*/ gtk_builder_get_object (::GtkBuilder* builder /*none*/, const char* name /*none*/);
GI_INLINE_DECL GObject::Object get_object (const gi::cstring_v name) noexcept;

// GSList* /*container*/ gtk_builder_get_objects (GtkBuilder* builder /*none*/);
// ::GSList* /*container*/ gtk_builder_get_objects (::GtkBuilder* builder /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::GObject*, gi::transfer_container_t> get_objects () noexcept;

// GtkBuilderScope* /*none*/ gtk_builder_get_scope (GtkBuilder* builder /*none*/);
// ::GtkBuilderScope* /*none*/ gtk_builder_get_scope (::GtkBuilder* builder /*none*/);
GI_INLINE_DECL Gtk::BuilderScope get_scope () noexcept;

// const char* /*none,nullable*/ gtk_builder_get_translation_domain (GtkBuilder* builder /*none*/);
// const char* /*none,nullable*/ gtk_builder_get_translation_domain (::GtkBuilder* builder /*none*/);
GI_INLINE_DECL gi::cstring_v get_translation_domain () noexcept;

// GType gtk_builder_get_type_from_name (GtkBuilder* builder /*none*/, const char* type_name /*none*/);
// GType gtk_builder_get_type_from_name (::GtkBuilder* builder /*none*/, const char* type_name /*none*/);
GI_INLINE_DECL GType get_type_from_name (const gi::cstring_v type_name) noexcept;

// void gtk_builder_set_current_object (GtkBuilder* builder /*none*/, GObject* current_object /*none,nullable*/);
// void gtk_builder_set_current_object (::GtkBuilder* builder /*none*/, ::GObject* current_object /*none,nullable*/);
GI_INLINE_DECL void set_current_object (GObject::Object current_object) noexcept;
GI_INLINE_DECL void set_current_object () noexcept;

// void gtk_builder_set_scope (GtkBuilder* builder /*none*/, GtkBuilderScope* scope /*none,nullable*/);
// void gtk_builder_set_scope (::GtkBuilder* builder /*none*/, ::GtkBuilderScope* scope /*none,nullable*/);
GI_INLINE_DECL void set_scope (Gtk::BuilderScope scope) noexcept;
GI_INLINE_DECL void set_scope () noexcept;

// void gtk_builder_set_translation_domain (GtkBuilder* builder /*none*/, const char* domain /*none,nullable*/);
// void gtk_builder_set_translation_domain (::GtkBuilder* builder /*none*/, const char* domain /*none,nullable*/);
GI_INLINE_DECL void set_translation_domain (const gi::cstring_v domain) noexcept;
GI_INLINE_DECL void set_translation_domain () noexcept;

// gboolean gtk_builder_value_from_string (GtkBuilder* builder /*none*/, GParamSpec* pspec /*none*/, const char* string /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean gtk_builder_value_from_string (::GtkBuilder* builder /*none*/, ::GParamSpec* pspec /*none*/, const char* string /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
GI_INLINE_DECL bool value_from_string (GObject::ParamSpec pspec, const gi::cstring_v string, GObject::Value & value);
GI_INLINE_DECL bool value_from_string (GObject::ParamSpec pspec, const gi::cstring_v string, GObject::Value & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_from_string (GObject::ParamSpec pspec, const gi::cstring_v string);
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_from_string (GObject::ParamSpec pspec, const gi::cstring_v string, GLib::Error * _error) noexcept;

// gboolean gtk_builder_value_from_string_type (GtkBuilder* builder /*none*/, GType type, const char* string /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean gtk_builder_value_from_string_type (::GtkBuilder* builder /*none*/, GType type, const char* string /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
GI_INLINE_DECL bool value_from_string_type (GType type, const gi::cstring_v string, GObject::Value & value);
GI_INLINE_DECL bool value_from_string_type (GType type, const gi::cstring_v string, GObject::Value & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_from_string_type (GType type, const gi::cstring_v string);
GI_INLINE_DECL std::tuple<bool, GObject::Value> value_from_string_type (GType type, const gi::cstring_v string, GLib::Error * _error) noexcept;

gi::property_proxy<GObject::Object, base::BuilderBase> property_current_object()
{ return gi::property_proxy<GObject::Object, base::BuilderBase> (*this, "current-object"); }
const gi::property_proxy<GObject::Object, base::BuilderBase> property_current_object() const
{ return gi::property_proxy<GObject::Object, base::BuilderBase> (*this, "current-object"); }

gi::property_proxy<Gtk::BuilderScope, base::BuilderBase> property_scope()
{ return gi::property_proxy<Gtk::BuilderScope, base::BuilderBase> (*this, "scope"); }
const gi::property_proxy<Gtk::BuilderScope, base::BuilderBase> property_scope() const
{ return gi::property_proxy<Gtk::BuilderScope, base::BuilderBase> (*this, "scope"); }

gi::property_proxy<gi::cstring, base::BuilderBase> property_translation_domain()
{ return gi::property_proxy<gi::cstring, base::BuilderBase> (*this, "translation-domain"); }
const gi::property_proxy<gi::cstring, base::BuilderBase> property_translation_domain() const
{ return gi::property_proxy<gi::cstring, base::BuilderBase> (*this, "translation-domain"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/builder_extra_def.hpp>)
#include <gtk/builder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/builder_extra.hpp>)
#include <gtk/builder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Builder : public GI_GTK_BUILDER_BASE
{ typedef GI_GTK_BUILDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBuilder>
{ typedef Gtk::Builder type; }; 

} // namespace repository

} // namespace gi

#endif
