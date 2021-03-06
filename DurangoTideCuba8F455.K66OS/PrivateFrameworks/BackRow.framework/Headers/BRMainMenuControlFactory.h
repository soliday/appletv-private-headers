/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControlFactory.h"
#import <NSObject.h> // Unknown library
#import "BackRow-Structs.h"

@protocol BRSelectionHandler;

@interface BRMainMenuControlFactory : NSObject <BRControlFactory> {
@private
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
}
@property(retain) id selectionHandler;	// G=0x32fe26bd; S=0x32fe2921; converted property
+ (id)factory;	// 0x32fe2959
- (id)_posterControlForAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x32fe26cd
- (id)_posterControlForCollection:(id)collection currentControl:(id)control requestedBy:(id)by;	// 0x32fe2abd
- (id)_posterControlForMediaItem:(ATVMediaItemRef)mediaItem currentControl:(id)control requestedBy:(id)by;	// 0x32fe2d0d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x32fe29e1
- (void)dealloc;	// 0x32fe2999
// converted property getter: - (id)selectionHandler;	// 0x32fe26bd
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x32fe2921
@end

