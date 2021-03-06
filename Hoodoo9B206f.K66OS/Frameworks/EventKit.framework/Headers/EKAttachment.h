/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSNumber, NSURL, NSString;

@interface EKAttachment : EKObject {
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x31f41f45; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31f42171; 
@property(readonly, assign, nonatomic) NSString *fileFormat;	// G=0x31f41fb1; 
@property(readonly, assign, nonatomic) NSString *fileName;	// G=0x31f41f61; 
@property(readonly, assign, nonatomic) NSNumber *fileSize;	// G=0x31f42019; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x31f41fcd; 
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x31f41ffd; 
- (id)init;	// 0x31f41ed9
// declared property getter: - (id)URL;	// 0x31f41f45
// declared property getter: - (id)UUID;	// 0x31f42171
- (int)compareFileNames:(id)names;	// 0x31f4218d
- (id)description;	// 0x31f4223d
// declared property getter: - (id)fileFormat;	// 0x31f41fb1
// declared property getter: - (id)fileName;	// 0x31f41f61
// declared property getter: - (id)fileSize;	// 0x31f42019
// declared property getter: - (BOOL)isBinary;	// 0x31f41fcd
- (BOOL)isEqual:(id)equal;	// 0x31f421c5
// declared property getter: - (id)localURL;	// 0x31f41ffd
@end

