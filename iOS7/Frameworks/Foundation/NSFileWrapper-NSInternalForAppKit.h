/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSFileWrapper.h>

@interface NSFileWrapper (NSInternalForAppKit)
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (_Bool)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id *)arg6;
+ (_Bool)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;
+ (void)_writeAttributes:(id)arg1 toURL:(id)arg2;
+ (id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id *)arg2;
+ (id)_pathForURL:(id)arg1 reading:(_Bool)arg2 error:(id *)arg3;
- (id)_fullDescription:(_Bool)arg1;
@end
