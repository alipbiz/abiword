
hancom_pkgs="$gsf_req"

HANCOM_CFLAGS=
HANCOM_LIBS=

if test "$enable_hancom" == "yes"; then

PKG_CHECK_MODULES(HANCOM,[ $hancom_pkgs ])

HANCOM_CFLAGS="$HANCOM_CFLAGS "'${WP_CPPFLAGS}'
HANCOM_LIBS="$HANCOM_LIBS "'${PLUGIN_LIBS}'

fi

AC_SUBST([HANCOM_CFLAGS])
AC_SUBST([HANCOM_LIBS])
