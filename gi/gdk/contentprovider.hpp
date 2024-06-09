// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTPROVIDER_HPP_
#define _GI_GDK_CONTENTPROVIDER_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Clipboard;
class ContentFormats;
class ContentFormats_Ref;

class ContentProvider;

namespace base {


#define GI_GDK_CONTENTPROVIDER_BASE base::ContentProviderBase
class ContentProviderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkContentProvider BaseObjectType;

ContentProviderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_content_provider_get_type(); } 

// GdkContentProvider* /*full*/ gdk_content_provider_new_for_bytes (const char* mime_type /*none*/, GBytes* bytes /*none*/);
// ::GdkContentProvider* /*full*/ gdk_content_provider_new_for_bytes (const char* mime_type /*none*/, ::GBytes* bytes /*none*/);
static GI_INLINE_DECL Gdk::ContentProvider new_for_bytes (const gi::cstring_v mime_type, GLib::Bytes_Ref bytes) noexcept;

// GdkContentProvider* /*full*/ gdk_content_provider_new_for_value (const GValue* value /*none*/);
// ::GdkContentProvider* /*full*/ gdk_content_provider_new_for_value (const ::GValue* value /*none*/);
static GI_INLINE_DECL Gdk::ContentProvider new_for_value (const GObject::Value_Ref value) noexcept;

// GdkContentProvider* /*full*/ gdk_content_provider_new_typed (GType type,  ..._ /*none*/);
// ::GdkContentProvider* /*full*/ gdk_content_provider_new_typed (GType type,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GdkContentProvider* /*full*/ gdk_content_provider_new_union (GdkContentProvider** providers /*full,nullable*/, gsize n_providers);
// ::GdkContentProvider* /*full*/ gdk_content_provider_new_union (::GdkContentProvider** providers /*full,nullable*/, gsize n_providers);
static GI_INLINE_DECL Gdk::ContentProvider new_union (gi::CollectionParameter<gi::DSpan, ::GdkContentProvider*, gi::transfer_full_t> providers) noexcept;

// void gdk_content_provider_content_changed (GdkContentProvider* provider /*none*/);
// void gdk_content_provider_content_changed (::GdkContentProvider* provider /*none*/);
GI_INLINE_DECL void content_changed () noexcept;

