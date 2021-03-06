/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUHeader : NSObject {
}
+ (id)extractMachOHeadersFromHeader:(id)header matchingArchitecture:(id)architecture considerArchives:(BOOL)archives;	// 0x3011b8b5
+ (id)headerWithMemory:(id)memory address:(unsigned long long)address name:(id)name path:(id)path timestamp:(id)timestamp;	// 0x3011b7e9
+ (id)headerWithUniverse:(id)universe memory:(id)memory name:(id)name path:(id)path timestamp:(id)timestamp;	// 0x3011ba41
- (BOOL)isArchive;	// 0x3011b7e5
- (BOOL)isFat;	// 0x3011b7d5
- (BOOL)isMachO;	// 0x3011b7d9
- (BOOL)isMachO32;	// 0x3011b7dd
- (BOOL)isMachO64;	// 0x3011b7e1
- (id)signature;	// 0x3011b871
@end

