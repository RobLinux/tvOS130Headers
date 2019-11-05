/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/BaseRequestHandler.h>
#import <itunescloudd/LibraryManaging.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class JaliscoLibrary, JaliscoUpdateGeniusDataOperation, JaliscoArtworkImporter, NSObject, JaliscoMediaUpdateOperation, NSOperationQueue, NSMutableArray, NSString;

@interface JaliscoRequestHandler : BaseRequestHandler <LibraryManaging> {

	JaliscoLibrary* _jaliscoLibrary;
	JaliscoUpdateGeniusDataOperation* _updateGeniusDataOperation;
	JaliscoArtworkImporter* _artworkImporter;
	NSObject*<OS_dispatch_queue> _updateLibraryQueue;
	JaliscoMediaUpdateOperation* _updateLibraryOperation;
	NSOperationQueue* _geniusUpdateOperationQueue;
	NSObject*<OS_dispatch_queue> _geniusUpdateQueue;
	NSObject*<OS_dispatch_group> _geniusUpdateGroup;
	NSMutableArray* _updateLibraryCompletionHandlers;

}

@property (nonatomic,retain) JaliscoUpdateGeniusDataOperation * updateGeniusDataOperation;              //@synthesize updateGeniusDataOperation=_updateGeniusDataOperation - In the implementation block
@property (nonatomic,readonly) JaliscoLibrary * jaliscoLibrary;                                         //@synthesize jaliscoLibrary=_jaliscoLibrary - In the implementation block
@property (nonatomic,readonly) JaliscoArtworkImporter * artworkImporter;                                //@synthesize artworkImporter=_artworkImporter - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> updateLibraryQueue;                         //@synthesize updateLibraryQueue=_updateLibraryQueue - In the implementation block
@property (nonatomic,retain) JaliscoMediaUpdateOperation * updateLibraryOperation;                      //@synthesize updateLibraryOperation=_updateLibraryOperation - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * geniusUpdateOperationQueue;                           //@synthesize geniusUpdateOperationQueue=_geniusUpdateOperationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> geniusUpdateQueue;                          //@synthesize geniusUpdateQueue=_geniusUpdateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> geniusUpdateGroup;                          //@synthesize geniusUpdateGroup=_geniusUpdateGroup - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * updateLibraryCompletionHandlers;                   //@synthesize updateLibraryCompletionHandlers=_updateLibraryCompletionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handler;
+(id)handlers;
-(void)dealloc;
-(void)cancelAllOperations;
-(float)updateProgress;
-(id)initWithConfiguration:(id)arg1 ;
-(void)updateJaliscoLibraryByAddingMediaKind:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateJaliscoLibraryByRemovingMediaKind:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)becomeActive;
-(void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusCUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)enableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)loadMissingArtwork;
-(void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)becomeInactiveWithDeauthentication:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)decreasePriorityForAllOperations;
-(void)increasePriorityForAllOperations;
-(void)cancelOperationsWithCompletion:(/*^block*/id)arg1 ;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(JaliscoArtworkImporter *)artworkImporter;
-(void)cancelPendingChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(/*^block*/id)arg3 ;
-(void)performInitialLibraryUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelPendingChanges;
-(BOOL)isUpdateInProgressWithIsInitialImport:(BOOL*)arg1 ;
-(void)removeLibraryWithCompletion:(/*^block*/id)arg1 ;
-(void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelUpdateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(JaliscoLibrary *)jaliscoLibrary;
-(id)jaliscoLibraryWithReason:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)updateLibraryQueue;
-(NSMutableArray *)updateLibraryCompletionHandlers;
-(JaliscoMediaUpdateOperation *)updateLibraryOperation;
-(void)setUpdateLibraryOperation:(JaliscoMediaUpdateOperation *)arg1 ;
-(void)cancelAllOperationsAndWaitForOperationsToFinish:(BOOL)arg1 ;
-(id)_DAAPMediaKindFromJaliscoSupportedMediaKind:(long long)arg1 ;
-(void)_updateJaliscoLibraryWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateGeniusDataForInitialImport:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(JaliscoUpdateGeniusDataOperation *)updateGeniusDataOperation;
-(NSObject*<OS_dispatch_queue>)geniusUpdateQueue;
-(void)setUpdateGeniusDataOperation:(JaliscoUpdateGeniusDataOperation *)arg1 ;
-(NSObject*<OS_dispatch_group>)geniusUpdateGroup;
-(NSOperationQueue *)geniusUpdateOperationQueue;
@end

