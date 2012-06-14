/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface OpenURLTarget : NSObject {
	unsigned _applicationState;	// 4 = 0x4
	struct {
		NSString *clientIdentifier;
		NSString *normalScheme;
		NSString *secureScheme;
	} _targetData;	// 8 = 0x8
	int _targetIndex;	// 20 = 0x14
}
- (id)init;	// 0x355558ad
- (id)initWithTargetIdentifier:(id)targetIdentifier;	// 0x355558c1
- (int)compare:(id)compare;	// 0x355559b9
- (id)copyURLForURL:(id)url;	// 0x35555a1d
- (id)description;	// 0x35555b39
@end

