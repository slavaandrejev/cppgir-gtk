// AUTO-GENERATED

#ifndef _GI_GLIB_TESTLOGBUFFER_HPP_
#define _GI_GLIB_TESTLOGBUFFER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class TestLogBuffer_Ref;

class TestLogBuffer;

namespace base {


#define GI_GLIB_TESTLOGBUFFER_BASE base::TestLogBufferBase
class TestLogBufferBase : public gi::detail::CBoxedWrapperBase<TestLogBufferBase, ::GTestLogBuffer>
{
typedef gi::detail::CBoxedWrapperBase<TestLogBufferBase, ::GTestLogBuffer> super_type;
public:

TestLogBufferBase (std::nullptr_t = nullptr) : super_type() {}

// void g_test_log_buffer_free (GTestLogBuffer* tbuffer /*none*/);
// void g_test_log_buffer_free (::GTestLogBuffer* tbuffer /*none*/);
// IGNORE; marked ignore

// FAILURE on g_test_log_buffer_pop; No such node (<xmlattr>.transfer-ownership)
// void g_test_log_buffer_push (GTestLogBuffer* tbuffer /*none*/, guint n_bytes, const guint8* bytes);
// void g_test_log_buffer_push (::GTestLogBuffer* tbuffer /*none*/, guint n_bytes, const guint8 bytes);
// SKIP; inconsistent bytes in pointer depth (1 vs 0)

// FAILURE on g_test_log_buffer_new; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/testlogbuffer_extra_def.hpp>)
#include <glib/testlogbuffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/testlogbuffer_extra.hpp>)
#include <glib/testlogbuffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class TestLogBuffer_Ref;

class TestLogBuffer : public gi::detail::CBoxedWrapper<TestLogBuffer, ::GTestLogBuffer, GI_GLIB_TESTLOGBUFFER_BASE, TestLogBuffer_Ref>
{ typedef gi::detail::CBoxedWrapper<TestLogBuffer, ::GTestLogBuffer, GI_GLIB_TESTLOGBUFFER_BASE, TestLogBuffer_Ref> super_type; using super_type::super_type; };


class TestLogBuffer_Ref : public gi::detail::CBoxedRefWrapper<TestLogBuffer, ::GTestLogBuffer, GI_GLIB_TESTLOGBUFFER_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TestLogBuffer, ::GTestLogBuffer, GI_GLIB_TESTLOGBUFFER_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GTestLogBuffer>
{ typedef GLib::TestLogBuffer type; }; 

} // namespace repository

} // namespace gi

#endif