// gboolean gdk_content_provider_get_value (GdkContentProvider* provider /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean gdk_content_provider_get_value (::GdkContentProvider* provider /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
GI_INLINE_DECL bool get_value (GObject::Value & value);
GI_INLINE_DECL bool get_value (GObject::Value & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> get_value ();
GI_INLINE_DECL std::tuple<bool, GObject::Value> get_value (GLib::Error * _error) noexcept;

// GdkContentFormats* /*full*/ gdk_content_provider_ref_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_provider_ref_formats (::GdkContentProvider* provider /*none*/);
GI_INLINE_DECL Gdk::ContentFormats ref_formats () noexcept;

// GdkContentFormats* /*full*/ gdk_content_provider_ref_storable_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_provider_ref_storable_formats (::GdkContentProvider* provider /*none*/);
GI_INLINE_DECL Gdk::ContentFormats ref_storable_formats () noexcept;

// void gdk_content_provider_write_mime_type_async (GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_content_provider_write_mime_type_async (::GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, ::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void write_mime_type_async (const gi::cstring_v mime_type, Gio::OutputStream stream, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void write_mime_type_async (const gi::cstring_v mime_type, Gio::OutputStream stream, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean gdk_content_provider_write_mime_type_finish (GdkContentProvider* provider /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gdk_content_provider_write_mime_type_finish (::GdkContentProvider* provider /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool write_mime_type_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool write_mime_type_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<Gdk::ContentFormats, base::ContentProviderBase> property_formats()
{ return gi::property_proxy<Gdk::ContentFormats, base::ContentProviderBase> (*this, "formats"); }
const gi::property_proxy<Gdk::ContentFormats, base::ContentProviderBase> property_formats() const
{ return gi::property_proxy<Gdk::ContentFormats, base::ContentProviderBase> (*this, "formats"); }

gi::property_proxy<Gdk::ContentFormats, base::ContentProviderBase> property_storable_formats()
{ return gi::property_proxy<Gdk::ContentFormats, base::ContentProviderBase> (*this, "storable-formats"); }
const gi::property_proxy<Gdk::ContentFormats, base::ContentProviderBase> property_storable_formats() const
{ return gi::property_proxy<Gdk::ContentFormats, base::ContentProviderBase> (*this, "storable-formats"); }

// (signal) void content-changed ();
// (signal) void content-changed ();
gi::signal_proxy<void(Gdk::ContentProvider)> signal_content_changed()
{ return gi::signal_proxy<void(Gdk::ContentProvider)> (*this, "content-changed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentprovider_extra_def.hpp>)
#include <gdk/contentprovider_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentprovider_extra.hpp>)
#include <gdk/contentprovider_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class ContentProvider : public GI_GDK_CONTENTPROVIDER_BASE
{ typedef GI_GDK_CONTENTPROVIDER_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkContentProvider>
{ typedef Gdk::ContentProvider type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

namespace impl {

namespace internal {


class ContentProviderClassDef
{
typedef ContentProviderClassDef self;
public:
typedef Gdk::ContentProvider instance_type;
typedef ::GdkContentProviderClass class_type;

using GI_MEMBER_CHECK_CONFLICT(attach_clipboard) = self;
using GI_MEMBER_CHECK_CONFLICT(content_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(detach_clipboard) = self;
using GI_MEMBER_CHECK_CONFLICT(get_value) = self;
using GI_MEMBER_CHECK_CONFLICT(ref_formats) = self;
using GI_MEMBER_CHECK_CONFLICT(ref_storable_formats) = self;
using GI_MEMBER_CHECK_CONFLICT(write_mime_type_async) = self;
using GI_MEMBER_CHECK_CONFLICT(write_mime_type_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ContentProviderClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ContentProvider::attach_clipboard (GdkContentProvider* provider /*none*/, GdkClipboard* clipboard /*none*/);
// void ContentProvider::attach_clipboard (::GdkContentProvider* provider /*none*/, ::GdkClipboard* clipboard /*none*/);
virtual void attach_clipboard_ (Gdk::Clipboard clipboard) noexcept = 0;

// void ContentProvider::content_changed (GdkContentProvider* provider /*none*/);
// void ContentProvider::content_changed (::GdkContentProvider* provider /*none*/);
virtual void content_changed_ () noexcept = 0;

// void ContentProvider::detach_clipboard (GdkContentProvider* provider /*none*/, GdkClipboard* clipboard /*none*/);
// void ContentProvider::detach_clipboard (::GdkContentProvider* provider /*none*/, ::GdkClipboard* clipboard /*none*/);
virtual void detach_clipboard_ (Gdk::Clipboard clipboard) noexcept = 0;

// gboolean ContentProvider::get_value (GdkContentProvider* provider /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean ContentProvider::get_value (::GdkContentProvider* provider /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
virtual bool get_value_ (GObject::Value_Ref value, GLib::Error * _error) = 0;

// GdkContentFormats* /*full*/ ContentProvider::ref_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ ContentProvider::ref_formats (::GdkContentProvider* provider /*none*/);
virtual Gdk::ContentFormats ref_formats_ () noexcept = 0;

// GdkContentFormats* /*full*/ ContentProvider::ref_storable_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ ContentProvider::ref_storable_formats (::GdkContentProvider* provider /*none*/);
virtual Gdk::ContentFormats ref_storable_formats_ () noexcept = 0;

// void ContentProvider::write_mime_type_async (GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void ContentProvider::write_mime_type_async (::GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, ::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void write_mime_type_async_ (const gi::cstring_v mime_type, Gio::OutputStream stream, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean ContentProvider::write_mime_type_finish (GdkContentProvider* provider /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean ContentProvider::write_mime_type_finish (::GdkContentProvider* provider /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool write_mime_type_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class ContentProviderClass: public detail::ClassTemplate<Gdk::impl::internal::ContentProviderClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ContentProviderClassDef;
typedef ContentProviderClass self;
typedef detail::ClassTemplate<Gdk::impl::internal::ContentProviderClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ContentProvider::attach_clipboard (GdkContentProvider* provider /*none*/, GdkClipboard* clipboard /*none*/);
// void ContentProvider::attach_clipboard (::GdkContentProvider* provider /*none*/, ::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL void attach_clipboard_ (Gdk::Clipboard clipboard) noexcept override;

// void ContentProvider::content_changed (GdkContentProvider* provider /*none*/);
// void ContentProvider::content_changed (::GdkContentProvider* provider /*none*/);
GI_INLINE_DECL void content_changed_ () noexcept override;

// void ContentProvider::detach_clipboard (GdkContentProvider* provider /*none*/, GdkClipboard* clipboard /*none*/);
// void ContentProvider::detach_clipboard (::GdkContentProvider* provider /*none*/, ::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL void detach_clipboard_ (Gdk::Clipboard clipboard) noexcept override;

// gboolean ContentProvider::get_value (GdkContentProvider* provider /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean ContentProvider::get_value (::GdkContentProvider* provider /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
GI_INLINE_DECL bool get_value_ (GObject::Value_Ref value, GLib::Error * _error) override;

// GdkContentFormats* /*full*/ ContentProvider::ref_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ ContentProvider::ref_formats (::GdkContentProvider* provider /*none*/);
GI_INLINE_DECL Gdk::ContentFormats ref_formats_ () noexcept override;

// GdkContentFormats* /*full*/ ContentProvider::ref_storable_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ ContentProvider::ref_storable_formats (::GdkContentProvider* provider /*none*/);
GI_INLINE_DECL Gdk::ContentFormats ref_storable_formats_ () noexcept override;

// void ContentProvider::write_mime_type_async (GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void ContentProvider::write_mime_type_async (::GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, ::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void write_mime_type_async_ (const gi::cstring_v mime_type, Gio::OutputStream stream, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean ContentProvider::write_mime_type_finish (GdkContentProvider* provider /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean ContentProvider::write_mime_type_finish (::GdkContentProvider* provider /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool write_mime_type_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct ContentProviderClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ContentProviderClass, attach_clipboard)
  GI_MEMBER_DEFINE(ContentProviderClass, content_changed)
  GI_MEMBER_DEFINE(ContentProviderClass, detach_clipboard)
  GI_MEMBER_DEFINE(ContentProviderClass, get_value)
  GI_MEMBER_DEFINE(ContentProviderClass, ref_formats)
  GI_MEMBER_DEFINE(ContentProviderClass, ref_storable_formats)
  GI_MEMBER_DEFINE(ContentProviderClass, write_mime_type_async)
  GI_MEMBER_DEFINE(ContentProviderClass, write_mime_type_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, attach_clipboard),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, content_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, detach_clipboard),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_value),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, ref_formats),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, ref_storable_formats),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, write_mime_type_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, write_mime_type_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ContentProviderImpl = detail::ObjectImpl<ContentProvider, internal::ContentProviderClass>;

} // namespace impl

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
