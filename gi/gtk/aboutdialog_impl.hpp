// AUTO-GENERATED

#ifndef _GI_GTK_ABOUTDIALOG_IMPL_HPP_
#define _GI_GTK_ABOUTDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_about_dialog_new ();
// ::GtkAboutDialog* /*none*/ gtk_about_dialog_new ();
Gtk::AboutDialog base::AboutDialogBase::new_ () noexcept
{
  typedef ::GtkAboutDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_about_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_about_dialog_add_credit_section (GtkAboutDialog* about /*none*/, const char* section_name /*none*/, const char** people /*none*/);
// void gtk_about_dialog_add_credit_section (::GtkAboutDialog* about /*none*/, const char* section_name /*none*/, const char** people /*none*/);
void base::AboutDialogBase::add_credit_section (const gi::cstring_v section_name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* section_name, const char** people);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_add_credit_section;
  auto people_w = unwrap (std::move(people), gi::transfer_none);
  auto people_to_c = people_w;
  auto section_name_to_c = gi::unwrap (section_name, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (section_name_to_c), (const char**) (people_to_c));
}

// const char* const* /*none*/ gtk_about_dialog_get_artists (GtkAboutDialog* about /*none*/);
// const char** /*none*/ gtk_about_dialog_get_artists (::GtkAboutDialog* about /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AboutDialogBase::get_artists () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_artists;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const char* const* /*none*/ gtk_about_dialog_get_authors (GtkAboutDialog* about /*none*/);
// const char** /*none*/ gtk_about_dialog_get_authors (::GtkAboutDialog* about /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AboutDialogBase::get_authors () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_authors;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_comments (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_comments (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_comments () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_comments;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_copyright (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_copyright (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_copyright () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_copyright;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* const* /*none*/ gtk_about_dialog_get_documenters (GtkAboutDialog* about /*none*/);
// const char** /*none*/ gtk_about_dialog_get_documenters (::GtkAboutDialog* about /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AboutDialogBase::get_documenters () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_documenters;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_license (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_license (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_license () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_license;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkLicense gtk_about_dialog_get_license_type (GtkAboutDialog* about /*none*/);
// ::GtkLicense gtk_about_dialog_get_license_type (::GtkAboutDialog* about /*none*/);
Gtk::License base::AboutDialogBase::get_license_type () noexcept
{
  typedef ::GtkLicense (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_license_type;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkPaintable* /*none,nullable*/ gtk_about_dialog_get_logo (GtkAboutDialog* about /*none*/);
// ::GdkPaintable* /*none,nullable*/ gtk_about_dialog_get_logo (::GtkAboutDialog* about /*none*/);
Gdk::Paintable base::AboutDialogBase::get_logo () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_logo;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_logo_icon_name (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_logo_icon_name (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_logo_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_logo_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_program_name (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_program_name (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_program_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_program_name;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_system_information (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_system_information (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_system_information () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_system_information;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_translator_credits (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_translator_credits (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_translator_credits () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_translator_credits;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_version (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_version (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_version () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_version;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_website (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_website (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_website () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_website;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_about_dialog_get_website_label (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_website_label (::GtkAboutDialog* about /*none*/);
gi::cstring_v base::AboutDialogBase::get_website_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_website_label;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_about_dialog_get_wrap_license (GtkAboutDialog* about /*none*/);
// gboolean gtk_about_dialog_get_wrap_license (::GtkAboutDialog* about /*none*/);
bool base::AboutDialogBase::get_wrap_license () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAboutDialog* about);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_get_wrap_license;
  auto _temp_ret = call_wrap_v ((::GtkAboutDialog*) (gobj_()));
  return _temp_ret;
}

// void gtk_about_dialog_set_artists (GtkAboutDialog* about /*none*/, const char** artists /*none*/);
// void gtk_about_dialog_set_artists (::GtkAboutDialog* about /*none*/, const char** artists /*none*/);
void base::AboutDialogBase::set_artists (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> artists) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char** artists);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_artists;
  auto artists_w = unwrap (std::move(artists), gi::transfer_none);
  auto artists_to_c = artists_w;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char**) (artists_to_c));
}

// void gtk_about_dialog_set_authors (GtkAboutDialog* about /*none*/, const char** authors /*none*/);
// void gtk_about_dialog_set_authors (::GtkAboutDialog* about /*none*/, const char** authors /*none*/);
void base::AboutDialogBase::set_authors (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> authors) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char** authors);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_authors;
  auto authors_w = unwrap (std::move(authors), gi::transfer_none);
  auto authors_to_c = authors_w;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char**) (authors_to_c));
}

// void gtk_about_dialog_set_comments (GtkAboutDialog* about /*none*/, const char* comments /*none,nullable*/);
// void gtk_about_dialog_set_comments (::GtkAboutDialog* about /*none*/, const char* comments /*none,nullable*/);
void base::AboutDialogBase::set_comments (const gi::cstring_v comments) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* comments);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_comments;
  auto comments_to_c = gi::unwrap (comments, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (comments_to_c));
}
void base::AboutDialogBase::set_comments () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* comments);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_comments;
  auto comments_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (comments_to_c));
}

