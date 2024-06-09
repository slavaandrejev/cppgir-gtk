// AUTO-GENERATED

#ifndef _GI_GLIB_TESTCONFIG_HPP_
#define _GI_GLIB_TESTCONFIG_HPP_


namespace gi {

namespace repository {

namespace GLib {

class TestConfig_Ref;

class TestConfig;

namespace base {


#define GI_GLIB_TESTCONFIG_BASE base::TestConfigBase
class TestConfigBase : public gi::detail::CBoxedWrapperBase<TestConfigBase, ::GTestConfig>
{
typedef gi::detail::CBoxedWrapperBase<TestConfigBase, ::GTestConfig> super_type;
public:

TestConfigBase (std::nullptr_t = nullptr) : super_type() {}

// gboolean TestConfig::test_initialized (const ::GTestConfig* obj /*none*/);
// gboolean TestConfig::test_initialized (const ::GTestConfig* obj /*none*/);
GI_INLINE_DECL bool test_initialized_ () const noexcept;

//  TestConfig::test_initialized (::GTestConfig* obj /*none*/, gboolean _value);
// void TestConfig::test_initialized (::GTestConfig* obj /*none*/, gboolean _value);
GI_INLINE_DECL void test_initialized_ (gboolean _value) noexcept;

// gboolean TestConfig::test_quick (const ::GTestConfig* obj /*none*/);
// gboolean TestConfig::test_quick (const ::GTestConfig* obj /*none*/);
GI_INLINE_DECL bool test_quick_ () const noexcept;

//  TestConfig::test_quick (::GTestConfig* obj /*none*/, gboolean _value);
// void TestConfig::test_quick (::GTestConfig* obj /*none*/, gboolean _value);
GI_INLINE_DECL void test_quick_ (gboolean _value) noexcept;

// gboolean TestConfig::test_perf (const ::GTestConfig* obj /*none*/);
// gboolean TestConfig::test_perf (const ::GTestConfig* obj /*none*/);
GI_INLINE_DECL bool test_perf_ () const noexcept;

//  TestConfig::test_perf (::GTestConfig* obj /*none*/, gboolean _value);
// void TestConfig::test_perf (::GTestConfig* obj /*none*/, gboolean _value);
GI_INLINE_DECL void test_perf_ (gboolean _value) noexcept;

// gboolean TestConfig::test_verbose (const ::GTestConfig* obj /*none*/);
// gboolean TestConfig::test_verbose (const ::GTestConfig* obj /*none*/);
GI_INLINE_DECL bool test_verbose_ () const noexcept;

//  TestConfig::test_verbose (::GTestConfig* obj /*none*/, gboolean _value);
// void TestConfig::test_verbose (::GTestConfig* obj /*none*/, gboolean _value);
GI_INLINE_DECL void test_verbose_ (gboolean _value) noexcept;

// gboolean TestConfig::test_quiet (const ::GTestConfig* obj /*none*/);
// gboolean TestConfig::test_quiet (const ::GTestConfig* obj /*none*/);
GI_INLINE_DECL bool test_quiet_ () const noexcept;

//  TestConfig::test_quiet (::GTestConfig* obj /*none*/, gboolean _value);
// void TestConfig::test_quiet (::GTestConfig* obj /*none*/, gboolean _value);
GI_INLINE_DECL void test_quiet_ (gboolean _value) noexcept;

// gboolean TestConfig::test_undefined (const ::GTestConfig* obj /*none*/);
// gboolean TestConfig::test_undefined (const ::GTestConfig* obj /*none*/);
GI_INLINE_DECL bool test_undefined_ () const noexcept;

//  TestConfig::test_undefined (::GTestConfig* obj /*none*/, gboolean _value);
// void TestConfig::test_undefined (::GTestConfig* obj /*none*/, gboolean _value);
GI_INLINE_DECL void test_undefined_ (gboolean _value) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/testconfig_extra_def.hpp>)
#include <glib/testconfig_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/testconfig_extra.hpp>)
#include <glib/testconfig_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class TestConfig_Ref;

class TestConfig : public gi::detail::CBoxedWrapper<TestConfig, ::GTestConfig, GI_GLIB_TESTCONFIG_BASE, TestConfig_Ref>
{ typedef gi::detail::CBoxedWrapper<TestConfig, ::GTestConfig, GI_GLIB_TESTCONFIG_BASE, TestConfig_Ref> super_type; using super_type::super_type; };


class TestConfig_Ref : public gi::detail::CBoxedRefWrapper<TestConfig, ::GTestConfig, GI_GLIB_TESTCONFIG_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TestConfig, ::GTestConfig, GI_GLIB_TESTCONFIG_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GTestConfig>
{ typedef GLib::TestConfig type; }; 

} // namespace repository

} // namespace gi

#endif
