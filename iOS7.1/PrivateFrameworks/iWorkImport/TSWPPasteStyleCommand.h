//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPTextCommand.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSWPPasteStyleCommand : TSWPTextCommand
{
    id <TSKStyleMapper> _styleMapper;
    NSArray *_pastedStyles;
}

- (int)persistenceKind;
- (void)doCommit;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 pastedStyles:(id)arg3 styleMapper:(id)arg4;

@end