// void gtk_about_dialog_set_copyright (GtkAboutDialog* about /*none*/, const char* copyright /*none,nullable*/);
// void gtk_about_dialog_set_copyright (::GtkAboutDialog* about /*none*/, const char* copyright /*none,nullable*/);
void base::AboutDialogBase::set_copyright (const gi::cstring_v copyright) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* copyright);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_copyright;
  auto copyright_to_c = gi::unwrap (copyright, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (copyright_to_c));
}
void base::AboutDialogBase::set_copyright () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* copyright);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_copyright;
  auto copyright_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (copyright_to_c));
}

// void gtk_about_dialog_set_documenters (GtkAboutDialog* about /*none*/, const char** documenters /*none*/);
// void gtk_about_dialog_set_documenters (::GtkAboutDialog* about /*none*/, const char** documenters /*none*/);
void base::AboutDialogBase::set_documenters (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> documenters) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char** documenters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_documenters;
  auto documenters_w = unwrap (std::move(documenters), gi::transfer_none);
  auto documenters_to_c = documenters_w;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char**) (documenters_to_c));
}

// void gtk_about_dialog_set_license (GtkAboutDialog* about /*none*/, const char* license /*none,nullable*/);
// void gtk_about_dialog_set_license (::GtkAboutDialog* about /*none*/, const char* license /*none,nullable*/);
void base::AboutDialogBase::set_license (const gi::cstring_v license) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* license);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_license;
  auto license_to_c = gi::unwrap (license, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (license_to_c));
}
void base::AboutDialogBase::set_license () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* license);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_license;
  auto license_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (license_to_c));
}

// void gtk_about_dialog_set_license_type (GtkAboutDialog* about /*none*/, GtkLicense license_type);
// void gtk_about_dialog_set_license_type (::GtkAboutDialog* about /*none*/, ::GtkLicense license_type);
void base::AboutDialogBase::set_license_type (Gtk::License license_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, ::GtkLicense license_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_license_type;
  auto license_type_to_c = gi::unwrap (license_type);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (::GtkLicense) (license_type_to_c));
}

// void gtk_about_dialog_set_logo (GtkAboutDialog* about /*none*/, GdkPaintable* logo /*none,nullable*/);
// void gtk_about_dialog_set_logo (::GtkAboutDialog* about /*none*/, ::GdkPaintable* logo /*none,nullable*/);
void base::AboutDialogBase::set_logo (Gdk::Paintable logo) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, ::GdkPaintable* logo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_logo;
  auto logo_to_c = gi::unwrap (logo, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (::GdkPaintable*) (logo_to_c));
}
void base::AboutDialogBase::set_logo () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, ::GdkPaintable* logo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_logo;
  auto logo_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (::GdkPaintable*) (logo_to_c));
}

