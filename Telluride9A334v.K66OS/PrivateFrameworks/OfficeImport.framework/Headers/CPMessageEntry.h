/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CPMessageEntry : NSObject {
@private
	int m_timeStamp;	// 4 = 0x4
	int m_tag;	// 8 = 0x8
	NSString *m_text;	// 12 = 0xc
	NSArray *m_parameters;	// 16 = 0x10
	NSMutableArray *m_affectedObjects;	// 20 = 0x14
	int m_count;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *affectedObjects;	// G=0x357ac851; converted property
@property(assign, nonatomic) int timeStamp;	// G=0x357ac899; S=0x357ac8a9; @synthesize=m_timeStamp
+ (void)initialize;	// 0x3569fd31
- (id)initWithTag:(int)tag affectedObject:(id)object text:(id)text parameters:(void *)parameters;	// 0x3569fd91
- (void)addAffectedObject:(id)object;	// 0x3569fef5
// converted property getter: - (id)affectedObjects;	// 0x357ac851
- (void)dealloc;	// 0x3569ffb5
- (id)description;	// 0x357ad691
- (int)getCount;	// 0x357ac861
- (int)getMessageTag;	// 0x357ac831
- (id)getMessageText;	// 0x357ac841
- (id)getParameter:(unsigned)parameter;	// 0x357ad705
- (int)getParameterCount;	// 0x357ad74d
- (unsigned)hash;	// 0x357ad76d
- (BOOL)isEqual:(id)equal;	// 0x357ad7a5
- (void)logWithCat:(id)cat;	// 0x357ac895
- (void)mergeEntries:(id)entries;	// 0x357ad5d5
// declared property setter: - (void)setTimeStamp:(int)stamp;	// 0x357ac8a9
// declared property getter: - (int)timeStamp;	// 0x357ac899
- (int)timeStampCompare:(id)compare;	// 0x357ac871
@end
