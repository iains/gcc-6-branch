This branch is based on the final release version for GCC-6; GCC-6.5

The main GCC 6.5 branch is closed for commits, so these are Darwin-specific
changes intended to make the branch more effective for the target.

It contains changes in the following categories:

 * Backported or otherwise authored fixes for wrong code-gen or build breaks.
   (for example, we might update fixincludes to handle future MacOS SDKs)

 * Backported enhancements to performance or functionality deemed worth
   applying.
 
 * Changes to support Darwin-specific issues
   (for example, dealing with ABI inconsistencies between GCC and clang).

 * Changes that fix testsuite-related problems (so that the testsuite is more
   useful in identifying real problems).

Changes:


=========

The GCC README:

This directory contains the GNU Compiler Collection (GCC).

The GNU Compiler Collection is free software.  See the files whose
names start with COPYING for copying permission.  The manuals, and
some of the runtime libraries, are under different terms; see the
individual source files for details.

The directory INSTALL contains copies of the installation information
as HTML and plain text.  The source of this information is
gcc/doc/install.texi.  The installation information includes details
of what is included in the GCC sources and what files GCC installs.

See the file gcc/doc/gcc.texi (together with other files that it
includes) for usage and porting information.  An online readable
version of the manual is in the files gcc/doc/gcc.info*.

See http://gcc.gnu.org/bugs/ for how to report bugs usefully.

Copyright years on GCC source files may be listed using range
notation, e.g., 1987-2012, indicating that every year in the range,
inclusive, is a copyrightable year that could otherwise be listed
individually.
