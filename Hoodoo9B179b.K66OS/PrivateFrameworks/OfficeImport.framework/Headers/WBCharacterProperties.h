/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBCharacterProperties : NSObject {
}
+ (WrdCharacterProperties *)createTrackedPropertiesIfNeeded:(id)needed;	// 0x329a0749
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x328f1685
+ (void)readFrom:(id)from wrdProperties:(WrdCharacterProperties *)properties document:(id)document properties:(id)properties4;	// 0x32860511
+ (void)readFrom:(id)from wrdProperties:(WrdCharacterProperties *)properties tracked:(WrdCharacterProperties *)tracked document:(id)document properties:(id)properties5;	// 0x32860479
@end

