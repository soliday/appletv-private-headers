/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CMOutlineState : NSObject {
@private
	int counter[10];	// 4 = 0x4
	int listId;	// 44 = 0x2c
}
@property(readonly, assign) int listId;	// G=0x351c6f7d; converted property
- (id)init;	// 0x351eb429
- (id)initWithListId:(int)listId;	// 0x351c6fdd
- (int)counterAtLevel:(int)level;	// 0x351c7d0d
- (void)increaseCounterAtLevel:(int)level;	// 0x3527995d
// converted property getter: - (int)listId;	// 0x351c6f7d
- (void)reset;	// 0x3512a5d9
- (void)setCounterTo:(int)to atLevel:(int)level;	// 0x351c7229
@end
