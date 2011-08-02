/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface MLSQLCodeBinding : NSObject {
@private
	unsigned _valueType;	// 4 = 0x4
	union {
		NSString *stringValue;
		NSData *dataValue;
		unsigned uint32Value;
		unsigned long long uint64Value;
		long long int64Value;
		long long rowidValue;
	} _value;	// 8 = 0x8
}
+ (id)bindingWithCPRecordID:(int)cprecordID store:(CPRecordStoreRef)store;	// 0x31bdc411
+ (id)bindingWithDataValue:(id)dataValue noCopy:(BOOL)copy;	// 0x31bdc26d
+ (id)bindingWithSInt64:(long long)sint64;	// 0x31bdc359
+ (id)bindingWithStringValue:(id)stringValue;	// 0x31bdc2ed
+ (id)bindingWithUInt32:(unsigned)uint32;	// 0x31bc13fd
+ (id)bindingWithUInt64:(unsigned long long)uint64;	// 0x31bdc3b5
+ (id)placeholder;	// 0x31bc1359
- (void)bindToSQLStatement:(CPSqliteStatement *)sqlstatement bindingIndex:(unsigned)index;	// 0x31bc146d
- (id)bindableStringValue;	// 0x31bdcc79
- (void)dealloc;	// 0x31bc2859
- (id)description;	// 0x31bdc981
- (BOOL)isPlaceholder;	// 0x31bc1455
@end
