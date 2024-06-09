// AUTO-GENERATED

#ifndef _GI_GTK_TREEPATH_IMPL_HPP_
#define _GI_GTK_TREEPATH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTreePath* /*full*/ gtk_tree_path_new ();
// ::GtkTreePath* /*full*/ gtk_tree_path_new ();
Gtk::TreePath base::TreePathBase::new_ () noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkTreePath* /*full*/ gtk_tree_path_new_first ();
// ::GtkTreePath* /*full*/ gtk_tree_path_new_first ();
Gtk::TreePath base::TreePathBase::new_first () noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_new_first;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkTreePath* /*full*/ gtk_tree_path_new_from_indices (int first_index,  ..._ /*none*/);
// ::GtkTreePath* /*full*/ gtk_tree_path_new_from_indices (gint first_index,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by new_from_indicesv, varargs not supported

// GtkTreePath* /*full*/ gtk_tree_path_new_from_indicesv (int* indices /*none*/, gsize length);
// ::GtkTreePath* /*full*/ gtk_tree_path_new_from_indicesv (gint* indices /*none*/, gsize length);
Gtk::TreePath base::TreePathBase::new_from_indices (const gint * indices, gsize length) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (gint* indices, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_new_from_indicesv;
  auto indices_to_c = indices;
  auto _temp_ret = call_wrap_v ((gint*) (indices_to_c), (gsize) (length));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkTreePath* /*full,nullable*/ gtk_tree_path_new_from_string (const char* path /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_tree_path_new_from_string (const char* path /*none*/);
Gtk::TreePath base::TreePathBase::new_from_string (const gi::cstring_v path) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_new_from_string;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_tree_path_append_index (GtkTreePath* path /*none*/, int index_);
// void gtk_tree_path_append_index (::GtkTreePath* path /*none*/, gint index_);
void base::TreePathBase::append_index (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreePath* path, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_append_index;
  auto index__to_c = index_;
  call_wrap_v ((::GtkTreePath*) (gobj_()), (gint) (index__to_c));
}

// int gtk_tree_path_compare (const GtkTreePath* a /*none*/, const GtkTreePath* b /*none*/);
// gint gtk_tree_path_compare (const ::GtkTreePath* a /*none*/, const ::GtkTreePath* b /*none*/);
gint base::TreePathBase::compare (const Gtk::TreePath_Ref b) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTreePath* a, const ::GtkTreePath* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_compare;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GtkTreePath*) (gobj_()), (const ::GtkTreePath*) (b_to_c));
  return _temp_ret;
}

// GtkTreePath* /*full*/ gtk_tree_path_copy (const GtkTreePath* path /*none*/);
// ::GtkTreePath* /*full*/ gtk_tree_path_copy (const ::GtkTreePath* path /*none*/);
Gtk::TreePath base::TreePathBase::copy () const noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (const ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_copy;
  auto _temp_ret = call_wrap_v ((const ::GtkTreePath*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_tree_path_down (GtkTreePath* path /*none*/);
// void gtk_tree_path_down (::GtkTreePath* path /*none*/);
void base::TreePathBase::down () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_down;
  call_wrap_v ((::GtkTreePath*) (gobj_()));
}

// void gtk_tree_path_free (GtkTreePath* path /*none,nullable*/);
// void gtk_tree_path_free (::GtkTreePath* path /*none,nullable*/);
// IGNORE; marked ignore

// int gtk_tree_path_get_depth (GtkTreePath* path /*none*/);
// gint gtk_tree_path_get_depth (::GtkTreePath* path /*none*/);
gint base::TreePathBase::get_depth () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_get_depth;
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()));
  return _temp_ret;
}

// int* gtk_tree_path_get_indices (GtkTreePath* path /*none*/);
// gint gtk_tree_path_get_indices (::GtkTreePath* path /*none*/);
// IGNORE; not introspectable; shadowed-by get_indices_with_depth

// int* /*none,nullable*/ gtk_tree_path_get_indices_with_depth (GtkTreePath* path /*none*/, int* depth);
// gint* /*none,nullable*/ gtk_tree_path_get_indices_with_depth (::GtkTreePath* path /*none*/, gint* depth);
gi::Collection<gi::DSpan, gint, gi::transfer_none_t> base::TreePathBase::get_indices () noexcept
{
  typedef gint* (*call_wrap_t) (::GtkTreePath* path, gint* depth);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_get_indices_with_depth;
  gint depth;
  auto _ret_o = call_wrap_v ((::GtkTreePath*) (gobj_()), (gint*) (&depth));
  gi::Collection<gi::DSpan, gint, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_none_t>>(_ret_o, depth, gi::transfer_none);
  return _temp_ret;
}

// gboolean gtk_tree_path_is_ancestor (GtkTreePath* path /*none*/, GtkTreePath* descendant /*none*/);
// gboolean gtk_tree_path_is_ancestor (::GtkTreePath* path /*none*/, ::GtkTreePath* descendant /*none*/);
bool base::TreePathBase::is_ancestor (Gtk::TreePath_Ref descendant) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreePath* path, ::GtkTreePath* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_is_ancestor;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()), (::GtkTreePath*) (descendant_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_path_is_descendant (GtkTreePath* path /*none*/, GtkTreePath* ancestor /*none*/);
// gboolean gtk_tree_path_is_descendant (::GtkTreePath* path /*none*/, ::GtkTreePath* ancestor /*none*/);
bool base::TreePathBase::is_descendant (Gtk::TreePath_Ref ancestor) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreePath* path, ::GtkTreePath* ancestor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_is_descendant;
  auto ancestor_to_c = gi::unwrap (ancestor, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()), (::GtkTreePath*) (ancestor_to_c));
  return _temp_ret;
}

// void gtk_tree_path_next (GtkTreePath* path /*none*/);
// void gtk_tree_path_next (::GtkTreePath* path /*none*/);
void base::TreePathBase::next () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_next;
  call_wrap_v ((::GtkTreePath*) (gobj_()));
}

// void gtk_tree_path_prepend_index (GtkTreePath* path /*none*/, int index_);
// void gtk_tree_path_prepend_index (::GtkTreePath* path /*none*/, gint index_);
void base::TreePathBase::prepend_index (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreePath* path, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_prepend_index;
  auto index__to_c = index_;
  call_wrap_v ((::GtkTreePath*) (gobj_()), (gint) (index__to_c));
}

// gboolean gtk_tree_path_prev (GtkTreePath* path /*none*/);
// gboolean gtk_tree_path_prev (::GtkTreePath* path /*none*/);
bool base::TreePathBase::prev () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_prev;
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()));
  return _temp_ret;
}

// char* /*full,nullable*/ gtk_tree_path_to_string (GtkTreePath* path /*none*/);
// char* /*full,nullable*/ gtk_tree_path_to_string (::GtkTreePath* path /*none*/);
gi::cstring base::TreePathBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_to_string;
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_tree_path_up (GtkTreePath* path /*none*/);
// gboolean gtk_tree_path_up (::GtkTreePath* path /*none*/);
bool base::TreePathBase::up () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_path_up;
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treepath_extra_def_impl.hpp>)
#include <gtk/treepath_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treepath_extra_impl.hpp>)
#include <gtk/treepath_extra_impl.hpp>
#endif
#endif

#endif
