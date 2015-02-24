#This line defines how what name will have output tarball
AC_INIT([gino],[0.0])

PKG_CHECK_MODULES(PACKAGE, gtk+-3.0)
PKC_CHECK_MODULES(PACKAGE, gtksourceview-3.0)
AC_SUBST(PACKAGE_CFLAGS)
AC_SUBST(PACKACE_LIBS)
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([src/main.c])
#this line defines what compilation flags will be used
AM_INIT_AUTOMAKE
# DEFINE YOUR OWN HEADERS CHECK - DO NOT DELETE THIS LINE
#this line defines what libraries should be used during building
# DEFINE YOUR OWN LIBRARY CHECK - DO NOT DELETE THIS LINE
AC_PROG_CC
#This line defines where are stored Makefiles for project and sources
AC_CONFIG_FILES([Makefile
		 src/Makefile])
AC_OUTPUT
