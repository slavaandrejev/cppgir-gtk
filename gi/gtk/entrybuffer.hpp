// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYBUFFER_HPP_
#define _GI_GTK_ENTRYBUFFER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class EntryBuffer;

namespace base {


#define GI_GTK_ENTRYBUFFER_BASE base::EntryBufferBase
class EntryBufferBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkEntryBuffer BaseObjectType;

EntryBufferBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_entry_buffer_get_type(); } 

// GtkEntryBuffer* /*full*/ gtk_entry_buffer_new (const char* initial_chars /*none,nullable*/, int n_initial_chars);
// ::GtkEntryBuffer* /*full*/ gtk_entry_buffer_new (const char* initial_chars /*none,nullable*/, gint n_initial_chars);
static GI_INLINE_DECL Gtk::EntryBuffer new_ (const gi::cstring_v initial_chars, gint n_initial_chars) noexcept;
static GI_INLINE_DECL Gtk::EntryBuffer new_ (gint n_initial_chars) noexcept;

// guint gtk_entry_buffer_delete_text (GtkEntryBuffer* buffer /*none*/, guint position, int n_chars);
// guint gtk_entry_buffer_delete_text (::GtkEntryBuffer* buffer /*none*/, guint position, gint n_chars);
GI_INLINE_DECL guint delete_text (guint position, gint n_chars) noexcept;

// void gtk_entry_buffer_emit_deleted_text (GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
// void gtk_entry_buffer_emit_deleted_text (::GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
GI_INLINE_DECL void emit_deleted_text (guint position, guint n_chars) noexcept;

// void gtk_entry_buffer_emit_inserted_text (GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
// void gtk_entry_buffer_emit_inserted_text (::GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
GI_INLINE_DECL void emit_inserted_text (guint position, const gi::cstring_v chars, guint n_chars) noexcept;

// gsize gtk_entry_buffer_get_bytes (GtkEntryBuffer* buffer /*none*/);
// gsize gtk_entry_buffer_get_bytes (::GtkEntryBuffer* buffer /*none*/);
GI_INLINE_DECL gsize get_bytes () noexcept;

// guint gtk_entry_buffer_get_length (GtkEntryBuffer* buffer /*none*/);
// guint gtk_entry_buffer_get_length (::GtkEntryBuffer* buffer /*none*/);
GI_INLINE_DECL guint get_length () noexcept;

// int gtk_entry_buffer_get_max_length (GtkEntryBuffer* buffer /*none*/);
// gint gtk_entry_buffer_get_max_length (::GtkEntryBuffer* buffer /*none*/);
GI_INLINE_DECL gint get_max_length () noexcept;

// const char* /*none*/ gtk_entry_buffer_get_text (GtkEntryBuffer* buffer /*none*/);
// const char* /*none*/ gtk_entry_buffer_get_text (::GtkEntryBuffer* buffer /*none*/);
GI_INLINE_DECL gi::cstring_v get_text () noexcept;

// guint gtk_entry_buffer_insert_text (GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, int n_chars);
// guint gtk_entry_buffer_insert_text (::GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, gint n_chars);
GI_INLINE_DECL guint insert_text (guint position, const gi::cstring_v chars, gint n_chars) noexcept;

// void gtk_entry_buffer_set_max_length (GtkEntryBuffer* buffer /*none*/, int max_length);
// void gtk_entry_buffer_set_max_length (::GtkEntryBuffer* buffer /*none*/, gint max_length);
GI_INLINE_DECL void set_max_length (gint max_length) noexcept;

// void gtk_entry_buffer_set_text (GtkEntryBuffer* buffer /*none*/, const char* chars /*none*/, int n_chars);
// void gtk_entry_buffer_set_text (::GtkEntryBuffer* buffer /*none*/, const char* chars /*none*/, gint n_chars);
GI_INLINE_DECL void set_text (const gi::cstring_v chars, gint n_chars) noexcept;

gi::property_proxy<guint, base::EntryBufferBase> property_length()
{ return gi::property_proxy<guint, base::EntryBufferBase> (*this, "length"); }
const gi::property_proxy<guint, base::EntryBufferBase> property_length() const
{ return gi::property_proxy<guint, base::EntryBufferBase> (*this, "length"); }

gi::property_proxy<gint, base::EntryBufferBase> property_max_length()
{ return gi::property_proxy<gint, base::EntryBufferBase> (*this, "max-length"); }
const gi::property_proxy<gint, base::EntryBufferBase> property_max_length() const
{ return gi::property_proxy<gint, base::EntryBufferBase> (*this, "max-length"); }

gi::property_proxy<gi::cstring, base::EntryBufferBase> property_text()
{ return gi::property_proxy<gi::cstring, base::EntryBufferBase> (*this, "text"); }
const gi::property_proxy<gi::cstring, base::EntryBufferBase> property_text() const
{ return gi::property_proxy<gi::cstring, base::EntryBufferBase> (*this, "text"); }

// (signal) void deleted-text (guint position, guint n_chars);
// (signal) void deleted-text (guint position, guint n_chars);
gi::signal_proxy<void(Gtk::EntryBuffer, guint position, guint n_chars)> signal_deleted_text()
{ return gi::signal_proxy<void(Gtk::EntryBuffer, guint position, guint n_chars)> (*this, "deleted-text"); }

