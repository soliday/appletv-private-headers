/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramPointMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramPointChevronMapper : CMDiagramPointMapper {
@private
	BOOL mPlaceholder;	// 24 = 0x18
	BOOL mHomePlate;	// 25 = 0x19
}
- (void)mapAt:(id)at withState:(id)state;	// 0x312d552d
- (void)setIsHomePlate:(BOOL)plate;	// 0x312d551d
- (void)setIsPlaceholder:(BOOL)placeholder;	// 0x313d7691
@end

