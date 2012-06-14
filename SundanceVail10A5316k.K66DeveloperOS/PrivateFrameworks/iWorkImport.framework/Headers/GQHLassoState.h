/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQHState.h"
#import "iWorkImport-Structs.h"

@class GQHXML;

__attribute__((visibility("hidden")))
@interface GQHLassoState : GQHState {
@private
	GQHXML *mNavigation;	// 108 = 0x6c
	int mSheetCount;	// 112 = 0x70
	int mTableCount;	// 116 = 0x74
	CFStringRef mCssUri;	// 120 = 0x78
	CFStringRef mCurrentSheetFilename;	// 124 = 0x7c
	CFStringRef mCurrentSheetUri;	// 128 = 0x80
	CGPoint mMaxCanvasPoint;	// 132 = 0x84
	unsigned mCurrentDrawableZOrder;	// 140 = 0x8c
	unsigned mZOrderedDrawableCount;	// 144 = 0x90
	CFDictionaryRef mDrawableUidToCssZOrderClassMap;	// 148 = 0x94
	CFArrayRef mSheetCssUriList;	// 152 = 0x98
	CFStringRef mSheetCssFilename;	// 156 = 0x9c
	CFStringRef mSheetOneCss;	// 160 = 0xa0
	CFStringRef mSheetOneLastCSS;	// 164 = 0xa4
	char *mFirstWorkspaceName;	// 168 = 0xa8
	bool mIsProgressiveMode;	// 172 = 0xac
}
- (id)initWithState:(id)state;	// 0x36c67261
- (id).cxx_construct;	// 0x36c6894d
- (void)addCachedStyle:(CFStringRef)style;	// 0x36c68061
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x36c67efd
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x36c68165
- (void)beginNewSheet:(const char *)sheet processorState:(id)state;	// 0x36c6756d
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x36c681bd
- (unsigned)currentDrawableZOrder;	// 0x36c68229
- (void)dealloc;	// 0x36c6739d
- (BOOL)drawablesNeedCssZOrdering;	// 0x36c681b9
- (int)endSheet;	// 0x36c67d5d
- (BOOL)finishMainHtml;	// 0x36c68099
- (BOOL)inProgressiveMode;	// 0x36c68939
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x36c67f8d
- (CGPoint)maxCanvasPoint;	// 0x36c6814d
- (void)writeAnchorInNavigationPage:(char *)navigationPage;	// 0x36c67b11
- (void)writeIndexPageWithDocumentSize:(CGSize)documentSize;	// 0x36c68241
- (void)writeNavigationPage:(id)page;	// 0x36c685b1
@end