// (signal) void inserted-text (guint position, gchar* chars /*none*/, guint n_chars);
// (signal) void inserted-text (guint position, char* chars /*none*/, guint n_chars);
gi::signal_proxy<void(Gtk::EntryBuffer, guint position, gi::cstring_v chars, guint n_chars)> signal_inserted_text()
{ return gi::signal_proxy<void(Gtk::EntryBuffer, guint position, gi::cstring_v chars, guint n_chars)> (*this, "inserted-text"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entrybuffer_extra_def.hpp>)
#include <gtk/entrybuffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entrybuffer_extra.hpp>)
#include <gtk/entrybuffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EntryBuffer : public GI_GTK_ENTRYBUFFER_BASE
{ typedef GI_GTK_ENTRYBUFFER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEntryBuffer>
{ typedef Gtk::EntryBuffer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EntryBufferClassDef
{
typedef EntryBufferClassDef self;
public:
typedef Gtk::EntryBuffer instance_type;
typedef ::GtkEntryBufferClass class_type;

using GI_MEMBER_CHECK_CONFLICT(delete_text) = self;
using GI_MEMBER_CHECK_CONFLICT(deleted_text) = self;
using GI_MEMBER_CHECK_CONFLICT(get_length) = self;
using GI_MEMBER_CHECK_CONFLICT(insert_text) = self;
using GI_MEMBER_CHECK_CONFLICT(inserted_text) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~EntryBufferClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// guint EntryBuffer::delete_text (GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
// guint EntryBuffer::delete_text (::GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
virtual guint delete_text_ (guint position, guint n_chars) noexcept = 0;

// void EntryBuffer::deleted_text (GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
// void EntryBuffer::deleted_text (::GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
virtual void deleted_text_ (guint position, guint n_chars) noexcept = 0;

// guint EntryBuffer::get_length (GtkEntryBuffer* buffer /*none*/);
// guint EntryBuffer::get_length (::GtkEntryBuffer* buffer /*none*/);
virtual guint get_length_ () noexcept = 0;

// const char* /*none*/ EntryBuffer::get_text (GtkEntryBuffer* buffer /*none*/, gsize* n_bytes);
// const char* /*none*/ EntryBuffer::get_text (::GtkEntryBuffer* buffer /*none*/, gsize n_bytes);
// SKIP; inconsistent n_bytes in pointer depth (1 vs 0)

// guint EntryBuffer::insert_text (GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
// guint EntryBuffer::insert_text (::GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
virtual guint insert_text_ (guint position, const gi::cstring_v chars, guint n_chars) noexcept = 0;

// void EntryBuffer::inserted_text (GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
// void EntryBuffer::inserted_text (::GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
virtual void inserted_text_ (guint position, const gi::cstring_v chars, guint n_chars) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class EntryBufferClass: public detail::ClassTemplate<Gtk::impl::internal::EntryBufferClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::EntryBufferClassDef;
typedef EntryBufferClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::EntryBufferClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// guint EntryBuffer::delete_text (GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
// guint EntryBuffer::delete_text (::GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
GI_INLINE_DECL guint delete_text_ (guint position, guint n_chars) noexcept override;

// void EntryBuffer::deleted_text (GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
// void EntryBuffer::deleted_text (::GtkEntryBuffer* buffer /*none*/, guint position, guint n_chars);
GI_INLINE_DECL void deleted_text_ (guint position, guint n_chars) noexcept override;

// guint EntryBuffer::get_length (GtkEntryBuffer* buffer /*none*/);
// guint EntryBuffer::get_length (::GtkEntryBuffer* buffer /*none*/);
GI_INLINE_DECL guint get_length_ () noexcept override;

// const char* /*none*/ EntryBuffer::get_text (GtkEntryBuffer* buffer /*none*/, gsize* n_bytes);
// const char* /*none*/ EntryBuffer::get_text (::GtkEntryBuffer* buffer /*none*/, gsize n_bytes);
// SKIP; inconsistent n_bytes in pointer depth (1 vs 0)

// guint EntryBuffer::insert_text (GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
// guint EntryBuffer::insert_text (::GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
GI_INLINE_DECL guint insert_text_ (guint position, const gi::cstring_v chars, guint n_chars) noexcept override;

// void EntryBuffer::inserted_text (GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
// void EntryBuffer::inserted_text (::GtkEntryBuffer* buffer /*none*/, guint position, const char* chars /*none*/, guint n_chars);
GI_INLINE_DECL void inserted_text_ (guint position, const gi::cstring_v chars, guint n_chars) noexcept override;


};


struct EntryBufferClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(EntryBufferClass, delete_text)
  GI_MEMBER_DEFINE(EntryBufferClass, deleted_text)
  GI_MEMBER_DEFINE(EntryBufferClass, get_length)
  GI_MEMBER_DEFINE(EntryBufferClass, insert_text)
  GI_MEMBER_DEFINE(EntryBufferClass, inserted_text)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, delete_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, deleted_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_length),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, insert_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, inserted_text)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using EntryBufferImpl = detail::ObjectImpl<EntryBuffer, internal::EntryBufferClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
