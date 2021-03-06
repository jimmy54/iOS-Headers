/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString;

@interface MessageFileWrapper : NSObject
{
    NSString *_path;
    NSString *_filename;
    NSString *_preferredFilename;
    NSData *_data;
    NSMutableDictionary *_attributes;
    NSString *_linkDestination;
    NSString *_url;
    int _type;
}

- (void)setType:(unsigned long)arg1;
- (unsigned long)type;
- (void)setCreator:(unsigned long)arg1;
- (unsigned long)creator;
- (void)setFinderFlags:(unsigned short)arg1;
- (unsigned short)finderFlags;
- (void)setMimeType:(id)arg1;
- (id)mimeType;
- (id)inferredMimeType;
- (void)setContentID:(id)arg1;
- (id)contentID;
- (void)setMessageID:(id)arg1;
- (id)messageID;
- (void)setEventUniqueID:(id)arg1;
- (id)eventUniqueID;
- (void)setMeetingStorePersistentID:(id)arg1;
- (id)meetingStorePersistentID;
- (void)_isImage:(char *)arg1 orPDFFile:(char *)arg2;
- (BOOL)isImageFile;
- (BOOL)isPDFFile;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)isPlaceholder;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (void)setPreferredFilename:(id)arg1;
- (id)preferredFilename;
- (void)setFilename:(id)arg1;
- (id)filename;
- (BOOL)isSymbolicLink;
- (BOOL)isRegularFile;
- (BOOL)isDirectory;
- (id)fileWrappers;
- (id)symbolicLinkDestination;
- (id)regularFileContents;
- (void)setFileAttributes:(id)arg1;
- (id)fileAttributes;
- (void)dealloc;
- (id)description;

@end

