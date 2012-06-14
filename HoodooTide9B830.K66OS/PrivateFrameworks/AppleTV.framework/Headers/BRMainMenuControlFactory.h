/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@protocol BRSelectionHandler;

@interface BRMainMenuControlFactory : NSObject <BRControlFactory> {
@private
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
}
@property(retain) id selectionHandler;	// G=0x329b6c51; S=0x329b6c11; converted property
+ (id)factory;	// 0x329b6b7d
- (id)_posterControlForAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x329b6d5d
- (id)_posterControlForCollection:(id)collection currentControl:(id)control requestedBy:(id)by;	// 0x329b6fd9
- (id)_posterControlForMediaItem:(ATVMediaItemRef)mediaItem currentControl:(id)control requestedBy:(id)by;	// 0x329b7255
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x329b6c61
- (void)dealloc;	// 0x329b6bc5
// converted property getter: - (id)selectionHandler;	// 0x329b6c51
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x329b6c11
@end

