/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIStoryboardSegue : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	id _sourceViewController;	// 8 = 0x8
	id _destinationViewController;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id destinationViewController;	// G=0x359ed93d; @synthesize=_destinationViewController
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x359ed91d; @synthesize=_identifier
@property(readonly, assign, nonatomic) id sourceViewController;	// G=0x359ed92d; @synthesize=_sourceViewController
- (id)initWithIdentifier:(id)identifier source:(id)source destination:(id)destination;	// 0x359ed741
- (void)dealloc;	// 0x359ed6cd
// declared property getter: - (id)destinationViewController;	// 0x359ed93d
// declared property getter: - (id)identifier;	// 0x359ed91d
- (void)perform;	// 0x359ed8d9
// declared property getter: - (id)sourceViewController;	// 0x359ed92d
@end

