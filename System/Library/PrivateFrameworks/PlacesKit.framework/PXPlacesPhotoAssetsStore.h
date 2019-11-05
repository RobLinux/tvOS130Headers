/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSArray, PHPhotoLibrary, PXPlacesStore, NSMutableArray, NSObject, NSString;

@interface PXPlacesPhotoAssetsStore : NSObject <PHPhotoLibraryChangeObserver> {

	BOOL _didInitiateLoad;
	BOOL _didCompleteLoad;
	NSArray* _fetchResults;
	PHPhotoLibrary* _photoLibrary;
	PXPlacesStore* _store;
	NSMutableArray* _completions;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSArray * fetchResults;                                //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                         //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PXPlacesStore * store;                                 //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL didInitiateLoad;                                  //@synthesize didInitiateLoad=_didInitiateLoad - In the implementation block
@property (assign,nonatomic) BOOL didCompleteLoad;                                  //@synthesize didCompleteLoad=_didCompleteLoad - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                          //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setStore:(PXPlacesStore *)arg1 ;
-(PXPlacesStore *)store;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(NSArray *)fetchResults;
-(void)setFetchResults:(NSArray *)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)initWithFetchResults:(id)arg1 ;
-(void)_handleAssetsImport;
-(void)_addItems:(id)arg1 intoStore:(id)arg2 ;
-(BOOL)didInitiateLoad;
-(void)setDidInitiateLoad:(BOOL)arg1 ;
-(BOOL)didCompleteLoad;
-(void)setDidCompleteLoad:(BOOL)arg1 ;
@end