// void gtk_about_dialog_set_logo_icon_name (GtkAboutDialog* about /*none*/, const char* icon_name /*none,nullable*/);
// void gtk_about_dialog_set_logo_icon_name (::GtkAboutDialog* about /*none*/, const char* icon_name /*none,nullable*/);
void base::AboutDialogBase::set_logo_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_logo_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::AboutDialogBase::set_logo_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_logo_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gtk_about_dialog_set_program_name (GtkAboutDialog* about /*none*/, const char* name /*none,nullable*/);
// void gtk_about_dialog_set_program_name (::GtkAboutDialog* about /*none*/, const char* name /*none,nullable*/);
void base::AboutDialogBase::set_program_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_program_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (name_to_c));
}
void base::AboutDialogBase::set_program_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_program_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_about_dialog_set_system_information (GtkAboutDialog* about /*none*/, const char* system_information /*none,nullable*/);
// void gtk_about_dialog_set_system_information (::GtkAboutDialog* about /*none*/, const char* system_information /*none,nullable*/);
void base::AboutDialogBase::set_system_information (const gi::cstring_v system_information) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* system_information);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_system_information;
  auto system_information_to_c = gi::unwrap (system_information, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (system_information_to_c));
}
void base::AboutDialogBase::set_system_information () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* system_information);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_system_information;
  auto system_information_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (system_information_to_c));
}

// void gtk_about_dialog_set_translator_credits (GtkAboutDialog* about /*none*/, const char* translator_credits /*none,nullable*/);
// void gtk_about_dialog_set_translator_credits (::GtkAboutDialog* about /*none*/, const char* translator_credits /*none,nullable*/);
void base::AboutDialogBase::set_translator_credits (const gi::cstring_v translator_credits) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* translator_credits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_translator_credits;
  auto translator_credits_to_c = gi::unwrap (translator_credits, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (translator_credits_to_c));
}
void base::AboutDialogBase::set_translator_credits () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* translator_credits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_translator_credits;
  auto translator_credits_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (translator_credits_to_c));
}

// void gtk_about_dialog_set_version (GtkAboutDialog* about /*none*/, const char* version /*none,nullable*/);
// void gtk_about_dialog_set_version (::GtkAboutDialog* about /*none*/, const char* version /*none,nullable*/);
void base::AboutDialogBase::set_version (const gi::cstring_v version) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* version);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_version;
  auto version_to_c = gi::unwrap (version, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (version_to_c));
}
void base::AboutDialogBase::set_version () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* version);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_version;
  auto version_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (version_to_c));
}

// void gtk_about_dialog_set_website (GtkAboutDialog* about /*none*/, const char* website /*none,nullable*/);
// void gtk_about_dialog_set_website (::GtkAboutDialog* about /*none*/, const char* website /*none,nullable*/);
void base::AboutDialogBase::set_website (const gi::cstring_v website) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* website);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_website;
  auto website_to_c = gi::unwrap (website, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (website_to_c));
}
void base::AboutDialogBase::set_website () noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* website);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_website;
  auto website_to_c = nullptr;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (website_to_c));
}

// void gtk_about_dialog_set_website_label (GtkAboutDialog* about /*none*/, const char* website_label /*none*/);
// void gtk_about_dialog_set_website_label (::GtkAboutDialog* about /*none*/, const char* website_label /*none*/);
void base::AboutDialogBase::set_website_label (const gi::cstring_v website_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, const char* website_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_website_label;
  auto website_label_to_c = gi::unwrap (website_label, gi::transfer_none);
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (const char*) (website_label_to_c));
}

// void gtk_about_dialog_set_wrap_license (GtkAboutDialog* about /*none*/, gboolean wrap_license);
// void gtk_about_dialog_set_wrap_license (::GtkAboutDialog* about /*none*/, gboolean wrap_license);
void base::AboutDialogBase::set_wrap_license (gboolean wrap_license) noexcept
{
  typedef void (*call_wrap_t) (::GtkAboutDialog* about, gboolean wrap_license);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_about_dialog_set_wrap_license;
  auto wrap_license_to_c = wrap_license;
  call_wrap_v ((::GtkAboutDialog*) (gobj_()), (gboolean) (wrap_license_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/aboutdialog_extra_def_impl.hpp>)
#include <gtk/aboutdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/aboutdialog_extra_impl.hpp>)
#include <gtk/aboutdialog_extra_impl.hpp>
#endif
#endif

#endif
