/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXPeopleDataSource.h>
#import <PhotosUICore/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXPeopleDetailsContext, NSArray, NSString;

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _containsSocialGroups;
	BOOL _isForOneUp;
	BOOL _prefetchingStarted;
	PXPeopleDetailsContext* _context;

}

@property (assign,nonatomic) BOOL prefetchingStarted;                       //@synthesize prefetchingStarted=_prefetchingStarted - In the implementation block
@property (assign,nonatomic) BOOL containsSocialGroups;                     //@synthesize containsSocialGroups=_containsSocialGroups - In the implementation block
@property (nonatomic,readonly) NSArray * members; 
@property (nonatomic,retain) PXPeopleDetailsContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isForOneUp;                               //@synthesize isForOneUp=_isForOneUp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PXPeopleDetailsContext *)context;
-(void)setContext:(PXPeopleDetailsContext *)arg1 ;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)initWithName:(id)arg1 objectsReloadBlock:(/*^block*/id)arg2 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;
-(void)imageCacheDidChanged:(id)arg1 ;
-(void)prefetchThumbnailsForTargetSize:(CGSize)arg1 maxFetchCount:(unsigned long long)arg2 ;
-(BOOL)prefetchingStarted;
-(void)setPrefetchingStarted:(BOOL)arg1 ;
-(void)_updateMembers;
-(void)loadMembersWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_socialGroupsForIdentifiers:(id)arg1 ;
-(BOOL)containsSocialGroups;
-(void)setContainsSocialGroups:(BOOL)arg1 ;
-(BOOL)isForOneUp;
-(void)setIsForOneUp:(BOOL)arg1 ;
@end

