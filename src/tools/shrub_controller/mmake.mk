# SPDX-License-Identifier: BSD-2-Clause
# SPDX-FileCopyrightText: Copyright (C) 2024, Advanced Micro Devices, Inc.

APPS := shrub_controller

TARGETS	:= $(APPS:%=$(AppPattern))

shrub_controller := $(patsubst %,$(AppPattern),shrub_controller)

MMAKE_LIBS	:= $(LINK_CIIP_LIB) $(LINK_CIAPP_LIB) \
		   $(LINK_CITOOLS_LIB) $(LINK_CIUL_LIB) \
		   $(LINK_CPLANE_LIB)
MMAKE_LIB_DEPS	:= $(CIIP_LIB_DEPEND) $(CIAPP_LIB_DEPEND) \
		   $(CITOOLS_LIB_DEPEND) $(CIUL_LIB_DEPEND) \
		   $(CPLANE_LIB_DEPEND)

$(shrub_controller): shrub_controller.o $(MMAKE_LIB_DEPS)
	(libs="$(MMAKE_LIBS) $(MMAKE_STACKDUMP_LIBS)"; $(MMakeLinkCApp))


TARGETS	:= $(APPS:%=$(AppPattern))
all: $(TARGETS)

