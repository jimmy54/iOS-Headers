/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPShapeRep.h>

// Not exported
@interface TSWPTOCRep : TSWPShapeRep
{
}

- (unsigned long long)i_indexOfHitTOCEntryAtPoint:(struct CGPoint)arg1;
- (id)i_paragraphStyleAtPoint:(struct CGPoint)arg1;
- (void)invalidateSubselection;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)p_subSelectionLayers;
- (id)p_selectedParagraphStyles;
- (_Bool)canMakePathEditable;
- (_Bool)isDraggable;
- (_Bool)isSelectable;
- (_Bool)shouldShowKnobs;
- (_Bool)shouldCreateKnobs;
- (id)hitRep:(struct CGPoint)arg1;
- (id)paragraphStylesBetweenCharIndex:(unsigned long long)arg1 andCharIndex:(unsigned long long)arg2;
- (unsigned long long)charIndexAtPoint:(struct CGPoint)arg1;
- (id)tocInfo;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;

@end
