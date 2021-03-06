//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKBHandwritingStrokeEnabled.h"

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput : UIView <UIKBHandwritingStrokeEnabled>
{
    struct CGContext *_bitmapContext;
    int _fadeCount;
    struct CGPoint _lastViewLoc;
    struct CGRect _inkedAreaOfBitmapContext;
    NSTimer *_fadeTimer;
    TIHandwritingStrokes *_accumulatedStrokes;
    UIDelayedAction *_committedAction;
    _UIDynamicCaretDot *_dotView;
}

@property(retain, nonatomic) _UIDynamicCaretDot *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIDelayedAction *committedAction; // @synthesize committedAction=_committedAction;
@property(retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // @synthesize accumulatedStrokes=_accumulatedStrokes;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
- (void)cancelTouchAtPoint:(struct CGPoint)arg1;
- (void)endTouchAtPoint:(struct CGPoint)arg1;
- (void)addTouchAtPoint:(struct CGPoint)arg1;
- (void)startTouchAtPoint:(struct CGPoint)arg1;
- (void)addInkPoint:(struct CGPoint)arg1 fromLastPoint:(BOOL)arg2;
- (void)send;
- (void)clearAndNotify:(BOOL)arg1;
- (void)committedStrokes;
- (void)log;
- (void)drawPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_fadeInk;
- (void)clearFadeTimer;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) float inkWidth;
@property(readonly, nonatomic) BOOL isInking;
@property(readonly, nonatomic) BOOL hasInk;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

