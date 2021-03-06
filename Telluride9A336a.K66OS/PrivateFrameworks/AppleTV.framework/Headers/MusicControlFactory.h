/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "AppleTV-Structs.h"
#import "BRControlHeightFactory.h"

@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface MusicControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
}
- (id)initWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x33ba39a5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33ba3a8d
- (void)dealloc;	// 0x33ba3a41
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x33ba3bb5
@end

