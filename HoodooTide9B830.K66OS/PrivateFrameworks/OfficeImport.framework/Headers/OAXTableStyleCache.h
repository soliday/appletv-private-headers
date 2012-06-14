/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OAXTableStyleCache : NSObject {
@private
	NSString *mDefaultStyleId;	// 4 = 0x4
	NSMutableDictionary *mCache;	// 8 = 0x8
}
@property(retain) id defaultStyleId;	// G=0x3138df45; S=0x3128f229; converted property
- (id)init;	// 0x3128ecb1
- (void)dealloc;	// 0x31296369
// converted property getter: - (id)defaultStyleId;	// 0x3138df45
- (xmlNode *)defaultStyleNode;	// 0x31293475
// converted property setter: - (void)setDefaultStyleId:(id)anId;	// 0x3128f229
- (void)setStyleNode:(xmlNode *)node forId:(id)anId;	// 0x312b6d51
- (xmlNode *)styleNodeForId:(id)anId;	// 0x31293495
@end

