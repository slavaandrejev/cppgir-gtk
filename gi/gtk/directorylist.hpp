// AUTO-GENERATED

#ifndef _GI_GTK_DIRECTORYLIST_HPP_
#define _GI_GTK_DIRECTORYLIST_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class DirectoryList;

namespace base {


#define GI_GTK_DIRECTORYLIST_BASE base::DirectoryListBase
class DirectoryListBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkDirectoryList BaseObjectType;

DirectoryListBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_directory_list_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

// GtkDirectoryList* /*full*/ gtk_directory_list_new (const char* attributes /*none,nullable*/, GFile* file /*none,nullable*/);
// ::GtkDirectoryList* /*full*/ gtk_directory_list_new (const char* attributes /*none,nullable*/, ::GFile* file /*none,nullable*/);
static GI_INLINE_DECL Gtk::DirectoryList new_ (const gi::cstring_v attributes, Gio::File file) noexcept;
static GI_INLINE_DECL Gtk::DirectoryList new_ () noexcept;

// const char* /*none,nullable*/ gtk_directory_list_get_attributes (GtkDirectoryList* self /*none*/);
// const char* /*none,nullable*/ gtk_directory_list_get_attributes (::GtkDirectoryList* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_attributes () noexcept;

// const GError* /*none,nullable*/ gtk_directory_list_get_error (GtkDirectoryList* self /*none*/);
// const ::GError* /*none,nullable*/ gtk_directory_list_get_error (::GtkDirectoryList* self /*none*/);
GI_INLINE_DECL GLib::Error_Ref get_error () noexcept;

// GFile* /*none,nullable*/ gtk_directory_list_get_file (GtkDirectoryList* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_directory_list_get_file (::GtkDirectoryList* self /*none*/);
GI_INLINE_DECL Gio::File get_file () noexcept;

// int gtk_directory_list_get_io_priority (GtkDirectoryList* self /*none*/);
// gint gtk_directory_list_get_io_priority (::GtkDirectoryList* self /*none*/);
GI_INLINE_DECL gint get_io_priority () noexcept;

// gboolean gtk_directory_list_get_monitored (GtkDirectoryList* self /*none*/);
// gboolean gtk_directory_list_get_monitored (::GtkDirectoryList* self /*none*/);
GI_INLINE_DECL bool get_monitored () noexcept;

// gboolean gtk_directory_list_is_loading (GtkDirectoryList* self /*none*/);
// gboolean gtk_directory_list_is_loading (::GtkDirectoryList* self /*none*/);
GI_INLINE_DECL bool is_loading () noexcept;

// void gtk_directory_list_set_attributes (GtkDirectoryList* self /*none*/, const char* attributes /*none,nullable*/);
// void gtk_directory_list_set_attributes (::GtkDirectoryList* self /*none*/, const char* attributes /*none,nullable*/);
GI_INLINE_DECL void set_attributes (const gi::cstring_v attributes) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void gtk_directory_list_set_file (GtkDirectoryList* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_directory_list_set_file (::GtkDirectoryList* self /*none*/, ::GFile* file /*none,nullable*/);
GI_INLINE_DECL void set_file (Gio::File file) noexcept;
GI_INLINE_DECL void set_file () noexcept;

// void gtk_directory_list_set_io_priority (GtkDirectoryList* self /*none*/, int io_priority);
// void gtk_directory_list_set_io_priority (::GtkDirectoryList* self /*none*/, gint io_priority);
GI_INLINE_DECL void set_io_priority (gint io_priority) noexcept;

// void gtk_directory_list_set_monitored (GtkDirectoryList* self /*none*/, gboolean monitored);
// void gtk_directory_list_set_monitored (::GtkDirectoryList* self /*none*/, gboolean monitored);
GI_INLINE_DECL void set_monitored (gboolean monitored) noexcept;

gi::property_proxy<gi::cstring, base::DirectoryListBase> property_attributes()
{ return gi::property_proxy<gi::cstring, base::DirectoryListBase> (*this, "attributes"); }
const gi::property_proxy<gi::cstring, base::DirectoryListBase> property_attributes() const
{ return gi::property_proxy<gi::cstring, base::DirectoryListBase> (*this, "attributes"); }

gi::property_proxy<GLib::Error, base::DirectoryListBase> property_error()
{ return gi::property_proxy<GLib::Error, base::DirectoryListBase> (*this, "error"); }
const gi::property_proxy<GLib::Error, base::DirectoryListBase> property_error() const
{ return gi::property_proxy<GLib::Error, base::DirectoryListBase> (*this, "error"); }

gi::property_proxy<Gio::File, base::DirectoryListBase> property_file()
{ return gi::property_proxy<Gio::File, base::DirectoryListBase> (*this, "file"); }
const gi::property_proxy<Gio::File, base::DirectoryListBase> property_file() const
{ return gi::property_proxy<Gio::File, base::DirectoryListBase> (*this, "file"); }

gi::property_proxy<gint, base::DirectoryListBase> property_io_priority()
{ return gi::property_proxy<gint, base::DirectoryListBase> (*this, "io-priority"); }
const gi::property_proxy<gint, base::DirectoryListBase> property_io_priority() const
{ return gi::property_proxy<gint, base::DirectoryListBase> (*this, "io-priority"); }

gi::property_proxy<GType, base::DirectoryListBase> property_item_type()
{ return gi::property_proxy<GType, base::DirectoryListBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::DirectoryListBase> property_item_type() const
{ return gi::property_proxy<GType, base::DirectoryListBase> (*this, "item-type"); }

gi::property_proxy<bool, base::DirectoryListBase> property_loading()
{ return gi::property_proxy<bool, base::DirectoryListBase> (*this, "loading"); }
const gi::property_proxy<bool, base::DirectoryListBase> property_loading() const
{ return gi::property_proxy<bool, base::DirectoryListBase> (*this, "loading"); }

gi::property_proxy<bool, base::DirectoryListBase> property_monitored()
{ return gi::property_proxy<bool, base::DirectoryListBase> (*this, "monitored"); }
const gi::property_proxy<bool, base::DirectoryListBase> property_monitored() const
{ return gi::property_proxy<bool, base::DirectoryListBase> (*this, "monitored"); }

gi::property_proxy<guint, base::DirectoryListBase> property_n_items()
{ return gi::property_proxy<guint, base::DirectoryListBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::DirectoryListBase> property_n_items() const
{ return gi::property_proxy<guint, base::DirectoryListBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/directorylist_extra_def.hpp>)
#include <gtk/directorylist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/directorylist_extra.hpp>)
#include <gtk/directorylist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DirectoryList : public GI_GTK_DIRECTORYLIST_BASE
{ typedef GI_GTK_DIRECTORYLIST_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDirectoryList>
{ typedef Gtk::DirectoryList type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class DirectoryListClassDef
{
typedef DirectoryListClassDef self;
public:
typedef Gtk::DirectoryList instance_type;
typedef ::GtkDirectoryListClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DirectoryListClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DirectoryListClass: public detail::ClassTemplate<Gtk::impl::internal::DirectoryListClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl>
{
friend class internal::DirectoryListClassDef;
typedef DirectoryListClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::DirectoryListClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;



};


struct DirectoryListClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DirectoryListImpl = detail::ObjectImpl<DirectoryList, internal::DirectoryListClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
