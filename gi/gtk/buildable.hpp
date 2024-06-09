// AUTO-GENERATED

#ifndef _GI_GTK_BUILDABLE_HPP_
#define _GI_GTK_BUILDABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class BuildableParser;
class BuildableParser_Ref;
class Builder;

class Buildable;

namespace base {


#define GI_GTK_BUILDABLE_BASE base::BuildableBase
class BuildableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkBuildable BaseObjectType;

BuildableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_buildable_get_type(); } 

// const char* /*none,nullable*/ gtk_buildable_get_buildable_id (GtkBuildable* buildable /*none*/);
// const char* /*none,nullable*/ gtk_buildable_get_buildable_id (::GtkBuildable* buildable /*none*/);
GI_INLINE_DECL gi::cstring_v get_buildable_id () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buildable_extra_def.hpp>)
#include <gtk/buildable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buildable_extra.hpp>)
#include <gtk/buildable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Buildable : public GI_GTK_BUILDABLE_BASE
{ typedef GI_GTK_BUILDABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBuildable>
{ typedef Gtk::Buildable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BuildableIfaceDef
{
typedef BuildableIfaceDef self;
public:
typedef Gtk::Buildable instance_type;
typedef ::GtkBuildableIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(add_child) = self;
using GI_MEMBER_CHECK_CONFLICT(custom_finished) = self;
using GI_MEMBER_CHECK_CONFLICT(custom_tag_end) = self;
using GI_MEMBER_CHECK_CONFLICT(custom_tag_start) = self;
using GI_MEMBER_CHECK_CONFLICT(get_id) = self;
using GI_MEMBER_CHECK_CONFLICT(get_internal_child) = self;
using GI_MEMBER_CHECK_CONFLICT(parser_finished) = self;
using GI_MEMBER_CHECK_CONFLICT(set_buildable_property) = self;
using GI_MEMBER_CHECK_CONFLICT(set_id) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~BuildableIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Buildable::add_child (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none*/, const char* type /*none,nullable*/);
// void Buildable::add_child (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none*/, const char* type /*none,nullable*/);
virtual void add_child_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v type) noexcept = 0;

// void Buildable::custom_finished (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, gpointer data);
// void Buildable::custom_finished (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, void* data);
virtual void custom_finished_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, void* data) noexcept = 0;

// void Buildable::custom_tag_end (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, gpointer data);
// void Buildable::custom_tag_end (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, void* data);
virtual void custom_tag_end_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, void* data) noexcept = 0;

// gboolean Buildable::custom_tag_start (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, GtkBuildableParser* parser /*none,out,ca*/, gpointer* data);
// gboolean Buildable::custom_tag_start (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, ::GtkBuildableParser* parser /*none,out,ca*/, void** data);
virtual bool custom_tag_start_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, Gtk::BuildableParser_Ref parser, gpointer & data) noexcept = 0;

// const char* /*none*/ Buildable::get_id (GtkBuildable* buildable /*none*/);
// const char* /*none*/ Buildable::get_id (::GtkBuildable* buildable /*none*/);
virtual gi::cstring_v get_id_ () noexcept = 0;

// GObject* /*none*/ Buildable::get_internal_child (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, const char* childname /*none*/);
// ::GObject* /*none*/ Buildable::get_internal_child (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, const char* childname /*none*/);
virtual GObject::Object get_internal_child_ (Gtk::Builder builder, const gi::cstring_v childname) noexcept = 0;

// void Buildable::parser_finished (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/);
// void Buildable::parser_finished (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/);
virtual void parser_finished_ (Gtk::Builder builder) noexcept = 0;

// void Buildable::set_buildable_property (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, const char* name /*none*/, const GValue* value /*none*/);
// void Buildable::set_buildable_property (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, const char* name /*none*/, const ::GValue* value /*none*/);
virtual void set_buildable_property_ (Gtk::Builder builder, const gi::cstring_v name, const GObject::Value_Ref value) noexcept = 0;

