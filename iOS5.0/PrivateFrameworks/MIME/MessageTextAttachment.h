/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MessageFileWrapper, NSMutableDictionary;

@interface MessageTextAttachment : NSObject
{
    NSMutableDictionary *_cache;
}

- (id)init;
- (id)initWithWrapper:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)cachedValueForKey:(id)arg1;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) MessageFileWrapper *fileWrapper;
- (unsigned int)approximateSize;
- (BOOL)hasBeenDownloaded;
- (void)download;
- (BOOL)isPlaceholder;
- (void)inlineDisplayData:(id *)arg1 mimeType:(id *)arg2;
- (id)fileWrapperForcingDownload:(BOOL)arg1;

@end
