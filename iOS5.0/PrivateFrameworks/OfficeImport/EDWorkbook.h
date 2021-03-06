/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OCDDocument.h>

@class ECMappingContext, EDProcessors, EDReference, EDResources, EDWarnings, ESDContainer, NSDate, NSMutableArray, NSString, OADTheme;

@interface EDWorkbook : OCDDocument
{
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EDWarnings *mWarnings;
    NSMutableArray *mSheets;
    EDReference *mVisibleRange;
    unsigned int mActiveSheetIndex;
    NSDate *mDateBaseDate;
    unsigned int mDateBase;
    NSString *mFileName;
    NSString *mTemporaryDirectory;
    OADTheme *mTheme;
    ESDContainer *mEscherDrawingGroup;
    unsigned int mRealSheetCount;
}

- (id)init;
- (id)initWithStringOptimization:(_Bool)arg1;
- (id)initWithFileName:(id)arg1 andStringOptimization:(_Bool)arg2;
- (void)dealloc;
- (id)resources;
- (void)setResources:(id)arg1;
- (void)addOtherResources:(id)arg1;
- (id)workbookName;
- (id)fileName;
- (id)temporaryDirectory;
- (void)setTemporaryDirectory:(id)arg1;
- (id)dateBaseDate;
- (unsigned int)dateBase;
- (void)setDateBase:(unsigned int)arg1;
- (id)visibleRange;
- (void)setVisibleRange:(id)arg1;
- (unsigned int)sheetCount;
- (id)sheetAtIndex:(unsigned int)arg1;
- (id)sheetAtIndex:(unsigned int)arg1 loadIfNeeded:(_Bool)arg2;
- (unsigned int)indexOfSheet:(id)arg1;
- (unsigned int)indexOfSheetWithName:(id)arg1;
- (void)addSheet:(id)arg1;
- (id)activeSheet;
- (void)setActiveSheet:(id)arg1;
- (id)mappingContext;
- (void)setMappingContext:(id)arg1;
- (id)processors;
- (void)applyProcessors;
- (id)warnings;
- (id)theme;
- (void)setTheme:(id)arg1;
- (void)trashSheetAtIndex:(unsigned int)arg1;

@end