// void Buildable::set_id (GtkBuildable* buildable /*none*/, const char* id /*none*/);
// void Buildable::set_id (::GtkBuildable* buildable /*none*/, const char* id /*none*/);
virtual void set_id_ (const gi::cstring_v id) noexcept = 0;


};

using BuildableImpl = detail::InterfaceImpl<BuildableIfaceDef>;

class BuildableIfaceClassImpl: public detail::InterfaceClassImpl<BuildableImpl>
{
friend class internal::BuildableIfaceDef;
typedef BuildableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<BuildableImpl> super;

protected:
using super::super;

// void Buildable::add_child (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none*/, const char* type /*none,nullable*/);
// void Buildable::add_child (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none*/, const char* type /*none,nullable*/);
GI_INLINE_DECL void add_child_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v type) noexcept override;

// void Buildable::custom_finished (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, gpointer data);
// void Buildable::custom_finished (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, void* data);
GI_INLINE_DECL void custom_finished_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, void* data) noexcept override;

// void Buildable::custom_tag_end (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, gpointer data);
// void Buildable::custom_tag_end (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, void* data);
GI_INLINE_DECL void custom_tag_end_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, void* data) noexcept override;

// gboolean Buildable::custom_tag_start (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, GObject* child /*none,nullable*/, const char* tagname /*none*/, GtkBuildableParser* parser /*none,out,ca*/, gpointer* data);
// gboolean Buildable::custom_tag_start (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, ::GObject* child /*none,nullable*/, const char* tagname /*none*/, ::GtkBuildableParser* parser /*none,out,ca*/, void** data);
GI_INLINE_DECL bool custom_tag_start_ (Gtk::Builder builder, GObject::Object child, const gi::cstring_v tagname, Gtk::BuildableParser_Ref parser, gpointer & data) noexcept override;

// const char* /*none*/ Buildable::get_id (GtkBuildable* buildable /*none*/);
// const char* /*none*/ Buildable::get_id (::GtkBuildable* buildable /*none*/);
GI_INLINE_DECL gi::cstring_v get_id_ () noexcept override;

// GObject* /*none*/ Buildable::get_internal_child (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, const char* childname /*none*/);
// ::GObject* /*none*/ Buildable::get_internal_child (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, const char* childname /*none*/);
GI_INLINE_DECL GObject::Object get_internal_child_ (Gtk::Builder builder, const gi::cstring_v childname) noexcept override;

// void Buildable::parser_finished (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/);
// void Buildable::parser_finished (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/);
GI_INLINE_DECL void parser_finished_ (Gtk::Builder builder) noexcept override;

// void Buildable::set_buildable_property (GtkBuildable* buildable /*none*/, GtkBuilder* builder /*none*/, const char* name /*none*/, const GValue* value /*none*/);
// void Buildable::set_buildable_property (::GtkBuildable* buildable /*none*/, ::GtkBuilder* builder /*none*/, const char* name /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL void set_buildable_property_ (Gtk::Builder builder, const gi::cstring_v name, const GObject::Value_Ref value) noexcept override;

// void Buildable::set_id (GtkBuildable* buildable /*none*/, const char* id /*none*/);
// void Buildable::set_id (::GtkBuildable* buildable /*none*/, const char* id /*none*/);
GI_INLINE_DECL void set_id_ (const gi::cstring_v id) noexcept override;


};


struct BuildableIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, add_child)
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, custom_finished)
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, custom_tag_end)
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, custom_tag_start)
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, get_id)
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, get_internal_child)
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, parser_finished)
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, set_buildable_property)
  GI_MEMBER_DEFINE(BuildableIfaceClassImpl, set_id)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, add_child),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, custom_finished),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, custom_tag_end),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, custom_tag_start),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_internal_child),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, parser_finished),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_buildable_property),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_id)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
