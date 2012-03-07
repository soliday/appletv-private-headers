/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMULoadCommand : NSObject {
	unsigned long long _cmdSize;	// 4 = 0x4
	unsigned _command;	// 12 = 0xc
}
@property(readonly, assign) unsigned long long cmdSize;	// G=0x31f60be9; converted property
+ (id)loadCommandWithMemory:(id)memory;	// 0x31f60cbd
- (id)initWithMemory:(id)memory;	// 0x31f60c25
// converted property getter: - (unsigned long long)cmdSize;	// 0x31f60be9
- (BOOL)isDyLinker;	// 0x31f60c0d
- (BOOL)isDySymTab;	// 0x31f60c09
- (BOOL)isIDDyLib;	// 0x31f60c15
- (BOOL)isLoadDyLib;	// 0x31f60c11
- (BOOL)isSegment;	// 0x31f60c19
- (BOOL)isSegment32;	// 0x31f60c1d
- (BOOL)isSegment64;	// 0x31f60c21
- (BOOL)isSymTab;	// 0x31f60c05
- (BOOL)isUUID;	// 0x31f60c01
@end
