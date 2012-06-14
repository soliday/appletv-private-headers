/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSFileHandle;

@interface MEJSONExporter : NSObject {
	NSFileHandle *mOutputFile;	// 4 = 0x4
	int mIndentLevel;	// 8 = 0x8
	int mIndent;	// 12 = 0xc
	BOOL mPrettyPrint;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL prettyPrint;	// G=0x30b37e29; S=0x30b37e39; @synthesize=mPrettyPrint
- (id)init;	// 0x30b37421
- (void)_appendIndent;	// 0x30b37d91
- (void)_appendNewline;	// 0x30b37df5
- (void)_appendString:(id)string;	// 0x30b37d51
- (void)_exportArray:(id)array;	// 0x30b378e9
- (void)_exportDictionary:(id)dictionary;	// 0x30b37625
- (void)_exportValue:(id)value;	// 0x30b37b1d
- (void)dealloc;	// 0x30b3747d
- (BOOL)exportPropertyList:(id)list toPath:(id)path;	// 0x30b374d1
// declared property getter: - (BOOL)prettyPrint;	// 0x30b37e29
// declared property setter: - (void)setPrettyPrint:(BOOL)print;	// 0x30b37e39
@end

