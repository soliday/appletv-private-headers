/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// 0x30d64219
@end

@interface NSURL (WebNSURLExtras)
+ (id)_web_URLWithData:(id)data;	// 0x30d68f39
+ (id)_web_URLWithData:(id)data relativeToURL:(id)url;	// 0x30d12c9d
+ (id)_web_URLWithDataAsString:(id)dataAsString;	// 0x30d15f39
+ (id)_web_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x30d15f59
+ (id)_web_URLWithUserTypedString:(id)userTypedString;	// 0x30d0fcfd
+ (id)_web_URLWithUserTypedString:(id)userTypedString relativeToURL:(id)url;	// 0x30d0fd11
+ (id)uniqueURLWithRelativePart:(id)relativePart;	// 0x30d6952d
- (id)_web_URLByRemovingComponentAndSubsequentCharacter:(long)character;	// 0x30d69421
- (id)_web_URLByRemovingUserInfo;	// 0x30d68e55
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)component;	// 0x30d69355
- (const char *)_web_URLCString;	// 0x30d68dad
- (id)_web_URLWithLowercasedScheme;	// 0x30d13e11
- (id)_web_dataForURLComponentType:(long)urlcomponentType;	// 0x30d29675
- (BOOL)_web_hasQuestionMarkOnlyQueryString;	// 0x30d69291
- (id)_web_hostData;	// 0x30d29609
- (id)_web_hostString;	// 0x30d29579
- (BOOL)_web_isEmpty;	// 0x30d690a5
- (id)_web_originalData;	// 0x30d13cf5
- (id)_web_originalDataAsString;	// 0x30d155b1
- (id)_web_schemeData;	// 0x30d298d9
- (id)_web_schemeSeparatorWithoutColon;	// 0x30d692c1
- (id)_web_userVisibleString;	// 0x30d12f1d
- (id)_webkit_URLByRemovingFragment;	// 0x30d68e2d
- (id)_webkit_URLByRemovingResourceSpecifier;	// 0x30d68e41
- (id)_webkit_canonicalize;	// 0x30d12d95
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x30d68eb9
- (BOOL)_webkit_isFileURL;	// 0x30d68e91
- (BOOL)_webkit_isJavaScriptURL;	// 0x30d68e69
- (id)_webkit_scriptIfJavaScriptURL;	// 0x30d12e59
- (BOOL)_webkit_shouldLoadAsEmptyDocument;	// 0x30d68ee1
- (id)_webkit_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x30d69525
- (id)_webkit_youTubeURL;	// 0x30d25e0d
@end

