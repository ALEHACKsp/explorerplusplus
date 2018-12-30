// Copyright (C) Explorer++ Project
// SPDX-License-Identifier: GPL-3.0-only
// See LICENSE in the top level directory

#pragma once

#define DEFAULT_ITEM_ALLOCATION		100

#define DRAGEXPAND_TIMER_ID		1
#define DRAGEXPAND_TIMER_ELAPSE	800

#define DRAGSCROLL_TIMER_ID		2
#define DRAGSCROLL_TIMER_ELAPSE	1000

typedef struct
{
	HWND			hTreeView;
	LPITEMIDLIST	pidlFull;
	HTREEITEM		hItem;
} TreeViewInfo_t;