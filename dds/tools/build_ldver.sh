#!/bin/sh
# Copyright (c) 2016 - Qeo LLC
#
# The source code form of this Qeo Open Source Project component is subject
# to the terms of the Clear BSD license.
#
# You can redistribute it and/or modify it under the terms of the Clear BSD
# License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
# for more details.
#
# The Qeo Open Source Project also includes third party Open Source Software.
# See LICENSE file for more details.


# Find and sort all api functions marked as exported. Use this agains the linker script to detect
# changes in the list

echo '/* Auto generated file - '$(date)' - tools/build_ldver.sh */
dds_0.1 {
global:'

grep DDS_EXPORT api/headers/dds/* api/headers/msecplug/* api/headers/nsecplug/* |cut -d' ' -f2- | sed "s/.*[ \*]\([dD][dD][sS]_[^ ]*\) *(.*$/\t\1;/g" | grep -v DDS_EXPORT | sort | uniq

echo '	JNI_OnLoad;'
echo '	init_engine_fs;'
echo '	fatal;'
echo 'local:
	*;
};'
