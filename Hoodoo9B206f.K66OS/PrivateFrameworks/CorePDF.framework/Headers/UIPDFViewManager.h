/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class UIView;

@interface UIPDFViewManager : NSObject {
	UIView *_activeView;	// 4 = 0x4
}
+ (id)sharedViewManager;	// 0x3265eb1d
- (void)makeViewActive:(id)active;	// 0x3265eb85
- (void)viewReleased:(id)released;	// 0x3265eb49
@end

