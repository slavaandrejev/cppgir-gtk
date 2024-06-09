// AUTO-GENERATED

#ifndef _GI_GIO_MEMORYOUTPUTSTREAM_HPP_
#define _GI_GIO_MEMORYOUTPUTSTREAM_HPP_

#include "outputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class PollableOutputStream;
class Seekable;

class MemoryOutputStream;

namespace base {


#define GI_GIO_MEMORYOUTPUTSTREAM_BASE base::MemoryOutputStreamBase
class MemoryOutputStreamBase : public Gio::OutputStream
{
typedef Gio::OutputStream super_type;
public:
typedef ::GMemoryOutputStream BaseObjectType;

MemoryOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_memory_output_stream_get_type(); } 

GI_INLINE_DECL Gio::PollableOutputStream interface_ (gi::interface_tag<Gio::PollableOutputStream>);

GI_INLINE_DECL operator Gio::PollableOutputStream ();

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// GOutputStream* /*full*/ g_memory_output_stream_new (gpointer data, gsize size, GReallocFunc realloc_function /*none,nullable*/, GDestroyNotify destroy_function /*none,nullable*/);
// ::GMemoryOutputStream* /*full*/ g_memory_output_stream_new (void* data, gsize size,  realloc_function /*none,nullable*/, GLib::DestroyNotify::cfunction_type destroy_function /*none,nullable*/);
// IGNORE; not introspectable, realloc_function type  not supported

// GOutputStream* /*full*/ g_memory_output_stream_new_resizable ();
// ::GMemoryOutputStream* /*full*/ g_memory_output_stream_new_resizable ();
static GI_INLINE_DECL Gio::MemoryOutputStream new_resizable () noexcept;

// gpointer g_memory_output_stream_get_data (GMemoryOutputStream* ostream /*none*/);
// void* g_memory_output_stream_get_data (::GMemoryOutputStream* ostream /*none*/);
GI_INLINE_DECL gpointer get_data () noexcept;

// gsize g_memory_output_stream_get_data_size (GMemoryOutputStream* ostream /*none*/);
// gsize g_memory_output_stream_get_data_size (::GMemoryOutputStream* ostream /*none*/);
GI_INLINE_DECL gsize get_data_size () noexcept;

// gsize g_memory_output_stream_get_size (GMemoryOutputStream* ostream /*none*/);
// gsize g_memory_output_stream_get_size (::GMemoryOutputStream* ostream /*none*/);
GI_INLINE_DECL gsize get_size () noexcept;

// GBytes* /*full*/ g_memory_output_stream_steal_as_bytes (GMemoryOutputStream* ostream /*none*/);
// ::GBytes* /*full*/ g_memory_output_stream_steal_as_bytes (::GMemoryOutputStream* ostream /*none*/);
GI_INLINE_DECL GLib::Bytes steal_as_bytes () noexcept;

// gpointer g_memory_output_stream_steal_data (GMemoryOutputStream* ostream /*none*/);
// void* g_memory_output_stream_steal_data (::GMemoryOutputStream* ostream /*none*/);
GI_INLINE_DECL gpointer steal_data () noexcept;

gi::property_proxy<gpointer, base::MemoryOutputStreamBase> property_data()
{ return gi::property_proxy<gpointer, base::MemoryOutputStreamBase> (*this, "data"); }
const gi::property_proxy<gpointer, base::MemoryOutputStreamBase> property_data() const
{ return gi::property_proxy<gpointer, base::MemoryOutputStreamBase> (*this, "data"); }

gi::property_proxy<gulong, base::MemoryOutputStreamBase> property_data_size()
{ return gi::property_proxy<gulong, base::MemoryOutputStreamBase> (*this, "data-size"); }
const gi::property_proxy<gulong, base::MemoryOutputStreamBase> property_data_size() const
{ return gi::property_proxy<gulong, base::MemoryOutputStreamBase> (*this, "data-size"); }

gi::property_proxy<gulong, base::MemoryOutputStreamBase> property_size()
{ return gi::property_proxy<gulong, base::MemoryOutputStreamBase> (*this, "size"); }
const gi::property_proxy<gulong, base::MemoryOutputStreamBase> property_size() const
{ return gi::property_proxy<gulong, base::MemoryOutputStreamBase> (*this, "size"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/memoryoutputstream_extra_def.hpp>)
#include <gio/memoryoutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/memoryoutputstream_extra.hpp>)
#include <gio/memoryoutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MemoryOutputStream : public GI_GIO_MEMORYOUTPUTSTREAM_BASE
{ typedef GI_GIO_MEMORYOUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMemoryOutputStream>
{ typedef Gio::MemoryOutputStream type; }; 

} // namespace repository

} // namespace gi

#include "pollableoutputstream.hpp"
#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MemoryOutputStreamClassDef
{
typedef MemoryOutputStreamClassDef self;
public:
typedef Gio::MemoryOutputStream instance_type;
typedef ::GMemoryOutputStreamClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MemoryOutputStreamClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MemoryOutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::MemoryOutputStreamClassDef, Gio::impl::internal::OutputStreamClass, Gio::impl::internal::PollableOutputStreamInterfaceClassImpl, Gio::impl::internal::SeekableIfaceClassImpl>
{
friend class internal::MemoryOutputStreamClassDef;
typedef MemoryOutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MemoryOutputStreamClassDef, Gio::impl::internal::OutputStreamClass, Gio::impl::internal::PollableOutputStreamInterfaceClassImpl, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::PollableOutputStreamInterfaceClassImpl GPollableOutputStreamInterface_type;
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;



};


struct MemoryOutputStreamClassDef::TypeInitData
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

using MemoryOutputStreamImpl = detail::ObjectImpl<MemoryOutputStream, internal::MemoryOutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
