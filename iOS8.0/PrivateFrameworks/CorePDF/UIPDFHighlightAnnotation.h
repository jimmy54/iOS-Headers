//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation
{
    struct CGColor *_highLightColor;
}

- (BOOL)recognizeGestures;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawLayerRotated:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3 rectangles:(unsigned int)arg4;
- (void)drawLayerUpright:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3 rectangles:(unsigned int)arg4;
- (int)annotationType;
- (Class)viewClass;

@end
