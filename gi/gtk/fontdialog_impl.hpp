// AUTO-GENERATED

#ifndef _GI_GTK_FONTDIALOG_IMPL_HPP_
#define _GI_GTK_FONTDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkFontDialog* /*full*/ gtk_font_dialog_new ();
// ::GtkFontDialog* /*full*/ gtk_font_dialog_new ();
Gtk::FontDialog base::FontDialogBase::new_ () noexcept
{
  typedef ::GtkFontDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_font_dialog_choose_face (GtkFontDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, PangoFontFace* initial_value /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_font_dialog_choose_face (::GtkFontDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::PangoFontFace* initial_value /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FontDialogBase::choose_face (Gtk::Window parent, Pango::FontFace initial_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkWindow* parent, ::PangoFontFace* initial_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_face;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto initial_value_to_c = gi::unwrap (initial_value, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::PangoFontFace*) (initial_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FontDialogBase::choose_face (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkWindow* parent, ::PangoFontFace* initial_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_face;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto initial_value_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::PangoFontFace*) (initial_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// PangoFontFace* /*full,nullable*/ gtk_font_dialog_choose_face_finish (GtkFontDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::PangoFontFace* /*full,nullable*/ gtk_font_dialog_choose_face_finish (::GtkFontDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Pango::FontFace base::FontDialogBase::choose_face_finish (Gio::AsyncResult result)
{
  typedef ::PangoFontFace* (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_face_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Pango::FontFace base::FontDialogBase::choose_face_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_face_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_font_dialog_choose_family (GtkFontDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, PangoFontFamily* initial_value /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_font_dialog_choose_family (::GtkFontDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::PangoFontFamily* initial_value /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FontDialogBase::choose_family (Gtk::Window parent, Pango::FontFamily initial_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkWindow* parent, ::PangoFontFamily* initial_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_family;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto initial_value_to_c = gi::unwrap (initial_value, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::PangoFontFamily*) (initial_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FontDialogBase::choose_family (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkWindow* parent, ::PangoFontFamily* initial_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_family;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto initial_value_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::PangoFontFamily*) (initial_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// PangoFontFamily* /*full,nullable*/ gtk_font_dialog_choose_family_finish (GtkFontDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::PangoFontFamily* /*full,nullable*/ gtk_font_dialog_choose_family_finish (::GtkFontDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Pango::FontFamily base::FontDialogBase::choose_family_finish (Gio::AsyncResult result)
{
  typedef ::PangoFontFamily* (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_family_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Pango::FontFamily base::FontDialogBase::choose_family_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::PangoFontFamily* (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_family_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_font_dialog_choose_font (GtkFontDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, PangoFontDescription* initial_value /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_font_dialog_choose_font (::GtkFontDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::PangoFontDescription* initial_value /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FontDialogBase::choose_font (Gtk::Window parent, Pango::FontDescription_Ref initial_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkWindow* parent, ::PangoFontDescription* initial_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto initial_value_to_c = gi::unwrap (initial_value, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::PangoFontDescription*) (initial_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FontDialogBase::choose_font (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkWindow* parent, ::PangoFontDescription* initial_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto initial_value_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::PangoFontDescription*) (initial_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_font_dialog_choose_font_and_features (GtkFontDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, PangoFontDescription* initial_value /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_font_dialog_choose_font_and_features (::GtkFontDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::PangoFontDescription* initial_value /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FontDialogBase::choose_font_and_features (Gtk::Window parent, Pango::FontDescription_Ref initial_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkWindow* parent, ::PangoFontDescription* initial_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font_and_features;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto initial_value_to_c = gi::unwrap (initial_value, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::PangoFontDescription*) (initial_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FontDialogBase::choose_font_and_features (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkWindow* parent, ::PangoFontDescription* initial_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font_and_features;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto initial_value_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::PangoFontDescription*) (initial_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gtk_font_dialog_choose_font_and_features_finish (GtkFontDialog* self /*none*/, GAsyncResult* result /*none*/, PangoFontDescription** font_desc /*full,out*/, char** font_features /*full,out*/, PangoLanguage** language /*full,out*/, GError ** error);
// gboolean gtk_font_dialog_choose_font_and_features_finish (::GtkFontDialog* self /*none*/, ::GAsyncResult* result /*none*/, ::PangoFontDescription** font_desc /*full,out*/, char** font_features /*full,out*/, ::PangoLanguage** language /*full,out*/, GError ** error);
bool base::FontDialogBase::choose_font_and_features_finish (Gio::AsyncResult result, Pango::FontDescription & font_desc, gi::cstring & font_features, Pango::Language & language)
{
  typedef gboolean (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, ::PangoFontDescription** font_desc, char** font_features, ::PangoLanguage** language, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font_and_features_finish;
  ::PangoLanguage* language_o {};
  char* font_features_o {};
  ::PangoFontDescription* font_desc_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), (::PangoFontDescription**) (&font_desc_o), (char**) (&font_features_o), (::PangoLanguage**) (&language_o), &error);
  language = gi::wrap (language_o, gi::transfer_full);
  font_features = gi::wrap (font_features_o, gi::transfer_full);
  font_desc = gi::wrap (font_desc_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FontDialogBase::choose_font_and_features_finish (Gio::AsyncResult result, Pango::FontDescription & font_desc, gi::cstring & font_features, Pango::Language & language, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, ::PangoFontDescription** font_desc, char** font_features, ::PangoLanguage** language, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font_and_features_finish;
  ::PangoLanguage* language_o {};
  char* font_features_o {};
  ::PangoFontDescription* font_desc_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), (::PangoFontDescription**) (&font_desc_o), (char**) (&font_features_o), (::PangoLanguage**) (&language_o), _error ? &_error_o : nullptr);
  language = gi::wrap (language_o, gi::transfer_full);
  font_features = gi::wrap (font_features_o, gi::transfer_full);
  font_desc = gi::wrap (font_desc_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Pango::FontDescription, gi::cstring, Pango::Language> base::FontDialogBase::choose_font_and_features_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, ::PangoFontDescription** font_desc, char** font_features, ::PangoLanguage** language, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font_and_features_finish;
  ::PangoLanguage* language_o {};
  char* font_features_o {};
  ::PangoFontDescription* font_desc_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), (::PangoFontDescription**) (&font_desc_o), (char**) (&font_features_o), (::PangoLanguage**) (&language_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (font_desc_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (font_features_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (language_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, Pango::FontDescription, gi::cstring, Pango::Language> base::FontDialogBase::choose_font_and_features_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, ::PangoFontDescription** font_desc, char** font_features, ::PangoLanguage** language, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font_and_features_finish;
  ::PangoLanguage* language_o {};
  char* font_features_o {};
  ::PangoFontDescription* font_desc_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), (::PangoFontDescription**) (&font_desc_o), (char**) (&font_features_o), (::PangoLanguage**) (&language_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (font_desc_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (font_features_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (language_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// PangoFontDescription* /*full,nullable*/ gtk_font_dialog_choose_font_finish (GtkFontDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::PangoFontDescription* /*full,nullable*/ gtk_font_dialog_choose_font_finish (::GtkFontDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Pango::FontDescription base::FontDialogBase::choose_font_finish (Gio::AsyncResult result)
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Pango::FontDescription base::FontDialogBase::choose_font_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::GtkFontDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_choose_font_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkFilter* /*none,nullable*/ gtk_font_dialog_get_filter (GtkFontDialog* self /*none*/);
// ::GtkFilter* /*none,nullable*/ gtk_font_dialog_get_filter (::GtkFontDialog* self /*none*/);
Gtk::Filter base::FontDialogBase::get_filter () noexcept
{
  typedef ::GtkFilter* (*call_wrap_t) (::GtkFontDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_get_filter;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontMap* /*none,nullable*/ gtk_font_dialog_get_font_map (GtkFontDialog* self /*none*/);
// ::PangoFontMap* /*none,nullable*/ gtk_font_dialog_get_font_map (::GtkFontDialog* self /*none*/);
Pango::FontMap base::FontDialogBase::get_font_map () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::GtkFontDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_get_font_map;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoLanguage* /*full,nullable*/ gtk_font_dialog_get_language (GtkFontDialog* self /*none*/);
// ::PangoLanguage* /*full,nullable*/ gtk_font_dialog_get_language (::GtkFontDialog* self /*none*/);
Pango::Language base::FontDialogBase::get_language () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (::GtkFontDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_get_language;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_font_dialog_get_modal (GtkFontDialog* self /*none*/);
// gboolean gtk_font_dialog_get_modal (::GtkFontDialog* self /*none*/);
bool base::FontDialogBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gtk_font_dialog_get_title (GtkFontDialog* self /*none*/);
// const char* /*none*/ gtk_font_dialog_get_title (::GtkFontDialog* self /*none*/);
gi::cstring_v base::FontDialogBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFontDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_get_title;
  auto _temp_ret = call_wrap_v ((::GtkFontDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_font_dialog_set_filter (GtkFontDialog* self /*none*/, GtkFilter* filter /*none,nullable*/);
// void gtk_font_dialog_set_filter (::GtkFontDialog* self /*none*/, ::GtkFilter* filter /*none,nullable*/);
void base::FontDialogBase::set_filter (Gtk::Filter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_set_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none);
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkFilter*) (filter_to_c));
}
void base::FontDialogBase::set_filter () noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_set_filter;
  auto filter_to_c = nullptr;
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::GtkFilter*) (filter_to_c));
}

// void gtk_font_dialog_set_font_map (GtkFontDialog* self /*none*/, PangoFontMap* fontmap /*none,nullable*/);
// void gtk_font_dialog_set_font_map (::GtkFontDialog* self /*none*/, ::PangoFontMap* fontmap /*none,nullable*/);
void base::FontDialogBase::set_font_map (Pango::FontMap fontmap) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_set_font_map;
  auto fontmap_to_c = gi::unwrap (fontmap, gi::transfer_none);
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::PangoFontMap*) (fontmap_to_c));
}
void base::FontDialogBase::set_font_map () noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_set_font_map;
  auto fontmap_to_c = nullptr;
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::PangoFontMap*) (fontmap_to_c));
}

// void gtk_font_dialog_set_language (GtkFontDialog* self /*none*/, PangoLanguage* language /*none*/);
// void gtk_font_dialog_set_language (::GtkFontDialog* self /*none*/, ::PangoLanguage* language /*none*/);
void base::FontDialogBase::set_language (Pango::Language_Ref language) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_set_language;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (::PangoLanguage*) (language_to_c));
}

// void gtk_font_dialog_set_modal (GtkFontDialog* self /*none*/, gboolean modal);
// void gtk_font_dialog_set_modal (::GtkFontDialog* self /*none*/, gboolean modal);
void base::FontDialogBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_font_dialog_set_title (GtkFontDialog* self /*none*/, const char* title /*none*/);
// void gtk_font_dialog_set_title (::GtkFontDialog* self /*none*/, const char* title /*none*/);
void base::FontDialogBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontDialog* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_font_dialog_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GtkFontDialog*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontdialog_extra_def_impl.hpp>)
#include <gtk/fontdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontdialog_extra_impl.hpp>)
#include <gtk/fontdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FontDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFontDialogClass *methods = (::GtkFontDialogClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
