/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSDate : ICSProperty {
}
@property(retain) NSString *tzid;	// G=0x352cca11; S=0x352cc9f1; 
- (id)initWithValue:(id)value;	// 0x352cc73d
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x352cc785
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;	// 0x352cc835
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x352cc86d
- (id)components;	// 0x352cca31
- (id)description;	// 0x352ccb0d
- (BOOL)hasFloatingTimeZone;	// 0x352ccaa1
- (BOOL)hasTimeComponent;	// 0x352cca59
// declared property setter: - (void)setTzid:(id)tzid;	// 0x352cc9f1
// declared property getter: - (id)tzid;	// 0x352cca11
@end

