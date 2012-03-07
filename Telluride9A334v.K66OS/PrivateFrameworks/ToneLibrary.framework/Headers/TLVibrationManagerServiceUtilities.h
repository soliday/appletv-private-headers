/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibrationManagerServiceUtilities : NSObject {
}
+ (BOOL)_isValidObject:(id)object error:(id *)error forValidationBlock:(id)validationBlock;	// 0x33076ac9
+ (BOOL)_objectIsValidUserGeneratedVibrationPattern:(id)pattern error:(id *)error;	// 0x33076b65
+ (id)_sharedResourceFilePathForRelativeFilePath:(id)relativeFilePath;	// 0x33077109
+ (id)_sharedResourceURLForRelativeFilePath:(id)relativeFilePath;	// 0x33077129
+ (id)dictionaryFromXPCObject:(void *)xpcobject error:(id *)error;	// 0x330766e1
+ (id)errorWithDomain:(id)domain description:(id)description;	// 0x330769d1
+ (void *)newXPCObjectFromDictionary:(id)dictionary inReplyToXPCObject:(void *)xpcobject error:(id *)error;	// 0x3307686d
+ (BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)dictionary error:(id *)error;	// 0x33076da9
+ (id)userGeneratedVibrationStoreFileURL;	// 0x33077165
@end
