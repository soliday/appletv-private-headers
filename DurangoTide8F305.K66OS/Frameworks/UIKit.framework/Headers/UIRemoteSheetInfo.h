/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIRemoteView, UIView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : NSObject {
@private
	UIView *_sheetView;	// 4 = 0x4
	UIRemoteView *_remoteView;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
	void *_context;	// 20 = 0x14
	int _returnCode;	// 24 = 0x18
}
@property(assign, nonatomic) void *context;	// G=0x321a4d1d; S=0x321a4d2d; @synthesize=_context
@property(assign, nonatomic) id delegate;	// G=0x321a4d5d; S=0x321a4d6d; @synthesize=_delegate
@property(retain, nonatomic) UIRemoteView *remoteView;	// G=0x321a4d7d; S=0x321a538d; @synthesize=_remoteView
@property(assign, nonatomic) int returnCode;	// G=0x321a4cfd; S=0x321a4d0d; @synthesize=_returnCode
@property(assign, nonatomic) SEL selector;	// G=0x321a4d3d; S=0x321a4d4d; @synthesize=_selector
@property(retain, nonatomic) UIView *sheetView;	// G=0x321a4d8d; S=0x321a5365; @synthesize=_sheetView
// declared property getter: - (void *)context;	// 0x321a4d1d
- (void)dealloc;	// 0x321a5309
// declared property getter: - (id)delegate;	// 0x321a4d5d
// declared property getter: - (id)remoteView;	// 0x321a4d7d
// declared property getter: - (int)returnCode;	// 0x321a4cfd
// declared property getter: - (SEL)selector;	// 0x321a4d3d
// declared property setter: - (void)setContext:(void *)context;	// 0x321a4d2d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x321a4d6d
// declared property setter: - (void)setRemoteView:(id)view;	// 0x321a538d
// declared property setter: - (void)setReturnCode:(int)code;	// 0x321a4d0d
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x321a4d4d
// declared property setter: - (void)setSheetView:(id)view;	// 0x321a5365
// declared property getter: - (id)sheetView;	// 0x321a4d8d
@end

