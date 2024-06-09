// AUTO-GENERATED

#ifndef _GI_GIO_INPUTMESSAGE_HPP_
#define _GI_GIO_INPUTMESSAGE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class InputMessage_Ref;

class InputMessage;

namespace base {


#define GI_GIO_INPUTMESSAGE_BASE base::InputMessageBase
class InputMessageBase : public gi::detail::CBoxedWrapperBase<InputMessageBase, ::GInputMessage>
{
typedef gi::detail::CBoxedWrapperBase<InputMessageBase, ::GInputMessage> super_type;
public:

InputMessageBase (std::nullptr_t = nullptr) : super_type() {}

// guint InputMessage::num_vectors (const ::GInputMessage* obj /*none*/);
// guint InputMessage::num_vectors (const ::GInputMessage* obj /*none*/);
GI_INLINE_DECL guint num_vectors_ () const noexcept;

//  InputMessage::num_vectors (::GInputMessage* obj /*none*/, guint _value);
// void InputMessage::num_vectors (::GInputMessage* obj /*none*/, guint _value);
GI_INLINE_DECL void num_vectors_ (guint _value) noexcept;

// gsize InputMessage::bytes_received (const ::GInputMessage* obj /*none*/);
// gsize InputMessage::bytes_received (const ::GInputMessage* obj /*none*/);
GI_INLINE_DECL gsize bytes_received_ () const noexcept;

//  InputMessage::bytes_received (::GInputMessage* obj /*none*/, gsize _value);
// void InputMessage::bytes_received (::GInputMessage* obj /*none*/, gsize _value);
GI_INLINE_DECL void bytes_received_ (gsize _value) noexcept;

// gint InputMessage::flags (const ::GInputMessage* obj /*none*/);
// gint InputMessage::flags (const ::GInputMessage* obj /*none*/);
GI_INLINE_DECL gint flags_ () const noexcept;

//  InputMessage::flags (::GInputMessage* obj /*none*/, gint _value);
// void InputMessage::flags (::GInputMessage* obj /*none*/, gint _value);
GI_INLINE_DECL void flags_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inputmessage_extra_def.hpp>)
#include <gio/inputmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inputmessage_extra.hpp>)
#include <gio/inputmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class InputMessage_Ref;

class InputMessage : public gi::detail::CBoxedWrapper<InputMessage, ::GInputMessage, GI_GIO_INPUTMESSAGE_BASE, InputMessage_Ref>
{ typedef gi::detail::CBoxedWrapper<InputMessage, ::GInputMessage, GI_GIO_INPUTMESSAGE_BASE, InputMessage_Ref> super_type; using super_type::super_type; };


class InputMessage_Ref : public gi::detail::CBoxedRefWrapper<InputMessage, ::GInputMessage, GI_GIO_INPUTMESSAGE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<InputMessage, ::GInputMessage, GI_GIO_INPUTMESSAGE_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInputMessage>
{ typedef Gio::InputMessage type; }; 

} // namespace repository

} // namespace gi

#endif
