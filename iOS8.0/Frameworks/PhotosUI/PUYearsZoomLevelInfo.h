//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUGridZoomLevelInfo.h>

#import "PUSectionedGridLayoutDelegate.h"

@class NSMutableDictionary, NSString, PHFetchResult;

@interface PUYearsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate>
{
    PHFetchResult *_yearsFetchResult;
    NSMutableDictionary *_resultsForCollectionList;
}

- (void).cxx_destruct;
- (void)willShowMagnifiedViewController:(id)arg1;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)modelDidChange:(id)arg1;
- (BOOL)supportsIncrementalChangeNotifications;
- (double)cellAspectRatioHint;
- (BOOL)consolidatesAssetFetchesForPreheat;
- (int)imageDeliveryMode;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2;
- (int)cellFillMode;
- (void)updateLayoutMetricsForWidth:(float)arg1;
- (int)maxRowsPerSection;
- (int)imageFormat;
- (id)sectionHeaderElementKind;
- (id)renderedStripsElementKind;
- (id)newCollectionViewLayout;
- (struct __CFString *)aggregateLevelKey;
- (BOOL)hasEnoughContentToDisplay;
- (id)displayTitle;
- (id)momentsInCollectionList:(id)arg1;
- (id)_yearsFetchResult;
- (id)initWithZoomLevel:(unsigned int)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
