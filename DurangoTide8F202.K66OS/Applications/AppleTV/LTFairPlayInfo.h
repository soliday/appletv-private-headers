/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface LTFairPlayInfo : XXUnknownSuperclass {
	id _sessionToken;	// 4 = 0x4
	NSString *_keyBagPath;	// 8 = 0x8
}
@property(readonly, retain) NSString *keyBagPath;	// G=0x1dc6d; converted property
@property(readonly, retain) id sessionToken;	// G=0x1dc5d; converted property
+ (id)infoWithToken:(id)token keyBagPath:(id)path;	// 0x1deb9
- (id)initWithToken:(id)token keyBagPath:(id)path;	// 0x1de49
- (void)dealloc;	// 0x1dded
- (id)description;	// 0x1dd9d
// converted property getter: - (id)keyBagPath;	// 0x1dc6d
// converted property getter: - (id)sessionToken;	// 0x1dc5d
@end

