//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ML3DatabaseConnectionDelegate.h"
#import "ML3DatabaseConnectionPoolDelegate.h"

@class ML3AccountCacheDatabase, ML3Container, ML3DatabaseConnectionPool, ML3DatabaseMetadata, ML3LibraryNotificationManager, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_libraryUID;
    ML3AccountCacheDatabase *_accountCacheDatabase;
    ML3LibraryNotificationManager *_notificationManager;
    struct iPhoneSortKeyBuilder *_sortKeyBuilder;
    NSMutableDictionary *_optimizedLibraryEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_optimizedLibraryContainerFilterPredicatesByContainerClass;
    BOOL _isHomeSharingLibraryLoaded;
    BOOL _isHomeSharingLibrary;
    id <ML3MusicLibraryDelegate> _delegate;
    ML3DatabaseConnectionPool *_connectionPool;
    NSString *_databasePath;
    NSArray *_libraryEntityFilterPredicates;
    NSArray *_libraryContainerFilterPredicates;
}

+ (id)_purgeableTrackPredicateWithUrgency:(unsigned int)arg1;
+ (id)_notInKeepLocalCollectionPredicate;
+ (BOOL)updateTrackIntegrityOnConnection:(id)arg1;
+ (void)enumerateSortMapTablesUsingBlock:(CDUnknownBlockType)arg1;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (BOOL)deviceSupportsMultipleLibraries;
+ (void)enableAutomaticDatabaseValidation;
+ (void)disableAutomaticDatabaseValidation;
+ (void)disableSharedLibrary;
+ (id)sharedLibraryDatabasePath;
+ (id)sharedLibrary;
+ (BOOL)inTransactionUpdateSearchMapOnConnection:(id)arg1;
+ (BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
+ (BOOL)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
+ (BOOL)updateSortMapOnConnection:(id)arg1;
+ (BOOL)dropIndexesUsingConnection:(id)arg1 tableNames:(const char *)arg2;
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg1;
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)arg1;
+ (int)userVersionUsingConnection:(id)arg1;
+ (id)itemIndexSchemaSQL;
+ (id)indexSchemaSQL;
+ (id)allTables;
+ (id)allTriggersSQL;
+ (id)allPragmaSQL;
+ (id)allSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)sortMapNewSchemaSQL;
+ (id)sortMapSchemaSQL;
+ (id)storeLinkSchemaSQL;
+ (BOOL)defaultExcludeFromShuffleForMediaType:(unsigned long)arg1;
+ (BOOL)defaultRememberBookmarkTimeForMediaType:(unsigned long)arg1;
+ (id)pathForBaseLocationPath:(long long)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(char *)arg4;
+ (id)controlDirectoryPathWithBasePath:(id)arg1;
+ (id)mediaFolderRelativePath:(id)arg1;
+ (id)mediaFolderPathByAppendingPathComponent:(id)arg1;
+ (id)mediaFolderPath;
+ (id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3;
+ (id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2;
@property(retain, nonatomic) NSArray *libraryContainerFilterPredicates; // @synthesize libraryContainerFilterPredicates=_libraryContainerFilterPredicates;
@property(retain, nonatomic) NSArray *libraryEntityFilterPredicates; // @synthesize libraryEntityFilterPredicates=_libraryEntityFilterPredicates;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) ML3DatabaseConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(nonatomic) __weak id <ML3MusicLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateDatabaseConnectionsProfilingLevel;
- (void)_postClientNotificationWithDistributedName:(id)arg1 localName:(id)arg2;
- (void)_loggingSettingsDidChangeNotification:(id)arg1;
- (void)_effectiveSettingsDidChangeNotification:(id)arg1;
- (void)_enumeratePurgeableTracksForUrgency:(unsigned int)arg1 respectSongMattress:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_allKeepLocalPlaylistTracks;
- (BOOL)_clearAllRowsFromTables:(id)arg1;
- (void)_teardownMediaLibraryDatabaseConnection:(id)arg1;
- (void)_configureMediaLibraryDatabaseConnection:(id)arg1;
- (BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)arg1;
- (id)_newGeniusDBConnectionAtPath:(id)arg1;
- (void)_autogenerateArtworkForRelativePath:(id)arg1 artworkType:(int)arg2 mediaType:(unsigned long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_deleteAllArtworkVariantsAtRelativePaths:(id)arg1;
- (BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(int)arg2 sourceType:(int)arg3 relativePath:(id)arg4;
- (void)updateTrackIntegrity;
- (void)deletePresignedValidity;
- (BOOL)verifyPresignedValidity;
- (BOOL)hasPresignedValidity;
- (void)migratePresignedValidity;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (void)removeItemsWithFamilyAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 downloaderAccountID:(unsigned long long)arg3;
- (void)removeOrphanedTracks;
- (void)removeTombstonesForDeletedItems;
- (id)fetchArtistHeroArtworkForPersistentID:(long long)arg1 artistType:(int)arg2;
- (id)fetchChapterArtworkForPersistentID:(long long)arg1 retrievalTime:(double)arg2;
- (id)fetchScreenshotArtworkForPersistentID:(long long)arg1;
- (id)fetchItemArtworkForPersistentID:(long long)arg1;
- (BOOL)hasArtistHeroArtworkForPersistentID:(long long)arg1 artistType:(int)arg2;
- (BOOL)hasChapterArtworkForPersistentID:(long long)arg1 retrievalTime:(double)arg2;
- (BOOL)hasScreenshotArtworkForPersistentID:(long long)arg1;
- (BOOL)hasItemArtworkForPersistentID:(long long)arg1;
- (BOOL)deleteOrphanedArtworkWithSearchOptions:(int)arg1 usingConnection:(id)arg2;
- (BOOL)deleteOrphanedArtworkWithSearchOptions:(int)arg1;
- (BOOL)deleteArtworkWithToken:(id)arg1;
- (BOOL)deleteArtworkWithSourceType:(int)arg1;
- (BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(int)arg3 sourceType:(int)arg4 mediaType:(unsigned long)arg5;
- (BOOL)importOriginalArtworkFromFileURL:(id)arg1 withArtworkToken:(id)arg2 artworkType:(int)arg3 sourceType:(int)arg4 mediaType:(unsigned long)arg5;
- (BOOL)importExistingOriginalArtworkWithArtworkToken:(id)arg1 artworkType:(int)arg2 sourceType:(int)arg3 mediaType:(unsigned long)arg4;
- (void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned int)arg2 respectSongMattress:(BOOL)arg3;
- (void)purgeCloudAssets;
- (long long)getDatabaseFileFreeSpace;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned int)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
- (long long)autoFilledTracksTotalSizeWithUrgency:(unsigned int)arg1 respectSongMattress:(BOOL)arg2;
- (long long)autoFilledTracksTotalSizeWithUrgency:(unsigned int)arg1;
@property(readonly, nonatomic) long long autoFilledTracksTotalSize;
- (unsigned long long)countOfChangedPersistentIdsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned int)arg2 maximumRevisionType:(int)arg3;
- (BOOL)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(int)arg3;
- (void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned int)arg2 maximumRevisionType:(int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned int)arg2 maximumRevisionType:(int)arg3 forMediaTypes:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (BOOL)updateSortMap;
- (long long)addStringToSortMap:(id)arg1;
- (BOOL)requiresNonSchemaUpdatesOnConnection:(id)arg1;
- (BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)arg1;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)savePlaylists;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyInvisiblePropertyDidChange;
- (void)notifyNonContentsPropertyDidChange;
- (void)notifyContentsDidChange;
- (unsigned int)sectionIndexTitleIndexForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)groupingKeysForStrings:(id)arg1;
- (id)groupingKeyForString:(id)arg1;
- (void)accessSortKeyBuilder:(CDUnknownBlockType)arg1;
- (BOOL)populateStaticItemsOfDynamicContainers;
- (id)accountCacheDatabase;
- (BOOL)clearAllGeniusData;
- (BOOL)emptyAllTables;
- (BOOL)dropItemIndexes;
- (BOOL)createIndexes;
- (int)currentDatabaseVersion;
- (BOOL)validateDatabase;
- (BOOL)automaticDatabaseValidationDisabled;
- (BOOL)isCurrentThreadInTransaction;
- (void)performReadOnlyDatabaseTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)performDatabaseTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)databaseConnectionAllowingWrites:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)reconnectToDatabase;
- (void)checkInDatabaseConnection:(id)arg1;
- (id)checkoutWriterConnection;
- (id)checkoutReaderConnection;
- (void)connectionPool:(id)arg1 createdNewConnection:(id)arg2;
- (void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2;
- (void)connectionDidBeginDatabaseTransaction:(id)arg1;
- (void)connectionWillCloseDatabase:(id)arg1;
- (void)connectionDidOpenDatabase:(id)arg1;
- (void)connectionWillOpenDatabase:(id)arg1;
- (id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1;
- (id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1;
@property(readonly, nonatomic) BOOL mediaRestrictionEnabled;
@property(readonly, nonatomic) NSArray *preferredSubtitleTracks;
@property(readonly, nonatomic) NSArray *preferredAudioTracks;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property(readonly, nonatomic) ML3DatabaseMetadata *databaseInfo;
@property(readonly, nonatomic) ML3Container *currentDevicePurchasesPlaylist;
- (void)setLibraryUID:(id)arg1;
@property(readonly, nonatomic) NSString *libraryUID;
@property(nonatomic) long long syncGenerationID;
@property(readonly, nonatomic) long long currentContentRevision;
@property(readonly, nonatomic) long long currentRevision;
@property(readonly, nonatomic) long long persistentID;
@property(nonatomic) BOOL isHomeSharingLibrary;
- (void)dealloc;
- (id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 populateUnitTestTablesBlock:(CDUnknownBlockType)arg3;
- (id)initWithPath:(id)arg1;
- (id)artistForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5;
- (BOOL)_validateDatabaseUsingConnection:(id)arg1;
- (BOOL)coerceValidDatabase;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(char *)arg2;
- (CDStruct_87dc826d)nameOrderForString:(id)arg1;
- (id)genreForGenre:(id)arg1;
- (id)composerForComposerName:(id)arg1;
- (id)albumArtistForEffectiveAlbumArtistName:(id)arg1;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (BOOL)updateSystemPlaylistNamesForCurrentLanguage;
- (BOOL)handlePreprocessDatabase;
- (BOOL)handleSchemaUpgrade;
- (BOOL)handleDatabaseValidation;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1 trackValues:(id)arg2;
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
- (id)uppService;
@property(readonly, nonatomic) BOOL supportsUbiquitousPlaybackPositions;
- (BOOL)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2 usingConnection:(id)arg3;
- (BOOL)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2;
- (BOOL)removeSource:(int)arg1 usingConnection:(id)arg2;
- (BOOL)removeSource:(int)arg1;
- (BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
