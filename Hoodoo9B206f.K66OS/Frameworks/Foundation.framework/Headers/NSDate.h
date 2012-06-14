/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library


@interface NSDate (NSCalendarDateStuff)
- (id)dateWithCalendarFormat:(id)calendarFormat timeZone:(id)zone;	// 0x31d4a5f9
- (id)descriptionWithCalendarFormat:(id)calendarFormat timeZone:(id)zone locale:(id)locale;	// 0x31d4a661
@end

@interface NSDate (NSNaturalLanguageDate)
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString;	// 0x31d4c3d1
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x31d4c351
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString locale:(id)locale;	// 0x31d4c3f1
@end

@interface NSDate (NSDate)
- (id)initWithCoder:(id)coder;	// 0x31d51175
- (Class)classForCoder;	// 0x31d29c2d
- (void)encodeWithCoder:(id)coder;	// 0x31d29c49
@end

@interface NSDate (NSURLExtras)
- (id)_web_RFC1123DateString;	// 0x31d9f5e5
- (int)_web_compareDay:(id)day;	// 0x31d31651
- (BOOL)_web_isToday;	// 0x31d31611
@end
