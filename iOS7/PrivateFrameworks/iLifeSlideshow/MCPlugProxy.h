/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObject.h>

@class MCPlug;

@interface MCPlugProxy : MCObject
{
    MCPlug *_plug;
}

@property(retain) MCPlug *plug; // @synthesize plug=_plug;
- (void)_copySelfToSnapshot:(id)arg1;
- (void)setContainer:(id)arg1;
- (int)zIndex;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;

@end
